// Name: FUN_00422370
// Address: 00422370
// Address Range: [[00422370, 00422790]]
// Convention: unknown
// Signature: void FUN_00422370(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00422370(int param_1,float param_2)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  byte auStack_188 [4];
  float local_184;
  int local_154;
  int local_150;
  byte auStack_14c [48];
  byte local_11c [48];
  uint auStack_ec [12];
  byte auStack_bc [40];
  uint uStack_94;
  uint uStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  byte auStack_7c [12];
  uint uStack_70;
  uint uStack_6c;
  uint uStack_68;
  byte auStack_64 [12];
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float local_4c;
  float local_48;
  float local_44;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  uint *puStack_1c;
  uint *local_18;
  
  bVar7 = 0;
  if (*(int *)(param_1 + 0x12960) == 0) {
    *(uint *)(param_1 + 0xbd24) = 0;
    return;
  }
  iVar3 = 0;
  puVar5 = (uint *)0x0;
  iVar4 = param_1;
  if (0 < *(int *)(param_1 + 0xbd28)) {
    do {
      if (-1 < *(int *)(iVar4 + 0xbd58)) {
        puVar5 = (uint *)((int)puVar5 + 1);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x40;
    } while (iVar3 < *(int *)(param_1 + 0xbd28));
  }
  if ((int)puVar5 < *(int *)(param_1 + 0xbd28)) {
    iVar4 = *(int *)(param_1 + 0x12960);
    local_4c = *(float *)(param_1 + 0x20) - *(float *)(iVar4 + 0x20);
    local_48 = *(float *)(param_1 + 0x24) - *(float *)(iVar4 + 0x24);
    local_44 = *(float *)(param_1 + 0x28) - *(float *)(iVar4 + 0x28);
    if ((((float)_DAT_00579d2d < ABS(local_48)) || ((float)_DAT_00579d2d < ABS(local_4c))) ||
       ((float)_DAT_00579d2d < ABS(local_44))) {
      iVar4 = (**(code **)(*(int *)(*(int *)(param_1 + 0x12960) + 0x14c) + 0xbc))
                        (*(int *)(param_1 + 0x12960));
      if (iVar4 == 0) {
        iVar4 = FUN_004f1e00(*(int *)(param_1 + 0x12960) + 0x20);
      }
      puVar6 = (uint *)(param_1 + 0x20);
      iVar4 = FUN_004f1600(iVar4,puVar6,auStack_64,*(uint *)(param_1 + 0x6c));
      if (iVar4 != 0) {
        FUN_0044d7a0(auStack_bc,auStack_64);
        fStack_8c = _DAT_0059aeb4 * param_2;
        uStack_94 = 0;
        uStack_90 = 0;
        puStack_1c = (uint *)fStack_8c;
        FUN_0044da40(auStack_bc,auStack_7c,&uStack_94);
        uStack_40 = *puVar6;
        puStack_1c = (uint *)(param_1 + 0x24);
        uStack_3c = *puStack_1c;
        local_18 = (uint *)(param_1 + 0x28);
        uStack_38 = *local_18;
        FUN_00425050(param_1,auStack_7c);
        uStack_70 = *puVar6;
        uStack_6c = *puStack_1c;
        uStack_68 = *local_18;
        *puVar6 = uStack_40;
        *(uint *)(param_1 + 0x24) = uStack_3c;
        *(uint *)(param_1 + 0x28) = uStack_38;
        FUN_00423a50(param_1,&uStack_70);
      }
      FUN_00421b80(param_1);
    }
    else {
      FUN_00421b80(param_1);
    }
  }
  if ((0 < (int)puVar5) &&
     (fVar1 = *(float *)(param_1 + 0x1985c) - param_2, *(float *)(param_1 + 0x1985c) = fVar1,
     uVar2 = DAT_00765a98, fVar1 <= 0.0)) {
    *(uint *)(param_1 + 0x1985c) = 0x3e4ccccd;
    iVar4 = FUN_0040d890(*(uint *)(param_1 + 0x12960),uVar2);
    if (iVar4 != 0) {
      FUN_00423ed0(auStack_188);
      local_184 = (float)(int)puVar5 * (float)_DAT_00579d35;
      local_154 = param_1;
      local_150 = param_1;
      local_18 = puVar5;
      (**(code **)(*(int *)(iVar4 + 0x14c) + 0x100))(iVar4,auStack_188);
    }
  }
  FUN_0055afb0(local_11c,*(int *)(param_1 + 0x12960) + 0x20,*(int *)(param_1 + 0x12960) + 0x30);
  FUN_0055ae80(auStack_14c,param_1 + 0x20,param_1 + 0x30);
  FUN_0055aa00(local_11c,auStack_14c);
  puVar5 = auStack_ec;
  puVar6 = (uint *)(param_1 + 0x12968);
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
    puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
  }
  if (*(int *)(param_1 + 0x12998) != *(int *)(*(int *)(param_1 + 0x12964) + 0x2230)) {
    FUN_0051da50(*(int *)(param_1 + 0x12964),*(int *)(param_1 + 0x12998));
  }
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0xbd28)) {
    iVar3 = param_1 + 0xbd2c;
    do {
      iVar4 = iVar4 + 1;
      FUN_00422c70(param_1,iVar3,param_2);
      iVar3 = iVar3 + 0x40;
    } while (iVar4 < *(int *)(param_1 + 0xbd28));
  }
  FUN_00423680(param_1);
  fStack_58 = *(float *)(param_1 + 0x19834) + *(float *)(param_1 + 0x19840);
  fStack_54 = *(float *)(param_1 + 0x19838) + *(float *)(param_1 + 0x19844);
  fStack_88 = fStack_58 * _DAT_00579d3d;
  fStack_50 = *(float *)(param_1 + 0x1983c) + *(float *)(param_1 + 0x19848);
  fStack_84 = fStack_54 * _DAT_00579d3d;
  fStack_80 = fStack_50 * _DAT_00579d3d;
  fStack_34 = *(float *)(param_1 + 0x20) + fStack_88;
  fStack_30 = *(float *)(param_1 + 0x24) + fStack_84;
  fStack_2c = *(float *)(param_1 + 0x28) + fStack_80;
  FUN_00423a50(param_1,&fStack_34);
  return;
}
