#pragma once

// Function prototypes for crt/time.cpp
// Generated from Ghidra function signatures

// Original: crt_time.c___get_lc_time_FUN_1000d3a0
// Address: 1000d3a0
uint __cdecl ::_get_lc_time(__lc_time_data *lc_time);

// Original: crt_time.c___free_lc_time_FUN_1000d720
// Address: 1000d720
void __cdecl ::_free_lc_time(__lc_time_data *lc_time);

// Original: crt_time.c__maketimefmt_FUN_1000d960
// Address: 1000d960
uint __cdecl ::maketimefmt(LCID lcid,__lc_time_data *tdata);

// Original: crt_time.c_strftime_FUN_1000ec20
// Address: 1000ec20
size_t __cdecl strftime(char *dest,size_t max_size,char *format,tm *timeptr);

// Original: crt_time.c__expandtime_FUN_1000ed30
// Address: 1000ed30
void __cdecl ::expandtime(uchar code,tm *tb,char **buf,size_t *count);

// Original: crt_time.c__store_str_FUN_1000f2a0
// Address: 1000f2a0
void __cdecl ::store_str(char *src,char **pbuf,int *pcount);

// Original: crt_time.c__store_number_FUN_1000f2d0
// Address: 1000f2d0
void __cdecl ::store_number(int value,uint width,char **buf,size_t *count);

// Original: crt_time.c__store_number_rev_FUN_1000f360
// Address: 1000f360
void __cdecl ::store_number_rev(int value,char **buf,size_t *count);

// Original: crt_time.c__expand_locale_picture_FUN_1000f3c0
// Address: 1000f3c0
void __cdecl ::expand_locale_picture(char *picture,uint flags,char **buf,size_t *count);

// Original: crt_time.c___tzset_FUN_1000fff0
// Address: 1000fff0
void __cdecl ::_tzset(void);

// Original: crt_time.c__tzset_FUN_10010050
// Address: 10010050
void __cdecl ::tzset(void);

// Original: crt_time.c__isindst_FUN_10010330
// Address: 10010330
int __cdecl ::isindst(tm *tb);

// Original: crt_time.c__isindst_lk_FUN_10010360
// Address: 10010360
int __cdecl ::isindst_lk(tm *tb);

// Original: crt_time.c_cvtdate_FUN_100105c0
// Address: 100105c0
time_t __cdecl cvtdate(int trantype,int datetype,int year,int month,int week,int weekday,int date,int hour,int min,int sec,int msec);
