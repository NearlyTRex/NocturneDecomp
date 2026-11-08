// Name: FUN_005b4d30
// Address: 005b4d30
// Address Range: [[005b4d30, 005b56b3]]
// Convention: unknown
// Signature: void FUN_005b4d30(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005b4d30(int param_1,float param_2)

{
  float fVar1;
  float fVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  float *pfVar7;
  float *pfVar8;
  int iVar9;
  byte bVar10;
  float afStackY_1148 [1012];
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  uint uStack_124;
  uint auStack_120 [5];
  uint uStack_10c;
  float fStack_108;
  uint uStack_104;
  float fStack_100;
  float afStack_fc [4];
  float fStack_ec;
  uint uStack_e8;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  uint uStack_c4;
  float afStack_c0 [4];
  float fStack_b0;
  uint uStack_ac;
  float afStack_a8 [4];
  float fStack_98;
  uint uStack_94;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  float fStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  float *pfStack_48;
  int iStack_44;
  int iStack_40;
  float *pfStack_3c;
  uint *puStack_38;
  float *pfStack_34;
  uint *puStack_30;
  uint *puStack_2c;
  int iStack_28;
  uint *puStack_24;
  int iStack_1c;
  uint uStack_18;
  
  bVar10 = 0;
  if (*(float *)(param_1 + 0x56c) < _DAT_005f1434) {
    uStack_18 = (**(code **)(*(int *)(param_1 + 0x154) + 0x40))(param_1,0x3dcccccd,0);
    *(uint *)(param_1 + 0x56c) = uStack_18;
  }
  if (*(int *)(param_1 + 0x574) != 0) {
    pfVar7 = (float *)(param_1 + 0x2b0);
    fStack_164 = 0.0;
    for (iVar5 = 0; iVar5 < *(int *)(param_1 + 0x158) + -1; iVar5 = iVar5 + 1) {
      fStack_70 = pfVar7[-9] - *pfVar7;
      fStack_6c = pfVar7[-8] - pfVar7[1];
      fStack_68 = pfVar7[-7] - pfVar7[2];
      fStack_13c = pfVar7[-9] - *pfVar7;
      *(float *)((int)&stack0xfffffec8 + (uint)bVar10 * -8) =
           afStack_a8[(uint)bVar10 * 0xfffffffe + 0xf];
      *(float *)((int)&stack0xfffffecc + (uint)bVar10 * -8 + (uint)bVar10 * -8) =
           afStack_a8[(uint)bVar10 * 0xfffffffe + (uint)bVar10 * 0xfffffffe + 0x10];
      pfVar7 = pfVar7 + 9;
      fStack_164 = SQRT(fStack_134 * fStack_134 + fStack_13c * fStack_13c + fStack_138 * fStack_138)
                   + fStack_164;
    }
  }
  *(float *)(param_1 + 0x570) = 1.0 / param_2;
  pfVar7 = (float *)(param_1 + 0x28c + (*(int *)(param_1 + 0x158) + -1) * 0x24);
  pfVar8 = pfVar7 + (uint)bVar10 * -2 + 1;
  fStack_88 = *pfVar7;
  afStack_a8[(uint)bVar10 * 0xfffffffe + 9] = *pfVar8;
  afStack_a8[(uint)bVar10 * 0xfffffffe + (uint)bVar10 * 0xfffffffe + 10] =
       pfVar8[(uint)bVar10 * -2 + 1];
  FUN_005b4860(param_1);
  uStack_124 = uStack_94;
  *(float *)((int)auStack_120 + (uint)bVar10 * -8) = afStack_a8[(uint)bVar10 * 0xfffffffe + 6];
  auStack_120[(uint)bVar10 * 0xfffffffe + (uint)bVar10 * 0xfffffffe + 1] =
       afStack_a8[(uint)bVar10 * 0xfffffffe + (uint)bVar10 * 0xfffffffe + 7];
  puVar6 = (uint *)(param_1 + 0x28c + (*(int *)(param_1 + 0x158) + -1) * 0x24);
  if (puVar6 != &uStack_124) {
    *puVar6 = uStack_124;
    puVar6[1] = auStack_120[0];
    puVar6[2] = auStack_120[1];
  }
  iVar5 = *(int *)(param_1 + 0x158) + -1;
  *(uint *)(param_1 + 0x2a0 + iVar5 * 0x24) = 0;
  *(uint *)(param_1 + 0x29c + iVar5 * 0x24) = *(uint *)(param_1 + 0x2a0 + iVar5 * 0x24);
  *(uint *)(param_1 + 0x298 + iVar5 * 0x24) = *(uint *)(param_1 + 0x29c + iVar5 * 0x24);
  if ((uint *)(param_1 + 0x28c) != (uint *)(param_1 + 0x20)) {
    *(uint *)(param_1 + 0x28c) = *(uint *)(param_1 + 0x20);
    *(uint *)(param_1 + 0x290) = *(uint *)(param_1 + 0x24);
    *(uint *)(param_1 + 0x294) = *(uint *)(param_1 + 0x28);
  }
  *(uint *)(param_1 + 0x2a0) = 0;
  *(uint *)(param_1 + 0x29c) = *(uint *)(param_1 + 0x2a0);
  *(uint *)(param_1 + 0x298) = *(uint *)(param_1 + 0x29c);
  iStack_5c = param_1 + 0x28c;
  pfStack_48 = (float *)(param_1 + 0x568);
  pfStack_3c = (float *)(param_1 + 700);
  iStack_50 = param_1 + 0x2d4;
  iStack_4c = param_1 + 0x28c;
  for (iStack_40 = 1; iStack_40 < *(int *)(param_1 + 0x158) + -1; iStack_40 = iStack_40 + 1) {
    *pfStack_3c = *pfStack_48 * *pfStack_3c;
    pfStack_3c[1] = *pfStack_48 * pfStack_3c[1];
    pfStack_3c[2] = *pfStack_48 * pfStack_3c[2];
    fStack_58 = *(float *)(param_1 + 0x55c) * (float)_DAT_005f1438;
    fStack_108 = 0.0 - *(float *)(param_1 + 0x55c);
    fVar1 = 1.0 / fStack_58;
    fStack_dc = fVar1 * 0.0;
    uStack_104 = 0;
    uStack_10c = 0;
    pfStack_34 = (float *)(iStack_5c + iStack_40 * 0x24);
    fStack_d8 = fStack_108 * fVar1;
    fStack_d4 = fStack_dc;
    fStack_148 = fStack_dc;
    (&stack0xfffffebc)[(uint)bVar10 * 0xfffffffe] = afStack_fc[(uint)bVar10 * 0xfffffffe + 9];
    pfVar7 = pfStack_34;
    *(float *)((int)&stack0xfffffec0 + (uint)bVar10 * -8 + (uint)bVar10 * -8) =
         afStack_fc[(uint)bVar10 * 0xfffffffe + (uint)bVar10 * 0xfffffffe + 10];
    if (&stack0xfffffeac != &stack0xfffffeb8) {
      fStack_154 = fStack_148;
      fStack_150 = fStack_144;
      fStack_14c = fStack_140;
    }
    fStack_160 = fStack_154 * param_2;
    fStack_15c = fStack_150 * param_2;
    fStack_158 = fStack_14c * param_2;
    afStack_a8[2] = fStack_154 * param_2;
    afStack_a8[(uint)bVar10 * 0xfffffffe + 3] =
         (float)*(uint *)((int)&stack0xfffffea4 + (uint)bVar10 * -8);
    afStack_a8[(uint)bVar10 * 0xfffffffe + (uint)bVar10 * 0xfffffffe + 4] =
         (float)*(uint *)((int)&stack0xfffffea8 + (uint)bVar10 * -8 + (uint)bVar10 * -8);
    fVar1 = pfVar7[3];
    pfVar7[3] = fVar1 + afStack_a8[2];
    fStack_100 = (fVar1 + afStack_a8[2]) * param_2;
    fVar1 = pfVar7[5];
    fVar2 = pfVar7[4];
    pfVar7[4] = fVar2 + afStack_a8[3];
    pfVar7[5] = fVar1 + fStack_98;
    afStack_fc[0] = (fVar2 + afStack_a8[3]) * param_2;
    afStack_fc[1] = (fVar1 + fStack_98) * param_2;
    fStack_130 = fStack_100;
    *(float *)((int)&stack0xfffffed4 + (uint)bVar10 * -8) = afStack_fc[(uint)bVar10 * 0xfffffffe];
    *(float *)((int)&stack0xfffffed8 + (uint)bVar10 * -8 + (uint)bVar10 * -8) =
         afStack_fc[(uint)bVar10 * 0xfffffffe + (uint)bVar10 * 0xfffffffe + 1];
    *pfVar7 = *pfVar7 + fStack_130;
    pfVar7[1] = pfVar7[1] + fStack_12c;
    pfVar7[2] = pfVar7[2] + fStack_128;
    FUN_005b4aa0(param_1,pfStack_34,iStack_4c);
    FUN_005b4aa0(param_1,pfStack_34,iStack_50);
    pfStack_3c = pfStack_3c + 9;
    iStack_50 = iStack_50 + 0x24;
    iStack_4c = iStack_4c + 0x24;
  }
  iStack_44 = 0;
  puStack_30 = (uint *)(param_1 + 0x298);
  puStack_2c = (uint *)(param_1 + 0x28c);
  puStack_38 = (uint *)(param_1 + 0x20);
  iStack_64 = param_1 + 0x2d4;
  iStack_60 = param_1 + 0x2b0;
  do {
    FUN_005b4860(param_1);
    uStack_c4 = auStack_120[2];
    *(uint *)((int)afStack_c0 + (uint)bVar10 * -8) =
         auStack_120[(uint)bVar10 * 0xfffffffe + 3];
    afStack_c0[(uint)bVar10 * 0xfffffffe + (uint)bVar10 * 0xfffffffe + 1] =
         (float)auStack_120[(uint)bVar10 * 0xfffffffe + (uint)bVar10 * 0xfffffffe + 4];
    puVar6 = puStack_2c + (*(int *)(param_1 + 0x158) + -1) * 9;
    if (puVar6 != &uStack_c4) {
      *puVar6 = uStack_c4;
      puVar6[1] = afStack_c0[0];
      puVar6[2] = afStack_c0[1];
    }
    iVar5 = *(int *)(param_1 + 0x158) + -1;
    puStack_2c[iVar5 * 9 + 5] = 0;
    puStack_2c[iVar5 * 9 + 4] = puStack_2c[iVar5 * 9 + 5];
    puStack_2c[iVar5 * 9 + 3] = puStack_2c[iVar5 * 9 + 4];
    if (puStack_2c != puStack_38) {
      *puStack_2c = *puStack_38;
      puStack_2c[1] = puStack_38[1];
      puStack_2c[2] = puStack_38[2];
    }
    puStack_30[2] = 0;
    puStack_30[1] = puStack_30[2];
    *puStack_30 = puStack_30[1];
    iStack_28 = iStack_64;
    puStack_24 = puStack_2c;
    iVar5 = iStack_60;
    for (iVar9 = 1; iVar9 < *(int *)(param_1 + 0x158) + -1; iVar9 = iVar9 + 1) {
      FUN_005b4aa0(param_1,iVar5,puStack_24);
      FUN_005b4aa0(param_1,iVar5,iStack_28);
      iVar5 = iVar5 + 0x24;
      iStack_28 = iStack_28 + 0x24;
      puStack_24 = puStack_24 + 9;
    }
    FUN_005b4860(param_1);
    uStack_ac = uStack_e8;
    *(float *)((int)afStack_a8 + (uint)bVar10 * -8) = afStack_fc[(uint)bVar10 * 0xfffffffe + 6];
    afStack_a8[(uint)bVar10 * 0xfffffffe + (uint)bVar10 * 0xfffffffe + 1] =
         afStack_fc[(uint)bVar10 * 0xfffffffe + (uint)bVar10 * 0xfffffffe + 7];
    puVar6 = puStack_2c + (*(int *)(param_1 + 0x158) + -1) * 9;
    if (puVar6 != &uStack_ac) {
      *puVar6 = uStack_ac;
      puVar6[1] = afStack_a8[0];
      puVar6[2] = afStack_a8[1];
    }
    iVar5 = *(int *)(param_1 + 0x158) + -1;
    puStack_2c[iVar5 * 9 + 5] = 0;
    puStack_2c[iVar5 * 9 + 4] = puStack_2c[iVar5 * 9 + 5];
    puStack_2c[iVar5 * 9 + 3] = puStack_2c[iVar5 * 9 + 4];
    if (puStack_2c != puStack_38) {
      *puStack_2c = *puStack_38;
      puStack_2c[1] = puStack_38[1];
      puStack_2c[2] = puStack_38[2];
    }
    puStack_30[2] = 0;
    iStack_44 = iStack_44 + 1;
    puStack_30[1] = puStack_30[2];
    *puStack_30 = puStack_30[2];
  } while (iStack_44 < 3);
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x158)) {
    puVar6 = (uint *)(param_1 + 0x2a4);
    do {
      puVar3 = (uint *)(iVar5 * 0x24 + param_1 + 0x28c);
      if (puVar6 != puVar3) {
        *puVar6 = *puVar3;
        puVar6[1] = puVar3[1];
        puVar6[2] = puVar3[2];
      }
      iVar5 = iVar5 + 1;
      puVar6 = puVar6 + 9;
    } while (iVar5 < *(int *)(param_1 + 0x158));
  }
  iStack_54 = 0;
  iStack_1c = 0;
  if (*(int *)(param_1 + 0x574) != 0) {
    if (fStack_164 < *(float *)(param_1 + 0x15c) * (float)_DAT_005f1440) {
      pfVar7 = (float *)(param_1 + 0x2b0);
      fStack_168 = 0.0;
      for (iVar5 = 0; iVar5 < *(int *)(param_1 + 0x158) + -1; iVar5 = iVar5 + 1) {
        afStack_fc[2] = pfVar7[-9] - *pfVar7;
        afStack_fc[3] = pfVar7[-8] - pfVar7[1];
        fStack_ec = pfVar7[-7] - pfVar7[2];
        fStack_7c = pfVar7[-9] - *pfVar7;
        afStack_a8[(uint)bVar10 * 0xfffffffe + 0xc] = afStack_fc[(uint)bVar10 * 0xfffffffe + 3];
        afStack_a8[(uint)bVar10 * 0xfffffffe + (uint)bVar10 * 0xfffffffe + 0xd] =
             afStack_fc[(uint)bVar10 * 0xfffffffe + (uint)bVar10 * 0xfffffffe + 4];
        pfVar7 = pfVar7 + 9;
        fStack_168 = SQRT(fStack_74 * fStack_74 + fStack_7c * fStack_7c + fStack_78 * fStack_78) +
                     fStack_168;
      }
      if (*(float *)(param_1 + 0x15c) * (float)_DAT_005f1440 < fStack_168) {
        iStack_1c = 1;
      }
    }
    iVar5 = *(int *)(param_1 + 0x158) + -1;
    afStack_c0[2] = fStack_88 - *(float *)(param_1 + 0x28c + iVar5 * 0x24);
    afStack_c0[3] = fStack_84 - *(float *)(param_1 + 0x290 + iVar5 * 0x24);
    fStack_b0 = fStack_80 - *(float *)(param_1 + 0x294 + iVar5 * 0x24);
    fStack_d0 = afStack_c0[2];
    afStack_fc[(uint)bVar10 * 0xfffffffe + 0xc] = afStack_c0[(uint)bVar10 * 0xfffffffe + 3];
    afStack_fc[(uint)bVar10 * 0xfffffffe + (uint)bVar10 * 0xfffffffe + 0xd] =
         afStack_c0[(uint)bVar10 * 0xfffffffe + (uint)bVar10 * 0xfffffffe + 4];
    if (param_2 * (float)_DAT_005f1448 <
        SQRT(fStack_c8 * fStack_c8 + fStack_d0 * fStack_d0 + fStack_cc * fStack_cc)) {
      iStack_54 = 1;
    }
  }
  if ((iStack_1c != 0) && (*(char *)(param_1 + 0x1b4) != '\0')) {
    FUN_00551050(*(uint *)(param_1 + 0x280));
    iVar5 = FUN_00550b70(*(uint *)(param_1 + 0x218));
    if (iVar5 == 0) {
      uVar4 = FUN_0055ae80(0x0264B290,param_1,param_1 + 0x1b4,
                           (*(int *)(param_1 + 0x158) + -1) * 0x24 + param_1 + 0x28c);
      *(uint *)(param_1 + 0x280) = uVar4;
    }
  }
  *(float *)(param_1 + 0x284) = *(float *)(param_1 + 0x284) - param_2;
  if (iStack_54 == 0) {
    if (0.0 <= *(float *)(param_1 + 0x284)) {
      return;
    }
    *(uint *)(param_1 + 0x284) = 0;
    FUN_00551050(*(uint *)(param_1 + 0x280));
    return;
  }
  iVar5 = FUN_00550b70(*(uint *)(param_1 + 0x218));
  if (iVar5 == 0) {
    iVar5 = FUN_00550b70(*(uint *)(param_1 + 0x280));
    if (iVar5 == 0) {
      uVar4 = FUN_0055ae80(0x0264B290,param_1,param_1 + 0x21c,
                           param_1 + 0x28c + (*(int *)(param_1 + 0x158) + -1) * 0x24);
      *(uint *)(param_1 + 0x280) = uVar4;
    }
  }
  *(uint *)(param_1 + 0x284) = 0x3f000000;
  return;
}
