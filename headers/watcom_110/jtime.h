/*
 *  jtime.h     Japanese time functions
 *
 *  Copyright by WATCOM International Corp. 1988-1996.  All rights reserved.
 */
#ifndef _JTIME_H_INCLUDED
#define _JTIME_H_INCLUDED
#if !defined(_ENABLE_AUTODEPEND)
  #pragma read_only_file;
#endif

#ifndef _COMDEF_H_INCLUDED
 #include <_comdef.h>
#endif
#ifndef _TIME_H_INCLUDED
 #include <time.h>
#endif

#ifdef __cplusplus
extern "C" {
#endif
_WCRTLINK extern unsigned char   *jasctime( const struct tm *__timeptr );
_WCRTLINK extern unsigned char   *jctime( const time_t *__timer );
#ifdef __cplusplus
};
#endif

#endif
