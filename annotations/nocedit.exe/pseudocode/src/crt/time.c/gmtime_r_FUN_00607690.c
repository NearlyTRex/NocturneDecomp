// Name: crt_time.c_gmtime_r_FUN_00607690
// Address: 00607690
// Address Range: [[00607690, 006077d5]]
// Convention: __cdecl
// Signature: undefined crt_time.c_gmtime_r_FUN_00607690(time_t days, time_t seconds, time_t timezone_offset, undefined1 result)

#include "nocturne.h"

uint * __cdecl
crt_time_c_gmtime_r_FUN_00607690(int days,uint seconds,int timezone_offset,uint *param_4)

{
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  short *unaff_EDI;
  
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
  iVar3 = crt_time_c_is_leap_year_FUN_00607820(uVar2 + 0x76c);
  for (; iVar3 + 0x16dU <= uVar4; uVar4 = uVar4 - (iVar3 + 0x16dU)) {
    uVar2 = uVar2 + 1;
  }
  param_4[5] = uVar2;
  param_4[7] = uVar4;
  iVar3 = crt_time_c_is_leap_year_FUN_00607820(uVar2 + 0x76c);
  if (iVar3 != 0) {
    unaff_EDI = &g_DaysInMonth_Leap;
  }
  uVar2 = uVar4 / 0x1f;
  if ((uint)(*(int *)(unaff_EDI + uVar2) >> 0x10) <= uVar4) {
    uVar2 = uVar2 + 1;
  }
  param_4[4] = uVar2;
  param_4[3] = (uVar4 - (int)unaff_EDI[uVar2]) + 1;
  param_4[6] = (uVar5 + 1) % 7;
  return param_4;
}
