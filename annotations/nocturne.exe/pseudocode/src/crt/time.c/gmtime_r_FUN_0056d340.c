// Name: crt_time.c_gmtime_r_FUN_0056d340
// Address: 0056d340
// Address Range: [[0056d340, 0056d485]]
// Convention: __cdecl
// Signature: _tm * __cdecl crt_time_c_gmtime_r_FUN_0056d340(time_t days,time_t seconds,time_t timezone_offset,_tm *result)

#include "nocturne.h"

_tm * __cdecl gmtime_r(time_t days,time_t seconds,time_t timezone_offset,_tm *result)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte *local_14;
  
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
  uVar3 = uVar5 / 0x16e;
  uVar4 = uVar5 + uVar3 * -0x16d;
  if (uVar3 != 0) {
    uVar4 = uVar4 - (uVar3 - 1 >> 2);
  }
  iVar2 = is_leap_year(uVar3 + 0x76c);
  for (; iVar2 + 0x16dU <= uVar4; uVar4 = uVar4 - (iVar2 + 0x16dU)) {
    uVar3 = uVar3 + 1;
  }
  result->tm_year = uVar3;
  result->tm_yday = uVar4;
  local_14 = &DAT_005a4a78;
  iVar2 = is_leap_year(uVar3 + 0x76c);
  if (iVar2 != 0) {
    local_14 = &DAT_005a4a92;
  }
  uVar3 = uVar4 / 0x1f;
  if ((uint)(*(int *)(local_14 + uVar3 * 2) >> 0x10) <= uVar4) {
    uVar3 = uVar3 + 1;
  }
  result->tm_mon = uVar3;
  result->tm_mday = (uVar4 - (int)*(short *)(local_14 + uVar3 * 2)) + 1;
  result->tm_wday = (uVar5 + 1) % 7;
  return result;
}
