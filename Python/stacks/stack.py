#! Stacks implimentation, better and perfect.

import os, sys;

stack = [];
logs= [];
log_record = 0;
top = None;
init_outlog = [];

def init():
    try:
        top = 0;
        for i in stack:
            stack.pop();
            for j in init_outlog:
                init_outlog.pop();
        cls = input("Shall i clear your console?[Y/n]> ");

    except:
        return -1;
    finally:
        return 0; # Case success


def push(itemnode):
    if top == None | top == 0:
        logs[log_record] = "Stack is at null value, init has been triggered!";
        log_record += 1;
        if init() != 0:
            logs[log_record] = "Init: Init failed."
            logs[log_record+1] = init_outlog;
            log_record += 2;
            return -1;