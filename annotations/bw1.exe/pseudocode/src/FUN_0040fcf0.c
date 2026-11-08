// Name: FUN_0040fcf0
// Address: 0040fcf0
// Address Range: [[0040fcf0, 0041010a]]
// Convention: unknown
// Signature: void FUN_0040fcf0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040fcf0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  float afStackY_10d4 [965];
  uint uVar5;
  float *pfVar6;
  float *pfVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  byte local_1a0 [120];
  byte local_128 [4];
  uint local_124;
  uint local_f8;
  int local_f4;
  int local_f0;
  uint uStack_ec;
  float afStack_e8 [5];
  float fStack_d4;
  uint uStack_d0;
  uint uStack_cc;
  uint uStack_c8;
  float fStack_bc;
  uint uStack_b8;
  uint uStack_b4;
  float afStack_b0 [3];
  uint local_a4;
  float afStack_98 [3];
  float afStack_8c [3];
  uint uStack_80;
  uint uStack_74;
  float fStack_68;
  uint uStack_64;
  uint uStack_60;
  uint local_5c;
  float local_58 [4];
  uint uStack_48;
  uint local_44;
  float local_40 [5];
  uint uStack_2c;
  uint uStack_20;
  byte local_14 [4];
  int iStack_10;
  float local_c;
  
  bVar4 = 0;
  iVar1 = FUN_004ec350(param_1,local_14);
  if (iVar1 == 0) {
    return;
  }
  FUN_00408bb0(param_1,iVar1 + 0x20);
  local_44 = local_a4;
  local_40[(uint)bVar4 * -2] = afStack_e8[(uint)bVar4 * -2 + 0x12];
  local_40[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       afStack_e8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x13];
  FUN_005a7520(&local_44);
  local_5c = local_40[2];
  local_58[(uint)bVar4 * -2] = local_40[(uint)bVar4 * -2 + 3];
  local_58[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       local_40[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
  if (&local_44 != &local_5c) {
    local_44 = local_5c;
    local_40[0] = local_58[0];
    local_40[1] = local_58[1];
  }
  local_40[0] = (float)FUN_0040cd60(local_40[0]);
  local_c = local_40[0];
  if ((local_40[0] < _DAT_005d34de) || (0x3f490fdb < (int)local_40[0])) {
    FUN_004b6fe0(0x01C57074,iVar1 + 0x20,0x41800000,1,0);
    FUN_004b6f30(0x01C57074,iVar1 + 0x20,0x40800000);
  }
  else {
    FUN_005c0357(local_1a0,10,&DAT_005fb430);
    iVar2 = (**(code **)(*(int *)(iVar1 + 0x154) + 0x54))(iVar1,local_1a0);
    iStack_10 = iVar2;
    iVar3 = FUN_005c084c();
    FUN_00408b40(iVar1,local_1a0 + (iVar3 % iVar2) * 0xc);
    fStack_bc = (float)uStack_80;
    afStack_e8[(uint)bVar4 * -2 + 0xc] = afStack_e8[(uint)bVar4 * -2 + 0x1b];
    afStack_e8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0xd] =
         afStack_e8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x1c];
    if (local_58 + 2 != afStack_e8 + 0xb) {
      local_58[2] = fStack_bc;
      local_58[3] = (float)uStack_b8;
      uStack_48 = uStack_b4;
    }
    iVar2 = FUN_005c084c();
    FUN_00408b40(iVar1,local_1a0 + (iVar2 % iStack_10) * 0xc);
    fStack_d4 = (float)uStack_20;
    afStack_e8[(uint)bVar4 * -2 + 6] = local_40[(uint)bVar4 * -2 + 9];
    afStack_e8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7] =
         local_40[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10];
    if (afStack_e8 + 0x20 != afStack_e8 + 5) {
      fStack_68 = fStack_d4;
      uStack_64 = uStack_d0;
      uStack_60 = uStack_cc;
    }
    local_c = (float)(param_1 + 0xfd8);
    FUN_005b5080(&DAT_02c8af28,DAT_007c34cc * 0x30 + (int)local_c);
    puVar10 = &uStack_ec;
    uStack_ec = uStack_2c;
    afStack_e8[(uint)bVar4 * -2] = local_40[(uint)bVar4 * -2 + 6];
    afStack_e8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
         local_40[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7];
    FUN_00408b40(param_1,puVar10);
    afStack_b0[0] = (float)uStack_74;
    afStack_e8[(uint)bVar4 * -2 + 0xf] = afStack_e8[(uint)bVar4 * -2 + 0x1e];
    afStack_e8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x10] =
         afStack_e8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x1f];
    FUN_005b5080(&DAT_02c8af28,DAT_007c34d0 * 0x30 + (int)local_c);
    pfVar7 = afStack_e8 + 0x17;
    afStack_8c[0] = (float)uStack_c8;
    afStack_e8[(uint)bVar4 * -2 + 0x18] = afStack_e8[(uint)bVar4 * -2 + 9];
    afStack_e8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x19] =
         afStack_e8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10];
    FUN_00408b40(param_1,pfVar7);
    uVar11 = 0x40800000;
    uVar9 = 0x3f000000;
    uVar8 = 1;
    pfVar7 = local_58 + 2;
    pfVar6 = afStack_e8 + 0xe;
    afStack_98[0] = afStack_e8[2];
    afStack_e8[(uint)bVar4 * -2 + 0x15] = afStack_e8[(uint)bVar4 * -2 + 3];
    uVar5 = 0x01C57074;
    afStack_e8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x16] =
         afStack_e8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
    FUN_004b7060(uVar5,pfVar6,pfVar7,uVar8,uVar9,uVar11);
    FUN_004b7060(0x01C57074,afStack_e8 + 0x14,local_58 + 2,1,0x3f000000,0x40800000);
    (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"baron-attack.wav");
  }
  FUN_0042c010(local_128);
  local_f8 = 6;
  local_124 = 0x42c80000;
  local_f4 = param_1;
  local_f0 = *(int *)(param_1 + 0x20084);
  if (local_f0 == 0) {
    local_f0 = param_1;
  }
  (**(code **)(*(int *)(iVar1 + 0x154) + 0x108))(iVar1,local_128);
  *(uint *)(iVar1 + 0xb9f0) = 0x40400000;
  return;
}
