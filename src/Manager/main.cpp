/*
* Manager for the project.
    * Csral | Chaturya Csral | chaturyasral@gmail.com
*/

// ! READ THE POLICIES IN DOCS

#include <filesystem>
#include <unistd.h>
#include <stdlib.h>
#include <iostream>
#include <sys/types.h>
#include <sys/mount.h>
#include <ctime>
#include <string>

#include <Includes/runtime.h>

int main(int argc, char* argv[]) {

    if (argc < 2) help(1);

    

};

int help(int status) {

    fprintf(stdout, "Project Manager\
    \n\tCsral - Github.com/Crsal\
    \nOptions:\n\t\
    -i  --install <project-code>\t\tRetrives project if available from github and installs it.\n\t\
    -r --remove <project-name/code>\t\tRemoves project specified from device.\n\t\
    --code <project-name>\t\tFetches project code for specified project name\n");

    _exit(status);

};