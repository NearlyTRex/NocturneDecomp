/*
 *  mem.h	Memory manipulation functions
 *
 *  Copyright by WATCOM International Corp. 1988-1996.  All rights reserved.
 */
#ifndef _MEM_H_INCLUDED
#define _MEM_H_INCLUDED
#if !defined(_ENABLE_AUTODEPEND)
  #pragma read_only_file;
#endif

#ifndef _PTRDIFF_T_DEFINED
#define _PTRDIFF_T_DEFINED
#define _PTRDIFF_T_DEFINED_
#if defined(__HUGE__)
typedef long ptrdiff_t;
#else
typedef int ptrdiff_t;
#endif
#endif

#ifndef _STRING_H_INCLUDED
 #include <string.h>
#endif

#endif
