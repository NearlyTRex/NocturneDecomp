// Name: FUN_0045e360
// Address: 0045e360
// Address Range: [[0045e360, 0045eaa6]]
// Convention: unknown
// Signature: void FUN_0045e360(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045e360(int param_1,float param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  float afStackY_1104 [997];
  float *pfVar5;
  byte auStack_158 [4];
  float fStack_154;
  int iStack_124;
  int iStack_120;
  float fStack_11c;
  float afStack_118 [5];
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float afStack_ec [3];
  float fStack_e0;
  float afStack_dc [4];
  float fStack_cc;
  float afStack_c8 [3];
  float afStack_bc [3];
  float afStack_b0 [3];
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  uint uStack_98;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  uint uStack_68;
  uint uStack_5c;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float afStack_44 [5];
  uint uStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  float fStack_14;
  
  bVar4 = 0;
  iVar2 = FUN_004244b0(param_1,param_2);
  if (iVar2 == 0) {
    return;
  }
  FUN_0042a7a0(param_1,param_2);
  FUN_00429420(param_1,param_2,0);
  *(uint *)(param_1 + 0x2510) = 0;
  *(uint *)(param_1 + 0x250c) = *(uint *)(param_1 + 0x2510);
  *(uint *)(param_1 + 0x2508) = *(uint *)(param_1 + 0x250c);
  fStack_24 = param_2 * *(float *)(param_1 + 0x10a60);
  while (0.0 < fStack_24) {
    uVar3 = FUN_005030c0(param_1 + 0x2b4,&fStack_24);
    FUN_0042aa00(param_1,uVar3);
  }
  iVar2 = FUN_005035c0(param_1 + 0x2b4);
  iVar2 = *(int *)(iVar2 + 0x24);
  *(uint *)(param_1 + 0x2594) = *(uint *)(param_1 + 0x2510);
  iStack_18 = iVar2;
  FUN_0042b2a0(param_1,param_2 * *(float *)(param_1 + 0x10a60));
  if (iVar2 == 2) {
    *(float *)(param_1 + 0x2598) = *(float *)(param_1 + 0x2598) * (float)_DAT_005d090c;
  }
  iVar2 = FUN_004287f0(param_1,param_2);
  if (iVar2 == 0) {
    switch(iStack_18) {
    case 0:
      iVar2 = FUN_00488970(param_1,param_2);
      iStack_1c = param_1 + 0x2b4;
      if (iVar2 == 0) {
        (**(code **)(*(int *)(param_1 + 0x2b0) + 0x150))(param_1,param_2);
        iVar2 = *(int *)(param_1 + 0x10a78);
        if (iVar2 != 0) {
          fStack_80 = *(float *)(iVar2 + 0x20) - *(float *)(param_1 + 0x20);
          fStack_7c = *(float *)(iVar2 + 0x24) - *(float *)(param_1 + 0x24);
          fStack_78 = *(float *)(iVar2 + 0x28) - *(float *)(param_1 + 0x28);
          fStack_104 = fStack_80;
          afStack_118[(uint)bVar4 * -2 + 6] = afStack_dc[(uint)bVar4 * -2 + 0x18];
          afStack_118[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7] =
               afStack_dc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x19];
          fStack_2c = fStack_fc * fStack_fc + fStack_104 * fStack_104 + fStack_100 * fStack_100;
          fStack_28 = (float)(((int)fStack_2c >> 1) + _DAT_01caf5b4);
          if (fStack_28 < _DAT_005f5334) {
            uVar3 = 1;
          }
          else {
            uVar3 = 2;
          }
          FUN_00503620(iStack_1c,uVar3,1);
          iVar2 = FUN_0055af70(0x0264B290,*(uint *)(param_1 + 0x10b00));
          if (iVar2 == 0) {
            uVar3 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))(param_1,"dog5.wav");
            *(uint *)(param_1 + 0x10b00) = uVar3;
          }
        }
      }
      else {
        FUN_00503620(iStack_1c,1,1);
      }
      break;
    case 1:
    case 2:
      (**(code **)(*(int *)(param_1 + 0x2b0) + 0x150))(param_1,param_2);
      iVar2 = *(int *)(param_1 + 0x10a78);
      iStack_20 = param_1 + 0x2b4;
      if (iVar2 == 0) {
        iVar2 = FUN_00488970(param_1,param_2);
        if (iVar2 == 0) {
          FUN_00503620(iStack_20,0,1);
        }
        else {
          FUN_00503620(iStack_20,1,1);
        }
      }
      else {
        afStack_dc[2] = *(float *)(param_1 + 0x20) - *(float *)(iVar2 + 0x20);
        afStack_dc[3] = *(float *)(param_1 + 0x24) - *(float *)(iVar2 + 0x24);
        fStack_cc = *(float *)(param_1 + 0x28) - *(float *)(iVar2 + 0x28);
        fStack_f8 = afStack_dc[2];
        afStack_118[(uint)bVar4 * -2 + 9] = afStack_dc[(uint)bVar4 * -2 + 3];
        afStack_118[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10] =
             afStack_dc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
        if ((_DAT_005f5334 <
             SQRT(fStack_f0 * fStack_f0 + fStack_f8 * fStack_f8 + fStack_f4 * fStack_f4)) &&
           (iStack_18 == 1)) {
          FUN_00503620(iStack_20,2,1);
        }
        afStack_ec[2] = (float)0x40400000;
        uStack_30 = 0x40400000;
        *(uint *)(param_1 + 0x2510) = 0;
        *(uint *)(param_1 + 0x250c) = *(uint *)(param_1 + 0x2510);
        *(uint *)(param_1 + 0x2508) = *(uint *)(param_1 + 0x250c);
        afStack_ec[0] = 0.0;
        afStack_ec[1] = 0.0;
        uVar3 = (**(code **)(*(int *)(*(int *)(param_1 + 0x10a78) + 0x2b0) + 0xcc))
                          (*(int *)(param_1 + 0x10a78),afStack_118 + 0xb,0x3f000000,0x3e32b8c2);
        iVar2 = FUN_00423000(param_1,*(int *)(param_1 + 0x10a78) + 0x20,uVar3);
        if (iVar2 < 0) {
          FUN_00436710(PTR_DAT_00609ed0,"%s gave up chase - I'm confused\n",param_1);
          FUN_00503620(param_1 + 0x2b4,0,1);
        }
        else if ((0 < iVar2) && (*(float *)(param_1 + 0x10a74) <= 0.0)) {
          fStack_14 = (float)FUN_0040cf60(0,0x3f800000);
          if ((float)_DAT_005d0914 < fStack_14) {
            uVar3 = 3;
          }
          else {
            uVar3 = 4;
          }
          FUN_00503620(param_1 + 0x2b4,uVar3,1);
          *(uint *)(param_1 + 0x10a74) = 0x40200000;
        }
      }
      break;
    case 3:
    case 4:
      FUN_004222d0(auStack_158);
      fStack_154 = (float)FUN_0040cf60(0x40e00000,0x41700000);
      iStack_124 = param_1;
      iStack_120 = param_1;
      fStack_14 = fStack_154;
      FUN_00591530(&DAT_0265370c,param_1 + 0x1134 + *(int *)(param_1 + 0x10afc) * 0x30,0x3f333333,
                   auStack_158);
      pfVar5 = afStack_dc + 0x26;
      afStack_44[0] = afStack_118[2];
      afStack_dc[(uint)bVar4 * -2 + 0x27] = afStack_118[(uint)bVar4 * -2 + 3];
      afStack_dc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x28] =
           afStack_118[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
      FUN_00408d70(param_1,pfVar5);
      pfVar5 = afStack_dc + 0xb;
      afStack_b0[0] = (float)uStack_68;
      afStack_dc[(uint)bVar4 * -2 + 0xc] = afStack_dc[(uint)bVar4 * -2 + 0x1e];
      iVar2 = param_1;
      afStack_dc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0xd] =
           afStack_dc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x1f];
      FUN_00488110(iVar2,pfVar5);
      iVar2 = FUN_0055af70(0x0264B290,*(uint *)(param_1 + 0x10b00));
      if (iVar2 == 0) {
        uVar3 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))(param_1,"dog5.wav");
        *(uint *)(param_1 + 0x10b00) = uVar3;
      }
      break;
    case 7:
      if ((*(int *)(param_1 + 0x10a64) == 0) && (*(int *)(param_1 + 0xdc) == 0)) {
        FUN_005469a0(param_1 + 0x2b4,0);
        pfVar5 = afStack_dc + 8;
        afStack_bc[0] = (float)uStack_5c;
        afStack_dc[(uint)bVar4 * -2 + 9] = afStack_dc[(uint)bVar4 * -2 + 0x21];
        afStack_dc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10] =
             afStack_dc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x22];
        FUN_00408d70(param_1,pfVar5);
        uVar3 = 0;
        afStack_c8[0] = (float)uStack_98;
        afStack_dc[(uint)bVar4 * -2 + 6] = afStack_dc[(uint)bVar4 * -2 + 0x12];
        afStack_dc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7] =
             afStack_dc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x13];
        FUN_004c9ad0(0x01CB8284,afStack_dc + 5,uVar3);
        *(uint *)(param_1 + 0x10a64) = 1;
      }
    }
    goto switchD_0045eaa0_caseD_5;
  }
  uVar1 = *(uint *)(param_1 + 0x27ac);
  if (uVar1 < 2) {
    if (uVar1 == 1) {
LAB_0045e482:
      uVar3 = 1;
    }
    else {
LAB_0045e65c:
      uVar3 = 0;
    }
    FUN_00503620(param_1 + 0x2b4,uVar3,1);
  }
  else {
    if (uVar1 < 3) goto LAB_0045e482;
    if (uVar1 != 3) goto LAB_0045e65c;
    FUN_00503620(param_1 + 0x2b4,0,1);
    FUN_00436710(PTR_DAT_00609ed0,"%s confused while walking to scriptDest!\n",param_1);
  }
  *(uint *)(param_1 + 0x2510) = 0;
  *(uint *)(param_1 + 0x250c) = *(uint *)(param_1 + 0x2510);
  *(uint *)(param_1 + 0x2508) = *(uint *)(param_1 + 0x250c);
