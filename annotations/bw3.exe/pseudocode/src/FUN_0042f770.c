// Name: FUN_0042f770
// Address: 0042f770
// Address Range: [[0042f770, 0042fbc7]]
// Convention: unknown
// Signature: void FUN_0042f770(int param_1)

#include "nocturne.h"

void FUN_0042f770(int param_1)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  float afStackY_1060 [846];
  byte *puVar8;
  float *pfVar9;
  float *pfVar10;
  byte local_1c8 [48];
  uint local_198 [12];
  uint local_168 [12];
  uint local_138 [12];
  uint local_108 [12];
  uint local_d8 [12];
  uint local_a8 [12];
  float local_78;
  float afStack_74 [5];
  float local_60;
  float local_5c;
  float local_58;
  float local_54 [3];
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  uint local_30;
  float local_20;
  float local_1c;
  uint *local_18;
  float local_14;
  
  iVar2 = 0x01ED78C8;
  bVar7 = 0;
  iVar4 = *(int *)(param_1 + 0x3284);
  if ((iVar4 < 5) && (-1 < *(int *)(0x01ED78C8 + 0x14d148))) {
    *(int *)(param_1 + 0x3284) = *(int *)(param_1 + 0x3284) + 1;
    local_18 = (uint *)(param_1 + 0x3288 + iVar4 * 0x38);
    *local_18 = *(uint *)(iVar2 + 0x14d148);
    iVar4 = *(int *)(iVar2 + 0x14d14c);
    local_18[1] = iVar4;
    if (iVar4 < 0) {
      uVar3 = (**(code **)(*(int *)(param_1 + 0x154) + 0x118))(param_1,*local_18);
      local_18[1] = uVar3;
    }
    local_48 = *(float *)(0x01ED78C8 + 0x14d11c) - *(float *)(0x01ED78C8 + 0x14d110);
    local_44 = *(float *)(0x01ED78C8 + 0x14d120) - *(float *)(0x01ED78C8 + 0x14d114);
    local_40 = *(float *)(0x01ED78C8 + 0x14d124) - *(float *)(0x01ED78C8 + 0x14d118);
    local_78 = local_48;
    afStack_74[(uint)bVar7 * -2] = afStack_74[(uint)bVar7 * -2 + 0xc];
    afStack_74[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
         afStack_74[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd];
    local_3c = local_48;
    afStack_74[(uint)bVar7 * -2 + 0xf] = afStack_74[(uint)bVar7 * -2 + 0xc];
    afStack_74[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x10] =
         afStack_74[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd];
    local_20 = SQRT(local_34 * local_34 + local_3c * local_3c + local_38 * local_38);
    if (local_20 <= 0.0) {
      local_38 = 0.0;
      local_3c = 0.0;
      local_34 = 0.0;
    }
    else {
      fVar1 = 1.0 / local_20;
      local_3c = local_3c * fVar1;
      local_38 = local_38 * fVar1;
      local_34 = local_34 * fVar1;
    }
    local_14 = (float)FUN_0040ce40(0x3e99999a,0x3f19999a);
    local_1c = local_14;
    local_3c = local_3c * local_14;
    local_38 = local_38 * local_14;
    local_34 = local_34 * local_14;
    local_60 = *(float *)(0x01ED78C8 + 0x14d138) - local_3c;
    local_5c = *(float *)(0x01ED78C8 + 0x14d13c) - local_38;
    local_58 = *(float *)(0x01ED78C8 + 0x14d140) - local_34;
    afStack_74[2] = local_60;
    afStack_74[(uint)bVar7 * -2 + 3] = afStack_74[(uint)bVar7 * -2 + 6];
    afStack_74[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
         afStack_74[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
    FUN_00576250(&local_78);
    pfVar10 = afStack_74 + 8;
    pfVar9 = afStack_74 + 2;
    puVar8 = &stack0xfffffd48;
    local_54[0] = (float)local_30;
    afStack_74[(uint)bVar7 * -2 + 9] = afStack_74[(uint)bVar7 * -2 + 0x12];
    afStack_74[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10] =
         afStack_74[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x13];
    FUN_00583940(puVar8,pfVar9,pfVar10);
    local_14 = (float)FUN_0040ce40(0xbd0efa35,0x3d0efa35,&stack0xfffffd48);
    FUN_00584ff0(local_14);
    puVar5 = (uint *)&stack0xfffffd18;
    puVar6 = (uint *)&stack0xfffffdd8;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
      puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
    }
    local_14 = (float)FUN_0040ce40(0xbd0efa35,0x3d0efa35,&stack0xfffffdd8);
    FUN_00584f70(local_14);
    puVar5 = (uint *)&stack0xfffffd78;
    puVar6 = (uint *)&stack0xfffffda8;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
      puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
    }
    FUN_005833e0(&stack0xfffffda8);
    puVar5 = local_a8;
    puVar6 = (uint *)&stack0xfffffe08;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
      puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
    }
    FUN_005833e0(&stack0xfffffe08);
    puVar5 = local_108;
    puVar6 = (uint *)&stack0xfffffd48;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
      puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
    }
    FUN_00583800(local_1c8,param_1 + 0x20,param_1 + 0x30);
    FUN_00584560(local_18[1] * 0x30 + param_1 + 0xfd8);
    puVar5 = local_138;
    puVar6 = local_168;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
      puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
    }
    FUN_005833e0(&stack0xfffffd48,local_1c8,local_168);
    puVar5 = local_198;
    puVar6 = (uint *)&stack0xfffffce8;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
      puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
    }
    FUN_005833e0(&stack0xfffffce8);
    puVar5 = local_d8;
    puVar6 = local_18 + 2;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
      puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
    }
  }
  return;
}
