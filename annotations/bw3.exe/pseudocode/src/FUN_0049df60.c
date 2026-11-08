// Name: FUN_0049df60
// Address: 0049df60
// Address Range: [[0049df60, 0049e169]]
// Convention: unknown
// Signature: void FUN_0049df60(float *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0049df60(float *param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  uint auStackY_103c [996];
  uint uVar8;
  byte auStack_90 [4];
  float local_8c;
  uint local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_60;
  uint local_54;
  uint local_50 [9];
  int local_2c;
  int local_28;
  int local_24;
  float local_18;
  
  bVar7 = 0;
  local_28 = 0;
  if (0 < _DAT_01c74b68) {
    local_2c = 0;
    do {
      local_24 = *(int *)(&DAT_01c74b6c + local_2c);
      fVar2 = *(float *)(local_24 + 0x20) - *param_1;
      fVar4 = *(float *)(local_24 + 0x24) - param_1[1];
      fVar3 = *(float *)(local_24 + 0x28) - param_1[2];
      if (fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2 <= _DAT_005c0858) {
        FUN_0054ea40(local_24 + 0x158);
        FUN_00408bf0(local_24,param_1);
        iVar6 = local_24;
        local_54 = local_50[2];
        local_50[(uint)bVar7 * -2] = local_50[(uint)bVar7 * -2 + 3];
        uVar8 = _DAT_01d5ba70;
        local_50[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
             local_50[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
        iVar6 = FUN_0040c840(iVar6,uVar8);
        if (((iVar6 != 0) && (param_1[8] == 2.8026e-45)) ||
           ((iVar6 = FUN_0040c840(local_24,_DAT_01d5ba70), iVar6 == 0 && (param_1[8] == 1.4013e-45))
           )) {
          FUN_0042abb0(auStack_90);
          local_18 = (float)FUN_0040ce40(0x41200000,0x41a00000);
          iVar6 = local_24;
          local_8c = (local_18 * param_1[3]) / _DAT_005df900;
          if (&local_74 != &local_54) {
            local_74 = local_54;
            local_70 = local_50[0];
            local_6c = local_50[1];
          }
          local_68 = 10;
          local_60 = 0x6e;
          (**(code **)(*(int *)(local_24 + 0x154) + 0x108))(local_24,auStack_90);
          FUN_0042fbd0(iVar6,&local_54,0,0,0x3f800000,1,0x40a00000);
        }
      }
      local_2c = local_2c + 4;
      local_28 = local_28 + 1;
    } while (local_28 < _DAT_01c74b68);
  }
  iVar6 = 0;
  if (0 < _DAT_01c74c34) {
    iVar5 = 0;
    do {
      iVar1 = *(int *)(&DAT_01c74c38 + iVar5);
      fVar2 = *(float *)(iVar1 + 0x20) - *param_1;
      fVar4 = *(float *)(iVar1 + 0x24) - param_1[1];
      fVar3 = *(float *)(iVar1 + 0x28) - param_1[2];
      if (fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2 <= (float)_DAT_005c0860) {
        FUN_004a7110(iVar1);
      }
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 4;
    } while (iVar6 < _DAT_01c74c34);
  }
  return;
}
