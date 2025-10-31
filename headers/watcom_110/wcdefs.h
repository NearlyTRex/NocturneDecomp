//
//  wcdefs.h   Definitions for the WATCOM Container Classes
//
//  Copyright by WATCOM International Corp. 1988-1996.  All rights reserved.
//
#ifndef _WCDEFS_H_INCLUDED
#define _WCDEFS_H_INCLUDED
#if !defined(_ENABLE_AUTODEPEND)
  #pragma read_only_file;
#endif

#ifndef __cplusplus
#error wcdefs.h is for use with C++
#endif

#ifndef _COMDEF_H_INCLUDED
 #include <_comdef.h>
#endif
#ifndef _EXCEPT_H_INCLUDED
 #include <except.h>
#endif

typedef int             WCbool;

#ifndef TRUE
    #define TRUE        ((WCbool)1)
    #define FALSE       ((WCbool)0)
#endif

#ifndef _SIZE_T_DEFINED
#define _SIZE_T_DEFINED
#define _SIZE_T_DEFINED_
typedef unsigned size_t;
#endif

#endif
