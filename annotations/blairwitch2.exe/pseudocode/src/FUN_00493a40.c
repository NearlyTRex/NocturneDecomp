// Name: FUN_00493a40
// Address: 00493a40
// Address Range: [[00493a40, 00493ce3]]
// Convention: unknown
// Signature: void FUN_00493a40(float *param_1,float *param_2,float *param_3,float param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00493a40(float *param_1,float *param_2,float *param_3,float param_4)

{
  float fVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  float10 fVar6;
  float afStackY_1070 [967];
  byte local_118 [48];
  byte local_e8 [48];
  uint local_b8 [12];
  float local_88;
  float afStack_84 [4];
  float local_74;
  float local_70;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54 [4];
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float afStack_24 [4];
  float local_14;
  
  bVar5 = 0;
  if (param_1 != param_2) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
  }
  local_40 = *param_3 * _DAT_005d5386;
  local_3c = param_3[1] * _DAT_005d5386;
  local_38 = param_3[2] * _DAT_005d5386;
  local_64 = *param_1 + local_40;
  local_60 = param_1[1] + local_3c;
  local_5c = param_1[2] + local_38;
  if (param_1 != afStack_84 + 8) {
    *param_1 = local_64;
    param_1[1] = local_60;
    param_1[2] = local_5c;
  }
  fVar6 = (float10)param_3[1];
  local_54[2] = local_64;
  local_54[3] = local_60;
  local_44 = local_5c;
  local_34 = local_40;
  local_30 = local_3c;
  local_2c = local_38;
  FUN_005b9989();
  param_1[7] = 0.0;
  param_1[5] = (float)-fVar6;
  fVar6 = (float10)*param_3;
  FUN_005b9989();
  param_1[6] = (float)fVar6;
  fVar1 = (float)FUN_0040cfc0(0,3);
  param_1[3] = 1.4013e-45;
  param_1[8] = fVar1;
  param_1[4] = param_4;
  if (param_4 != 0.0) {
    FUN_00591c10(local_118,param_1,param_1 + 5);
    FUN_00591ad0(local_e8,(int)param_1[4] + 0x20,(int)param_1[4] + 0x30);
    FUN_005916b0(local_118,local_e8);
    puVar3 = (uint *)&stack0xfffffeb8;
    puVar4 = local_b8;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
    }
    FUN_00592720(local_b8);
    local_58 = local_70;
    local_54[(uint)bVar5 * -2] = afStack_84[(uint)bVar5 * -2 + 6];
    local_54[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
         afStack_84[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7];
    if (param_1 + 9 != &local_58) {
      param_1[9] = local_58;
      param_1[10] = local_54[0];
      param_1[0xb] = local_54[1];
    }
    FUN_00591de0(local_b8);
    afStack_84[2] = local_28;
    afStack_84[(uint)bVar5 * -2 + 3] = afStack_24[(uint)bVar5 * -2];
    afStack_84[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
         afStack_24[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
    if (param_1 + 5 != afStack_84 + 2) {
      param_1[5] = afStack_84[2];
      param_1[6] = afStack_84[3];
      param_1[7] = local_74;
    }
    FUN_00408d30(param_1[4],param_3);
    afStack_24[2] = local_88;
    afStack_24[(uint)bVar5 * -2 + 3] = afStack_84[(uint)bVar5 * -2];
    afStack_24[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
         afStack_84[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
    if (param_1 + 0xc != afStack_24 + 2) {
      param_1[0xc] = afStack_24[2];
      param_1[0xd] = afStack_24[3];
      param_1[0xe] = local_14;
      return;
    }
  }
  return;
}
