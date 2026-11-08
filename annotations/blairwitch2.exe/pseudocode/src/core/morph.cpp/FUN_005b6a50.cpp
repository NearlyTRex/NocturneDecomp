// Name: FUN_005b6a50
// Address: 005b6a50
// Address Range: [[005b6a50, 005b6c82]]
// Convention: unknown
// Signature: void FUN_005b6a50(int param_1,float param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005b6a50(int param_1,float param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  byte bVar5;
  float afStackY_1058 [1011];
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  uint local_28;
  int local_24;
  int local_20;
  float local_1c;
  uint local_18;
  int local_14;
  
  bVar5 = 0;
  if (2000 < *(int *)(param_1 + 0x54)) {
    _DAT_01d046a0 = "..\\core\\morph.cpp";
    _DAT_01d046a4 = 0x1f8;
    FUN_004e4500("CMorphModel::rotatePoints - too many points!");
  }
  local_28 = 0;
  local_18 = 0xff;
  local_24 = 0;
  local_1c = 1.0 - param_2;
  if (0 < *(int *)(param_1 + 0x54)) {
    piVar4 = (int *)&DAT_0267a38c;
    local_20 = 0;
    local_14 = 0;
    do {
      piVar3 = (int *)(*(int *)(param_1 + 0x58) + local_20);
      iVar2 = *piVar3 * 0x10 + param_3;
      local_34 = *(float *)(iVar2 + 4) * local_1c;
      local_30 = *(float *)(iVar2 + 8) * local_1c;
      local_2c = *(float *)(iVar2 + 0xc) * local_1c;
      local_64 = local_34;
      *(uint *)((int)&stack0xffffffa0 + (uint)bVar5 * -8) =
           *(uint *)((int)&stack0xffffffd0 + (uint)bVar5 * -8);
      *(uint *)((int)&stack0xffffffa4 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
           *(uint *)((int)&stack0xffffffd4 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
      local_40 = (float)piVar3[1] * param_2;
      local_3c = (float)piVar3[2] * param_2;
      local_38 = (float)piVar3[3] * param_2;
      local_70 = (float)piVar3[1] * param_2;
      *(uint *)((int)&stack0xffffff94 + (uint)bVar5 * -8) =
           *(uint *)((int)&stack0xffffffc4 + (uint)bVar5 * -8);
      *(uint *)((int)&stack0xffffff98 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
           *(uint *)((int)&stack0xffffffc8 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
      local_4c = local_70 + local_64;
      local_48 = local_6c + local_60;
      local_44 = local_68 + local_5c;
      local_58 = local_70 + local_64;
      *(uint *)((int)&stack0xffffffac + (uint)bVar5 * -8) =
           *(uint *)((int)&stack0xffffffb8 + (uint)bVar5 * -8);
      *(uint *)((int)&stack0xffffffb0 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
           *(uint *)((int)&stack0xffffffbc + (uint)bVar5 * -8 + (uint)bVar5 * -8);
      *piVar4 = (int)ROUND(local_58 * _DAT_006013a0);
      piVar4[1] = (int)ROUND(local_54 * _DAT_006013a0);
      piVar4[2] = (int)ROUND(local_50 * _DAT_006013a0);
      FUN_0055d723(*DAT_0060b280 + local_14,piVar4);
      uVar1 = *(uint *)(*DAT_0060b280 + local_14 + 0x10);
      if ((uVar1 & 0x80000000) == 0) {
        local_18 = 0;
      }
      else {
        local_28 = 1;
        local_18 = local_18 & uVar1;
      }
      piVar4 = piVar4 + 3;
      local_24 = local_24 + 1;
      local_14 = local_14 + 0x30;
      local_20 = local_20 + 0x10;
    } while (local_24 < *(int *)(param_1 + 0x54));
  }
  if (local_18 != 0) {
    return;
  }
  FUN_00531ca0(0x01E661B8,*(uint *)(param_1 + 0x54));
  FUN_00532190(0x01E661B8,*(uint *)(param_1 + 0x54),*(uint *)(param_1 + 0x5c),
               *(uint *)(param_1 + 0x60),&DAT_0267a38c,3,0);
  FUN_0046b920(DAT_0060b280,local_28);
  return;
}
