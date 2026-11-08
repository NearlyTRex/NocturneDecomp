// Name: FUN_004d3a70
// Address: 004d3a70
// Address Range: [[004d3a70, 004d42ce]]
// Convention: unknown
// Signature: void FUN_004d3a70(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004d3a70(int param_1,float param_2)

{
  uint uVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  float afStackY_114c [997];
  float *pfVar7;
  uint uVar8;
  byte auStack_1a0 [4];
  float fStack_19c;
  int iStack_16c;
  int iStack_168;
  uint uStack_164;
  float afStack_160 [4];
  float fStack_150;
  uint uStack_14c;
  float fStack_140;
  uint uStack_13c;
  float fStack_138;
  float afStack_134 [3];
  float fStack_128;
  float afStack_124 [4];
  float fStack_114;
  uint uStack_110;
  float afStack_104 [3];
  float afStack_f8 [3];
  float afStack_ec [3];
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float afStack_c8 [3];
  float afStack_bc [3];
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  uint uStack_a4;
  uint uStack_98;
  uint uStack_8c;
  float fStack_88;
  uint uStack_80;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  uint uStack_68;
  float fStack_64;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  uint uStack_44;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar6 = 0;
  iVar3 = FUN_004244b0(param_1,param_2);
  if (iVar3 == 0) {
    return;
  }
  *(uint *)(param_1 + 0x2510) = 0;
  *(uint *)(param_1 + 0x250c) = *(uint *)(param_1 + 0x2510);
  *(uint *)(param_1 + 0x2508) = *(uint *)(param_1 + 0x250c);
  fStack_34 = param_2 * *(float *)(param_1 + 0x10a60);
  iVar3 = param_1 + 0x2b4;
  while (0.0 < fStack_34) {
    uVar8 = FUN_005030c0(iVar3,afStack_124 + 0x3c);
    FUN_0042aa00(param_1,uVar8);
  }
  *(uint *)(param_1 + 0x2594) = *(uint *)(param_1 + 0x2510);
  FUN_0042b2a0(param_1,param_2 * *(float *)(param_1 + 0x10a60));
  iVar4 = FUN_005035c0(iVar3);
  iVar4 = *(int *)(iVar4 + 0x24);
  iStack_1c = iVar4;
  iVar5 = FUN_004287f0(param_1,param_2);
  if (iVar5 == 0) {
    switch(iVar4) {
    case 0:
    case 6:
      (**(code **)(*(int *)(param_1 + 0x2b0) + 0x150))(param_1,param_2);
      iVar3 = *(int *)(param_1 + 0x10a78);
      iStack_24 = param_1 + 0x2b4;
      if (iVar3 == 0) {
        iVar3 = FUN_00488970(param_1,param_2);
        if (iVar3 != 0) {
          FUN_00503620(iStack_24,1,1);
        }
      }
      else {
        fStack_50 = *(float *)(iVar3 + 0x20) - *(float *)(param_1 + 0x20);
        fStack_4c = *(float *)(iVar3 + 0x24) - *(float *)(param_1 + 0x24);
        fStack_48 = *(float *)(iVar3 + 0x28) - *(float *)(param_1 + 0x28);
        fStack_128 = fStack_50;
        afStack_124[(uint)bVar6 * -2] = afStack_124[(uint)bVar6 * -2 + 0x36];
        afStack_124[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
             afStack_124[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x37];
        fStack_38 = SQRT(afStack_124[1] * afStack_124[1] +
                         fStack_128 * fStack_128 + afStack_124[0] * afStack_124[0]);
        fStack_2c = fStack_38;
        if (fStack_38 < 0x40000000) {
          FUN_005838f0(&fStack_128);
          uStack_8c = uStack_80;
          afStack_124[(uint)bVar6 * -2 + 0x27] = afStack_124[(uint)bVar6 * -2 + 0x2a];
          afStack_124[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x28] =
               afStack_124[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x2b];
          fStack_14 = (float)FUN_0040d0c0(fStack_88 - *(float *)(param_1 + 0x34));
          if (ABS(fStack_14) < (float)_DAT_005da661) {
            if (iStack_1c == 0) {
              uVar8 = 2;
            }
            else {
              uVar8 = 8;
            }
            FUN_00503620(iStack_24,uVar8,1);
            iVar3 = FUN_00550b70(*(uint *)(param_1 + 0x10af8));
            if (iVar3 == 0) {
              uVar8 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))
                                (param_1,"hotdemon-attack.wav");
              *(uint *)(param_1 + 0x10af8) = uVar8;
            }
          }
        }
        if (fStack_2c < *(float *)(param_1 + 0x10a70)) {
          if (_DAT_005f8868 <= fStack_2c) {
            FUN_00503620(param_1 + 0x2b4,7,1);
            *(uint *)(param_1 + 0x10a74) = 0;
          }
          else {
            FUN_00503620(param_1 + 0x2b4,1,1);
            *(uint *)(param_1 + 0x10a74) = 0;
          }
        }
      }
      break;
    case 1:
    case 7:
    case 0xf:
      (**(code **)(*(int *)(param_1 + 0x2b0) + 0x150))(param_1,param_2);
      fVar2 = 0x40000000;
      iStack_20 = param_1 + 0x2b4;
      if (*(int *)(param_1 + 0x10a78) == 0) {
        iVar3 = FUN_00488970(param_1,param_2);
        if (iVar3 == 0) {
          if (iStack_1c == 1) {
            FUN_00503620(iStack_20,0,1);
          }
          else {
            FUN_00503620(iStack_20,6,1);
          }
        }
        else {
          FUN_00503620(iStack_20,1,1);
        }
      }
      else {
        fStack_28 = 0x40000000;
        *(uint *)(param_1 + 0x2510) = 0;
        *(uint *)(param_1 + 0x250c) = *(uint *)(param_1 + 0x2510);
        *(uint *)(param_1 + 0x2508) = *(uint *)(param_1 + 0x250c);
        afStack_134[0] = 0.0;
        afStack_134[1] = 0.0;
        afStack_134[2] = fVar2;
        uVar8 = (**(code **)(*(int *)(*(int *)(param_1 + 0x10a78) + 0x2b0) + 0xcc))
                          (*(int *)(param_1 + 0x10a78),afStack_160 + 0xb,0x3f000000,0x3e32b8c2);
        iVar3 = FUN_00423000(param_1,*(int *)(param_1 + 0x10a78) + 0x20,uVar8);
        if (-1 < iVar3) {
          iVar3 = *(int *)(param_1 + 0x10a78);
          afStack_124[2] = *(float *)(param_1 + 0x20) - *(float *)(iVar3 + 0x20);
          afStack_124[3] = *(float *)(param_1 + 0x24) - *(float *)(iVar3 + 0x24);
          fStack_114 = *(float *)(param_1 + 0x28) - *(float *)(iVar3 + 0x28);
          fStack_140 = afStack_124[2];
          afStack_160[(uint)bVar6 * -2 + 9] = afStack_124[(uint)bVar6 * -2 + 3];
          afStack_160[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10] =
               afStack_124[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
          fStack_18 = SQRT(fStack_138 * fStack_138 + fStack_140 * fStack_140);
          uStack_13c = 0;
          fStack_30 = fStack_18;
          if ((_DAT_005f8868 < fStack_18) && (iStack_1c != 7)) {
            *(uint *)(param_1 + 0x10a74) = 0;
            FUN_00503620(iStack_20,7,1);
          }
          if ((fStack_30 <= fStack_28) && (*(float *)(param_1 + 0x10a74) <= 0.0)) {
            iVar3 = *(int *)(param_1 + 0x10a78);
            fStack_74 = *(float *)(iVar3 + 0x20) - *(float *)(param_1 + 0x20);
            fStack_70 = *(float *)(iVar3 + 0x24) - *(float *)(param_1 + 0x24);
            fStack_6c = *(float *)(iVar3 + 0x28) - *(float *)(param_1 + 0x28);
            afStack_ec[0] = fStack_74;
            afStack_124[(uint)bVar6 * -2 + 0xf] = afStack_124[(uint)bVar6 * -2 + 0x2d];
            afStack_124[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x10] =
                 afStack_124[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x2e];
            FUN_005838f0(afStack_124 + 0xe);
            uStack_68 = uStack_44;
            afStack_124[(uint)bVar6 * -2 + 0x30] = afStack_124[(uint)bVar6 * -2 + 0x39];
            afStack_124[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x31] =
                 afStack_124[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x3a];
            fStack_14 = (float)FUN_0040d0c0(fStack_64 - *(float *)(param_1 + 0x34));
            if (ABS(fStack_14) < (float)_DAT_005da661) {
              if (iStack_1c == 7) {
                uVar8 = 8;
              }
              else {
                uVar8 = 2;
              }
              FUN_00503620(param_1 + 0x2b4,uVar8,1);
              iVar3 = FUN_00550b70(*(uint *)(param_1 + 0x10af8));
              if (iVar3 == 0) {
                uVar8 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))
                                  (param_1,"hotdemon-attack.wav");
                *(uint *)(param_1 + 0x10af8) = uVar8;
              }
              *(uint *)(param_1 + 0x10a74) = 0x40000000;
            }
          }
          if (*(float *)(param_1 + 0x10a70) < fStack_30) {
            if (iStack_1c == 7) {
              FUN_00503620(param_1 + 0x2b4,6,1);
              *(uint *)(param_1 + 0x10a74) = 0;
            }
            else {
              FUN_00503620(param_1 + 0x2b4,0,1);
              *(uint *)(param_1 + 0x10a74) = 0;
            }
          }
        }
      }
      break;
    case 2:
    case 8:
      FUN_004222d0(auStack_1a0);
      fStack_19c = (float)FUN_0040cf60(0x40e00000,0x41700000);
      iStack_16c = param_1;
      iStack_168 = param_1;
      fStack_14 = fStack_19c;
      FUN_00591530(&DAT_0265370c,_DAT_01cee014 * 0x30 + param_1 + 0x1134,0x3ecccccd,auStack_1a0);
      pfVar7 = afStack_124 + 8;
      afStack_104[0] = (float)uStack_110;
      afStack_124[(uint)bVar6 * -2 + 9] = afStack_124[(uint)bVar6 * -2 + 6];
      afStack_124[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10] =
           afStack_124[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7];
      FUN_00408d70(param_1,pfVar7);
      pfVar7 = afStack_124 + 0xb;
      afStack_f8[0] = (float)uStack_14c;
      afStack_124[(uint)bVar6 * -2 + 0xc] = afStack_160[(uint)bVar6 * -2 + 6];
      iVar3 = param_1;
      afStack_124[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd] =
           afStack_160[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7];
      FUN_00488110(iVar3,pfVar7);
      break;
    case 5:
    case 0xb:
      if ((*(int *)(param_1 + 0x10a64) == 0) && (*(int *)(param_1 + 0xdc) == 0)) {
        FUN_005469a0(param_1 + 0x2b4,0);
        pfVar7 = afStack_124 + 0x1a;
        afStack_bc[0] = (float)uStack_a4;
        afStack_124[(uint)bVar6 * -2 + 0x1b] = afStack_124[(uint)bVar6 * -2 + 0x21];
        afStack_124[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x1c] =
             afStack_124[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x22];
        FUN_00408d70(param_1,pfVar7);
        uVar8 = 0;
        uStack_164 = uStack_98;
        afStack_160[(uint)bVar6 * -2] = afStack_124[(uint)bVar6 * -2 + 0x24];
        afStack_160[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
             afStack_124[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x25];
        FUN_004c9ad0(0x01CB8284,&uStack_164,uVar8);
        *(uint *)(param_1 + 0x10a64) = 1;
      }
    }
    goto switchD_004d42c8_caseD_3;
  }
  uVar1 = *(uint *)(param_1 + 0x27ac);
  if (uVar1 < 2) {
    if (uVar1 == 1) {
LAB_004d3b3e:
      uVar8 = 1;
    }
    else {
LAB_004d3cfb:
      uVar8 = 0;
    }
    FUN_00503620(param_1 + 0x2b4,uVar8,1);
  }
  else {
    if (uVar1 < 3) goto LAB_004d3b3e;
    if (uVar1 != 3) goto LAB_004d3cfb;
    FUN_00503620(iVar3,0,1);
    FUN_00436710(PTR_DAT_00609ed0,"%s confused while walking to scriptDest!\n",param_1);
  }
  *(uint *)(param_1 + 0x2510) = 0;
  *(uint *)(param_1 + 0x250c) = *(uint *)(param_1 + 0x2510);
  *(uint *)(param_1 + 0x2508) = *(uint *)(param_1 + 0x250c);
