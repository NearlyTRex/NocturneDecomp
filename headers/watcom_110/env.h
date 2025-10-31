/*
 *  env.h	Environment string operations
 *
 *  Copyright by WATCOM International Corp. 1988-1996.  All rights reserved.
 */
#ifndef _ENV_H_INCLUDED
#define _ENV_H_INCLUDED
#if !defined(_ENABLE_AUTODEPEND)
  #pragma read_only_file;
#endif
#ifdef __cplusplus
extern "C" {
#endif

#ifndef _COMDEF_H_INCLUDED
 #include <_comdef.h>
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

/*
 *  POSIX 1003.1 Prototypes.
 */
_WCRTLINK extern int   clearenv( void );
_WCRTLINK extern char *getenv( const char *__name );
_WCRTLINK extern int   setenv( const char *__name, const char *__newvalue, 
			      int __overwrite );
_WCRTLINK extern void unsetenv(const char *name);
#if !defined(NO_EXT_KEYS) /* extensions enabled */
_WCRTLINK extern int   putenv( const char *__env_string );
#endif

_WCRTLINK extern wchar_t * _wgetenv( const wchar_t *__name );
_WCRTLINK extern int	   _wsetenv( const wchar_t *__name,
				      const wchar_t *__newvalue, 
				      int __overwrite );
_WCRTLINK extern int	   _wputenv( const wchar_t *__env_string );

#ifdef __cplusplus
};
#endif
#endif
