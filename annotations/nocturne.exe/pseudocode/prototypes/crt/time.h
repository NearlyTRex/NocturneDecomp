#pragma once

// Function prototypes for crt/time.cpp
// Generated from Ghidra function signatures

// Original: crt_time.c__mktime_FUN_00565fb0
// Address: 00565fb0
time_t __cdecl ::mktime(_tm *timeptr);

// Original: crt_time.c__localtime_FUN_005665e8
// Address: 005665e8
_tm * __cdecl ::localtime(time_t *timer);

// Original: crt_time.c__strftime_FUN_00566634
// Address: 00566634
uint __cdecl ::strftime(char *dest_buffer,uint buffer_size,char *format_string,_tm *time_ptr);

// Original: crt_time.c_is_leap_year_FUN_0056cea0
// Address: 0056cea0
int __cdecl is::leap_year(int year);

// Original: crt_time.c_determine_dst_status_FUN_0056d034
// Address: 0056d034
int __cdecl determine::dst_status(_tm *timeptr);

// Original: crt_time.c_gmtime_r_FUN_0056d340
// Address: 0056d340
_tm * __cdecl gmtime::r(time_t days,time_t seconds,time_t timezone_offset,_tm *result);

// Original: crt_time.c_tzset_FUN_0056d608
// Address: 0056d608
void __cdecl tzset(void);

// Original: crt_time.c_parse_timezone_spec_FUN_0056d658
// Address: 0056d658
char * __cdecl parse::timezone_spec(char *tz_string,char *name_buffer,int *offset_seconds);

// Original: crt_time.c_parse_dst_rule_FUN_0056d774
// Address: 0056d774
char * __cdecl parse::dst_rule(char *rule_string,dst_rule *rule);

// Original: crt_time.c_parse_tz_string_FUN_0056d87c
// Address: 0056d87c
void __cdecl parse::tz_string(char *tz_string);

// Original: crt_time.c_dos_datetime_to_time_t_FUN_005709b0
// Address: 005709b0
time_t __cdecl dos::datetime_to_time_t(WORD dos_date,WORD dos_time);

// Original: crt_time.c__time_FUN_00570a30
// Address: 00570a30
time_t __cdecl ::time(time_t *time);

// Original: crt_time.c_get_local_time_FUN_00572b00
// Address: 00572b00
int __watcallStack get::local_time(_tm *tm_output);
