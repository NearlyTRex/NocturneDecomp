// Name: crt_time.c_gmtime_r_FUN_00607690
// Address: 00607690
// Address Range: [[00607690, 006077d5]]
// Convention: __cdecl
// Signature: _tm * __cdecl crt_time_c_gmtime_r_FUN_00607690(time_t days,time_t seconds,time_t timezone_offset,_tm *result)

#include "nocturne.h"

_tm * __cdecl gmtime_r(time_t days,time_t seconds,time_t timezone_offset,_tm *result)

{
  uint uVar2;
  int iVar3;
  int iVar1;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  short *local_14;
  ulonglong uVar1;
  
  if (((uint)seconds < 0xa8c0) && (0 < timezone_offset)) {
    uVar3 = (seconds + 0x15180) - timezone_offset;
    uVar5 = (days + uVar3 / 0x15180) - 1;
  }
  else {
    uVar3 = seconds - timezone_offset;
    uVar5 = days + uVar3 / 0x15180;
  }
  result->tm_hour = (int)(((ulonglong)uVar3 % 0x15180) / 0xe10);
  uVar1 = ((ulonglong)uVar3 % 0x15180) % 0xe10;
  result->tm_min = (int)(uVar1 / 0x3c);
  result->tm_sec = (int)(uVar1 % 0x3c);
  uVar2 = uVar5 / 0x16e;
  uVar4 = uVar5 + uVar2 * -0x16d;
  if (uVar2 != 0) {
    uVar4 = uVar4 - (uVar2 - 1 >> 2);
  }
  iVar3 = is_leap_year(uVar2 + 0x76c);
  for (; iVar3 + 0x16dU <= uVar4; uVar4 = uVar4 - (iVar3 + 0x16dU)) {
    uVar2 = uVar2 + 1;
  }
  result->tm_year = uVar2;
  result->tm_yday = uVar4;
  local_14 = &g_DaysInMonth_Normal;
  iVar1 = is_leap_year(uVar2 + 0x76c);
  if (iVar1 != 0) {
    local_14 = &g_DaysInMonth_Leap;
  }
  uVar3 = uVar4 / 0x1f;
  if ((uint)(*(int *)(local_14 + uVar3) >> 0x10) <= uVar4) {
    uVar3 = uVar3 + 1;
  }
  result->tm_mon = uVar3;
  result->tm_mday = (uVar4 - (int)local_14[uVar3]) + 1;
  result->tm_wday = (uVar5 + 1) % 7;
  return result;
}
