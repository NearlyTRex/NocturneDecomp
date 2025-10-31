/*
 *  sys/timeb.h     timeb structure used with ftime()
 *
 *  Copyright by WATCOM International Corp. 1988-1996.  All rights reserved.
 */
#ifndef __TIMEB_H_INCLUDED
#define __TIMEB_H_INCLUDED
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

#if defined(_M_IX86)
  #pragma pack(__push,1);
#else
  #pragma pack(__push,8);
#endif
struct timeb {
    time_t		time;		/* seconds since Jan 1, 1970 UTC */
    unsigned short 	millitm;	/* milliseconds */
    short		timezone;	/* difference in minutes from UTC */
    short		dstflag;	/* nonzero if daylight savings time */
};
struct _timeb {
    time_t		time;		/* seconds since Jan 1, 1970 UTC */
    unsigned short 	millitm;	/* milliseconds */
    short		timezone;	/* difference in minutes from UTC */
    short		dstflag;	/* nonzero if daylight savings time */
};
#pragma pack(__pop);

_WCRTLINK extern int ftime( struct timeb *__timeptr );
_WCRTLINK extern int _ftime( struct _timeb *__timeptr );

#ifdef __cplusplus
};
#endif
#endif
