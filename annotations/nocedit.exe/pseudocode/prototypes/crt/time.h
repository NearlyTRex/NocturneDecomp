#pragma once

// Function prototypes for crt/time.cpp
// Generated from Ghidra function signatures

// Original: crt_time.c__time_FUN_006001f0
// Address: 006001f0
time_t __cdecl ::time(int *time);

// Original: crt_time.c_localtime_r_FUN_00600230
// Address: 00600230
_tm * __cdecl localtime::r(time_t *timer,_tm *result);

// Original: crt_time.c__localtime_FUN_00600288
// Address: 00600288
_tm * __cdecl ::localtime(time_t *timer);

// Original: crt_time.c__strftime_FUN_006002d4
// Address: 006002d4
uint __cdecl ::strftime(char *dest_buffer,uint buffer_size,char *format_string,_tm *time_ptr);

// Original: crt_time.c__mktime_FUN_00600f80
// Address: 00600f80
time_t __cdecl ::mktime(_tm *timeptr);

// Original: crt_time.c_formatTwoDigits_FUN_00601640
// Address: 00601640
void __watcallStack formatTwoDigits(int number,int position,char *buffer);

// Original: crt_time.c_asctimeFormat_FUN_00601678
// Address: 00601678
char * __watcallStack asctimeFormat(_tm *timeptr,char *buffer);

// Original: crt_time.c__asctime_FUN_00601768
// Address: 00601768
char * __cdecl ::asctime(_tm *timeptr);

// Original: crt_time.c_get_local_time_FUN_00607150
// Address: 00607150
int __watcallStack get::local_time(_tm *tm_output);

// Original: crt_time.c_tzset_FUN_006072f8
// Address: 006072f8
void __cdecl tzset(void);

// Original: crt_time.c_parse_timezone_spec_FUN_00607348
// Address: 00607348
char * __cdecl parse::timezone_spec(char *tz_string,char *name_buffer,int *offset_seconds);

// Original: crt_time.c_parse_dst_rule_FUN_00607464
// Address: 00607464
char * __cdecl parse::dst_rule(char *rule_string,dst_rule *rule);

// Original: crt_time.c_parse_tz_string_FUN_0060756c
// Address: 0060756c
void __cdecl parse::tz_string(char *tz_string);

// Original: crt_time.c_gmtime_r_FUN_00607690
// Address: 00607690
undefined4 * __cdecl gmtime::r(int days,uint seconds,int timezone_offset,undefined4 *param_4);

// Original: crt_time.c_is_leap_year_FUN_00607820
// Address: 00607820
int __cdecl is::leap_year(int year);

// Original: crt_time.c_determine_dst_status_FUN_006079b4
// Address: 006079b4
int __cdecl determine::dst_status(_tm *timeptr);

// Original: crt_time.c_filetime_to_dos_datetime_FUN_00609cb0
// Address: 00609cb0
void __cdecl filetime::to_dos_datetime(FILETIME *filetime,WORD *dos_date,WORD *dos_time);

// Original: crt_time.c_filetime_to_time_t_FUN_00609da0
// Address: 00609da0
time_t __cdecl filetime::to_time_t(FILETIME *filetime);

// Original: crt_time.c_dos_datetime_to_time_t_FUN_0060c1e0
// Address: 0060c1e0
time_t __cdecl dos::datetime_to_time_t(WORD dos_date,WORD dos_time);
