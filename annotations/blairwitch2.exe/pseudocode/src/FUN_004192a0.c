// Name: FUN_004192a0
// Address: 004192a0
// Address Range: [[004192a0, 00419511]]
// Convention: unknown
// Signature: void FUN_004192a0(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004192a0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint *unaff_ESI;
  float *pfVar3;
  uint *puVar4;
  float *pfVar5;
  uint *puVar6;
  byte bVar7;
  float afStackY_10ac [967];
  float fStack_148;
  float fStack_138;
  float fStack_128;
  byte auStack_124 [48];
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float afStack_dc [6];
  float fStack_c4;
  float afStack_c0 [4];
  float fStack_b0;
  float fStack_ac;
  float afStack_a8 [4];
  uint uStack_98;
  float fStack_94;
  float fStack_8c;
  float fStack_88;
  uint uStack_84;
  uint uStack_80;
  float fStack_7c;
  float afStack_78 [6];
  float afStack_60 [4];
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float afStack_28 [4];
  float afStack_18 [2];
  int iStack_10;
  
  bVar7 = 0;
  iVar1 = param_2 * 0x78 + param_1;
  iVar2 = *(int *)(iVar1 + 0x2620);
  iStack_10 = *(int *)(iVar1 + 0x2618);
  afStack_78[3] = -2.536;
  afStack_78[2] = -0.771;
  afStack_78[4] = 2.536;
  FUN_00591c10(auStack_124,&DAT_0265370c,afStack_78 + 2);
  (**(code **)(*(int *)(iVar2 + 0x2b0) + 0x24))(iVar2);
  pfVar3 = afStack_dc;
  pfVar5 = &fStack_f4;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pfVar5 = *pfVar3;
    pfVar3 = pfVar3 + (uint)bVar7 * -2 + 1;
    pfVar5 = pfVar5 + (uint)bVar7 * -2 + 1;
  }
  FUN_0040d340(afStack_78 + 5);
  pfVar3 = afStack_60 + 0x11;
  afStack_78[5] = fStack_f4 + fStack_e8;
  afStack_60[0] = fStack_f0 + fStack_e4;
  afStack_60[1] = fStack_ec + fStack_e0;
  fStack_40 = fStack_f4 + fStack_e8;
  afStack_60[(uint)bVar7 * -2 + 9] = afStack_60[(uint)bVar7 * -2];
  afStack_60[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10] =
       afStack_60[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
  FUN_0040d340(pfVar3);
  afStack_28[3] = fStack_40 * _DAT_005cc1f2;
  afStack_18[0] = fStack_3c * _DAT_005cc1f2;
  afStack_18[1] = fStack_38 * _DAT_005cc1f2;
  fStack_94 = fStack_40 * _DAT_005cc1f2;
  afStack_a8[(uint)bVar7 * -2 + 6] = afStack_18[(uint)bVar7 * -2];
  afStack_a8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
       afStack_18[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
  fStack_8c = fStack_ec + (float)_DAT_005cc1fa;
  afStack_a8[2] = fStack_94;
  afStack_a8[(uint)bVar7 * -2 + 3] = afStack_a8[(uint)bVar7 * -2 + 6];
  afStack_a8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
       afStack_a8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
  if (afStack_a8 + 8 != afStack_a8 + 2) {
    fStack_88 = afStack_a8[2];
    uStack_84 = afStack_a8[3];
    uStack_80 = uStack_98;
  }
  afStack_28[1] = 0.209;
  afStack_28[2] = -0.082;
  afStack_28[0] = 0.032;
  FUN_00591530(afStack_60 + 0xe,iStack_10 * 0x30 + param_1 + 0x1134);
  afStack_60[2] = fStack_7c;
  afStack_60[(uint)bVar7 * -2 + 3] = afStack_78[(uint)bVar7 * -2];
  afStack_60[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
       afStack_78[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
  if (afStack_c0 + 2 != afStack_60 + 2) {
    afStack_c0[2] = afStack_60[2];
    afStack_c0[3] = afStack_60[3];
    fStack_b0 = fStack_50;
  }
  FUN_005916b0(auStack_124,param_1 + 0x1134 + iStack_10 * 0x30);
  puVar4 = (uint *)&stack0xfffffe7c;
  puVar6 = (uint *)&stack0xfffffeac;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *puVar4;
    puVar4 = puVar4 + (uint)bVar7 * -2 + 1;
    puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
  }
  FUN_00591530(afStack_a8 + 8,&stack0xfffffeac);
  fStack_4c = fStack_c4;
  afStack_60[(uint)bVar7 * -2 + 6] = afStack_c0[(uint)bVar7 * -2];
  afStack_60[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
       afStack_c0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
  fStack_ac = afStack_c0[2] - fStack_4c;
  afStack_a8[0] = afStack_c0[3] - fStack_48;
  afStack_a8[1] = fStack_b0 - fStack_44;
  fStack_34 = afStack_c0[2] - fStack_4c;
  afStack_60[(uint)bVar7 * -2 + 0xc] = afStack_a8[(uint)bVar7 * -2];
  afStack_60[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd] =
       afStack_a8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
  fStack_148 = fStack_148 + fStack_34;
  fStack_138 = fStack_138 + fStack_30;
  fStack_128 = fStack_128 + fStack_2c;
  puVar4 = (uint *)&stack0xfffffeac;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *unaff_ESI = *puVar4;
    puVar4 = puVar4 + (uint)bVar7 * -2 + 1;
    unaff_ESI = unaff_ESI + (uint)bVar7 * -2 + 1;
  }
  return;
}
