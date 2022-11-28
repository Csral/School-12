#ifdef _WIN32
#include <windows.h>
#define __WINDOWS_RUNTIME__
#endif

#include <string>
#include <errno.h>

#ifdef __linux__
#define __LINUX_RUNTIME__
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <curl/curl.h>
#include <time.h>
#include <curl/mprintf.h>
#include <cerrno>
#include <cstring>
#include <clocale>
#define NUM_HANDLES 1500
#endif

class download {
    public:
    int retrive(std::string URL);
};