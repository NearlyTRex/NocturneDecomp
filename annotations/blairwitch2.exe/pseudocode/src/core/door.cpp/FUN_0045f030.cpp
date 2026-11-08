// Name: FUN_0045f030
// Address: 0045f030
// Address Range: [[0045f030, 0045f586]]
// Convention: unknown
// Signature: void FUN_0045f030(int param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045f030(int param_1)

{
  float fVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  uint *apuStackY_10fc [997];
  float *pfVar6;
  float local_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  uint local_138 [6];
  float afStack_120 [4];
  float afStack_110 [8];
  uint uStack_f0;
  float afStack_ec [15];
  float afStack_b0 [21];
  float afStack_5c [11];
  uint uStack_30;
  uint *apuStack_2c [5];
  uint *puStack_18;
  uint uStack_14;
  
  bVar5 = 0;
  (**(code **)(*(int *)(param_1 + 0x2b0) + 0x24))(param_1);
  puVar3 = local_138;
  puVar4 = &local_150;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  switch(*(uint *)(param_1 + 0x434)) {
  case 0:
    *(uint *)(param_1 + 0x30) = 0;
    *(uint *)(param_1 + 0x38) = 0;
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0xaf0);
    *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0xaf4);
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0xaf8);
    if (*(int *)(param_1 + 0x440) == 0) {
      fVar1 = *(float *)(param_1 + 0xb08) * (float)_DAT_005d0a00 + *(float *)(param_1 + 0xb00);
    }
    else {
      fVar1 = *(float *)(param_1 + 0xb00) - *(float *)(param_1 + 0xb08) * (float)_DAT_005d0a00;
    }
    *(float *)(param_1 + 0x34) = fVar1;
    FUN_00408ae0(param_1);
    if (ABS(local_150) <= ABS(fStack_144)) {
      local_150 = fStack_144 + (float)_DAT_005d0a10;
    }
    else {
      local_150 = local_150 + (float)_DAT_005d0a18;
    }
    *(float *)(param_1 + 0xb18) = local_150;
    puStack_18 = (uint *)(param_1 + 0xb18);
    *(uint *)(param_1 + 0xb1c) = 0x40600000;
    *(uint *)(param_1 + 0xb20) = 0;
    FUN_00408d70(param_1,puStack_18);
    afStack_b0[0xb] = afStack_5c[5];
    *(uint *)((int)afStack_b0 + (uint)bVar5 * -8 + 0x30) =
         *(uint *)((int)afStack_5c + (uint)bVar5 * -8 + 0x18);
    *(uint **)((int)afStack_b0 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 0x34) =
         apuStack_2c[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0xfffffffb];
    if ((uint *)((int)afStack_b0 + 0x2cU) != puStack_18) {
      *puStack_18 = afStack_b0[0xb];
      puStack_18[1] = afStack_b0[0xc];
      puStack_18[2] = afStack_b0[0xd];
    }
    break;
  case 1:
    *(float *)(param_1 + 0x24) = *(float *)(param_1 + 0xaf4) + *(float *)(param_1 + 0xb08);
    afStack_ec[0xc] = 3.5;
    afStack_ec[0xb] = 0.0;
    afStack_ec[0xd] = 0.0;
    FUN_00408d70(param_1,afStack_ec + 0xb);
    afStack_b0[8] = (float)uStack_30;
    *(uint *)((int)afStack_b0 + (uint)bVar5 * -8 + 0x24) =
         *(uint *)((int)afStack_5c + (uint)bVar5 * -8 + 0x30);
    *(uint *)((int)afStack_b0 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 0x28) =
         *(uint *)((int)afStack_5c + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 0x34);
    if ((uint *)(param_1 + 0xb18) != (uint *)((int)afStack_b0 + 0x20U)) {
      *(uint *)(param_1 + 0xb18) = afStack_b0[8];
      *(float *)(param_1 + 0xb1c) = afStack_b0[9];
      *(float *)(param_1 + 0xb20) = afStack_b0[10];
    }
    break;
  case 2:
    if (*(int *)(param_1 + 0x438) == 1) {
      afStack_120[0] = *(float *)(param_1 + 0xb08);
    }
    else {
      afStack_120[0] = -*(float *)(param_1 + 0xb08);
    }
    afStack_120[1] = 0.0;
    afStack_120[2] = 0.0;
    FUN_00449530(param_1 + 0x3c,afStack_120);
    afStack_110[2] = afStack_120[3];
    *(float *)((int)afStack_110 + (uint)bVar5 * -8 + 0xc) = afStack_110[(uint)bVar5 * 0xfffffffe];
    *(uint *)((int)afStack_110 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 0x10) =
         *(uint *)((int)afStack_110 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 4);
    afStack_ec[8] = *(float *)(param_1 + 0xaf0) + afStack_110[2];
    afStack_ec[9] = *(float *)(param_1 + 0xaf4) + afStack_110[3];
    afStack_ec[10] = *(float *)(param_1 + 0xaf8) + afStack_110[4];
    afStack_ec[0xe] = afStack_ec[8];
    afStack_b0[(uint)bVar5 * 0xfffffffe] =
         (float)*(uint *)((int)afStack_ec + (uint)bVar5 * -8 + 0x24);
    *(uint *)((int)afStack_b0 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 4) =
         *(uint *)((int)afStack_ec + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 0x28);
    *(float *)(param_1 + 0x20) = afStack_ec[0xe];
    *(float *)(param_1 + 0x24) = afStack_b0[0];
    *(float *)(param_1 + 0x28) = afStack_b0[1];
    afStack_b0[0x12] = 3.5;
    afStack_b0[0x11] = 0.0;
    afStack_b0[0x13] = 0.0;
    FUN_00408d70(param_1,afStack_b0 + 0x11);
    afStack_ec[5] = (float)uStack_f0;
    *(float *)((int)afStack_ec + (uint)bVar5 * -8 + 0x18) = afStack_ec[(uint)bVar5 * 0xfffffffe];
    *(uint *)((int)afStack_ec + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 0x1c) =
         *(uint *)((int)afStack_ec + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 4);
    if ((uint *)(param_1 + 0xb18) != (uint *)((int)afStack_ec + 0x14U)) {
      *(uint *)(param_1 + 0xb18) = afStack_ec[5];
      *(float *)(param_1 + 0xb1c) = afStack_ec[6];
      *(float *)(param_1 + 0xb20) = afStack_ec[7];
    }
    break;
  case 3:
    *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0xb08) * (float)_DAT_005d0a00;
    FUN_00408ae0(param_1);
    afStack_b0[5] = local_150 + fStack_144;
    afStack_b0[6] = fStack_14c + fStack_140;
    afStack_b0[7] = fStack_148 + fStack_13c;
    afStack_b0[2] = local_150 + fStack_144;
    *(uint *)((int)afStack_b0 + (uint)bVar5 * -8 + 0xc) =
         *(uint *)((int)afStack_b0 + (uint)bVar5 * -8 + 0x18);
    *(uint *)((int)afStack_b0 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 0x10) =
         *(uint *)((int)afStack_b0 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 0x1c);
    pfVar6 = afStack_b0 + 0x14;
    afStack_ec[2] = afStack_b0[2] * _DAT_005d0a08;
    afStack_ec[3] = afStack_b0[3] * _DAT_005d0a08;
    afStack_ec[4] = afStack_b0[4] * _DAT_005d0a08;
    afStack_b0[0x14] = afStack_b0[2] * _DAT_005d0a08;
    afStack_5c[(uint)bVar5 * 0xfffffffe] =
         (float)*(uint *)((int)afStack_ec + (uint)bVar5 * -8 + 0xc);
    *(uint *)((int)afStack_5c + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 4) =
         *(uint *)((int)afStack_ec + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 0x10);
    FUN_00408d70(param_1,pfVar6);
    apuStack_2c[2] = (uint *)afStack_5c[2];
    apuStack_2c[(uint)bVar5 * 0xfffffffe + 3] =
         *(uint **)((int)afStack_5c + (uint)bVar5 * -8 + 0xc);
    apuStack_2c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
         *(uint **)((int)afStack_5c + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 0x10);
    if ((uint *)(param_1 + 0xb18) != (uint *)((int)afStack_5c + 0x38U)) {
      *(uint *)(param_1 + 0xb18) = apuStack_2c[2];
      *(uint **)(param_1 + 0xb1c) = apuStack_2c[3];
      *(uint **)(param_1 + 0xb20) = apuStack_2c[4];
    }
    break;
  default:
    _DAT_01d046a0 = "..\\core\\door.cpp";
    _DAT_01d046a4 = 0x117;
    FUN_004e4500("CDoor::reposition - Unknown type");
  }
  iVar2 = FUN_0048e340(0x01C38BC0,param_1 + 0xb40);
  if (iVar2 != 0) {
    *(uint *)(param_1 + 0xb28) = *(uint *)(param_1 + 0xb3c);
  }
  if (0.0 < *(float *)(param_1 + 0xb28)) {
    afStack_110[5] =
         (float)FUN_0040cf60(-*(float *)(param_1 + 0xb28),*(uint *)(param_1 + 0xb28));
    afStack_110[6] = 0.0;
    uStack_14 = afStack_110[5];
    afStack_110[7] =
         (float)FUN_0040cf60(-*(float *)(param_1 + 0xb28),*(uint *)(param_1 + 0xb28));
    uStack_14 = afStack_110[7];
    FUN_00408cf0(param_1,afStack_110 + 5);
    afStack_b0[0xe] = afStack_5c[8];
    *(uint **)((int)afStack_b0 + (uint)bVar5 * -8 + 0x3c) =
         apuStack_2c[(uint)bVar5 * 0xfffffffe + 0xfffffffd];
    *(uint **)((int)afStack_b0 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 0x40) =
         apuStack_2c[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0xfffffffe];
    *(float *)(param_1 + 0x20) = *(float *)(param_1 + 0x20) + afStack_b0[0xe];
    *(float *)(param_1 + 0x24) = *(float *)(param_1 + 0x24) + afStack_b0[0xf];
    *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) + afStack_b0[0x10];
    *(uint *)(param_1 + 0xb28) = 0;
    return;
  }
  return;
}
