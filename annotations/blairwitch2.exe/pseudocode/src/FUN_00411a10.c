// Name: FUN_00411a10
// Address: 00411a10
// Address Range: [[00411a10, 00412497]]
// Convention: unknown
// Signature: void FUN_00411a10(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00411a10(int param_1,float param_2)

{
  uint uVar1;
  float fVar2;
  int iVar3;
  byte bVar4;
  float afStackY_11ac [997];
  float *pfVar5;
  uint uVar6;
  uint uVar7;
  byte auStack_200 [4];
  float fStack_1fc;
  int iStack_1cc;
  int iStack_1c8;
  uint uStack_1c4;
  float afStack_1c0 [4];
  float fStack_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  uint uStack_1a0;
  float fStack_19c;
  float afStack_194 [3];
  float afStack_188 [3];
  float fStack_17c;
  float afStack_178 [5];
  float afStack_164 [3];
  uint uStack_158;
  float fStack_154;
  uint uStack_14c;
  float fStack_148;
  uint uStack_140;
  uint uStack_134;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  uint uStack_11c;
  float afStack_110 [3];
  float afStack_104 [3];
  uint uStack_f8;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  uint uStack_e0;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  uint uStack_c8;
  float afStack_bc [3];
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float afStack_a4 [3];
  uint uStack_98;
  float fStack_94;
  float afStack_8c [3];
  float fStack_80;
  uint uStack_7c;
  float fStack_78;
  float afStack_74 [3];
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
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
  int iStack_28;
  int iStack_24;
  int iStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar4 = 0;
  iVar3 = FUN_004244b0(param_1,param_2);
  if (iVar3 == 0) {
    return;
  }
  *(uint *)(param_1 + 0x2510) = 0;
  *(uint *)(param_1 + 0x250c) = *(uint *)(param_1 + 0x2510);
  *(uint *)(param_1 + 0x2508) = *(uint *)(param_1 + 0x250c);
  fStack_38 = param_2 * *(float *)(param_1 + 0x10a60);
  while (0.0 < fStack_38) {
    uVar6 = FUN_005030c0(param_1 + 0x2b4,afStack_178 + 0x50);
    FUN_0042aa00(param_1,uVar6);
  }
  *(uint *)(param_1 + 0x2594) = *(uint *)(param_1 + 0x2510);
  FUN_0042b2a0(param_1,param_2 * *(float *)(param_1 + 0x10a60));
  iStack_20 = param_1 + 0x2b4;
  iVar3 = FUN_005035c0(iStack_20);
  iStack_28 = *(int *)(iVar3 + 0x24);
  iVar3 = FUN_004287f0(param_1,param_2);
  if (iVar3 == 0) {
    switch(iStack_28) {
    case 0:
      (**(code **)(*(int *)(param_1 + 0x2b0) + 0x150))(param_1,param_2);
      iVar3 = *(int *)(param_1 + 0x10a78);
      if (iVar3 == 0) {
        iVar3 = FUN_00488970(param_1,param_2);
        if (iVar3 != 0) {
          FUN_00503620(iStack_20,1,1);
        }
      }
      else {
        fStack_1ac = *(float *)(iVar3 + 0x20) - *(float *)(param_1 + 0x20);
        fStack_1a8 = *(float *)(iVar3 + 0x24) - *(float *)(param_1 + 0x24);
        fStack_1a4 = *(float *)(iVar3 + 0x28) - *(float *)(param_1 + 0x28);
        fStack_5c = fStack_1ac;
        afStack_178[(uint)bVar4 * -2 + 0x48] = afStack_1c0[(uint)bVar4 * -2 + 6];
        afStack_178[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x49] =
             afStack_1c0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7];
        fStack_34 = SQRT(fStack_54 * fStack_54 + fStack_5c * fStack_5c + fStack_58 * fStack_58);
        fStack_2c = fStack_34;
        if (fStack_34 < 0x40600000) {
          FUN_005838f0(afStack_178 + 0x47);
          uStack_158 = uStack_140;
          afStack_178[(uint)bVar4 * -2 + 9] = afStack_178[(uint)bVar4 * -2 + 0xf];
          afStack_178[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10] =
               afStack_178[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x10];
          fStack_14 = (float)FUN_0040d0c0(fStack_154 - *(float *)(param_1 + 0x34));
          if (ABS(fStack_14) < (float)_DAT_005cb8f6) {
            FUN_00503620(iStack_20,3,1);
            iVar3 = FUN_00550b70(*(uint *)(param_1 + 0x10b34));
            if ((iVar3 == 0) &&
               (iVar3 = FUN_00550b70(*(uint *)(param_1 + 0x10b38)), iVar3 == 0)) {
              uVar6 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))
                                (param_1,"batman-attack?.wav");
              *(uint *)(param_1 + 0x10b38) = uVar6;
            }
          }
        }
        if (fStack_34 < *(float *)(param_1 + 0x10a70)) {
          iStack_24 = param_1 + 0x2b4;
          if (fStack_34 < _DAT_005f2ee8) {
            uVar6 = 1;
            *(uint *)(param_1 + 0x10a74) = 0;
          }
          else {
            *(uint *)(param_1 + 0x10a74) = 0;
            iVar3 = FUN_0040d060(0x3dcccccd);
            if (iVar3 == 0) {
              uVar6 = 1;
            }
            else {
              iVar3 = *(int *)(param_1 + 0x10a78);
              fStack_ec = *(float *)(iVar3 + 0x20) - *(float *)(param_1 + 0x20);
              fStack_e8 = *(float *)(iVar3 + 0x24) - *(float *)(param_1 + 0x24);
              fStack_e4 = *(float *)(iVar3 + 0x28) - *(float *)(param_1 + 0x28);
              afStack_bc[0] = fStack_ec;
              afStack_178[(uint)bVar4 * -2 + 0x30] = afStack_178[(uint)bVar4 * -2 + 0x24];
              afStack_178[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x31] =
                   afStack_178[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x25];
              FUN_005838f0(afStack_178 + 0x2f);
              uStack_1a0 = afStack_178[2];
              afStack_1c0[(uint)bVar4 * -2 + 9] = afStack_178[(uint)bVar4 * -2 + 3];
              afStack_1c0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10] =
                   afStack_178[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
              fStack_14 = (float)FUN_0040d0c0(fStack_19c - *(float *)(param_1 + 0x34));
              if ((float)_DAT_005cb8f6 <= ABS(fStack_14)) {
                uVar6 = 1;
              }
              else if ((float)_DAT_005cb8fe <=
                       ABS(*(float *)(*(int *)(param_1 + 0x10a78) + 0x24) -
                           *(float *)(param_1 + 0x24))) {
                uVar6 = 1;
              }
              else {
                uVar6 = 2;
              }
            }
          }
          FUN_00503620(iStack_24,uVar6,1);
          if ((((*(int *)(param_1 + 0x10b3c) == 0) &&
               (iVar3 = FUN_00550b70(*(uint *)(param_1 + 0x10b34)), iVar3 == 0)) &&
              (iVar3 = FUN_00550b70(*(uint *)(param_1 + 0x10b38)), iVar3 == 0)) &&
             (iVar3 = FUN_00550b70(*(uint *)(param_1 + 0x10b30)), iVar3 == 0)) {
            uVar6 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))
                              (param_1,"batman-alert.wav");
            *(uint *)(param_1 + 0x10b3c) = 1;
            *(uint *)(param_1 + 0x10b30) = uVar6;
          }
        }
      }
      break;
    case 1:
      (**(code **)(*(int *)(param_1 + 0x2b0) + 0x150))(param_1,param_2);
      fVar2 = 0x40600000;
      if (*(int *)(param_1 + 0x10a78) == 0) {
        iVar3 = FUN_00488970(param_1,param_2);
        if (iVar3 == 0) {
          FUN_00503620(iStack_20,0,1);
        }
        else {
          FUN_00503620(iStack_20,1,1);
        }
      }
      else {
        fStack_18 = 0x40600000;
        *(uint *)(param_1 + 0x2510) = 0;
        *(uint *)(param_1 + 0x250c) = *(uint *)(param_1 + 0x2510);
        *(uint *)(param_1 + 0x2508) = *(uint *)(param_1 + 0x250c);
        afStack_188[0] = 0.0;
        afStack_188[2] = fVar2;
        afStack_188[1] = 0.0;
        uVar6 = (**(code **)(*(int *)(*(int *)(param_1 + 0x10a78) + 0x2b0) + 0xcc))
                          (*(int *)(param_1 + 0x10a78),afStack_1c0 + 0xe,0x3f000000,0x3e32b8c2);
        iVar3 = FUN_00423000(param_1,*(int *)(param_1 + 0x10a78) + 0x20,uVar6);
        if (-1 < iVar3) {
          iVar3 = *(int *)(param_1 + 0x10a78);
          fStack_50 = *(float *)(param_1 + 0x20) - *(float *)(iVar3 + 0x20);
          fStack_4c = *(float *)(param_1 + 0x24) - *(float *)(iVar3 + 0x24);
          fStack_48 = *(float *)(param_1 + 0x28) - *(float *)(iVar3 + 0x28);
          fStack_80 = fStack_50;
          afStack_178[(uint)bVar4 * -2 + 0x3f] = afStack_178[(uint)bVar4 * -2 + 0x4b];
          afStack_178[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x40] =
               afStack_178[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x4c];
          uStack_7c = 0;
          fStack_1c = SQRT(fStack_78 * fStack_78 + fStack_80 * fStack_80);
          fStack_30 = fStack_1c;
          if ((_DAT_005f2ee8 < fStack_1c) &&
             (*(uint *)(param_1 + 0x10a74) = 0, iStack_28 == 1)) {
            iVar3 = *(int *)(param_1 + 0x10a78);
            fStack_44 = *(float *)(iVar3 + 0x20) - *(float *)(param_1 + 0x20);
            fStack_40 = *(float *)(iVar3 + 0x24) - *(float *)(param_1 + 0x24);
            fStack_3c = *(float *)(iVar3 + 0x28) - *(float *)(param_1 + 0x28);
            afStack_8c[0] = fStack_44;
            afStack_178[(uint)bVar4 * -2 + 0x3c] = afStack_178[(uint)bVar4 * -2 + 0x4e];
            afStack_178[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x3d] =
                 afStack_178[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x4f];
            FUN_005838f0(afStack_178 + 0x3b);
            uStack_98 = uStack_134;
            afStack_178[(uint)bVar4 * -2 + 0x39] = afStack_178[(uint)bVar4 * -2 + 0x12];
            afStack_178[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x3a] =
                 afStack_178[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x13];
            fStack_14 = (float)FUN_0040d0c0(fStack_94 - *(float *)(param_1 + 0x34));
            if ((ABS(fStack_14) < (float)_DAT_005cb8f6) &&
               (ABS(*(float *)(*(int *)(param_1 + 0x10a78) + 0x24) - *(float *)(param_1 + 0x24)) <
                (float)_DAT_005cb8fe)) {
              FUN_00503620(iStack_20,2,1);
              *(uint *)(param_1 + 0x10a74) = 0;
              iVar3 = FUN_00550b70(*(uint *)(param_1 + 0x10b34));
              if ((iVar3 == 0) &&
                 (iVar3 = FUN_00550b70(*(uint *)(param_1 + 0x10b38)), iVar3 == 0)) {
                uVar6 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))
                                  (param_1,"batman-attack?.wav");
                *(uint *)(param_1 + 0x10b38) = uVar6;
              }
            }
          }
          if ((fStack_30 <= fStack_18) && (*(float *)(param_1 + 0x10a74) <= 0.0)) {
            iVar3 = *(int *)(param_1 + 0x10a78);
            fStack_d4 = *(float *)(iVar3 + 0x20) - *(float *)(param_1 + 0x20);
            fStack_d0 = *(float *)(iVar3 + 0x24) - *(float *)(param_1 + 0x24);
            fStack_cc = *(float *)(iVar3 + 0x28) - *(float *)(param_1 + 0x28);
            afStack_164[0] = fStack_d4;
            afStack_178[(uint)bVar4 * -2 + 6] = afStack_178[(uint)bVar4 * -2 + 0x2a];
            afStack_178[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7] =
                 afStack_178[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x2b];
            FUN_005838f0(afStack_178 + 5);
            uStack_14c = uStack_11c;
            afStack_178[(uint)bVar4 * -2 + 0xc] = afStack_178[(uint)bVar4 * -2 + 0x18];
            afStack_178[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0xd] =
                 afStack_178[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x19];
            fStack_14 = (float)FUN_0040d0c0(fStack_148 - *(float *)(param_1 + 0x34));
            if (ABS(fStack_14) < (float)_DAT_005cb8f6) {
              FUN_00503620(param_1 + 0x2b4,3,1);
              *(uint *)(param_1 + 0x10a74) = 0x3f800000;
              iVar3 = FUN_00550b70(*(uint *)(param_1 + 0x10b34));
              if ((iVar3 == 0) &&
                 (iVar3 = FUN_00550b70(*(uint *)(param_1 + 0x10b38)), iVar3 == 0)) {
                uVar6 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))
                                  (param_1,"batman-attack?.wav");
                *(uint *)(param_1 + 0x10b38) = uVar6;
              }
            }
          }
          if (*(float *)(param_1 + 0x10a70) < fStack_30) {
            FUN_00503620(param_1 + 0x2b4,0,1);
          }
        }
      }
      break;
    case 3:
      FUN_004222d0(auStack_200);
      fStack_1fc = (float)FUN_0040cf60(0x40e00000,0x41700000);
      iStack_1cc = param_1;
      iStack_1c8 = param_1;
      fStack_14 = fStack_1fc;
      FUN_00591530(&DAT_0265370c,param_1 + 0x1134 + DAT_007bc754 * 0x30,0x3ecccccd,auStack_200);
      pfVar5 = afStack_1c0 + 0xb;
      afStack_194[0] = (float)uStack_e0;
      afStack_1c0[(uint)bVar4 * -2 + 0xc] = afStack_178[(uint)bVar4 * -2 + 0x27];
      afStack_1c0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0xd] =
           afStack_178[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x28];
      FUN_00408d70(param_1,pfVar5);
      pfVar5 = afStack_178 + 0x35;
      afStack_a4[0] = (float)uStack_c8;
      afStack_178[(uint)bVar4 * -2 + 0x36] = afStack_178[(uint)bVar4 * -2 + 0x2d];
      iVar3 = param_1;
      afStack_178[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x37] =
           afStack_178[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x2e];
      FUN_00488110(iVar3,pfVar5);
      break;
    case 8:
      if ((*(int *)(param_1 + 0x10a64) == 0) && (*(int *)(param_1 + 0xdc) == 0)) {
        FUN_005469a0(iStack_20,0);
        pfVar5 = afStack_178 + 0x1d;
        afStack_104[0] = (float)uStack_f8;
        afStack_178[(uint)bVar4 * -2 + 0x1e] = afStack_178[(uint)bVar4 * -2 + 0x21];
        afStack_178[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x1f] =
             afStack_178[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x22];
        FUN_00408d70(param_1,pfVar5);
        uVar7 = 0;
        pfVar5 = afStack_178 + 0x1a;
        afStack_110[0] = (float)uStack_1c4;
        afStack_178[(uint)bVar4 * -2 + 0x1b] = afStack_1c0[(uint)bVar4 * -2];
        uVar6 = 0x01CB8284;
        afStack_178[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x1c] =
             afStack_1c0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
        FUN_004c9ad0(uVar6,pfVar5,uVar7);
        *(uint *)(param_1 + 0x10a64) = 1;
      }
    }
    goto switchD_00412491_caseD_2;
  }
  uVar1 = *(uint *)(param_1 + 0x27ac);
  if (uVar1 < 2) {
    if (uVar1 == 1) {
LAB_00411ae7:
      uVar6 = 1;
    }
    else {
LAB_00411cc3:
      uVar6 = 0;
    }
    FUN_00503620(param_1 + 0x2b4,uVar6,1);
  }
  else {
    if (uVar1 < 3) goto LAB_00411ae7;
    if (uVar1 != 3) goto LAB_00411cc3;
    FUN_00503620(param_1 + 0x2b4,0,1);
    FUN_00436710(PTR_DAT_00609ed0,"%s confused while walking to scriptDest!\n",param_1);
  }
  *(uint *)(param_1 + 0x2510) = 0;
  *(uint *)(param_1 + 0x250c) = *(uint *)(param_1 + 0x2510);
  *(uint *)(param_1 + 0x2508) = *(uint *)(param_1 + 0x250c);
