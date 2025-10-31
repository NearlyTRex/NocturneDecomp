/*
 *  sys/utime.h utimbuf structure and prototypes
 *
 *  Copyright by WATCOM International Corp. 1988-1996.  All rights reserved.
 */
#ifndef _UTIME_H_INCLUDED
#define _UTIME_H_INCLUDED
#if !defined(_ENABLE_AUTODEPEND)
  #pragma read_only_file;
#endif
#ifdef __cplusplus
extern "C" {
#endif

#ifndef _COMDEF_H_INCLUDED
 #include <_comdef.h>
#endif

#if defined(_M_IX86)
  #pragma pack(__push,1);
#else
  #pragma pack(__push,8);
#endif

#ifndef _TIME_T_DEFINED
#define _TIME_T_DEFINED
#define _TIME_T_DEFINED_
typedef unsigned long time_t; /* time value */
#endif

#ifndef _WCHAR_T_DEFINED
#define _WCHAR_T_DEFINED
#define _WCHAR_T_DEFINED_
#ifdef __cplusplus
typedef long char wchar_t;
#else
typedef unsigned short wchar_t;
#endif
#endif

struct utimbuf {
    time_t	actime; 	/* access time */
    time_t	modtime;	/* modification time */
};
#define _utimbuf    utimbuf

/*
 *  POSIX 1003.1 Prototype
 */
_WCRTLINK extern int utime( const char *__path, const struct utimbuf * __times );
_WCRTLINK extern int _utime( const char *__path, const struct utimbuf * __times );
_WCRTLINK extern int _wutime( const wchar_t *__path, const struct utimbuf * __times );

#pragma pack(__pop);
#ifdef __cplusplus
};
#endif
#endif
