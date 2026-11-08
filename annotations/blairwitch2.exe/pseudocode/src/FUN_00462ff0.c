// Name: FUN_00462ff0
// Address: 00462ff0
// Address Range: [[00462ff0, 004646f3]]
// Convention: unknown
// Signature: void FUN_00462ff0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00462ff0(int param_1,float param_2)

{
  uint uVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  byte bVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  ulonglong uVar11;
  float afStackY_1324 [837];
  float *pfVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  byte auStack_5f8 [100];
  byte auStack_594 [100];
  byte auStack_530 [100];
  byte auStack_4cc [100];
  byte auStack_468 [4];
  float fStack_464;
  int iStack_434;
  int iStack_430;
  byte auStack_42c [4];
  float fStack_428;
  int iStack_3f8;
  int iStack_3f4;
  byte auStack_3f0 [4];
  float fStack_3ec;
  int iStack_3bc;
  int iStack_3b8;
  byte auStack_3b4 [4];
  float fStack_3b0;
  int iStack_380;
  int iStack_37c;
  byte auStack_378 [4];
  float fStack_374;
  int iStack_344;
  int iStack_340;
  uint uStack_33c;
  float afStack_338 [5];
  float afStack_324 [3];
  uint uStack_318;
  uint uStack_30c;
  uint uStack_300;
  uint uStack_2f4;
  float afStack_2e8 [3];
  float fStack_2dc;
  float fStack_2d8;
  float fStack_2d4;
  float afStack_2d0 [4];
  float afStack_2c0 [5];
  float fStack_2ac;
  uint uStack_2a0;
  float afStack_294 [3];
  float afStack_288 [3];
  float afStack_27c [3];
  float fStack_270;
  float fStack_26c;
  float fStack_268;
  float afStack_264 [3];
  float afStack_258 [3];
  uint uStack_24c;
  uint uStack_240;
  float afStack_234 [3];
  float fStack_228;
  float fStack_224;
  float fStack_220;
  uint uStack_21c;
  float afStack_210 [3];
  uint uStack_204;
  uint uStack_1f8;
  float afStack_1ec [3];
  uint uStack_1e0;
  uint uStack_1d4;
  float afStack_1c8 [3];
  float fStack_1bc;
  float afStack_1b8 [5];
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  uint uStack_198;
  float fStack_18c;
  uint uStack_188;
  uint uStack_184;
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  float afStack_174 [3];
  float afStack_168 [3];
  uint uStack_15c;
  float fStack_158;
  float afStack_150 [6];
  float fStack_138;
  float fStack_134;
  float fStack_130;
  uint uStack_12c;
  float afStack_128 [5];
  float afStack_114 [3];
  float afStack_108 [3];
  float afStack_fc [3];
  float afStack_f0 [3];
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float afStack_d8 [3];
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float afStack_c0 [3];
  uint uStack_b4;
  uint uStack_a8;
  float afStack_9c [4];
  float afStack_8c [5];
  uint uStack_78;
  float afStack_6c [3];
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_4c;
  uint uStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  float *pfStack_20;
  int iStack_1c;
  int iStack_18;
  float fStack_14;
  
  bVar7 = 0;
  if (*(int *)(param_1 + 0x10c20) != 0) {
    fVar2 = *(float *)(param_1 + 0x10c24) - param_2;
    *(float *)(param_1 + 0x10c24) = fVar2;
    if (0.0 <= fVar2) {
      if (0 < *(int *)(param_1 + 0x10ba4)) {
        fVar8 = (float10)_DAT_005f5660;
        fVar9 = (float10)_DAT_005d108c;
        iVar4 = param_1;
        do {
          iVar3 = *(int *)(iVar4 + 0x10ba8);
          *(uint *)(iVar3 + 0xfc) = 1;
          *(uint *)(iVar3 + 0x10c8) = 1;
          fVar10 = ((float10)*(float *)(param_1 + 0x10c24) * fVar9) / fVar8;
          uVar11 = FUN_005b7ff0();
          *(int *)((int)uVar11 + 0x10d4) = (int)ROUND(fVar10);
          iVar4 = iVar4 + 4;
        } while ((int)((ulonglong)uVar11 >> 0x20) < *(int *)(param_1 + 0x10ba4));
      }
    }
    else {
      *(uint *)(param_1 + 0x10c20) = 0;
      *(uint *)(param_1 + 0x70) = 2;
      *(uint *)(param_1 + 0x10c24) = 0;
      iVar3 = 0;
      iVar4 = param_1;
      if (0 < *(int *)(param_1 + 0x10ba4)) {
        do {
          *(uint *)(*(int *)(iVar4 + 0x10ba8) + 0x70) = 2;
          iVar3 = iVar3 + 1;
          iVar4 = iVar4 + 4;
        } while (iVar3 < *(int *)(param_1 + 0x10ba4));
      }
    }
  }
  FUN_004658e0(param_1,param_2);
  iVar4 = FUN_004244b0(param_1,param_2);
  if (iVar4 == 0) {
    return;
  }
  if (0.0 <= *(float *)(param_1 + 0x10b90)) {
    *(float *)(param_1 + 0x10b90) = *(float *)(param_1 + 0x10b90) - param_2;
  }
  *(uint *)(param_1 + 0x2510) = 0;
  *(uint *)(param_1 + 0x250c) = *(uint *)(param_1 + 0x2510);
  *(uint *)(param_1 + 0x2508) = *(uint *)(param_1 + 0x250c);
  fStack_4c = param_2 * *(float *)(param_1 + 0x10a60);
  iStack_30 = param_1 + 0x2b4;
  while (0.0 < fStack_4c) {
    iVar4 = FUN_005030c0(iStack_30,afStack_8c + 0x10);
    if (iVar4 == 0x29a) {
      *(uint *)(param_1 + 0x3448) = 0;
      afStack_2d0[0] = 0.0;
      afStack_2d0[1] = 20.0;
      afStack_2d0[2] = 20.0;
      FUN_00408cf0(param_1,afStack_338 + 0x1a);
      uVar14 = 1;
      pfVar6 = afStack_2c0 + 0x2c;
      uVar13 = 0xbf800000;
      afStack_210[0] = (float)uStack_1d4;
      afStack_2c0[(uint)bVar7 * -2 + 0x2d] = afStack_2c0[(uint)bVar7 * -2 + 0x3c];
      iVar4 = param_1;
      afStack_2c0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x2e] =
           afStack_2c0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x3d];
      FUN_00464700(iVar4,pfVar6,uVar13,uVar14);
      *(uint *)(param_1 + 0x10c20) = 1;
      *(float *)(param_1 + 0x10c24) = _DAT_005f5660;
      (**(code **)(*(int *)(param_1 + 0x2b0) + 0x38))(param_1,"brideexplosion.wav");
    }
    else {
      FUN_0042aa00(param_1,iVar4);
    }
  }
  iVar4 = FUN_005035c0(iStack_30);
  iVar4 = *(int *)(iVar4 + 0x24);
  if (iVar4 == 9) {
    fVar2 = _DAT_005f5654 * param_2;
    *(float *)(param_1 + 0x2598) = _DAT_005f5658 * param_2 * *(float *)(param_1 + 0x10a60);
    *(float *)(param_1 + 0x2594) = *(float *)(param_1 + 0x10a60) * fVar2;
  }
  else {
    fVar2 = _DAT_005f5650 * param_2;
    *(uint *)(param_1 + 0x2594) = *(uint *)(param_1 + 0x2510);
    *(float *)(param_1 + 0x2598) = fVar2 * *(float *)(param_1 + 0x10a60);
  }
  iVar3 = FUN_004287f0(param_1,param_2);
  if (iVar3 != 0) {
    uVar1 = *(uint *)(param_1 + 0x27ac);
    if (uVar1 < 2) {
      if (uVar1 == 1) {
LAB_004632a3:
        uVar13 = 0xe;
      }
      else {
LAB_0046350f:
        uVar13 = 0;
      }
      FUN_00503620(param_1 + 0x2b4,uVar13,1);
    }
    else {
      if (uVar1 < 3) goto LAB_004632a3;
      if (uVar1 != 3) goto LAB_0046350f;
      FUN_00503620(param_1 + 0x2b4,0,1);
      FUN_00436710(PTR_DAT_00609ed0,"%s confused while walking to scriptDest!\n",param_1);
    }
    *(uint *)(param_1 + 0x2510) = 0;
    *(uint *)(param_1 + 0x250c) = *(uint *)(param_1 + 0x2510);
    *(uint *)(param_1 + 0x2508) = *(uint *)(param_1 + 0x250c);
    goto switchD_00463536_default;
  }
  switch(iVar4) {
  case 0:
    (**(code **)(*(int *)(param_1 + 0x2b0) + 0x150))(param_1,param_2);
    if (*(int *)(param_1 + 0x10a78) == 0) {
      iVar4 = FUN_00488970(param_1,param_2);
      if (iVar4 != 0) {
        FUN_00503620(param_1 + 0x2b4,0xe,1);
      }
      break;
    }
    iVar4 = FUN_0040d060(0x3e800000);
    if ((iVar4 != 0) &&
       (iVar4 = FUN_0040c840(*(uint *)(param_1 + 0x10a78),"CHero"), iVar4 != 0)) {
      iVar3 = 0;
      iVar4 = 0;
      while ((iVar3 < *(int *)(0x01E661B8 + 0x150fec) &&
             ((iVar5 = FUN_0040c8f0(*(uint *)(iVar4 + 0x150ff0 + 0x01E661B8),_DAT_01ba5774),
              iVar5 == 0 || (*(int *)(iVar5 + 0x10b84) == 0))))) {
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + 4;
      }
      if (iVar3 == *(int *)(0x01E661B8 + 0x150fec)) {
        FUN_005b7790(auStack_530,"bride-%d?.wav",*(uint *)(param_1 + 0x10b80));
        FUN_00465400(param_1,auStack_530,0x3f800000);
        FUN_00503620(param_1 + 0x2b4,0x17,1);
        (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))(param_1,"hotbride-disappear.wav");
        iVar4 = *(int *)(param_1 + 0x10a78);
        *(uint *)(param_1 + 0x10b84) = 1;
        if ((uint *)(param_1 + 0x10b94) != (uint *)(iVar4 + 0x20)) {
          *(uint *)(param_1 + 0x10b94) = *(uint *)(iVar4 + 0x20);
          *(uint *)(param_1 + 0x10b98) = *(uint *)(iVar4 + 0x24);
          *(uint *)(param_1 + 0x10b9c) = *(uint *)(iVar4 + 0x28);
        }
        *(uint *)(param_1 + 0x10b88) = 0;
        break;
      }
    }
    if (*(float *)(param_1 + 0x10b90) < 0.0) {
      fStack_14 = (float)FUN_0040cf60(0x40000000,0x41a00000);
      *(float *)(param_1 + 0x10b90) = fStack_14;
      FUN_00503620(param_1 + 0x2b4,0xd,1);
      break;
    }
    goto LAB_004640b3;
  case 2:
    FUN_004222d0(auStack_3f0);
    fStack_3ec = (float)FUN_0040cf60(0x40e00000,0x41700000);
    iStack_3bc = param_1;
    iStack_3b8 = param_1;
    fStack_14 = fStack_3ec;
    FUN_00591530(&DAT_0265370c,param_1 + 0x1134 + _DAT_01ba5778 * 0x30,0x3ecccccd,auStack_3f0);
    pfVar6 = afStack_2c0 + 0x11;
    afStack_27c[0] = (float)uStack_30c;
    afStack_2c0[(uint)bVar7 * -2 + 0x12] = afStack_338[(uint)bVar7 * -2 + 0xc];
    afStack_2c0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x13] =
         afStack_338[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd];
    FUN_00408d70(param_1,pfVar6);
    pfVar6 = afStack_128 + 0x1a;
    afStack_c0[0] = (float)uStack_2f4;
    afStack_128[(uint)bVar7 * -2 + 0x1b] = afStack_338[(uint)bVar7 * -2 + 0x12];
    iVar4 = param_1;
    afStack_128[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x1c] =
         afStack_338[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x13];
    FUN_00488110(iVar4,pfVar6);
    *(uint *)(param_1 + 0x10ba0) = 1;
    break;
  case 3:
    FUN_004222d0(auStack_42c);
    fStack_428 = (float)FUN_0040cf60(0x40e00000,0x41700000);
    iStack_3f8 = param_1;
    iStack_3f4 = param_1;
    fStack_14 = fStack_428;
    FUN_00591530(&DAT_0265370c,param_1 + 0x1134 + _DAT_01ba5778 * 0x30,0x3ecccccd,auStack_42c);
    pfVar6 = afStack_8c + 2;
    afStack_8c[2] = (float)uStack_78;
    afStack_8c[(uint)bVar7 * -2 + 3] = afStack_8c[(uint)bVar7 * -2 + 6];
    afStack_8c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
         afStack_8c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
    FUN_00408d70(param_1,pfVar6);
    pfVar6 = afStack_128 + 0x14;
    afStack_d8[0] = (float)uStack_1f8;
    afStack_128[(uint)bVar7 * -2 + 0x15] = afStack_2c0[(uint)bVar7 * -2 + 0x33];
    iVar4 = param_1;
    afStack_128[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x16] =
         afStack_2c0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x34];
    FUN_00488110(iVar4,pfVar6);
    break;
  case 7:
    if (*(int *)(param_1 + 0x10c20) == 0) {
      FUN_00546a90(param_1 + 0x2b4,_DAT_01ba5794);
      pfVar6 = afStack_1b8 + 0x11;
      afStack_174[0] = (float)uStack_21c;
      afStack_1b8[(uint)bVar7 * -2 + 0x12] = afStack_2c0[(uint)bVar7 * -2 + 0x2a];
      afStack_1b8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x13] =
           afStack_2c0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x2b];
      FUN_00408d70(param_1,pfVar6);
      iVar4 = param_1 + 0x30;
      uVar14 = 0;
      uStack_24c = uStack_204;
      afStack_2c0[(uint)bVar7 * -2 + 0x1e] = afStack_2c0[(uint)bVar7 * -2 + 0x30];
      afStack_2c0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x1f] =
           afStack_2c0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x31];
      uVar13 = 1;
      afStack_264[0] = (float)uStack_24c;
      afStack_2c0[(uint)bVar7 * -2 + 0x18] = afStack_2c0[(uint)bVar7 * -2 + 0x1e];
      afStack_2c0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x19] =
           afStack_2c0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x1f];
      FUN_0049e680(0x01C3DEB4,afStack_2c0 + 0x17,iVar4,uVar13,uVar14);
      uVar14 = 0;
      uVar13 = 1;
      pfVar6 = (float *)(param_1 + 0x34 + (uint)bVar7 * -8);
      afStack_234[0] = *(float *)(param_1 + 0x30);
      afStack_2c0[(uint)bVar7 * -2 + 0x24] = *pfVar6;
      afStack_2c0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x25] = pfVar6[(uint)bVar7 * -2 + 1];
      afStack_234[0] = afStack_234[0] + _DAT_005d10a4;
      FUN_0049e680(0x01C3DEB4,afStack_2c0 + 0x17,afStack_2c0 + 0x23,uVar13,uVar14);
    }
    break;
  case 8:
    (**(code **)(*(int *)(param_1 + 0x2b0) + 0x150))(param_1,param_2);
    if (*(int *)(param_1 + 0x10a78) == 0) {
      iVar4 = FUN_00488970(param_1,param_2);
      if (iVar4 != 0) {
        FUN_00503620(param_1 + 0x2b4,0xe,1);
      }
    }
    else {
      if ((*(float *)(param_1 + 0x25a8) < _DAT_005f564c) || (*(float *)(param_1 + 0x10b90) < 0.0)) {
        FUN_00503620(param_1 + 0x2b4,0,1);
        fStack_14 = (float)FUN_0040cf60(0x40000000,0x41a00000);
        *(float *)(param_1 + 0x10b90) = fStack_14;
      }
      if (*(int *)(param_1 + 0x10ba0) == 0) {
        FUN_00503620(param_1 + 0x2b4,9,1);
      }
      else {
        FUN_00503620(param_1 + 0x2b4,0x19,1);
        *(uint *)(param_1 + 0x10ba0) = 0;
      }
    }
    break;
  case 9:
    if (*(float *)(param_1 + 0x10b8c) <= 0.0) {
      FUN_005b7790(auStack_5f8,"bride-%d?.wav",*(uint *)(param_1 + 0x10b80));
      FUN_00465400(param_1,auStack_5f8,0x3f800000);
      iVar4 = FUN_0040d060(0x3e4ccccd);
      if (iVar4 != 0) {
        FUN_00465400(param_1,auStack_5f8,0x3f800000);
      }
    }
    (**(code **)(*(int *)(param_1 + 0x2b0) + 0x150))(param_1,param_2);
    iVar4 = param_1 + 0x2b4;
    if (*(int *)(param_1 + 0x10a78) != 0) {
      if (0.0 <= *(float *)(param_1 + 0x10b90)) {
        afStack_150[3] = 0.0;
        afStack_150[5] = (float)0x40000000;
        afStack_150[4] = 0.0;
        uVar13 = (**(code **)(*(int *)(*(int *)(param_1 + 0x10a78) + 0x2b0) + 0xcc))
                           (*(int *)(param_1 + 0x10a78),afStack_1b8 + 0x1d,0x3f000000,0x3db2b8c2);
        iVar3 = FUN_00423000(param_1,*(int *)(param_1 + 0x10a78) + 0x20,uVar13);
        if (iVar3 < 0) {
          FUN_00436710(PTR_DAT_00609ed0,"%s gave up chase - I'm confused\n",param_1);
          FUN_00503620(iVar4,8,1);
        }
        else if (iVar3 < 1) {
          iVar4 = *(int *)(param_1 + 0x10a78);
          fStack_1a4 = *(float *)(iVar4 + 0x20) - *(float *)(param_1 + 0x20);
          fStack_1a0 = *(float *)(iVar4 + 0x24) - *(float *)(param_1 + 0x24);
          fStack_19c = *(float *)(iVar4 + 0x28) - *(float *)(param_1 + 0x28);
          fStack_cc = fStack_1a4;
          afStack_128[(uint)bVar7 * -2 + 0x18] = afStack_1b8[(uint)bVar7 * -2 + 6];
          afStack_128[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x19] =
               afStack_1b8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
          if (&fStack_138 != afStack_128 + 0x17) {
            fStack_138 = fStack_cc;
            fStack_134 = fStack_c8;
            fStack_130 = fStack_c4;
          }
          if ((float)_DAT_005d1094 <
              SQRT(fStack_130 * fStack_130 + fStack_138 * fStack_138 + fStack_134 * fStack_134)) {
            FUN_005838f0(&fStack_138);
            uStack_15c = afStack_9c[3];
            afStack_1b8[(uint)bVar7 * -2 + 0x18] = afStack_8c[(uint)bVar7 * -2];
            afStack_1b8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x19] =
                 afStack_8c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
            fStack_14 = (float)FUN_0040d0c0(fStack_158 - *(float *)(param_1 + 0x34));
            if (ABS(fStack_14) < (float)_DAT_005d109c) {
              fStack_14 = (float)FUN_0040cf60(0xbf490fdb,0x3f490fdb);
              *(float *)(param_1 + 0x34) = fStack_14 + *(float *)(param_1 + 0x34);
              FUN_00503620(param_1 + 0x2b4,3,1);
            }
          }
        }
        else if (*(float *)(param_1 + 0x10a74) <= 0.0) {
          FUN_00503620(iVar4,2,1);
          (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))(param_1,"hotbride-bite?.wav");
          *(uint *)(param_1 + 0x10a74) = 0x3f800000;
        }
      }
      else {
        fStack_14 = (float)FUN_0040cf60(0x40000000,0x41a00000);
        *(float *)(param_1 + 0x10b90) = fStack_14;
        FUN_00503620(iVar4,0,1);
      }
      break;
    }
    iVar4 = FUN_00488970(param_1,param_2);
    if (iVar4 == 0) break;
