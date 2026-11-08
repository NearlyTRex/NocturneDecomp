// Name: FUN_004f57c0
// Address: 004f57c0
// Address Range: [[004f57c0, 004f586f]]
// Convention: unknown
// Signature: void FUN_004f57c0(undefined4 param_1,int *param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004f57c0(uint param_1,int *param_2)

{
  int *unaff_ESI;
  byte bVar1;
  float afStackY_1024 [3];
  int aiStackY_1018 [6];
  float afStackY_1000 [1004];
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38 [2];
  int local_30;
  int local_2c [2];
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float afStack_14 [2];
  
  bVar1 = 0;
  local_24 = (float)*param_2 * _DAT_005e29c8;
  local_20 = (float)param_2[1] * _DAT_005e29c8;
  local_1c = (float)param_2[2] * _DAT_005e29c8;
  FUN_004f50f0(param_1,&local_24);
  local_3c = local_18;
  *(float *)((int)local_38 + (uint)bVar1 * 0xfffffff8) = afStack_14[(uint)bVar1 * -2];
  *(float *)((int)local_38 + ((uint)bVar1 * -2 + (uint)bVar1 * -2 + 1) * 4) =
       afStack_14[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1];
  if (&local_48 != &local_3c) {
    local_48 = local_3c;
    local_44 = local_38[0];
    local_40 = local_38[1];
  }
  local_30 = (int)ROUND(local_48 * _DAT_005e29c0);
  local_2c[0] = (int)ROUND(local_44 * _DAT_005e29c0);
  local_2c[1] = (int)ROUND(local_40 * _DAT_005e29c0);
  *unaff_ESI = (int)ROUND(local_48 * _DAT_005e29c0);
  unaff_ESI[(uint)bVar1 * -2 + 1] = local_2c[(uint)bVar1 * -2];
  (unaff_ESI + (uint)bVar1 * -2 + 1)[(uint)bVar1 * -2 + 1] =
       local_2c[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1];
  return;
}
