// Name: FUN_00424550
// Address: 00424550
// Address Range: [[00424550, 00424e22]]
// Convention: unknown
// Signature: undefined4 FUN_00424550(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00424550(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  byte bVar8;
  float afStackY_112c [994];
  float *pfVar9;
  uint uStack_180;
  float fStack_17c;
  uint uStack_178;
  float fStack_174;
  uint uStack_170;
  uint uStack_16c;
  uint uStack_164;
  uint uStack_160;
  uint uStack_15c;
  uint uStack_158;
  uint uStack_154;
  uint uStack_150;
  int iStack_14c;
  uint uStack_148;
  float fStack_144;
  float afStack_140 [5];
  float fStack_12c;
  uint uStack_128;
  uint uStack_124;
  float fStack_120;
  float afStack_11c [5];
  float fStack_108;
  uint uStack_104;
  uint uStack_100;
  float fStack_fc;
  float afStack_f8 [5];
  uint uStack_e4;
  float afStack_e0 [4];
  uint uStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  uint auStack_b4 [3];
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  uint uStack_84;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  uint uStack_68;
  uint uStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  uint uStack_50;
  uint uStack_4c;
  float fStack_48;
  float afStack_44 [4];
  float fStack_34;
  float fStack_30;
  int iStack_2c;
  uint uStack_28;
  uint uStack_24;
  float fStack_20;
  int iStack_1c;
  float fStack_18;
  
  bVar8 = 0;
  *(uint *)(param_1 + 0x59c) = 1;
  if (0.0 < *(float *)(param_1 + 0x594)) {
    return 1;
  }
  (**(code **)(*(int *)(param_1 + 0x154) + 0xe0))(param_1);
  pfVar9 = afStack_e0 + 0xb;
  auStack_b4[0] = uStack_e4;
  afStack_e0[(uint)bVar8 * -2 + 0xc] = afStack_e0[(uint)bVar8 * -2];
  afStack_e0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0xd] =
       afStack_e0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
  FUN_00408b80(param_1,pfVar9);
  fStack_cc = afStack_11c[2];
  afStack_e0[(uint)bVar8 * -2 + 6] = afStack_11c[(uint)bVar8 * -2 + 3];
  iVar4 = param_1;
  afStack_e0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7] =
       afStack_11c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
  iVar4 = FUN_0057b880(iVar4);
  if (iVar4 == 0) {
    FUN_005609d0(0x02CF5680,param_1,"wp_nomana.wav",afStack_e0 + 5);
    *(uint *)(param_1 + 0x59c) = 0;
    *(uint *)(param_1 + 0x300) = 0x3f800000;
    return 0;
  }
  iVar4 = FUN_00556700(*(uint *)(param_1 + 0x5a4));
  if (iVar4 == 0) {
    uVar7 = FUN_005609d0(0x02CF5680,param_1,"wp_burningcross.wav",afStack_e0 + 5);
    *(uint *)(param_1 + 0x5a4) = uVar7;
  }
  *(uint *)(param_1 + 0x594) = 0x3e800000;
  afStack_f8[4] = *(float *)(param_1 + 0x2e8);
  afStack_f8[2] = 0.0;
  afStack_f8[3] = 0.0;
  FUN_00408b00(param_1,afStack_f8 + 2);
  fVar3 = fStack_c4;
  fVar2 = fStack_c8;
  fVar1 = fStack_cc;
  fStack_a8 = fStack_144;
  afStack_e0[(uint)bVar8 * -2 + 0xf] = afStack_140[(uint)bVar8 * -2];
  afStack_e0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x10] =
       afStack_140[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
  fStack_fc = fVar1 + fStack_a8;
  afStack_f8[0] = fVar2 + fStack_a4;
  afStack_f8[1] = fVar3 + fStack_a0;
  fStack_48 = fVar1 + fStack_a8;
  afStack_44[(uint)bVar8 * -2] = afStack_f8[(uint)bVar8 * -2];
  afStack_44[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
       afStack_f8[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
  fVar1 = fStack_cc;
  fStack_34 = (float)_DAT_005b7926 / *(float *)(param_1 + 0x2e8);
  fStack_9c = fStack_a8 * fStack_34;
  fStack_98 = fStack_a4 * fStack_34;
  fStack_94 = fStack_a0 * fStack_34;
  fStack_60 = fStack_a8 * fStack_34;
  afStack_e0[(uint)bVar8 * -2 + 0x21] = afStack_e0[(uint)bVar8 * -2 + 0x12];
  afStack_e0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x22] =
       afStack_e0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x13];
  fStack_120 = fVar1 - fStack_60;
  afStack_11c[0] = fStack_c8 - fStack_5c;
  afStack_11c[1] = fStack_c4 - fStack_58;
  afStack_140[2] = fVar1 - fStack_60;
  afStack_140[(uint)bVar8 * -2 + 3] = afStack_11c[(uint)bVar8 * -2];
  iVar4 = 0x01ED78C8;
  afStack_140[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
       afStack_11c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
  FUN_0053ebe0(iVar4);
  FUN_0053ec90(0x01ED78C8,1);
  FUN_0053ec10(0x01ED78C8,param_1);
  FUN_0053ebd0(0x01ED78C8);
  if (*(int *)(param_1 + 0x304) != 0) {
    FUN_0053ec10(0x01ED78C8,*(int *)(param_1 + 0x304));
  }
  iVar4 = 0;
  do {
    fStack_18 = (float)FUN_0053ccc0(0x01ED78C8,afStack_140 + 2,&fStack_48);
    if ((fStack_18 < 0.0) || (1.0 < fStack_18)) break;
    iStack_1c = FUN_0040c840(*(uint *)(0x01ED78C8 + 0x14d144),DAT_007e2cec);
    if ((iStack_1c != 0) &&
       (iVar5 = (**(code **)(*(int *)(iStack_1c + 0x154) + 0x10c))(iStack_1c), 0 < iVar5)) {
      iStack_1c = 0;
    }
    iVar5 = FUN_0040c840(*(uint *)(0x01ED78C8 + 0x14d144),_DAT_01d22e04);
    iVar6 = FUN_0040c840(*(uint *)(0x01ED78C8 + 0x14d144),_DAT_02cfd894);
    iStack_2c = iVar6;
    if (iStack_1c != 0) {
      iVar4 = FUN_0040c840(*(uint *)(param_1 + 0x304),_DAT_01c5bc48);
      if ((iVar4 != 0) ||
         (iVar4 = (**(code **)(*(int *)(iStack_1c + 0x154) + 0xe0))(iStack_1c), iVar4 == 0)) {
        FUN_0042abb0(&uStack_180);
        uStack_180 = *(uint *)(0x01ED78C8 + 0x14d148);
        fStack_18 = (float)(**(code **)(*(int *)(param_1 + 0x154) + 0xec))(param_1);
        uStack_178 = 0x3ecccccd;
        fStack_17c = fStack_18;
        fStack_78 = *(float *)(0x01ED78C8 + 0x14d11c) - *(float *)(0x01ED78C8 + 0x14d110);
        fStack_74 = *(float *)(0x01ED78C8 + 0x14d120) - *(float *)(0x01ED78C8 + 0x14d114);
        fStack_70 = *(float *)(0x01ED78C8 + 0x14d124) - *(float *)(0x01ED78C8 + 0x14d118);
        fStack_c0 = fStack_78;
        afStack_e0[(uint)bVar8 * -2 + 9] = afStack_e0[(uint)bVar8 * -2 + 0x1b];
        afStack_e0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 10] =
             afStack_e0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x1c];
        fStack_30 = (float)_DAT_005b792e /
                    SQRT(fStack_b8 * fStack_b8 + fStack_c0 * fStack_c0 + fStack_bc * fStack_bc);
        fStack_90 = fStack_c0 * fStack_30;
        fStack_8c = fStack_bc * fStack_30;
        fStack_88 = fStack_b8 * fStack_30;
        fStack_6c = fStack_c0 * fStack_30;
        afStack_e0[(uint)bVar8 * -2 + 0x1e] = afStack_e0[(uint)bVar8 * -2 + 0x15];
        afStack_e0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x1f] =
             afStack_e0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x16];
        if (&fStack_174 != afStack_e0 + 0x1d) {
          fStack_174 = fStack_6c;
          uStack_170 = uStack_68;
          uStack_16c = uStack_64;
        }
        FUN_00408bf0(iStack_1c,0x01ED78C8 + 0x14d138);
        afStack_e0[2] = uStack_84;
        afStack_e0[(uint)bVar8 * -2 + 3] = afStack_e0[(uint)bVar8 * -2 + 0x18];
        afStack_e0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
             afStack_e0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x19];
        if ((float *)&uStack_164 != afStack_e0 + 2) {
          uStack_164 = afStack_e0[2];
          uStack_160 = afStack_e0[3];
          uStack_15c = uStack_d0;
        }
        uStack_158 = *(uint *)(param_1 + 0x56c);
        uStack_154 = 0x3e19999a;
        uStack_150 = 0x66;
        iStack_14c = param_1;
        uStack_148 = (**(code **)(*(int *)(param_1 + 0x154) + 0x94))(param_1);
        (**(code **)(*(int *)(iStack_1c + 0x154) + 0x108))(iStack_1c,&uStack_180);
        if (afStack_11c + 5 != (float *)(0x01ED78C8 + 0x14d138)) {
          fStack_108 = *(float *)(0x01ED78C8 + 0x14d138);
          uStack_104 = *(uint *)(0x01ED78C8 + 0x14d13c);
          uStack_100 = *(uint *)(0x01ED78C8 + 0x14d140);
        }
        iVar4 = 0;
        do {
          afStack_44[2] = (float)FUN_0040ce40(0xc0a00000,0x40a00000);
          afStack_44[3] = (float)FUN_0040ce40(0,0x41200000);
          fStack_54 = (float)FUN_0040ce40(0xc0a00000,0x40a00000);
          uStack_24 = afStack_44[3];
          uStack_28 = afStack_44[2];
          uStack_50 = afStack_44[3];
          uStack_4c = afStack_44[2];
          if (afStack_140 + 5 != afStack_e0 + 0x23) {
            uStack_128 = afStack_44[3];
            uStack_124 = afStack_44[2];
            fStack_12c = fStack_54;
          }
          iVar4 = iVar4 + 1;
          fStack_20 = fStack_54;
          fStack_18 = fStack_54;
          FUN_004a23c0(0x01C73654,afStack_11c + 5,afStack_140 + 5,0x20000,0x10000,4,0xffff);
        } while (iVar4 < 0x10);
        if (*(int *)(iStack_1c + 0x27c0) != 0) {
          FUN_0042fbd0(iStack_1c,&uStack_164,0,0,0x3f800000,1,0x40000000);
        }
      }
      break;
    }
    if (iVar5 == 0) {
      if (iVar6 == 0) {
        FUN_004a2090(0x01C73654,0x01ED78C8 + 0x14d138,0x01ED78C8 + 0x14d128,
                     *(uint *)(0x01ED78C8 + 0x14d134),
                     *(uint *)(0x01ED78C8 + 0x14d144),1);
        FUN_004a3af0(0x01C73654,0x01ED78C8 + 0x14d138,0x01ED78C8 + 0x14d128,3,0,0);
        FUN_005609d0(0x02CF5680,param_1,"wp_burningcross_scorch.wav",
                     0x01ED78C8 + 0x14d138);
        break;
      }
      FUN_0056edc0(iVar6);
      iVar5 = FUN_0056ede0(iVar6,param_1);
      if (iVar5 != 0) {
        fStack_18 = (float)(**(code **)(*(int *)(param_1 + 0x154) + 0xec))(param_1);
        FUN_0056ee20(iVar6,fStack_18);
      }
      FUN_0053ec10(0x01ED78C8,iStack_2c);
    }
    else {
      iVar6 = FUN_004cc5d0(iVar5);
      if (iVar6 == 0) break;
      FUN_004cc040(iVar5,0x01ED78C8 + 0x14d138);
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 4);
  FUN_0053ebe0(0x01ED78C8);
  return 1;
}
