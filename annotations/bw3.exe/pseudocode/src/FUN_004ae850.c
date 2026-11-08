// Name: FUN_004ae850
// Address: 004ae850
// Address Range: [[004ae850, 004af577]]
// Convention: unknown
// Signature: undefined4 FUN_004ae850(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004ae850(int param_1)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  float afStackY_1208 [981];
  float *pfVar7;
  uint *puVar8;
  uint uStack_284;
  float fStack_280;
  uint uStack_27c;
  float fStack_278;
  uint uStack_274;
  uint uStack_270;
  uint uStack_268;
  float fStack_264;
  uint uStack_260;
  uint uStack_25c;
  uint uStack_258;
  uint uStack_254;
  int iStack_250;
  uint uStack_24c;
  byte auStack_248 [40];
  uint uStack_220;
  float afStack_21c [5];
  uint uStack_208;
  float fStack_1fc;
  uint uStack_1f8;
  uint uStack_1f4;
  uint uStack_1f0;
  uint uStack_1ec;
  uint uStack_1e8;
  uint uStack_1e4;
  float afStack_1e0 [4];
  float fStack_1d0;
  float fStack_1cc;
  float afStack_1c0 [3];
  float afStack_1b4 [3];
  float fStack_1a8;
  float afStack_1a4 [4];
  uint uStack_194;
  float afStack_190 [4];
  float afStack_180 [4];
  float fStack_170;
  uint uStack_16c;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  uint uStack_13c;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  uint uStack_124;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float afStack_fc [5];
  uint uStack_e8;
  uint uStack_dc;
  float fStack_d8;
  uint uStack_d0;
  uint uStack_c4;
  float fStack_bc;
  float afStack_b8 [3];
  float fStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  uint uStack_94;
  float afStack_90 [4];
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  uint uStack_58;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  uint uStack_40;
  uint uStack_3c;
  float fStack_38;
  float fStack_34;
  int iStack_30;
  uint uStack_2c;
  float fStack_28;
  uint uStack_24;
  int iStack_20;
  int iStack_1c;
  float fStack_18;
  
  bVar6 = 0;
  (**(code **)(*(int *)(param_1 + 0x154) + 0xe0))(param_1);
  pfVar7 = afStack_1e0 + 8;
  afStack_1c0[0] = (float)uStack_d0;
  afStack_1e0[(uint)bVar6 * -2 + 9] = afStack_fc[(uint)bVar6 * -2 + 0xc];
  afStack_1e0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10] =
       afStack_fc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd];
  FUN_00408b80(param_1,pfVar7);
  afStack_1e0[2] = fStack_1cc;
  afStack_1e0[(uint)bVar6 * -2 + 3] = afStack_1e0[(uint)bVar6 * -2 + 6];
  iVar4 = param_1;
  afStack_1e0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
       afStack_1e0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7];
  iVar4 = FUN_0057b880(iVar4);
  if (iVar4 == 0) {
    FUN_005609d0(0x02CF5680,param_1,"wp_noammo.wav",afStack_1e0 + 2);
    *(uint *)(param_1 + 0x300) = 0x3f800000;
    return 0;
  }
  afStack_1b4[2] = *(float *)(param_1 + 0x2e8);
  afStack_1b4[0] = 0.0;
  afStack_1b4[1] = 0.0;
  FUN_00408b00(param_1,afStack_1e0 + 0xb);
  fVar3 = afStack_1e0[3];
  fVar2 = afStack_1e0[2];
  fStack_160 = fStack_1a8;
  afStack_180[(uint)bVar6 * -2 + 9] = afStack_1a4[(uint)bVar6 * -2];
  afStack_180[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10] =
       afStack_1a4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
  afStack_90[2] = fVar2 + fStack_160;
  afStack_90[3] = fVar3 + fStack_15c;
  fStack_80 = fStack_1d0 + fStack_158;
  afStack_190[3] = fVar2 + fStack_160;
  afStack_180[(uint)bVar6 * -2] = afStack_90[(uint)bVar6 * -2 + 3];
  afStack_180[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
       afStack_90[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
  fVar2 = afStack_1e0[2];
  fStack_34 = (float)_DAT_005c1d1d / *(float *)(param_1 + 0x2e8);
  fStack_7c = fStack_160 * fStack_34;
  fStack_78 = fStack_15c * fStack_34;
  fStack_74 = fStack_158 * fStack_34;
  fStack_100 = fStack_160 * fStack_34;
  afStack_fc[(uint)bVar6 * -2] = afStack_90[(uint)bVar6 * -2 + 6];
  afStack_fc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
       afStack_90[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7];
  afStack_180[2] = fVar2 - fStack_100;
  afStack_180[3] = afStack_1e0[3] - afStack_fc[0];
  fStack_170 = fStack_1d0 - afStack_fc[1];
  fStack_154 = fVar2 - fStack_100;
  afStack_180[(uint)bVar6 * -2 + 0xc] = afStack_180[(uint)bVar6 * -2 + 3];
  afStack_180[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd] =
       afStack_180[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
  FUN_0053ebe0(0x01ED78C8);
  FUN_0053ec90(0x01ED78C8,1);
  FUN_0053ec10(0x01ED78C8,param_1);
  FUN_0053ebd0(0x01ED78C8);
  if (*(int *)(param_1 + 0x304) != 0) {
    FUN_0053ec10(0x01ED78C8,*(int *)(param_1 + 0x304));
  }
  iStack_20 = 0;
  do {
    fStack_18 = (float)FUN_0053ccc0(0x01ED78C8,afStack_180 + 0xb,afStack_1a4 + 8);
    if ((fStack_18 < 0.0) || (1.0 < fStack_18)) break;
    iStack_1c = FUN_0040c840(*(uint *)(0x01ED78C8 + 0x14d144),DAT_007e2cec);
    if ((iStack_1c != 0) &&
       (iVar4 = (**(code **)(*(int *)(iStack_1c + 0x154) + 0x10c))(iStack_1c), 0 < iVar4)) {
      iStack_1c = 0;
    }
    iVar4 = FUN_0040c840(*(uint *)(0x01ED78C8 + 0x14d144),_DAT_01d22e04);
    iVar5 = FUN_0040c840(*(uint *)(0x01ED78C8 + 0x14d144),_DAT_02cfd894);
    iStack_30 = iVar5;
    if (iStack_1c != 0) {
      iVar4 = (**(code **)(*(int *)(iStack_1c + 0x154) + 0xe0))(iStack_1c);
      if (iVar4 == 0) {
        FUN_0042abb0(&uStack_284);
        uStack_284 = *(uint *)(0x01ED78C8 + 0x14d148);
        fStack_18 = (float)(**(code **)(*(int *)(param_1 + 0x154) + 0xec))(param_1);
        uStack_27c = 0x3ecccccd;
        fStack_280 = fStack_18;
        fStack_4c = *(float *)(0x01ED78C8 + 0x14d11c) - *(float *)(0x01ED78C8 + 0x14d110);
        fStack_48 = *(float *)(0x01ED78C8 + 0x14d120) - *(float *)(0x01ED78C8 + 0x14d114);
        fStack_44 = *(float *)(0x01ED78C8 + 0x14d124) - *(float *)(0x01ED78C8 + 0x14d118);
        fStack_118 = fStack_4c;
        afStack_180[(uint)bVar6 * -2 + 0x1b] = afStack_90[(uint)bVar6 * -2 + 0x12];
        afStack_180[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x1c] =
             afStack_90[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x13];
        fStack_38 = (float)_DAT_005c1d45 /
                    SQRT(fStack_110 * fStack_110 + fStack_118 * fStack_118 + fStack_114 * fStack_114
                        );
        fStack_70 = fStack_118 * fStack_38;
        fStack_6c = fStack_114 * fStack_38;
        fStack_68 = fStack_110 * fStack_38;
        afStack_1a4[2] = fStack_118 * fStack_38;
        afStack_1a4[(uint)bVar6 * -2 + 3] = afStack_90[(uint)bVar6 * -2 + 9];
        afStack_1a4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
             afStack_90[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10];
        if (&fStack_278 != afStack_1a4 + 2) {
          fStack_278 = afStack_1a4[2];
          uStack_274 = afStack_1a4[3];
          uStack_270 = uStack_194;
        }
        FUN_00408bf0(iStack_1c,0x01ED78C8 + 0x14d138);
        uStack_220 = uStack_13c;
        afStack_21c[(uint)bVar6 * -2] = afStack_180[(uint)bVar6 * -2 + 0x12];
        afStack_21c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
             afStack_180[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x13];
        if (&uStack_268 != &uStack_220) {
          uStack_268 = uStack_220;
          fStack_264 = afStack_21c[0];
          uStack_260 = afStack_21c[1];
        }
        uStack_25c = *(uint *)(param_1 + 0x56c);
        uStack_254 = 0x65;
        iStack_250 = param_1;
        uStack_258 = 0x3e19999a;
        uStack_24c = (**(code **)(*(int *)(param_1 + 0x154) + 0x94))(param_1);
        (**(code **)(*(int *)(iStack_1c + 0x154) + 0x108))(iStack_1c,&uStack_284);
        FUN_004ce9c0(0x01D22E44,0x01ED78C8 + 0x14d138,0,4,*(uint *)(iStack_1c + 0x27a0));
      }
      break;
    }
    if (iVar4 == 0) {
      if (iVar5 == 0) {
        FUN_004a2090(0x01C73654,0x01ED78C8 + 0x14d138,0x01ED78C8 + 0x14d128,
                     *(uint *)(0x01ED78C8 + 0x14d134),
                     *(uint *)(0x01ED78C8 + 0x14d144),0);
        fStack_130 = *(float *)(0x01ED78C8 + 0x14d138) - fStack_154;
        fStack_12c = *(float *)(0x01ED78C8 + 0x14d13c) - fStack_150;
        fStack_128 = *(float *)(0x01ED78C8 + 0x14d140) - fStack_14c;
        fStack_64 = fStack_130;
        afStack_90[(uint)bVar6 * -2 + 0xc] = afStack_180[(uint)bVar6 * -2 + 0x15];
        afStack_90[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd] =
             afStack_180[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x16];
        if (&fStack_a0 != afStack_90 + 0xb) {
          fStack_a0 = fStack_64;
          fStack_9c = fStack_60;
          fStack_98 = fStack_5c;
        }
        if (_DAT_005c1d25 <=
            SQRT(fStack_98 * fStack_98 + fStack_a0 * fStack_a0 + fStack_9c * fStack_9c)) break;
        fStack_18 = (float)FUN_0040ce40(0,0x3f800000);
        uVar1 = *(uint *)(0x01ED78C8 + 0x14d134);
        if (uVar1 < 7) {
          if (uVar1 != 2) {
LAB_004af530:
            fStack_18 = (float)FUN_0040ce40(0x3dcccccd,0x3e4ccccd);
            FUN_00560a70(0x02CF5680,param_1,"RIC-DT.WAV",afStack_1e0 + 2,fStack_18);
            break;
          }
        }
        else {
          if (uVar1 < 8) {
            if ((float)_DAT_005c1d2d <= fStack_18) {
              fStack_18 = (float)FUN_0040ce40(0x3dcccccd,0x3e4ccccd);
              FUN_00560a70(0x02CF5680,param_1,"RIC-WD0C.WAV",afStack_1e0 + 2,fStack_18);
            }
            else {
              fStack_18 = (float)FUN_0040ce40(0x3dcccccd,0x3e4ccccd);
              FUN_00560a70(0x02CF5680,param_1,"RIC-WD0B.WAV",afStack_1e0 + 2,fStack_18);
            }
            break;
          }
          if (uVar1 != 8) goto LAB_004af530;
        }
        if (fStack_18 < (float)_DAT_005c1d35) {
          fStack_18 = (float)FUN_0040ce40(0x3dcccccd,0x3e4ccccd);
          FUN_00560a70(0x02CF5680,param_1,"RIC-CT0A.WAV",afStack_1e0 + 2,fStack_18);
        }
        else if (_DAT_005c1d3d <= (double)fStack_18) {
          fStack_18 = (float)FUN_0040ce40(0x3dcccccd,0x3e4ccccd);
          FUN_00560a70(0x02CF5680,param_1,"RIC-CT0C.WAV",afStack_1e0 + 2,fStack_18);
        }
        else {
          fStack_18 = (float)FUN_0040ce40(0x3dcccccd,0x3e4ccccd);
          FUN_00560a70(0x02CF5680,param_1,"RIC-CT0B.WAV",afStack_1e0 + 2,fStack_18);
        }
        break;
      }
      FUN_0056edc0(iVar5);
      iVar4 = FUN_0056ede0(iVar5,param_1);
      if (iVar4 != 0) {
        fStack_18 = (float)(**(code **)(*(int *)(param_1 + 0x154) + 0xec))(param_1);
        FUN_0056ee20(iVar5,fStack_18);
      }
      FUN_0053ec10(0x01ED78C8,iStack_30);
    }
    else {
      iVar5 = FUN_004cc5d0(iVar4);
      if (iVar5 == 0) break;
      FUN_004cc040(iVar4,0x01ED78C8 + 0x14d138);
    }
    iStack_20 = iStack_20 + 1;
  } while (iStack_20 < 4);
  FUN_0053ebe0(0x01ED78C8);
  fStack_148 = afStack_1e0[2];
  afStack_180[(uint)bVar6 * -2 + 0xf] = afStack_1e0[(uint)bVar6 * -2 + 3];
  afStack_180[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x10] =
       afStack_1e0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
  (**(code **)(*(int *)(param_1 + 0x154) + 0xe0))(param_1);
  uStack_1e4 = uStack_e8;
  afStack_1e0[(uint)bVar6 * -2] = afStack_fc[(uint)bVar6 * -2 + 6];
  afStack_1e0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
       afStack_fc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7];
  fStack_10c = (float)uStack_1e4;
  (**(code **)(*(int *)(param_1 + 0x154) + 0xe0))(param_1);
  uStack_dc = uStack_58;
  afStack_fc[(uint)bVar6 * -2 + 9] = afStack_90[(uint)bVar6 * -2 + 0xf];
  afStack_fc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10] =
       afStack_90[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x10];
  fStack_108 = fStack_d8;
  (**(code **)(*(int *)(param_1 + 0x154) + 0xe0))(param_1);
  uStack_c4 = uStack_124;
  afStack_fc[(uint)bVar6 * -2 + 0xf] = afStack_180[(uint)bVar6 * -2 + 0x18];
  afStack_fc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x10] =
       afStack_180[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x19];
  fStack_104 = fStack_bc + (float)_DAT_005c1d4d;
  FUN_00408b80(param_1,afStack_180 + 0x1d);
  pfVar7 = afStack_180 + 0xe;
  afStack_b8[0] = afStack_21c[2];
  afStack_fc[(uint)bVar6 * -2 + 0x12] = afStack_21c[(uint)bVar6 * -2 + 3];
  afStack_fc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x13] =
       afStack_21c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
  fStack_144 = fStack_144 + _DAT_005c1d55;
  fStack_108 = fStack_108 + _DAT_005c1d55;
  FUN_004a2010(0x01C73654,pfVar7);
  iVar4 = 0;
  FUN_004a2450(0x01C73654,afStack_180 + 0xe,param_1 + 0x3c);
  do {
    uStack_40 = FUN_0040ce40(0xc0400000,0x40400000);
    uStack_3c = FUN_0040ce40(0,0x41000000);
    fStack_1fc = (float)FUN_0040ce40(0xc0400000,0x40400000);
    uStack_24 = uStack_3c;
    uStack_2c = uStack_40;
    uStack_1f8 = uStack_3c;
    uStack_1f4 = uStack_40;
    if (afStack_fc + 0x14 != afStack_21c + 8) {
      uStack_a8 = uStack_3c;
      uStack_a4 = uStack_40;
      fStack_ac = fStack_1fc;
    }
    iVar4 = iVar4 + 1;
    fStack_28 = fStack_1fc;
    fStack_18 = fStack_1fc;
    FUN_004a23c0(0x01C73654,afStack_fc + 0x11,afStack_fc + 0x14,0x20000,0x10000,6,0xffff);
  } while (iVar4 < 4);
  FUN_005609d0(0x02CF5680,param_1,"wp_flintlock.wav",afStack_1e0 + 2);
  *(uint *)(param_1 + 0x300) = 0x3f800000;
  afStack_190[0] = 3.0;
  afStack_190[1] = 3.0;
  afStack_190[2] = -4.0;
  uStack_1f0 = FUN_0040ce40(0xbec90fdb,0x3ec90fdb);
  fStack_18 = (float)uStack_1f0;
  uStack_1ec = FUN_0040ce40(0xbec90fdb,0x3ec90fdb);
  uStack_1e8 = 0;
  fStack_18 = (float)uStack_1ec;
  FUN_0045b550(auStack_248,&uStack_1f0);
  FUN_0045b800(auStack_248,afStack_1a4 + 5);
  puVar8 = &uStack_94;
  uStack_94 = uStack_208;
  afStack_90[(uint)bVar6 * -2] = afStack_21c[(uint)bVar6 * -2 + 6];
  afStack_90[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
       afStack_21c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7];
  FUN_00408b00(param_1,puVar8);
  uStack_16c = afStack_fc[2];
  afStack_180[(uint)bVar6 * -2 + 6] = afStack_fc[(uint)bVar6 * -2 + 3];
  afStack_180[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7] =
       afStack_fc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
  return 1;
}
