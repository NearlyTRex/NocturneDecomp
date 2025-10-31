/*
 *  sys/types.h Defined system types
 *
 *  Copyright by WATCOM International Corp. 1988-1996.  All rights reserved.
 */
#ifndef __TYPES_H_INCLUDED
#define __TYPES_H_INCLUDED
#if !defined(_ENABLE_AUTODEPEND)
  #pragma read_only_file;
#endif
#ifdef __cplusplus
extern "C" {
#endif

#ifndef _COMDEF_H_INCLUDED
 #include <_comdef.h>
#endif

#ifndef _TIME_T_DEFINED
#define _TIME_T_DEFINED
#define _TIME_T_DEFINED_
typedef unsigned long time_t; /* time value */
#endif

#ifndef _SIZE_T_DEFINED
#define _SIZE_T_DEFINED
#define _SIZE_T_DEFINED_
typedef unsigned size_t;
#endif

typedef unsigned int ino_t;	/* i-node # type */
typedef int dev_t;		/* device code (drive #) */
typedef long  off_t;		/* file offset value */

#ifdef __cplusplus
};
#endif
#endif
