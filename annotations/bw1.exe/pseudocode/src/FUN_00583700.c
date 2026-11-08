// Name: FUN_00583700
// Address: 00583700
// Address Range: [[00583700, 00583d0a]]
// Convention: unknown
// Signature: void FUN_00583700(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00583700(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  byte bVar7;
  float afStackY_10f8 [933];
  byte *puVar8;
  byte auStack_1d8 [4];
  uint uStack_1d4;
  uint uStack_1bc;
  float fStack_1b8;
  uint uStack_1b4;
  uint uStack_1a8;
  int iStack_1a4;
  int iStack_1a0;
  uint auStack_19c [5];
  uint uStack_188;
  byte auStack_174 [28];
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float afStack_140 [6];
  byte auStack_128 [24];
  uint uStack_110;
  float afStack_10c [5];
  float fStack_f8;
  float afStack_f4 [4];
  uint uStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float afStack_d4 [3];
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  uint uStack_bc;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  uint uStack_a4;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_5c;
  float afStack_50 [6];
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  int iStack_28;
  float *pfStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  float fStack_14;
  
  bVar7 = 0;
  (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1);
  pfVar5 = afStack_140;
  pfVar6 = &fStack_158;
  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
    *pfVar6 = *pfVar5;
    pfVar5 = pfVar5 + (uint)bVar7 * -2 + 1;
    pfVar6 = pfVar6 + (uint)bVar7 * -2 + 1;
  }
  fStack_158 = fStack_158 + _DAT_005f62cc;
  fStack_154 = fStack_154 + _DAT_005f62cc;
  fStack_14c = fStack_14c + _DAT_005f62d0;
  fStack_148 = fStack_148 + _DAT_005f62d0;
  FUN_00421570(auStack_128);
  FUN_005c0357(&stack0xfffffdc8,8,&DAT_005fb430);
  pfVar5 = (float *)&stack0xfffffdc8;
  iStack_18 = 0;
  do {
    FUN_00420570(&fStack_158,iStack_18);
    afStack_50[0] = (float)uStack_a4;
    afStack_f4[(uint)bVar7 * -2 + 0x2a] = afStack_f4[(uint)bVar7 * -2 + 0x15];
    afStack_f4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x2b] =
         afStack_f4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x16];
    FUN_00408b40(param_1,afStack_f4 + 0x29);
    fStack_74 = fStack_5c;
    afStack_f4[(uint)bVar7 * -2 + 0x21] = afStack_f4[(uint)bVar7 * -2 + 0x27];
    afStack_f4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x22] =
         afStack_f4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x28];
    if (pfVar5 != afStack_f4 + 0x20) {
      *pfVar5 = fStack_74;
      pfVar5[1] = fStack_70;
      pfVar5[2] = fStack_6c;
    }
    FUN_00420500(auStack_128,pfVar5);
    iStack_18 = iStack_18 + 1;
    pfVar5 = pfVar5 + 3;
  } while (iStack_18 < 8);
  fStack_38 = SQRT(fStack_150 * fStack_150 + fStack_158 * fStack_158 + fStack_154 * fStack_154);
  fStack_34 = SQRT(fStack_144 * fStack_144 + fStack_148 * fStack_148 + fStack_14c * fStack_14c);
  fStack_30 = fStack_38;
  if (fStack_38 < fStack_34) {
    fStack_30 = fStack_34;
  }
  fStack_30 = fStack_30 * _DAT_005f62d4 + _DAT_005f62d8;
  fStack_2c = fStack_30 * fStack_30;
  afStack_10c[4] = fStack_144 - fStack_150;
  afStack_10c[2] = 0.0;
  afStack_10c[3] = 0.0;
  fStack_14 = afStack_10c[4];
  FUN_00408ac0(param_1,afStack_10c + 2);
  fStack_b0 = fStack_f8;
  afStack_f4[(uint)bVar7 * -2 + 0x12] = afStack_f4[(uint)bVar7 * -2];
  afStack_f4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x13] =
       afStack_f4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
  pfStack_24 = (float *)(param_1 + 0x20);
  iStack_20 = 0;
  for (iStack_1c = 0; iStack_1c < *(int *)(0x01E82168 + 0x14f0a8); iStack_1c = iStack_1c + 1) {
    iVar4 = *(int *)(0x01E82168 + iStack_20 + 0x14f0ac);
    fVar1 = *pfStack_24 - *(float *)(iVar4 + 0x20);
    fVar3 = pfStack_24[1] - *(float *)(iVar4 + 0x24);
    fVar2 = pfStack_24[2] - *(float *)(iVar4 + 0x28);
    if (fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1 <= fStack_2c) {
      FUN_005593c0(auStack_19c);
      auStack_19c[0] = 0;
      iStack_28 = (**(code **)(*(int *)(iVar4 + 0x154) + 0x3c))(iVar4,auStack_19c);
      if (iStack_28 != 0) {
        uStack_188 = 0;
        FUN_00408bb0(param_1,(float *)(iVar4 + 0x20));
        afStack_f4[2] = fStack_68;
        afStack_f4[(uint)bVar7 * -2 + 3] = afStack_f4[(uint)bVar7 * -2 + 0x24];
        afStack_f4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
             afStack_f4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x25];
        if (afStack_f4[2] < fStack_158) {
          afStack_f4[2] = fStack_158;
        }
        if (fStack_14c < afStack_f4[2]) {
          afStack_f4[2] = fStack_14c;
        }
        if (afStack_f4[3] < fStack_154) {
          afStack_f4[3] = fStack_154;
        }
        if (fStack_148 < afStack_f4[3]) {
          afStack_f4[3] = fStack_148;
        }
        uStack_e4 = 0;
        FUN_00408b40(param_1,afStack_f4 + 2);
        fStack_98 = fStack_80;
        afStack_f4[(uint)bVar7 * -2 + 0x18] = afStack_f4[(uint)bVar7 * -2 + 0x1e];
        afStack_f4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x19] =
             afStack_f4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x1f];
        fStack_14 = (float)FUN_00409170(iVar4,afStack_f4 + 0x17,afStack_f4 + 0x11,auStack_174,
                                        auStack_19c,iStack_28,auStack_128);
        fVar3 = fStack_90;
        fVar2 = fStack_94;
        fVar1 = fStack_98;
        if ((0.0 <= fStack_14) && (fStack_14 <= 1.0)) {
          pfVar5 = afStack_f4 + 8;
          fStack_e0 = fStack_b0 * fStack_14;
          fStack_dc = fStack_ac * fStack_14;
          fStack_d8 = fStack_a8 * fStack_14;
          fStack_c8 = fStack_b0 * fStack_14;
          afStack_f4[(uint)bVar7 * -2 + 0xc] = afStack_f4[(uint)bVar7 * -2 + 6];
          afStack_f4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd] =
               afStack_f4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
          fStack_8c = fVar1 + fStack_c8;
          fStack_88 = fVar2 + fStack_c4;
          fStack_84 = fVar3 + fStack_c0;
          afStack_d4[0] = fVar1 + fStack_c8;
          afStack_f4[(uint)bVar7 * -2 + 9] = afStack_f4[(uint)bVar7 * -2 + 0x1b];
          afStack_f4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10] =
               afStack_f4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x1c];
          FUN_00408bb0(iVar4,pfVar5);
          puVar8 = auStack_1d8;
          uStack_110 = uStack_bc;
          afStack_10c[(uint)bVar7 * -2] = afStack_f4[(uint)bVar7 * -2 + 0xf];
          afStack_10c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
               afStack_f4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x10];
          FUN_0042c010(puVar8);
          uStack_1d4 = *(uint *)(param_1 + 0x558);
          uStack_1a8 = 0x67;
          if (&uStack_1bc != &uStack_110) {
            uStack_1bc = uStack_110;
            fStack_1b8 = afStack_10c[0];
            uStack_1b4 = afStack_10c[1];
          }
          iStack_1a4 = param_1;
          iStack_1a0 = param_1;
          (**(code **)(*(int *)(iVar4 + 0x154) + 0x108))(iVar4,auStack_1d8);
        }
      }
    }
    iStack_20 = iStack_20 + 4;
  }
  return;
}
