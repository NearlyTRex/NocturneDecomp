// Name: crt_time.c_gmtime_r_FUN_0056d340
// Address: 0056d340
// Address Range: [[0056d340, 0056d485]]
// Convention: unknown
// Signature: undefined4 * crt_time_c_gmtime_r_FUN_0056d340(int param_1,uint param_2,int param_3,undefined4 *param_4)

#include "nocturne.h"

uint * gmtime_r(int param_1,uint param_2,int param_3,uint *param_4)

{
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  byte *local_14;
  
  if ((param_2 < 0xa8c0) && (0 < param_3)) {
    param_2 = (param_2 + 0x15180) - param_3;
    uVar5 = (param_1 + param_2 / 0x15180) - 1;
  }
  else {
    param_2 = param_2 - param_3;
    uVar5 = param_1 + param_2 / 0x15180;
  }
  param_4[2] = (int)(((ulonglong)param_2 % 0x15180) / 0xe10);
  uVar1 = ((ulonglong)param_2 % 0x15180) % 0xe10;
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
  local_14 = &DAT_005a4a78;
  iVar3 = is_leap_year(uVar2 + 0x76c);
  if (iVar3 != 0) {
    local_14 = &DAT_005a4a92;
  }
  uVar2 = uVar4 / 0x1f;
  if ((uint)(*(int *)(local_14 + uVar2 * 2) >> 0x10) <= uVar4) {
    uVar2 = uVar2 + 1;
  }
  param_4[4] = uVar2;
  param_4[3] = (uVar4 - (int)*(short *)(local_14 + uVar2 * 2)) + 1;
  param_4[6] = (uVar5 + 1) % 7;
  return param_4;
}