switchD_0045eaa0_caseD_5:
  if (0.0 < *(float *)(param_1 + 0x10a74)) {
    *(float *)(param_1 + 0x10a74) = *(float *)(param_1 + 0x10a74) - param_2;
  }
  iVar2 = FUN_00424430(param_1);
  if (iVar2 != 0) {
    iVar2 = *(int *)(param_1 + 0x10a78);
    if ((iVar2 != 0) &&
       (iVar2 = (**(code **)(*(int *)(iVar2 + 0x2b0) + 0xfc))(iVar2), iVar2 == param_1)) {
      FUN_00537e30(0x01E661B8,*(uint *)(param_1 + 0x10a78));
    }
    FUN_00423a10(param_1,param_2);
    fStack_50 = *(float *)(param_1 + 0x2588) * param_2;
    fStack_4c = *(float *)(param_1 + 0x258c) * param_2;
    fStack_48 = *(float *)(param_1 + 0x2590) * param_2;
    fStack_8c = fStack_50;
    afStack_dc[(uint)bVar4 * -2 + 0x15] = afStack_dc[(uint)bVar4 * -2 + 0x24];
    afStack_dc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x16] =
         afStack_dc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x25];
    fStack_74 = fStack_8c + *(float *)(param_1 + 0x257c);
    fStack_70 = fStack_88 + *(float *)(param_1 + 0x2580);
    fStack_6c = fStack_84 + *(float *)(param_1 + 0x2584);
    fStack_11c = fStack_74;
    afStack_118[(uint)bVar4 * -2] = afStack_dc[(uint)bVar4 * -2 + 0x1b];
    afStack_118[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
         afStack_dc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x1c];
    fStack_a4 = fStack_11c + *(float *)(param_1 + 0x2508);
    fStack_a0 = afStack_118[0] + *(float *)(param_1 + 0x250c);
    fStack_9c = afStack_118[1] + *(float *)(param_1 + 0x2510);
    fStack_e0 = fStack_a4;
    afStack_dc[(uint)bVar4 * -2] = afStack_dc[(uint)bVar4 * -2 + 0xf];
    afStack_dc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
         afStack_dc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x10];
    *(uint *)(param_1 + 0x2584) = 0;
    *(uint *)(param_1 + 0x2580) = *(uint *)(param_1 + 0x2584);
    *(float *)(param_1 + 0x257c) = *(float *)(param_1 + 0x2580);
    *(uint *)(param_1 + 0x2510) = 0;
    *(uint *)(param_1 + 0x250c) = *(uint *)(param_1 + 0x2510);
    *(float *)(param_1 + 0x2508) = *(float *)(param_1 + 0x250c);
    FUN_00423a60(param_1,&fStack_e0);
  }
  FUN_00424470(param_1);
  FUN_00544f00(param_1 + 0x2b4);
  FUN_00429e90(param_1,param_2);
  return;
}
