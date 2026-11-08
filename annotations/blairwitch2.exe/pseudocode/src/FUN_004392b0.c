// Name: FUN_004392b0
// Address: 004392b0
// Address Range: [[004392b0, 00439820]]
// Convention: unknown
// Signature: void FUN_004392b0(int param_1,float param_2)

#include "nocturne.h"

void FUN_004392b0(int param_1,float param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  float afStackY_10b8 [997];
  float *pfVar5;
  uint uVar6;
  uint *puVar7;
  byte auStack_10c [4];
  uint uStack_108;
  int iStack_d8;
  int iStack_d4;
  uint uStack_d0;
  float afStack_cc [4];
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float afStack_ac [3];
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float afStack_88 [3];
  uint uStack_7c;
  float afStack_78 [4];
  float fStack_68;
  uint uStack_64;
  float afStack_58 [3];
  float afStack_4c [3];
  uint uStack_40;
  uint uStack_34;
  float afStack_28 [3];
  float fStack_1c;
  uint uStack_18;
  uint uStack_14;
  
  bVar4 = 0;
  iVar2 = FUN_004244b0(param_1,param_2);
  if (iVar2 == 0) {
    return;
  }
  *(uint *)(param_1 + 0x2510) = 0;
  *(uint *)(param_1 + 0x250c) = *(uint *)(param_1 + 0x2510);
  *(uint *)(param_1 + 0x2508) = *(uint *)(param_1 + 0x250c);
  fStack_1c = param_2 * *(float *)(param_1 + 0x10a60);
  iVar2 = param_1 + 0x2b4;
  while (0.0 < fStack_1c) {
    uVar6 = FUN_005030c0(iVar2,afStack_78 + 0x17);
    FUN_0042aa00(param_1,uVar6);
  }
  *(uint *)(param_1 + 0x2594) = *(uint *)(param_1 + 0x2510);
  FUN_0042b2a0(param_1,param_2 * *(float *)(param_1 + 0x10a60));
  iVar3 = FUN_005035c0(iVar2);
  uVar6 = *(uint *)(iVar3 + 0x24);
  iVar3 = FUN_004287f0(param_1,param_2);
  if (iVar3 == 0) {
    switch(uVar6) {
    case 0:
      iVar3 = FUN_00488970(param_1,param_2);
      if (iVar3 == 0) {
        (**(code **)(*(int *)(param_1 + 0x2b0) + 0x150))(param_1,param_2);
        if (*(int *)(param_1 + 0x10a78) != 0) {
          iVar2 = FUN_0055af70(0x0264B290,*(uint *)(param_1 + 0x10b00));
          if (iVar2 == 0) {
            uVar6 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))(param_1,"cow?.wav");
            *(uint *)(param_1 + 0x10b00) = uVar6;
          }
          FUN_00503620(param_1 + 0x2b4,1,1);
        }
      }
      else {
        FUN_00503620(iVar2,1,1);
      }
      break;
    case 1:
      (**(code **)(*(int *)(param_1 + 0x2b0) + 0x150))(param_1,param_2);
      uVar6 = 0x40900000;
      if (*(int *)(param_1 + 0x10a78) == 0) {
        iVar3 = FUN_00488970(param_1,param_2);
        if (iVar3 == 0) {
          FUN_00503620(iVar2,0,1);
        }
      }
      else {
        uStack_18 = 0x40900000;
        *(uint *)(param_1 + 0x2510) = 0;
        *(uint *)(param_1 + 0x250c) = *(uint *)(param_1 + 0x2510);
        *(uint *)(param_1 + 0x2508) = *(uint *)(param_1 + 0x250c);
        afStack_88[0] = 0.0;
        afStack_88[1] = 0.0;
        afStack_88[2] = (float)uVar6;
        uVar6 = (**(code **)(*(int *)(*(int *)(param_1 + 0x10a78) + 0x2b0) + 0xcc))
                          (*(int *)(param_1 + 0x10a78),afStack_cc + 0x11,0x3f000000,0x3e32b8c2);
        iVar3 = FUN_00423000(param_1,*(int *)(param_1 + 0x10a78) + 0x20,uVar6);
        if (iVar3 < 0) {
          FUN_00436710(PTR_DAT_00609ed0,"%s gave up chase - I'm confused\n",param_1);
          FUN_00503620(iVar2,0,1);
        }
        else if ((0 < iVar3) && (*(float *)(param_1 + 0x10a74) <= 0.0)) {
          FUN_00503620(iVar2,2,1);
          *(uint *)(param_1 + 0x10a74) = 0x40200000;
        }
      }
      break;
    case 2:
      FUN_004222d0(auStack_10c);
      uStack_108 = FUN_0040cf60(0x40e00000,0x41700000);
      iStack_d8 = param_1;
      iStack_d4 = param_1;
      uStack_14 = uStack_108;
      FUN_00591530(&DAT_0265370c,*(int *)(param_1 + 0x10afc) * 0x30 + param_1 + 0x1134,0x3f333333,
                   auStack_10c);
      pfVar5 = afStack_78 + 0xb;
      afStack_4c[0] = (float)uStack_d0;
      afStack_78[(uint)bVar4 * -2 + 0xc] = afStack_cc[(uint)bVar4 * -2];
      afStack_78[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0xd] =
           afStack_cc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
      FUN_00408d70(param_1,pfVar5);
      pfVar5 = afStack_cc + 8;
      afStack_ac[0] = (float)uStack_64;
      afStack_cc[(uint)bVar4 * -2 + 9] = afStack_78[(uint)bVar4 * -2 + 6];
      iVar2 = param_1;
      afStack_cc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10] =
           afStack_78[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7];
      FUN_00488110(iVar2,pfVar5);
      break;
    case 5:
      if ((*(int *)(param_1 + 0x10a64) == 0) && (*(int *)(param_1 + 0xdc) == 0)) {
        FUN_005469a0(iVar2,0);
        puVar7 = &uStack_7c;
        uStack_7c = uStack_40;
        afStack_78[(uint)bVar4 * -2] = afStack_78[(uint)bVar4 * -2 + 0xf];
        afStack_78[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
             afStack_78[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x10];
        FUN_00408d70(param_1,puVar7);
        uVar6 = 0;
        afStack_58[0] = (float)uStack_34;
        afStack_78[(uint)bVar4 * -2 + 9] = afStack_78[(uint)bVar4 * -2 + 0x12];
        afStack_78[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10] =
             afStack_78[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x13];
        FUN_004c9ad0(0x01CB8284,afStack_78 + 8,uVar6);
        *(uint *)(param_1 + 0x10a64) = 1;
      }
    }
    goto switchD_0043981a_caseD_3;
  }
  uVar1 = *(uint *)(param_1 + 0x27ac);
  if (uVar1 < 2) {
    if (uVar1 == 1) {
LAB_0043937b:
      uVar6 = 1;
    }
    else {
LAB_00439560:
      uVar6 = 0;
    }
    FUN_00503620(param_1 + 0x2b4,uVar6,1);
  }
  else {
    if (uVar1 < 3) goto LAB_0043937b;
    if (uVar1 != 3) goto LAB_00439560;
    FUN_00503620(iVar2,0,1);
    FUN_00436710(PTR_DAT_00609ed0,"%s confused while walking to scriptDest!\n",param_1);
  }
  *(uint *)(param_1 + 0x2510) = 0;
  *(uint *)(param_1 + 0x250c) = *(uint *)(param_1 + 0x2510);
  *(uint *)(param_1 + 0x2508) = *(uint *)(param_1 + 0x250c);