LAB_004640b3:
    FUN_00503620(param_1 + 0x2b4,0xe,1);
    break;
  case 0xc:
    iVar4 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
    iVar4 = (**(code **)(*(int *)(iVar4 + 0x2b0) + 0x114))(iVar4);
    if ((iVar4 == 0) && (iVar4 = FUN_0048e340(0x01C38BC0,param_1 + 0x10b1c), iVar4 != 0)) {
      FUN_00503620(param_1 + 0x2b4,0xd,1);
    }
    break;
  case 0xe:
    if (*(float *)(param_1 + 0x10b8c) <= 0.0) {
      FUN_005b7790(auStack_4cc,"bride-%d?.wav",*(uint *)(param_1 + 0x10b80));
      FUN_00465400(param_1,auStack_4cc,0x3f800000);
      iVar4 = FUN_0040d060(0x3e4ccccd);
      if (iVar4 != 0) {
        FUN_00465400(param_1,auStack_4cc,0x3f800000);
      }
    }
    (**(code **)(*(int *)(param_1 + 0x2b0) + 0x150))(param_1,param_2);
    uVar13 = 0x3FC00000;
    iVar4 = param_1 + 0x2b4;
    if (*(int *)(param_1 + 0x10a78) == 0) {
      iVar3 = FUN_00488970(param_1,param_2);
      if (iVar3 == 0) {
        FUN_00503620(iVar4,0,1);
      }
    }
    else {
      uStack_48 = 0x3FC00000;
      *(uint *)(param_1 + 0x2510) = 0;
      *(uint *)(param_1 + 0x250c) = *(uint *)(param_1 + 0x2510);
      *(uint *)(param_1 + 0x2508) = *(uint *)(param_1 + 0x250c);
      afStack_1c8[0] = 0.0;
      afStack_1c8[1] = 0.0;
      afStack_1c8[2] = (float)uVar13;
      uVar13 = (**(code **)(*(int *)(*(int *)(param_1 + 0x10a78) + 0x2b0) + 0xcc))
                         (*(int *)(param_1 + 0x10a78),afStack_2c0 + 0x3e,0x3f000000,0x3db2b8c2);
      iVar3 = FUN_00423000(param_1,*(int *)(param_1 + 0x10a78) + 0x20,uVar13);
      if (iVar3 < 0) {
        FUN_00436710(PTR_DAT_00609ed0,"%s gave up chase - I'm confused\n",param_1);
        FUN_00503620(iVar4,0,1);
      }
      else if ((0 < iVar3) && (*(float *)(param_1 + 0x10a74) <= 0.0)) {
        iVar3 = FUN_0040cfc0(0,2);
        if (iVar3 == 0) {
          FUN_00503620(iVar4,0x13,1);
        }
        if (iVar3 == 1) {
          FUN_00503620(param_1 + 0x2b4,0x14,1);
        }
        if (iVar3 == 2) {
          FUN_00503620(param_1 + 0x2b4,0x15,1);
          (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))(param_1,"hotbride-swipe?.wav");
        }
        *(uint *)(param_1 + 0x10a74) = 0x3f800000;
      }
    }
    break;
  case 0xf:
    iVar4 = FUN_0048e340(0x01C38BC0,param_1 + 0x10b1c);
    if (iVar4 != 0) {
      FUN_00503620(param_1 + 0x2b4,0xb,1);
    }
    break;
  case 0x10:
    goto switchD_004646db_caseD_10;
  case 0x11:
    if ((*(int *)(param_1 + 0x10a64) != 0) || (*(int *)(param_1 + 0xdc) != 0)) break;
    FUN_005469a0(param_1 + 0x2b4,0);
    pfVar6 = afStack_2c0 + 0x35;
    afStack_1ec[0] = afStack_2c0[2];
    afStack_2c0[(uint)bVar7 * -2 + 0x36] = afStack_2c0[(uint)bVar7 * -2 + 3];
    afStack_2c0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x37] =
         afStack_2c0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
    FUN_00408d70(param_1,pfVar6);
    uVar14 = 0;
    pfVar6 = afStack_128 + 2;
    afStack_128[2] = (float)uStack_240;
    afStack_128[(uint)bVar7 * -2 + 3] = afStack_2c0[(uint)bVar7 * -2 + 0x21];
    uVar13 = 0x01CB8284;
    afStack_128[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
         afStack_2c0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x22];
    FUN_004c9ad0(uVar13,pfVar6,uVar14);
    goto switchD_004646db_caseD_10;
  case 0x12:
    iVar4 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
    iVar4 = (**(code **)(*(int *)(iVar4 + 0x2b0) + 0x114))(iVar4);
    if ((iVar4 == 0) && (iVar4 = FUN_0048e340(0x01C38BC0,param_1 + 0x10b1c), iVar4 != 0)) {
      FUN_00503620(param_1 + 0x2b4,0xd,1);
    }
    break;
  case 0x13:
    FUN_004222d0(auStack_468);
    fStack_464 = (float)FUN_0040cf60(0x40e00000,0x41700000);
    iStack_434 = param_1;
    iStack_430 = param_1;
    fStack_14 = fStack_464;
    FUN_00591530(&DAT_0265370c,_DAT_01ba5778 * 0x30 + param_1 + 0x1134,0x3ecccccd,auStack_468);
    pfVar6 = afStack_128 + 0xb;
    afStack_fc[0] = afStack_1b8[2];
    afStack_128[(uint)bVar7 * -2 + 0xc] = afStack_1b8[(uint)bVar7 * -2 + 3];
    afStack_128[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd] =
         afStack_1b8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
    FUN_00408d70(param_1,pfVar6);
    pfVar6 = afStack_128 + 5;
    afStack_114[0] = (float)uStack_a8;
    afStack_128[(uint)bVar7 * -2 + 6] = afStack_128[(uint)bVar7 * -2 + 0x21];
    iVar4 = param_1;
    afStack_128[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
         afStack_128[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x22];
    FUN_00488110(iVar4,pfVar6);
    *(uint *)(param_1 + 0x10ba0) = 1;
    break;
  case 0x14:
    FUN_004222d0(auStack_3b4);
    fStack_3b0 = (float)FUN_0040cf60(0x40e00000,0x41700000);
    iStack_380 = param_1;
    iStack_37c = param_1;
    fStack_14 = fStack_3b0;
    FUN_00591530(&DAT_0265370c,_DAT_01ba5778 * 0x30 + param_1 + 0x1134,0x3ecccccd,auStack_3b4);
    pfVar6 = afStack_8c + 8;
    afStack_6c[0] = (float)uStack_318;
    afStack_8c[(uint)bVar7 * -2 + 9] = afStack_338[(uint)bVar7 * -2 + 9];
    afStack_8c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10] =
         afStack_338[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10];
    FUN_00408d70(param_1,pfVar6);
    pfVar6 = afStack_128 + 0xe;
    afStack_f0[0] = (float)uStack_33c;
    afStack_128[(uint)bVar7 * -2 + 0xf] = afStack_338[(uint)bVar7 * -2];
    iVar4 = param_1;
    afStack_128[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x10] =
         afStack_338[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
    FUN_00488110(iVar4,pfVar6);
    *(uint *)(param_1 + 0x10ba0) = 1;
    break;
  case 0x15:
    FUN_004222d0(auStack_378);
    fStack_374 = (float)FUN_0040cf60(0x40e00000,0x41700000);
    iStack_344 = param_1;
    iStack_340 = param_1;
    fStack_14 = fStack_374;
    FUN_00591530(&DAT_0265370c,_DAT_01ba5780 * 0x30 + param_1 + 0x1134,0x3ecccccd,auStack_378);
    pfVar6 = afStack_338 + 2;
    afStack_338[2] = (float)uStack_300;
    afStack_338[(uint)bVar7 * -2 + 3] = afStack_338[(uint)bVar7 * -2 + 0xf];
    afStack_338[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
         afStack_338[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x10];
    FUN_00408d70(param_1,pfVar6);
    pfVar6 = afStack_2c0 + 0x1a;
    afStack_258[0] = (float)uStack_12c;
    afStack_2c0[(uint)bVar7 * -2 + 0x1b] = afStack_128[(uint)bVar7 * -2];
    iVar4 = param_1;
    afStack_2c0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x1c] =
         afStack_128[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
    FUN_00488110(iVar4,pfVar6);
    break;
  case 0x17:
    if (*(float *)(param_1 + 0x10b8c) <= 0.0) {
      FUN_005b7790(auStack_594,"bride-%d?.wav",*(uint *)(param_1 + 0x10b80));
      FUN_00465400(param_1,auStack_594,0x3f800000);
      iVar4 = FUN_0040d060(0x3e4ccccd);
      if (iVar4 != 0) {
        FUN_00465400(param_1,auStack_594,0x3f800000);
      }
    }
    switch(*(uint *)(param_1 + 0x10b84)) {
    case 0:
      FUN_00503620(param_1 + 0x2b4,0,1);
      break;
    case 1:
      fVar2 = *(float *)(param_1 + 0x10b88) + param_2;
      *(float *)(param_1 + 0x10b88) = fVar2;
      if (0x3F800000 < fVar2) {
        *(uint *)(param_1 + 0x10b84) = 2;
        *(float *)(param_1 + 0x10b88) = 0x3F800000;
      }
      afStack_9c[0] = 0.0;
      afStack_9c[1] = 3.0;
      afStack_9c[2] = 0.0;
      iStack_38 = FUN_00547890(param_1 + 0x2b4);
      iStack_18 = 0;
      iVar4 = param_1 + 0x2b4;
      if (0 < *(int *)(iStack_38 + 0x1d1f8)) {
        do {
          iStack_3c = iVar4;
          FUN_00546a90(iStack_3c,iStack_18);
          pfVar6 = afStack_2c0 + 0xe;
          afStack_288[0] = (float)uStack_198;
          afStack_2c0[(uint)bVar7 * -2 + 0xf] = afStack_1b8[(uint)bVar7 * -2 + 9];
          afStack_2c0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x10] =
               afStack_1b8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10];
          FUN_00408d70(param_1,pfVar6);
          uVar14 = 0xffff;
          pfVar6 = afStack_128 + 0x23;
          uVar13 = 0x3f000000;
          afStack_294[0] = (float)uStack_b4;
          afStack_2c0[(uint)bVar7 * -2 + 0xc] = afStack_128[(uint)bVar7 * -2 + 0x1e];
          afStack_2c0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd] =
               afStack_128[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x1f];
          iVar3 = iStack_18 + 1;
          FUN_0049d230(0x01C3DEB4,afStack_2c0 + 0xb,uVar13,pfVar6,uVar14);
          iVar4 = iStack_3c;
          iStack_18 = iVar3;
        } while (iVar3 < *(int *)(iStack_38 + 0x1d1f8));
      }
      break;
    case 2:
      iStack_28 = 0;
      iStack_44 = 1;
      pfStack_20 = (float *)(param_1 + 0x10b94);
      for (iStack_24 = 0; fVar2 = 0x3F800000, iStack_24 < *(int *)(0x01E661B8 + 0x14f0a8);
          iStack_24 = iStack_24 + 1) {
        iVar4 = *(int *)(0x01E661B8 + iStack_28 + 0x14f0ac);
        if (((iVar4 != 0) && (iVar4 != param_1)) &&
           (iVar3 = (**(code **)(*(int *)(iVar4 + 0x2b0) + 0x114))(iVar4), iVar3 < 1)) {
          fStack_270 = *(float *)(iVar4 + 0x20) - *pfStack_20;
          fStack_26c = *(float *)(iVar4 + 0x24) - pfStack_20[1];
          fStack_268 = *(float *)(iVar4 + 0x28) - pfStack_20[2];
          fStack_228 = fStack_270;
          afStack_2c0[(uint)bVar7 * -2 + 0x27] = afStack_2c0[(uint)bVar7 * -2 + 0x15];
          afStack_2c0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x28] =
               afStack_2c0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x16];
          if (SQRT(fStack_220 * fStack_220 + fStack_228 * fStack_228 + fStack_224 * fStack_224) <
              (float)_DAT_005d10b4) goto switchD_00463536_default;
        }
        iStack_28 = iStack_28 + 4;
      }
      if (iStack_44 != 0) {
        *(uint *)(param_1 + 0x10b84) = 3;
        *(float *)(param_1 + 0x10b88) = fVar2;
        *(float *)(param_1 + 0x20) = *pfStack_20;
        *(float *)(param_1 + 0x24) = pfStack_20[1];
        *(float *)(param_1 + 0x28) = pfStack_20[2];
        iVar4 = *(int *)(param_1 + 0x10a78);
        if (iVar4 != 0) {
          fStack_1bc = *(float *)(iVar4 + 0x20) - *(float *)(param_1 + 0x20);
          afStack_1b8[0] = *(float *)(iVar4 + 0x24) - *(float *)(param_1 + 0x24);
          afStack_1b8[1] = *(float *)(iVar4 + 0x28) - *(float *)(param_1 + 0x28);
          afStack_168[0] = fStack_1bc;
          afStack_1b8[(uint)bVar7 * -2 + 0x15] = afStack_1b8[(uint)bVar7 * -2];
          afStack_1b8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x16] =
               afStack_1b8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
          FUN_005838f0(afStack_1b8 + 0x14);
          fStack_18c = fStack_2ac;
          afStack_1b8[(uint)bVar7 * -2 + 0xc] = afStack_2c0[(uint)bVar7 * -2 + 6];
          afStack_1b8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd] =
               afStack_2c0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
          if ((float *)(param_1 + 0x30) != afStack_1b8 + 0xb) {
            *(float *)(param_1 + 0x30) = fStack_18c;
            *(uint *)(param_1 + 0x34) = uStack_188;
            *(uint *)(param_1 + 0x38) = uStack_184;
          }
          *(uint *)(param_1 + 0x38) = 0;
          *(uint *)(param_1 + 0x30) = 0;
        }
        (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))(param_1,"hotbride-disappear.wav");
      }
      break;
    case 3:
      iVar4 = param_1 + 0x2b4;
      afStack_150[0] = 0.0;
      afStack_150[1] = 3.0;
      afStack_150[2] = 0.0;
      iStack_34 = FUN_00547890(iVar4);
      iStack_1c = 0;
      iStack_2c = iVar4;
      if (0 < *(int *)(iStack_34 + 0x1d1f8)) {
        do {
          FUN_00546a90(iStack_2c,iStack_1c);
          pfVar6 = afStack_128 + 8;
          afStack_108[0] = (float)uStack_1e0;
          afStack_128[(uint)bVar7 * -2 + 9] = afStack_2c0[(uint)bVar7 * -2 + 0x39];
          afStack_128[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10] =
               afStack_2c0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x3a];
          FUN_00408d70(param_1,pfVar6);
          uVar15 = 0xffff;
          pfVar6 = afStack_1b8 + 0x1a;
          uVar14 = 0x3f000000;
          pfVar12 = afStack_338 + 0x14;
          afStack_2e8[0] = (float)uStack_2a0;
          afStack_338[(uint)bVar7 * -2 + 0x15] = afStack_2c0[(uint)bVar7 * -2 + 9];
          uVar13 = 0x01C3DEB4;
          afStack_338[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x16] =
               afStack_2c0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10];
          FUN_0049d230(uVar13,pfVar12,uVar14,pfVar6,uVar15);
          iStack_1c = iStack_1c + 1;
        } while (iStack_1c < *(int *)(iStack_34 + 0x1d1f8));
      }
      fVar2 = *(float *)(param_1 + 0x10b88) - param_2;
      *(float *)(param_1 + 0x10b88) = fVar2;
      if (fVar2 < 0.0) {
        *(uint *)(param_1 + 0x10b88) = 0;
        *(uint *)(param_1 + 0x10b84) = 0;
        FUN_00503620(iStack_2c,0xe,1);
        fStack_14 = (float)FUN_0040cf60(0x40000000,0x41a00000);
        *(float *)(param_1 + 0x10b90) = fStack_14;
      }
    }
    break;
  case 0x1a:
    iVar4 = FUN_0048e340(0x01C38BC0,param_1 + 0x10b1c);
    if (iVar4 != 0) {
      FUN_00503620(param_1 + 0x2b4,0,1);
    }
  }
