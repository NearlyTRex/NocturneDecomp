// Name: FUN_004e1070
// Address: 004e1070
// Address Range: [[004e1070, 004e2027]]
// Convention: unknown
// Signature: undefined4 FUN_004e1070(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004e1070(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float *pfVar7;
  float *pfVar8;
  byte bVar9;
  float afStackY_128c [980];
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  byte auStack_310 [4];
  float fStack_30c;
  uint uStack_2e8;
  int iStack_2dc;
  uint uStack_2d8;
  float fStack_2d4;
  float fStack_2d0;
  float fStack_2cc;
  float fStack_2c8;
  float fStack_2c4;
  float fStack_2c0;
  float afStack_2bc [6];
  float fStack_2a4;
  float afStack_2a0 [4];
  uint uStack_290;
  float fStack_28c;
  uint uStack_288;
  uint uStack_284;
  float fStack_280;
  float afStack_27c [5];
  float afStack_268 [3];
  float fStack_25c;
  float fStack_258;
  float fStack_254;
  uint uStack_250;
  uint uStack_24c;
  float fStack_248;
  uint uStack_244;
  float afStack_240 [4];
  uint uStack_230;
  float fStack_22c;
  float afStack_228 [5];
  float fStack_214;
  float fStack_210;
  uint uStack_20c;
  uint uStack_208;
  float fStack_1fc;
  float fStack_1f0;
  uint uStack_1e4;
  float afStack_1d8 [3];
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  float fStack_1b0;
  uint uStack_1ac;
  float fStack_1a8;
  float afStack_1a4 [4];
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  float afStack_180 [4];
  uint uStack_170;
  float fStack_16c;
  float afStack_168 [4];
  uint uStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  uint uStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  uint uStack_130;
  float fStack_12c;
  float fStack_124;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float afStack_f4 [3];
  float fStack_e8;
  float fStack_dc;
  float fStack_d8;
  uint uStack_d4;
  float afStack_d0 [3];
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float afStack_b8 [3];
  float fStack_ac;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  uint uStack_80;
  float fStack_7c;
  float fStack_70;
  uint uStack_6c;
  uint uStack_68;
  float fStack_64;
  float afStack_60 [5];
  float fStack_4c;
  float fStack_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  int iStack_38;
  int iStack_34;
  float fStack_30;
  uint uStack_2c;
  uint uStack_28;
  float fStack_24;
  float fStack_20;
  int iStack_1c;
  int iStack_18;
  float fStack_14;
  
  bVar9 = 0;
  (**(code **)(*(int *)(param_1 + 0x154) + 0xe0))(param_1);
  pfVar7 = &fStack_22c;
  fStack_22c = afStack_228[2];
  afStack_228[(uint)bVar9 * -2] = afStack_228[(uint)bVar9 * -2 + 3];
  afStack_228[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
       afStack_228[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
  FUN_00408b80(param_1,pfVar7);
  fStack_148 = fStack_280;
  afStack_168[(uint)bVar9 * -2 + 9] = afStack_27c[(uint)bVar9 * -2];
  iVar3 = param_1;
  afStack_168[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10] =
       afStack_27c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
  iVar3 = FUN_0057b880(iVar3);
  if (iVar3 != 0) {
    iStack_34 = 0;
    fStack_30 = 30.0;
    iStack_38 = FUN_0040c840(*(uint *)(param_1 + 0x304),_DAT_01d5ba70);
    uVar10 = 0;
    if (iStack_38 != 0) {
      iStack_1c = 0;
      for (iStack_18 = 0; iStack_18 < *(int *)(0x01ED78C8 + 0x152f30); iStack_18 = iStack_18 + 1)
      {
        iVar3 = *(int *)(0x01ED78C8 + iStack_1c + 0x152f34);
        iVar5 = FUN_0040c840(iVar3,DAT_007e2cec);
        if (iVar5 != 0) {
          iVar4 = FUN_0040c840(iVar5,_DAT_02cfd8fc);
          iVar2 = iStack_38;
          if (iVar4 == 0) {
            pfVar7 = afStack_27c + 2;
            pfVar8 = (float *)(iVar3 + 0x24 + (uint)bVar9 * -8);
            afStack_27c[2] = *(float *)(iVar3 + 0x20);
            afStack_27c[(uint)bVar9 * -2 + 3] = *pfVar8;
            afStack_27c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] = pfVar8[(uint)bVar9 * -2 + 1];
            FUN_00408bf0(iVar2,pfVar7);
            fStack_a0 = fStack_124;
            afStack_168[(uint)bVar9 * -2 + 0x33] = afStack_168[(uint)bVar9 * -2 + 0x12];
            afStack_168[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x34] =
                 afStack_168[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x13];
            if ((0.0 < (double)fStack_98) && ((double)fStack_98 <= _DAT_005c6a32)) {
              FUN_00576250(afStack_168 + 0x32);
              uStack_130 = uStack_1e4;
              afStack_168[(uint)bVar9 * -2 + 0xf] = afStack_228[(uint)bVar9 * -2 + 0x12];
              afStack_168[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x10] =
                   afStack_228[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x13];
              if ((_DAT_005c6a3a <= fStack_12c) &&
                 (((int)fStack_12c < 0x3f490fdc &&
                  (fStack_24 = SQRT(fStack_98 * fStack_98 +
                                    fStack_a0 * fStack_a0 + fStack_9c * fStack_9c),
                  fStack_24 < fStack_30)))) {
                iStack_34 = iVar5;
                fStack_30 = fStack_24;
              }
            }
          }
        }
        iStack_1c = iStack_1c + 4;
      }
      if (iStack_34 == 0) {
        fStack_248 = (float)FUN_0040ce40(0x3f733333,0x3f866666);
        fStack_248 = fStack_248 * *(float *)(param_1 + 0x2e8);
        uStack_250 = 0;
        uStack_24c = 0;
        fStack_14 = fStack_248;
        FUN_00408b00(param_1,afStack_27c + 0xb);
        uVar11 = 0x3f866666;
        uVar10 = 0x3f733333;
        fStack_1c0 = fStack_ac;
        afStack_228[(uint)bVar9 * -2 + 0x1b] = afStack_168[(uint)bVar9 * -2 + 0x30];
        afStack_228[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x1c] =
             afStack_168[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x31];
        fVar6 = (float)FUN_0040ce40(uVar10,uVar11);
        fStack_14 = fVar6;
        fVar1 = *(float *)(param_1 + 0x2e8);
        afStack_1a4[2] = fStack_148;
        afStack_1a4[(uint)bVar9 * -2 + 3] = afStack_168[(uint)bVar9 * -2 + 9];
        afStack_1a4[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
             afStack_168[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10];
        fStack_1bc = fStack_1bc - fVar6 * fVar1;
        fStack_118 = afStack_1a4[2] + fStack_1c0;
        fStack_110 = fStack_194 + fStack_1b8;
        fStack_114 = afStack_1a4[3] + fStack_1bc;
        afStack_d0[0] = afStack_1a4[2] + fStack_1c0;
        afStack_168[(uint)bVar9 * -2 + 0x27] = afStack_168[(uint)bVar9 * -2 + 0x15];
        iVar3 = 0x01ED78C8;
        afStack_168[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x28] =
             afStack_168[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x16];
        FUN_0053ebe0(iVar3);
        FUN_0053ecd0(0x01ED78C8,1,0xff,0xff,0xff);
        FUN_0053ebd0(0x01ED78C8);
        FUN_0053ec10(0x01ED78C8,param_1);
        if (*(int *)(param_1 + 0x304) != 0) {
          FUN_0053ec10(0x01ED78C8,*(int *)(param_1 + 0x304));
        }
        FUN_0053e870(0x01ED78C8);
        FUN_0053ccc0(0x01ED78C8,afStack_1a4 + 2,afStack_168 + 0x26);
        FUN_004a3c50(0x01C73654,afStack_168 + 8,0x01ED78C8 + 0x14d138,0,0x3f400000,0x3f400000,3,
                     0x3e800000,0xffff);
        FUN_004a2090(0x01C73654,0x01ED78C8 + 0x14d138,0x01ED78C8 + 0x14d128,
                     *(uint *)(0x01ED78C8 + 0x14d134),
                     *(uint *)(0x01ED78C8 + 0x14d144),2);
        FUN_0053ea20(0x01ED78C8);
        FUN_0053ebe0(0x01ED78C8);
      }
      else {
        (**(code **)(*(int *)(iStack_34 + 0x154) + 0x1c))(iStack_34);
        pfVar7 = afStack_2bc;
        pfVar8 = &fStack_2d4;
        for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
          *pfVar8 = *pfVar7;
          pfVar7 = pfVar7 + (uint)bVar9 * -2 + 1;
          pfVar8 = pfVar8 + (uint)bVar9 * -2 + 1;
        }
        fStack_94 = fStack_2d4 + fStack_2c8;
        fStack_90 = fStack_2d0 + fStack_2c4;
        fStack_8c = fStack_2cc + fStack_2c0;
        fStack_1cc = fStack_2d4 + fStack_2c8;
        afStack_228[(uint)bVar9 * -2 + 0x18] = afStack_168[(uint)bVar9 * -2 + 0x36];
        afStack_228[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x19] =
             afStack_168[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x37];
        fStack_10c = fStack_1cc * _DAT_005c6a02;
        fStack_108 = fStack_1c8 * _DAT_005c6a02;
        fStack_104 = fStack_1c4 * _DAT_005c6a02;
        fStack_154 = fStack_1cc * _DAT_005c6a02;
        afStack_168[(uint)bVar9 * -2 + 6] = afStack_168[(uint)bVar9 * -2 + 0x18];
        afStack_168[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7] =
             afStack_168[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x19];
        if (afStack_1a4 + 5 != afStack_168 + 5) {
          fStack_190 = fStack_154;
          fStack_18c = fStack_150;
          fStack_188 = fStack_14c;
        }
        fStack_25c = *(float *)(iStack_34 + 0x20) + fStack_190;
        fStack_258 = *(float *)(iStack_34 + 0x24) + fStack_18c;
        fStack_254 = *(float *)(iStack_34 + 0x28) + fStack_188;
        fStack_88 = fStack_25c;
        afStack_168[(uint)bVar9 * -2 + 0x39] = afStack_27c[(uint)bVar9 * -2 + 9];
        afStack_168[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x3a] =
             afStack_27c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10];
        if (afStack_60 + 5 != afStack_168 + 0x38) {
          fStack_4c = fStack_88;
          fStack_48 = fStack_84;
          uStack_44 = uStack_80;
        }
        fStack_48 = fStack_18c * _DAT_005c6a02 + fStack_48;
        iVar3 = iStack_34 + 0x158;
        if (*(char *)(iStack_34 + 0x24a8) != '\0') {
          iVar5 = FUN_0054eac0(iVar3);
          if (iVar5 != 0) {
            iVar5 = FUN_00548090(iVar5,"Bip01 Head",1);
            if (-1 < iVar5) {
              FUN_0054dcc0(iVar3,iVar5);
              iVar3 = iStack_34;
              puVar16 = &uStack_244;
              uStack_244 = uStack_208;
              afStack_240[(uint)bVar9 * -2] = afStack_228[(uint)bVar9 * -2 + 9];
              afStack_240[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
                   afStack_228[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10];
              FUN_00408b80(iVar3,puVar16);
              fStack_214 = fStack_1fc;
              afStack_228[(uint)bVar9 * -2 + 6] = afStack_228[(uint)bVar9 * -2 + 0xc];
              afStack_228[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7] =
                   afStack_228[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd];
              if (afStack_228 + 0x1d != afStack_228 + 5) {
                fStack_1b4 = fStack_214;
                fStack_1b0 = fStack_210;
                uStack_1ac = uStack_20c;
              }
              if ((fStack_1b0 < fStack_48) && (afStack_60 + 5 != afStack_228 + 0x1d)) {
                fStack_4c = fStack_1b4;
                fStack_48 = fStack_1b0;
                uStack_44 = uStack_1ac;
              }
            }
          }
        }
        FUN_004a3c50(0x01C73654,afStack_168 + 8,afStack_60 + 5,0,0x3f400000,0x3f400000,3,
                     0x3e800000,0xffff);
        *(uint *)(param_1 + 0x594) = 1;
        *(uint *)(param_1 + 0x598) = 0;
        *(uint *)(param_1 + 0x59c) = 0x3dcccccd;
        *(uint *)(iStack_34 + 0x3254) = 0x3f800000;
        *(uint *)(iStack_34 + 0x3258) = 1;
        iVar3 = 0;
        do {
          iVar3 = iVar3 + 1;
          *(uint *)(iStack_18 * 4 + param_1 + 0x5ac) = 0;
        } while (iVar3 < 4);
        *(int *)(*(int *)(param_1 + 0x598) * 4 + param_1 + 0x5ac) = iStack_34;
        if ((float *)(param_1 + 0x5a0) != afStack_60 + 5) {
          *(float *)(param_1 + 0x5a0) = fStack_4c;
          *(float *)(param_1 + 0x5a4) = fStack_48;
          *(uint *)(param_1 + 0x5a8) = uStack_44;
        }
        FUN_0042abb0(auStack_310);
        fStack_30c = (float)(**(code **)(*(int *)(param_1 + 0x154) + 0xec))(param_1);
        uStack_2e8 = *(uint *)(param_1 + 0x56c);
        iStack_2dc = param_1;
        fStack_14 = fStack_30c;
        uStack_2d8 = (**(code **)(*(int *)(param_1 + 0x154) + 0x94))(param_1);
        (**(code **)(*(int *)(iStack_34 + 0x154) + 0x108))(iStack_34,auStack_310);
        if (afStack_2a0 + 2 != afStack_60 + 5) {
          afStack_2a0[2] = fStack_4c;
          afStack_2a0[3] = fStack_48;
          uStack_290 = uStack_44;
        }
        iVar3 = 0;
        do {
          uStack_40 = FUN_0040ce40(0xc0a00000,0x40a00000);
          uStack_3c = FUN_0040ce40(0,0x41200000);
          fStack_70 = (float)FUN_0040ce40(0xc0a00000,0x40a00000);
          uStack_2c = uStack_3c;
          uStack_28 = uStack_40;
          uStack_6c = uStack_3c;
          uStack_68 = uStack_40;
          if (&fStack_28c != afStack_168 + 0x3e) {
            uStack_288 = uStack_3c;
            uStack_284 = uStack_40;
            fStack_28c = fStack_70;
          }
          iVar3 = iVar3 + 1;
          fStack_20 = fStack_70;
          fStack_14 = fStack_70;
          FUN_004a23c0(0x01C73654,afStack_2a0 + 2,&fStack_28c,0x20000,0x10000,1,0xffff);
        } while (iVar3 < 0x10);
      }
      uVar15 = 0xffff;
      uVar14 = 0x3e800000;
      fStack_64 = fStack_148;
      uVar13 = 3;
      uVar12 = 0x3f400000;
      uVar11 = 0x3f400000;
      afStack_60[1] = (float)uStack_140;
      uVar10 = 0;
      pfVar7 = afStack_228 + 0x14;
      afStack_60[0] = fStack_144 + _DAT_005c6a06;
      afStack_1d8[0] = fStack_148;
      afStack_228[(uint)bVar9 * -2 + 0x15] = afStack_60[(uint)bVar9 * -2];
      afStack_228[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x16] =
           afStack_60[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
      FUN_004a3c50(0x01C73654,afStack_168 + 8,pfVar7,uVar10,uVar11,uVar12,uVar13,uVar14,uVar15);
      pfVar7 = &fStack_184;
      fStack_c4 = fStack_22c + _DAT_005c6a0a;
      fStack_c0 = afStack_228[0] + _DAT_005c6a0e;
      fStack_bc = afStack_228[1] + _DAT_005c6a12;
      fStack_184 = fStack_22c + _DAT_005c6a0a;
      afStack_180[(uint)bVar9 * -2] = afStack_168[(uint)bVar9 * -2 + 0x2a];
      afStack_180[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
           afStack_168[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x2b];
      FUN_00408b80(param_1,pfVar7);
      afStack_168[2] = fStack_7c;
      afStack_168[(uint)bVar9 * -2 + 3] = afStack_168[(uint)bVar9 * -2 + 0x3c];
      afStack_168[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
           afStack_168[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x3d];
      if (afStack_240 + 2 != afStack_168 + 2) {
        afStack_240[2] = afStack_168[2];
        afStack_240[3] = afStack_168[3];
        uStack_230 = uStack_158;
      }
      FUN_004a3c50(0x01C73654,afStack_168 + 8,afStack_240 + 2,0,0x3e800000,0x3e800000,3,0x3e800000
                   ,0xffff);
      if (afStack_180 + 2 != afStack_240 + 2) {
        afStack_180[2] = afStack_240[2];
        afStack_180[3] = afStack_240[3];
        uStack_170 = uStack_230;
      }
      pfVar7 = afStack_27c + 5;
      fStack_13c = fStack_22c + _DAT_005c6a16;
      fStack_138 = afStack_228[0] + _DAT_005c6a02;
      fStack_134 = afStack_228[1] + _DAT_005c6a12;
      afStack_268[0] = fStack_22c + _DAT_005c6a16;
      afStack_27c[(uint)bVar9 * -2 + 6] = afStack_168[(uint)bVar9 * -2 + 0xc];
      afStack_27c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7] =
           afStack_168[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd];
      FUN_00408b80(param_1,pfVar7);
      fStack_1a8 = fStack_e8;
      afStack_1a4[(uint)bVar9 * -2] = afStack_168[(uint)bVar9 * -2 + 0x21];
      afStack_1a4[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
           afStack_168[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x22];
      if (afStack_240 + 2 != &fStack_1a8) {
        afStack_240[2] = fStack_1a8;
        afStack_240[3] = afStack_1a4[0];
        uStack_230 = afStack_1a4[1];
      }
      FUN_004a3c50(0x01C73654,afStack_180 + 2,afStack_240 + 2,0,0x3e800000,0x3e800000,3,0x3e800000
                   ,0xffff);
      if (afStack_180 + 2 != afStack_240 + 2) {
        afStack_180[2] = afStack_240[2];
        afStack_180[3] = afStack_240[3];
        uStack_170 = uStack_230;
      }
      fStack_100 = fStack_22c + _DAT_005c6a1a;
      fStack_fc = afStack_228[0] + _DAT_005c6a1e;
      fStack_f8 = afStack_228[1] + _DAT_005c6a12;
      afStack_f4[0] = fStack_22c + _DAT_005c6a1a;
      afStack_168[(uint)bVar9 * -2 + 0x1e] = afStack_168[(uint)bVar9 * -2 + 0x1b];
      afStack_168[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x1f] =
           afStack_168[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x1c];
      FUN_00408b80(param_1,afStack_168 + 0x1d);
      fStack_dc = afStack_60[2];
      afStack_168[(uint)bVar9 * -2 + 0x24] = afStack_60[(uint)bVar9 * -2 + 3];
      afStack_168[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x25] =
           afStack_60[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
      if (afStack_240 + 2 != afStack_168 + 0x23) {
        afStack_240[2] = fStack_dc;
        afStack_240[3] = fStack_d8;
        uStack_230 = uStack_d4;
      }
      FUN_004a3c50(0x01C73654,afStack_180 + 2,afStack_240 + 2,0,0x3e800000,0x3e800000,3,0x3e800000
                   ,0xffff);
      if (afStack_180 + 2 != afStack_240 + 2) {
        afStack_180[2] = afStack_240[2];
        afStack_180[3] = afStack_240[3];
        uStack_170 = uStack_230;
      }
      pfVar7 = afStack_168 + 0x2c;
      fStack_16c = fStack_22c + _DAT_005c6a22;
      afStack_168[0] = afStack_228[0] + _DAT_005c6a26;
      afStack_168[1] = afStack_228[1] + _DAT_005c6a2a;
      afStack_b8[0] = fStack_22c + _DAT_005c6a22;
      afStack_168[(uint)bVar9 * -2 + 0x2d] = afStack_168[(uint)bVar9 * -2];
      afStack_168[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x2e] =
           afStack_168[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
      FUN_00408b80(param_1,pfVar7);
      fStack_2a4 = fStack_1f0;
      afStack_2a0[(uint)bVar9 * -2] = afStack_228[(uint)bVar9 * -2 + 0xf];
      afStack_2a0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
           afStack_228[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x10];
      if (afStack_240 + 2 != &fStack_2a4) {
        afStack_240[2] = fStack_2a4;
        afStack_240[3] = afStack_2a0[0];
        uStack_230 = afStack_2a0[1];
      }
      FUN_004a3c50(0x01C73654,afStack_180 + 2,afStack_240 + 2,0,0x3e800000,0x3e800000,3,0x3e800000
                   ,0xffff);
      FUN_004a3c50(0x01C73654,afStack_180 + 2,afStack_168 + 8,0,0x3e800000,0x3e800000,3,0x3e800000
                   ,0xffff);
      FUN_005609d0(0x02CF5680,param_1,"wp_lightningstaff.wav",afStack_168 + 8);
      FUN_00556be0(*(uint *)(param_1 + 0x5c4));
      uVar10 = 1;
      *(uint *)(param_1 + 0x5c4) = 0;
      *(uint *)(param_1 + 0x300) = 0x3f800000;
    }
    return uVar10;
  }
  FUN_005609d0(0x02CF5680,param_1,"wp_nomana.wav",afStack_168 + 8);
  *(uint *)(param_1 + 0x300) = 0x3f800000;
  return 0;
}
