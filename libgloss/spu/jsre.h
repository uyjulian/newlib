/*
(C) Copyright IBM Corp. 2005, 2006

All rights reserved.

Redistribution and use in source and binary forms, with or without 
modification, are permitted provided that the following conditions are met:

    * Redistributions of source code must retain the above copyright notice, 
this list of conditions and the following disclaimer.
    * Redistributions in binary form must reproduce the above copyright 
notice, this list of conditions and the following disclaimer in the 
documentation and/or other materials provided with the distribution.
    * Neither the name of IBM nor the names of its contributors may be 
used to endorse or promote products derived from this software without 
specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" 
AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE 
IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE 
ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE 
LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR 
CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF 
SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS 
INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN 
CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) 
ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE 
POSSIBILITY OF SUCH DAMAGE.

Author: Andreas Neukoetter (ti95neuk@de.ibm.com)
*/

/* this file provides the mappings for the JSRE defined interface for PE assisted libary calls */

#ifndef __JSRE_H
#define __JSRE_H

#define JSRE_POSIX1_SIGNALCODE 0x2101

#define JSRE_CLOSE 2
#define JSRE_FSTAT 4
#define JSRE_GETTIMEOFDAY 7
#define JSRE_LSEEK 9
#define JSRE_OPEN 15
#define JSRE_READ 16
#define JSRE_STAT 23
#define JSRE_UNLINK 24
#define JSRE_WRITE 27
#define JSRE_FTRUNCATE 28
#define JSRE_ACCESS 29
#define JSRE_DUP 30

typedef struct {
    unsigned int dev;
    unsigned int ino;
    unsigned int mode;
    unsigned int nlink;
    unsigned int uid;
    unsigned int gid;
    unsigned int rdev;
    unsigned int size;
    unsigned int blksize;
    unsigned int blocks;
    unsigned int atime;
    unsigned int mtime;
    unsigned int ctime;
} jsre_stat_t;

#include <sys/syscall.h>

#endif
