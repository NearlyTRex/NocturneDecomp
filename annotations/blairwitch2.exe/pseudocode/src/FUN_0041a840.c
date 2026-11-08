// Name: FUN_0041a840
// Address: 0041a840
// Address Range: [[0041a840, 0041aa16]]
// Convention: unknown
// Signature: undefined4 FUN_0041a840(float *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0041a840(float *param_1,int param_2)

{
  int iVar1;
  byte bVar2;
  float afStackY_103c [1000];
  byte local_90 [48];
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50 [2];
  int local_48;
  int local_44;
  int local_40;
  float local_3c;
  float local_38 [4];
  float local_28;
  float local_24;
  float local_20 [4];
  float local_10;
  
  bVar2 = 0;
  iVar1 = FUN_0041aa20(param_1);
  if ((iVar1 == -1) || (iVar1 == 0)) {
    return 0;
  }
  iVar1 = FUN_0046b960(DAT_0060b280);
  if (iVar1 == 0) {
    local_54 = *param_1 + param_1[3];
    local_50[0] = param_1[1] + param_1[4];
    local_50[1] = param_1[2] + param_1[5];
    local_20[2] = *param_1 + param_1[3];
    local_20[(uint)bVar2 * -2 + 3] = local_50[(uint)bVar2 * -2];
    local_20[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 4] =
         local_50[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
    local_3c = local_20[2] * _DAT_005cc4d1;
    local_38[0] = local_20[3] * _DAT_005cc4d1;
    local_38[1] = local_10 * _DAT_005cc4d1;
    local_24 = local_20[2] * _DAT_005cc4d1;
    local_20[(uint)bVar2 * -2] = local_38[(uint)bVar2 * -2];
    local_20[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1] =
         local_38[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
    if (&local_60 != &local_24) {
      local_60 = local_24;
      local_5c = local_20[0];
      local_58 = local_20[1];
    }
    local_38[2] = (float)DAT_0070ca88 * _DAT_005f39e0;
    local_38[3] = (float)DAT_0070ca8c * _DAT_005f39e0;
    local_28 = (float)DAT_0070ca90 * _DAT_005f39e0;
    local_48 = (int)ROUND(local_60 * _DAT_005f39d8);
    local_44 = (int)ROUND(local_5c * _DAT_005f39d8);
    local_40 = (int)ROUND(local_58 * _DAT_005f39d8);
    FUN_0055d723(local_90,&local_48);
    local_38[2] = local_38[2] + local_60;
    local_38[3] = local_38[3] + local_5c;
    local_28 = local_28 + local_58;
    if (DAT_007bda74 == 0) {
      _DAT_01c38aec = DAT_007bda74;
    }
    else {
      FUN_00442d80(0x1fc7838,local_38 + 2,local_90);
      if (65000 < _DAT_01c38aec) {
        return 0;
      }
    }
  }
  else if ((param_2 == 0) && (iVar1 = FUN_0041a670(param_1), iVar1 == 0)) {
    return 0;
  }
  return 1;
}