switchD_00463536_default:
  if (0.0 < *(float *)(param_1 + 0x10a74)) {
    *(float *)(param_1 + 0x10a74) = *(float *)(param_1 + 0x10a74) - param_2;
  }
  iVar4 = FUN_005035c0(param_1 + 0x2b4);
  iStack_40 = *(int *)(iVar4 + 0x24);
  if ((((iStack_40 != 0x11) && (iStack_40 != 0x10)) && (iStack_40 != 0xf)) ||
     (*(int *)(param_1 + 0xdc) != 0)) {
    if (iStack_40 == 3) {
      *(float *)(param_1 + 0x2510) = *(float *)(param_1 + 0x2510) * (float)_DAT_005d10ac;
    }
    iVar4 = *(int *)(param_1 + 0x10a78);
    if ((iVar4 != 0) &&
       (iVar4 = (**(code **)(*(int *)(iVar4 + 0x2b0) + 0xfc))(iVar4), iVar4 == param_1)) {
      FUN_00537e30(0x01E661B8,*(uint *)(param_1 + 0x10a78));
    }
    FUN_00423a10(param_1,param_2);
    fStack_2dc = *(float *)(param_1 + 0x2588) * param_2;
    fStack_2d8 = *(float *)(param_1 + 0x258c) * param_2;
    fStack_2d4 = *(float *)(param_1 + 0x2590) * param_2;
    fStack_e4 = fStack_2dc;
    afStack_128[(uint)bVar7 * -2 + 0x12] = afStack_338[(uint)bVar7 * -2 + 0x18];
    afStack_128[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x13] =
         afStack_338[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x19];
    fStack_180 = fStack_e4 + *(float *)(param_1 + 0x257c);
    fStack_17c = fStack_e0 + *(float *)(param_1 + 0x2580);
    fStack_178 = fStack_dc + *(float *)(param_1 + 0x2584);
    fStack_60 = fStack_180;
    afStack_8c[(uint)bVar7 * -2 + 0xc] = afStack_1b8[(uint)bVar7 * -2 + 0xf];
    afStack_8c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd] =
         afStack_1b8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x10];
    afStack_2d0[3] = fStack_60 + *(float *)(param_1 + 0x2508);
    afStack_2c0[0] = fStack_5c + *(float *)(param_1 + 0x250c);
    afStack_2c0[1] = fStack_58 + *(float *)(param_1 + 0x2510);
    afStack_324[0] = afStack_2d0[3];
    afStack_338[(uint)bVar7 * -2 + 6] = afStack_2c0[(uint)bVar7 * -2];
    afStack_338[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
         afStack_2c0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
    *(uint *)(param_1 + 0x2584) = 0;
    *(uint *)(param_1 + 0x2580) = *(uint *)(param_1 + 0x2584);
    *(float *)(param_1 + 0x257c) = *(float *)(param_1 + 0x2580);
    *(uint *)(param_1 + 0x2510) = 0;
    *(float *)(param_1 + 0x250c) = *(float *)(param_1 + 0x2510);
    *(float *)(param_1 + 0x2508) = *(float *)(param_1 + 0x2510);
    FUN_00423a60(param_1,afStack_338 + 5);
  }
  if (iStack_40 != 0x17) {
    *(uint *)(param_1 + 0x10b84) = 0;
  }
  FUN_00424470(param_1);
  FUN_00544f00(param_1 + 0x2b4);
  FUN_00429e90(param_1,param_2);
  return;
switchD_004646db_caseD_10:
  *(uint *)(param_1 + 0x10a64) = 1;
  goto switchD_00463536_default;
}
