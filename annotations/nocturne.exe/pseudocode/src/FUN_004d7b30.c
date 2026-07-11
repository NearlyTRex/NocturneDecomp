// Name: FUN_004d7b30
// Address: 004d7b30
// Address Range: [[004d7b30, 004d7bce]]
// Convention: unknown
// Signature: void FUN_004d7b30(undefined4 param_1,int *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004d7b30(uint param_1,int *param_2)

{
  float *pfVar1;
  int *unaff_ESI;
  byte bVar2;
  int aiStackY_100c [1009];
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  int local_24;
  int local_20 [2];
  byte local_18 [12];
  
  bVar2 = 0;
  local_3c = (float)*param_2 * _DAT_005a0888;
  local_38 = (float)param_2[1] * _DAT_005a0888;
  local_34 = (float)param_2[2] * _DAT_005a0888;
  pfVar1 = (float *)FUN_004d7480(param_1,local_18,&local_3c);
  if (&local_30 != pfVar1) {
    local_30 = *pfVar1;
    local_2c = pfVar1[1];
    local_28 = pfVar1[2];
  }
  local_24 = (int)ROUND(local_30 * _DAT_005a0880);
  local_20[0] = (int)ROUND(local_2c * _DAT_005a0880);
  local_20[1] = (int)ROUND(local_28 * _DAT_005a0880);
  *unaff_ESI = (int)ROUND(local_30 * _DAT_005a0880);
  unaff_ESI[(uint)bVar2 * -2 + 1] = local_20[(uint)bVar2 * -2];
  (unaff_ESI + (uint)bVar2 * -2 + 1)[(uint)bVar2 * -2 + 1] =
       *(int *)(local_18 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + -4);
  return;
}
