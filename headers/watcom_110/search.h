/*
 *  search.h	Function prototypes for searching functions
 *
 *  Copyright by WATCOM International Corp. 1988-1996.  All rights reserved.
 */
#ifndef _SEARCH_H_INCLUDED
#define _SEARCH_H_INCLUDED
#if !defined(_ENABLE_AUTODEPEND)
  #pragma read_only_file;
#endif
#ifdef __cplusplus
extern "C" {
#endif

#ifndef _COMDEF_H_INCLUDED
 #include <_comdef.h>
#endif

_WCRTLINK extern void *lfind( const void *__key, const void *__base, 
			      unsigned *__num, unsigned __width, 
			      int (* __compare)(const void *, const void *) );
_WCRTLINK extern void *lsearch( const void *__key, void *__base, 
				unsigned *__num, unsigned __width, 
				int (* __compare)(const void *, const void *) );
#ifdef __cplusplus
};
#endif
#endif
