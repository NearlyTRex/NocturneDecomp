// Name: FUN_0050df70
// Address: 0050df70
// Address Range: [[0050df70, 0050e60a]]
// Convention: unknown
// Signature: void FUN_0050df70(int param_1,int param_2,int param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0050df70(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  byte bVar4;
  float afStackY_10f8 [967];
  byte auStack_1c8 [20];
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float afStack_188 [6];
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float afStack_158 [6];
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float afStack_128 [6];
  float fStack_110;
  float afStack_10c [4];
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float afStack_50 [3];
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float afStack_34 [2];
  int iStack_2c;
  int iStack_28;
  float fStack_24;
  float *pfStack_20;
  float *pfStack_1c;
  int *piStack_18;
  int iStack_14;
  
  bVar4 = 0;
  FUN_0053ed80(auStack_1c8);
  if ((((param_3 == 0) ||
       (iVar1 = (**(code **)(*(int *)(param_3 + 0x154) + 0x10c))(param_3), iVar1 == 0)) &&
      ((param_4 == 0 ||
       (iVar1 = (**(code **)(*(int *)(param_4 + 0x154) + 0x10c))(param_4), iVar1 == 0)))) &&
     (iVar1 = (**(code **)(*(int *)(param_2 + 0x154) + 0x3c))(param_2,auStack_1c8), iVar1 == 2)) {
    (**(code **)(*(int *)(param_2 + 0x154) + 0x1c))(param_2);
    pfVar2 = afStack_128;
    pfVar3 = &fStack_1a0;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *pfVar3 = *pfVar2;
      pfVar2 = pfVar2 + (uint)bVar4 * -2 + 1;
      pfVar3 = pfVar3 + (uint)bVar4 * -2 + 1;
    }
    fStack_c8 = fStack_1a0 + fStack_194;
    fStack_c4 = fStack_19c + fStack_190;
    fStack_c0 = fStack_198 + fStack_18c;
    fStack_5c = fStack_1a0 + fStack_194;
    afStack_10c[(uint)bVar4 * -2 + 0x2d] = afStack_10c[(uint)bVar4 * -2 + 0x12];
    afStack_10c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x2e] =
         afStack_10c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x13];
    fStack_38 = fStack_5c * _DAT_005cbae9;
    afStack_34[0] = fStack_58 * _DAT_005cbae9;
    afStack_34[1] = fStack_54 * _DAT_005cbae9;
    fStack_f8 = fStack_5c * _DAT_005cbae9;
    afStack_10c[(uint)bVar4 * -2 + 6] = afStack_34[(uint)bVar4 * -2];
    afStack_10c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7] =
         afStack_34[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
    fStack_68 = *(float *)(param_2 + 0x20) + fStack_f8;
    fStack_64 = *(float *)(param_2 + 0x24) + fStack_f4;
    fStack_60 = *(float *)(param_2 + 0x28) + fStack_f0;
    fStack_ec = fStack_68;
    afStack_10c[(uint)bVar4 * -2 + 9] = afStack_10c[(uint)bVar4 * -2 + 0x2a];
    afStack_10c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10] =
         afStack_10c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x2b];
    fStack_bc = fStack_ec - *(float *)(param_1 + 0x20);
    fStack_b8 = fStack_e8 - *(float *)(param_1 + 0x24);
    pfVar2 = afStack_10c + 0x2f;
    fStack_b4 = fStack_e4 - *(float *)(param_1 + 0x28);
    afStack_50[0] = fStack_bc;
    afStack_10c[(uint)bVar4 * -2 + 0x30] = afStack_10c[(uint)bVar4 * -2 + 0x15];
    afStack_10c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x31] =
         afStack_10c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x16];
    FUN_0045b870(param_1 + 0x3c,pfVar2);
    fStack_e0 = fStack_74;
    afStack_10c[(uint)bVar4 * -2 + 0xc] = afStack_10c[(uint)bVar4 * -2 + 0x27];
    afStack_10c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0xd] =
         afStack_10c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x28];
    if (afStack_10c + 8 != afStack_10c + 0xb) {
      fStack_ec = fStack_e0;
      fStack_e8 = fStack_dc;
      fStack_e4 = fStack_d8;
    }
    (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1);
    pfVar2 = afStack_158;
    pfVar3 = &fStack_170;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *pfVar3 = *pfVar2;
      pfVar2 = pfVar2 + (uint)bVar4 * -2 + 1;
      pfVar3 = pfVar3 + (uint)bVar4 * -2 + 1;
    }
    if (((((fStack_170 <= fStack_ec) && (fStack_16c <= fStack_e8)) && (fStack_168 <= fStack_e4)) &&
        ((fStack_ec <= fStack_164 && (fStack_e8 <= fStack_160)))) && (fStack_e4 <= fStack_15c)) {
      iVar1 = FUN_004625a0(param_1 + 0x158);
      fStack_24 = fStack_1ac * fStack_1ac;
      iStack_28 = *(int *)(iVar1 + 0x104);
      piStack_18 = *(int **)(iVar1 + 0x10c);
      iStack_14 = 0;
      if (0 < iStack_28) {
        pfStack_20 = (float *)(param_1 + 0x20);
        iStack_2c = param_1 + 0x3c;
        pfStack_1c = (float *)(param_2 + 0x20);
        while( true ) {
          fStack_44 = (float)*piStack_18 * _DAT_005e31a8;
          fStack_40 = (float)piStack_18[1] * _DAT_005e31a8;
          fStack_3c = (float)piStack_18[2] * _DAT_005e31a8;
          FUN_0045b800(iStack_2c,afStack_10c + 0x32);
          fStack_d4 = fStack_b0;
          afStack_10c[(uint)bVar4 * -2 + 0xf] = afStack_10c[(uint)bVar4 * -2 + 0x18];
          afStack_10c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x10] =
               afStack_10c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x19];
          if (afStack_10c + 0x32 != afStack_10c + 0xe) {
            fStack_44 = fStack_d4;
            fStack_40 = fStack_d0;
            fStack_3c = fStack_cc;
          }
          fStack_44 = (fStack_44 + *pfStack_20) - *pfStack_1c;
          fStack_40 = (fStack_40 + pfStack_20[1]) - pfStack_1c[1];
          fStack_3c = (fStack_3c + pfStack_20[2]) - pfStack_1c[2];
          if (((fStack_1b4 <= fStack_40) && (fStack_40 <= fStack_1b0 + 1.0)) &&
             (fStack_44 * fStack_44 + fStack_3c * fStack_3c <= fStack_24)) break;
          iStack_14 = iStack_14 + 1;
          piStack_18 = piStack_18 + 3;
          if (iStack_28 <= iStack_14) {
            return;
          }
        }
        if (param_3 != 0) {
          (**(code **)(*(int *)(param_3 + 0x154) + 0xdc))(param_3,7,0,0xbf800000);
        }
        if (param_4 != 0) {
          (**(code **)(*(int *)(param_4 + 0x154) + 0xdc))(param_4,7,0,0xbf800000);
        }
        (**(code **)(*(int *)(param_2 + 0x154) + 0x1c))(param_2);
        pfVar2 = afStack_188;
        pfVar3 = &fStack_140;
        for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
          *pfVar3 = *pfVar2;
          pfVar2 = pfVar2 + (uint)bVar4 * -2 + 1;
          pfVar3 = pfVar3 + (uint)bVar4 * -2 + 1;
        }
        fStack_98 = fStack_140 + fStack_134;
        fStack_94 = fStack_13c + fStack_130;
        fStack_90 = fStack_138 + fStack_12c;
        fStack_80 = fStack_140 + fStack_134;
        afStack_10c[(uint)bVar4 * -2 + 0x24] = afStack_10c[(uint)bVar4 * -2 + 0x1e];
        afStack_10c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x25] =
             afStack_10c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x1f];
        fStack_a4 = fStack_80 * _DAT_005cbae9;
        fStack_a0 = fStack_7c * _DAT_005cbae9;
        fStack_9c = fStack_78 * _DAT_005cbae9;
        afStack_10c[2] = fStack_80 * _DAT_005cbae9;
        afStack_10c[(uint)bVar4 * -2 + 3] = afStack_10c[(uint)bVar4 * -2 + 0x1b];
        afStack_10c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
             afStack_10c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x1c];
        fStack_110 = *(float *)(param_2 + 0x20) + afStack_10c[2];
        afStack_10c[0] = *(float *)(param_2 + 0x24) + afStack_10c[3];
        afStack_10c[1] = *(float *)(param_2 + 0x28) + fStack_fc;
        fStack_8c = fStack_110;
        afStack_10c[(uint)bVar4 * -2 + 0x21] = afStack_10c[(uint)bVar4 * -2];
        afStack_10c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x22] =
             afStack_10c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
        if (afStack_10c + 0x32 != afStack_10c + 0x20) {
          fStack_44 = fStack_8c;
          fStack_40 = fStack_88;
          fStack_3c = fStack_84;
        }
        FUN_004ce9c0(0x01D22E44,afStack_10c + 0x32,0,200,0);
        return;
      }
    }
  }
  return;
}