switchD_0043981a_caseD_3:
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
    afStack_cc[2] = *(float *)(param_1 + 0x2588) * param_2;
    afStack_cc[3] = *(float *)(param_1 + 0x258c) * param_2;
    fStack_bc = *(float *)(param_1 + 0x2590) * param_2;
    fStack_94 = afStack_cc[2];
    afStack_cc[(uint)bVar4 * -2 + 0xf] = afStack_cc[(uint)bVar4 * -2 + 3];
    afStack_cc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x10] =
         afStack_cc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
    fStack_a0 = fStack_94 + *(float *)(param_1 + 0x257c);
    fStack_9c = fStack_90 + *(float *)(param_1 + 0x2580);
    fStack_98 = fStack_8c + *(float *)(param_1 + 0x2584);
    afStack_78[2] = fStack_a0;
    afStack_78[(uint)bVar4 * -2 + 3] = afStack_cc[(uint)bVar4 * -2 + 0xc];
    afStack_78[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
         afStack_cc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0xd];
    fStack_b8 = afStack_78[2] + *(float *)(param_1 + 0x2508);
    fStack_b4 = afStack_78[3] + *(float *)(param_1 + 0x250c);
    fStack_b0 = fStack_68 + *(float *)(param_1 + 0x2510);
    afStack_28[0] = fStack_b8;
    afStack_78[(uint)bVar4 * -2 + 0x15] = afStack_cc[(uint)bVar4 * -2 + 6];
    afStack_78[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x16] =
         afStack_cc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7];
    *(uint *)(param_1 + 0x2584) = 0;
    *(uint *)(param_1 + 0x2580) = *(uint *)(param_1 + 0x2584);
    *(float *)(param_1 + 0x257c) = *(float *)(param_1 + 0x2580);
    *(uint *)(param_1 + 0x2510) = 0;
    *(uint *)(param_1 + 0x250c) = *(uint *)(param_1 + 0x2510);
    *(float *)(param_1 + 0x2508) = *(float *)(param_1 + 0x250c);
    FUN_00423a60(param_1,afStack_78 + 0x14);
  }
  FUN_00424470(param_1);
  FUN_00544f00(param_1 + 0x2b4);
  FUN_00429e90(param_1,param_2);
  return;
}