switchD_004d42c8_caseD_3:
  if (0.0 < *(float *)(param_1 + 0x10a74)) {
    *(float *)(param_1 + 0x10a74) = *(float *)(param_1 + 0x10a74) - param_2;
  }
  iVar3 = FUN_00424430(param_1);
  if (iVar3 != 0) {
    FUN_00423a10(param_1,param_2);
    fStack_5c = *(float *)(param_1 + 0x2588) * param_2;
    fStack_58 = *(float *)(param_1 + 0x258c) * param_2;
    fStack_54 = *(float *)(param_1 + 0x2590) * param_2;
    fStack_b0 = fStack_5c;
    afStack_124[(uint)bVar6 * -2 + 0x1e] = afStack_124[(uint)bVar6 * -2 + 0x33];
    afStack_124[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x1f] =
         afStack_124[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x34];
    afStack_160[2] = fStack_b0 + *(float *)(param_1 + 0x257c);
    afStack_160[3] = fStack_ac + *(float *)(param_1 + 0x2580);
    fStack_150 = fStack_a8 + *(float *)(param_1 + 0x2584);
    fStack_d4 = afStack_160[2];
    afStack_124[(uint)bVar6 * -2 + 0x15] = afStack_160[(uint)bVar6 * -2 + 3];
    afStack_124[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x16] =
         afStack_160[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
    fStack_e0 = fStack_d4 + *(float *)(param_1 + 0x2508);
    fStack_dc = fStack_d0 + *(float *)(param_1 + 0x250c);
    fStack_d8 = fStack_cc + *(float *)(param_1 + 0x2510);
    afStack_c8[0] = fStack_e0;
    afStack_124[(uint)bVar6 * -2 + 0x18] = afStack_124[(uint)bVar6 * -2 + 0x12];
    afStack_124[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x19] =
         afStack_124[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x13];
    *(uint *)(param_1 + 0x2584) = 0;
    *(uint *)(param_1 + 0x2580) = *(uint *)(param_1 + 0x2584);
    *(float *)(param_1 + 0x257c) = *(float *)(param_1 + 0x2580);
    *(uint *)(param_1 + 0x2510) = 0;
    *(uint *)(param_1 + 0x250c) = *(uint *)(param_1 + 0x2510);
    *(float *)(param_1 + 0x2508) = *(float *)(param_1 + 0x250c);
    FUN_00423a60(param_1,afStack_124 + 0x17);
  }
  FUN_00424470(param_1);
  FUN_00544f00(param_1 + 0x2b4);
  FUN_00429e90(param_1,param_2);
  return;
}
