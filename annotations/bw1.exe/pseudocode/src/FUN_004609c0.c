// Name: FUN_004609c0
// Address: 004609c0
// Address Range: [[004609c0, 00460ca5]]
// Convention: unknown
// Signature: void FUN_004609c0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004609c0(int param_1)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  float afStackY_1104 [999];
  uint *puVar5;
  float *pfVar6;
  byte *puVar7;
  byte auStack_158 [4];
  uint uStack_154;
  int iStack_124;
  int iStack_120;
  uint uStack_11c;
  float afStack_118 [5];
  float afStack_104 [3];
  float afStack_f8 [3];
  float afStack_ec [3];
  float afStack_e0 [3];
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  uint uStack_c8;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  uint uStack_98;
  uint uStack_80;
  float afStack_7c [5];
  uint uStack_68;
  float afStack_64 [4];
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  uint uStack_14;
  
  bVar4 = 0;
  iVar2 = param_1 + 0x158;
  FUN_00569130(iVar2,*(uint *)(param_1 + 0xc270));
  puVar5 = &uStack_11c;
  uStack_11c = uStack_98;
  afStack_118[(uint)bVar4 * -2] = afStack_118[(uint)bVar4 * -2 + 0x21];
  afStack_118[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       afStack_118[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x22];
  FUN_00408b40(param_1,puVar5);
  FUN_00569130(iVar2,*(uint *)(param_1 + 0xc278));
  pfVar6 = afStack_118 + 2;
  afStack_118[2] = (float)uStack_80;
  afStack_118[(uint)bVar4 * -2 + 3] = afStack_7c[(uint)bVar4 * -2];
  afStack_118[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
       afStack_7c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
  FUN_00408b40(param_1,pfVar6);
  FUN_00569130(iVar2,*(uint *)(param_1 + 0xc274));
  pfVar6 = afStack_118 + 5;
  afStack_104[0] = (float)uStack_68;
  afStack_118[(uint)bVar4 * -2 + 6] = afStack_64[(uint)bVar4 * -2];
  afStack_118[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7] =
       afStack_64[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
  FUN_00408b40(param_1,pfVar6);
  afStack_64[2] = fStack_a4;
  afStack_64[(uint)bVar4 * -2 + 3] = afStack_118[(uint)bVar4 * -2 + 0x1e];
  afStack_64[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
       afStack_118[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x1f];
  FUN_00569130(iVar2,*(uint *)(param_1 + 0xc27c));
  pfVar6 = afStack_118 + 8;
  afStack_f8[0] = (float)uStack_c8;
  afStack_118[(uint)bVar4 * -2 + 9] = afStack_118[(uint)bVar4 * -2 + 0x15];
  afStack_118[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10] =
       afStack_118[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x16];
  FUN_00408b40(param_1,pfVar6);
  fVar1 = afStack_64[2];
  puVar7 = auStack_158;
  fStack_50 = fStack_44;
  afStack_64[(uint)bVar4 * -2 + 6] = afStack_64[(uint)bVar4 * -2 + 9];
  afStack_64[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7] =
       afStack_64[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10];
  fStack_b0 = fVar1 + fStack_50;
  fStack_ac = afStack_64[3] + fStack_4c;
  fStack_a8 = fStack_54 + fStack_48;
  fStack_d4 = fVar1 + fStack_50;
  afStack_118[(uint)bVar4 * -2 + 0x12] = afStack_118[(uint)bVar4 * -2 + 0x1b];
  afStack_118[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x13] =
       afStack_118[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x1c];
  fStack_2c = fStack_b0;
  fStack_20 = fStack_d4 * _DAT_005d8d8c;
  fStack_1c = fStack_d0 * _DAT_005d8d8c;
  fStack_18 = fStack_cc * _DAT_005d8d8c;
  fStack_28 = fStack_ac;
  afStack_ec[0] = fStack_d4 * _DAT_005d8d8c;
  afStack_118[(uint)bVar4 * -2 + 0xc] = afStack_64[(uint)bVar4 * -2 + 0x12];
  afStack_118[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0xd] =
       afStack_64[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x13];
  fStack_24 = fStack_a8;
  fStack_bc = fStack_2c;
  afStack_118[(uint)bVar4 * -2 + 0x18] = afStack_64[(uint)bVar4 * -2 + 0xf];
  afStack_118[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x19] =
       afStack_64[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x10];
  fStack_38 = fStack_bc * _DAT_005d8d8c;
  fStack_34 = fStack_b8 * _DAT_005d8d8c;
  fStack_30 = fStack_b4 * _DAT_005d8d8c;
  afStack_e0[0] = fStack_bc * _DAT_005d8d8c;
  afStack_118[(uint)bVar4 * -2 + 0xf] = afStack_64[(uint)bVar4 * -2 + 0xc];
  afStack_118[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x10] =
       afStack_64[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0xd];
  FUN_0042c010(puVar7);
  uStack_154 = FUN_0040cc00(0x41000000,0x41400000);
  iStack_124 = param_1;
  iStack_120 = param_1;
  uStack_14 = uStack_154;
  FUN_004a0770(param_1,afStack_118 + 0xe,0x40400000,auStack_158);
  FUN_004a0770(param_1,afStack_118 + 0xb,0x40400000,auStack_158);
  iVar2 = FUN_0057d9c0(0x02C82A60,*(uint *)(param_1 + 0xc2c8));
  if (iVar2 != 0) {
    return;
  }
  uVar3 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"?stick-stump?.wav" + 1);
  *(uint *)(param_1 + 0xc2c8) = uVar3;
  return;
}
