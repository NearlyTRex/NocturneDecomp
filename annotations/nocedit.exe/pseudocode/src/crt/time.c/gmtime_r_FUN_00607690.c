// Name: crt_time.c_gmtime_r_FUN_00607690
// Address: 00607690
// Address Range: [[00607690, 006077d5]]
// Convention: __cdecl
// Signature: undefined4 * __cdecl crt_time_c_gmtime_r_FUN_00607690(int days,uint seconds,int timezone_offset,undefined4 *param_4)

#include "nocturne.h"

uint * __cdecl gmtime_r(int days,uint seconds,int timezone_offset,uint *param_4)

{
  uint uVar2;
  int iVar3;
  int iVar1;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  short *local_14;
  ulonglong uVar1;
  
  if ((seconds < 0xa8c0) && (0 < timezone_offset)) {
    seconds = (seconds + 0x15180) - timezone_offset;
    uVar5 = (days + seconds / 0x15180) - 1;
  }
  else {
    seconds = seconds - timezone_offset;
    uVar5 = days + seconds / 0x15180;
  }
  param_4[2] = (int)(((ulonglong)seconds % 0x15180) / 0xe10);
  uVar1 = ((ulonglong)seconds % 0x15180) % 0xe10;
  param_4[1] = (int)(uVar1 / 0x3c);
  *param_4 = (int)(uVar1 % 0x3c);
  uVar2 = uVar5 / 0x16e;
  uVar4 = uVar5 + uVar2 * -0x16d;
  if (uVar2 != 0) {
    uVar4 = uVar4 - (uVar2 - 1 >> 2);
  }
  iVar3 = is_leap_year(uVar2 + 0x76c);
  for (; iVar3 + 0x16dU <= uVar4; uVar4 = uVar4 - (iVar3 + 0x16dU)) {
    uVar2 = uVar2 + 1;
  }
  param_4[5] = uVar2;
  param_4[7] = uVar4;
  local_14 = &g_DaysInMonth_Normal;
  iVar1 = is_leap_year(uVar2 + 0x76c);
  if (iVar1 != 0) {
    local_14 = &g_DaysInMonth_Leap;
  }
  uVar3 = uVar4 / 0x1f;
  if ((uint)(*(int *)(local_14 + uVar3) >> 0x10) <= uVar4) {
    uVar3 = uVar3 + 1;
  }
  param_4[4] = uVar3;
  param_4[3] = (uVar4 - (int)local_14[uVar3]) + 1;
  param_4[6] = (uVar5 + 1) % 7;
  return param_4;
}
