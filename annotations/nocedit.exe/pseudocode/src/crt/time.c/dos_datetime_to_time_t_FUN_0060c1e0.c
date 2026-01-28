// Name: crt_time.c_dos_datetime_to_time_t_FUN_0060c1e0
// Address: 0060c1e0
// Address Range: [[0060c1e0, 0060c251]]
// Convention: __cdecl
// Signature: time_t __cdecl crt_time_c_dos_datetime_to_time_t_FUN_0060c1e0(WORD dos_date,WORD dos_time)

#include "nocturne.h"

time_t __cdecl crt_time_c_dos_datetime_to_time_t_FUN_0060c1e0(WORD dos_date,WORD dos_time)

{
  time_t tVar1;
  tm local_28;
  
  local_28.tm_year = (dos_date >> 9) + 0x50;
  local_28.tm_mon = ((dos_date & 0x1e0) >> 5) - 1;
  local_28.tm_hour = (int)(dos_time >> 0xb);
  local_28.tm_min = (dos_time & 0x7e0) >> 5;
  local_28.tm_sec = (dos_time & 0x1f) * 2;
  local_28.tm_mday = dos_date & 0x1f;
  local_28.tm_isdst = -1;
  tVar1 = crt_time_c_mktime_FUN_00600f80(&local_28);
  return tVar1;
}
