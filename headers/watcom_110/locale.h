/*
 *  locale.h
 *
 *  Copyright by WATCOM International Corp. 1988-1996.  All rights reserved.
 */
#ifndef _LOCALE_H_INCLUDED
#define _LOCALE_H_INCLUDED
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

#ifndef _WCHAR_T_DEFINED
#define _WCHAR_T_DEFINED
#define _WCHAR_T_DEFINED_
#ifdef __cplusplus
typedef long char wchar_t;
#else
typedef unsigned short wchar_t;
#endif
#endif

#define LC_CTYPE	0
#define LC_NUMERIC	1
#define LC_TIME 	2
#define LC_COLLATE	3
#define LC_MONETARY	4
#define LC_MESSAGES	5
#define LC_ALL		6

struct lconv {
	char *decimal_point;
	char *thousands_sep;
	char *int_curr_symbol;
	char *currency_symbol;
	char *mon_decimal_point;
	char *mon_thousands_sep;
	char *mon_grouping;
	char *grouping;
	char *positive_sign;
	char *negative_sign;
	char int_frac_digits;
	char frac_digits;
	char p_cs_precedes;
	char p_sep_by_space;
	char n_cs_precedes;
	char n_sep_by_space;
	char p_sign_posn;
	char n_sign_posn;
};

#ifndef NULL
 #if defined(__SMALL__) || defined(__MEDIUM__) || defined(__386__) || defined(__AXP__) || defined(__PPC__)
  #define NULL   0
 #else
  #define NULL   0L
 #endif
#endif

_WCRTLINK extern char *setlocale(int __category,const char *__locale);
_WCRTLINK extern struct lconv *localeconv(void);

_WCRTLINK extern wchar_t *_wsetlocale(int __category,const wchar_t *__locale);
#pragma pack(__pop);
#ifdef __cplusplus
};
#endif
#endif