switchD_00412491_caseD_2:
  if (0.0 < *(float *)(param_1 + 0x10a74)) {
    *(float *)(param_1 + 0x10a74) = *(float *)(param_1 + 0x10a74) - param_2;
  }
  iVar3 = FUN_00424430(param_1);
  if (iVar3 != 0) {
    FUN_00423a10(param_1,param_2);
    fStack_17c = *(float *)(param_1 + 0x2588) * param_2;
    afStack_178[0] = *(float *)(param_1 + 0x258c) * param_2;
    afStack_178[1] = *(float *)(param_1 + 0x2590) * param_2;
    fStack_128 = fStack_17c;
    afStack_178[(uint)bVar4 * -2 + 0x15] = afStack_178[(uint)bVar4 * -2];
    afStack_178[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x16] =
         afStack_178[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
    afStack_1c0[2] = fStack_128 + *(float *)(param_1 + 0x257c);
    afStack_1c0[3] = fStack_124 + *(float *)(param_1 + 0x2580);
    fStack_1b0 = fStack_120 + *(float *)(param_1 + 0x2584);
    fStack_68 = afStack_1c0[2];
    afStack_178[(uint)bVar4 * -2 + 0x45] = afStack_1c0[(uint)bVar4 * -2 + 3];
    afStack_178[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x46] =
         afStack_1c0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
    fStack_b0 = fStack_68 + *(float *)(param_1 + 0x2508);
    fStack_ac = fStack_64 + *(float *)(param_1 + 0x250c);
    fStack_a8 = fStack_60 + *(float *)(param_1 + 0x2510);
    afStack_74[0] = fStack_b0;
    afStack_178[(uint)bVar4 * -2 + 0x42] = afStack_178[(uint)bVar4 * -2 + 0x33];
    afStack_178[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x43] =
         afStack_178[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x34];
    *(uint *)(param_1 + 0x2584) = 0;
    *(uint *)(param_1 + 0x2580) = *(uint *)(param_1 + 0x2584);
    *(float *)(param_1 + 0x257c) = *(float *)(param_1 + 0x2580);
    *(uint *)(param_1 + 0x2510) = 0;
    *(uint *)(param_1 + 0x250c) = *(uint *)(param_1 + 0x2510);
    *(float *)(param_1 + 0x2508) = *(float *)(param_1 + 0x250c);
    FUN_00423a60(param_1,afStack_178 + 0x41);
  }
  FUN_00424470(param_1);
  FUN_00544f00(param_1 + 0x2b4);
  FUN_00429e90(param_1,param_2);
  return;
}
