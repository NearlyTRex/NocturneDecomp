// Name: FUN_00448570
// Address: 00448570
// Address Range: [[00448570, 00448ae0]]
// Convention: unknown
// Signature: void FUN_00448570(int param_1,float param_2)

#include "nocturne.h"

void FUN_00448570(int param_1,float param_2)

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
  iVar2 = FUN_0042e1a0(param_1,param_2);
  if (iVar2 == 0) {
    return;
  }
  *(uint *)(param_1 + 0x24a4) = 0;
  *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
  *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
  fStack_1c = param_2 * *(float *)(param_1 + 0xc1d0);
  iVar2 = param_1 + 0x158;
  while (0.0 < fStack_1c) {
    uVar6 = FUN_00524270(iVar2,afStack_78 + 0x17);
    FUN_00434a80(param_1,uVar6);
  }
  *(uint *)(param_1 + 0x2524) = *(uint *)(param_1 + 0x24a4);
  FUN_00435320(param_1,param_2 * *(float *)(param_1 + 0xc1d0));
  iVar3 = FUN_00524770(iVar2);
  uVar6 = *(uint *)(iVar3 + 0x24);
  iVar3 = FUN_00432240(param_1,param_2);
  if (iVar3 == 0) {
    switch(uVar6) {
    case 0:
      iVar3 = FUN_004a0fe0(param_1,param_2);
      if (iVar3 == 0) {
        (**(code **)(*(int *)(param_1 + 0x154) + 0x144))(param_1,param_2);
        if (*(int *)(param_1 + 0xc1e8) != 0) {
          iVar2 = FUN_0057d9c0(0x02C82A60,*(uint *)(param_1 + 0xc270));
          if (iVar2 == 0) {
            uVar6 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"cow?.wav");
            *(uint *)(param_1 + 0xc270) = uVar6;
          }
          FUN_005247c0(param_1 + 0x158,1,1);
        }
      }
      else {
        FUN_005247c0(iVar2,1,1);
      }
      break;
    case 1:
      (**(code **)(*(int *)(param_1 + 0x154) + 0x144))(param_1,param_2);
      uVar6 = 0x40900000;
      if (*(int *)(param_1 + 0xc1e8) == 0) {
        iVar3 = FUN_004a0fe0(param_1,param_2);
        if (iVar3 == 0) {
          FUN_005247c0(iVar2,0,1);
        }
      }
      else {
        uStack_18 = 0x40900000;
        *(uint *)(param_1 + 0x24a4) = 0;
        *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
        *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
        afStack_88[0] = 0.0;
        afStack_88[1] = 0.0;
        afStack_88[2] = (float)uVar6;
        uVar6 = (**(code **)(*(int *)(*(int *)(param_1 + 0xc1e8) + 0x154) + 0xc4))
                          (*(int *)(param_1 + 0xc1e8),afStack_cc + 0x11,0x3f000000,0x3e32b8c2);
        iVar3 = FUN_0042ccf0(param_1,*(int *)(param_1 + 0xc1e8) + 0x20,uVar6);
        if (iVar3 < 0) {
          FUN_00445430(PTR_DAT_00611100,"%s gave up chase - I'm confused\n",param_1);
          FUN_005247c0(iVar2,0,1);
        }
        else if ((0 < iVar3) && (*(float *)(param_1 + 0xc1e4) <= 0.0)) {
          FUN_005247c0(iVar2,2,1);
          *(uint *)(param_1 + 0xc1e4) = 0x40200000;
        }
      }
      break;
    case 2:
      FUN_0042c010(auStack_10c);
      uStack_108 = FUN_0040cc00(0x40e00000,0x41700000);
      iStack_d8 = param_1;
      iStack_d4 = param_1;
      uStack_14 = uStack_108;
      FUN_005b5080(&DAT_02c8af28,*(int *)(param_1 + 0xc26c) * 0x30 + param_1 + 0xfd8,0x3f333333,
                   auStack_10c);
      pfVar5 = afStack_78 + 0xb;
      afStack_4c[0] = (float)uStack_d0;
      afStack_78[(uint)bVar4 * -2 + 0xc] = afStack_cc[(uint)bVar4 * -2];
      afStack_78[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0xd] =
           afStack_cc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
      FUN_00408b40(param_1,pfVar5);
      pfVar5 = afStack_cc + 8;
      afStack_ac[0] = (float)uStack_64;
      afStack_cc[(uint)bVar4 * -2 + 9] = afStack_78[(uint)bVar4 * -2 + 6];
      iVar2 = param_1;
      afStack_cc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10] =
           afStack_78[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7];
      FUN_004a0770(iVar2,pfVar5);
      break;
    case 5:
      if ((*(int *)(param_1 + 0xc1d4) == 0) && (*(int *)(param_1 + 0xdc) == 0)) {
        FUN_00569040(iVar2,0);
        puVar7 = &uStack_7c;
        uStack_7c = uStack_40;
        afStack_78[(uint)bVar4 * -2] = afStack_78[(uint)bVar4 * -2 + 0xf];
        afStack_78[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
             afStack_78[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x10];
        FUN_00408b40(param_1,puVar7);
        uVar6 = 0;
        afStack_58[0] = (float)uStack_34;
        afStack_78[(uint)bVar4 * -2 + 9] = afStack_78[(uint)bVar4 * -2 + 0x12];
        afStack_78[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10] =
             afStack_78[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x13];
        FUN_004e62e0(0x01CD0E3C,afStack_78 + 8,uVar6);
        *(uint *)(param_1 + 0xc1d4) = 1;
      }
    }
    goto switchD_00448ada_caseD_3;
  }
  uVar1 = *(uint *)(param_1 + 0x273c);
  if (uVar1 < 2) {
    if (uVar1 == 1) {
LAB_0044863b:
      uVar6 = 1;
    }
    else {
LAB_00448820:
      uVar6 = 0;
    }
    FUN_005247c0(param_1 + 0x158,uVar6,1);
  }
  else {
    if (uVar1 < 3) goto LAB_0044863b;
    if (uVar1 != 3) goto LAB_00448820;
    FUN_005247c0(iVar2,0,1);
    FUN_00445430(PTR_DAT_00611100,"%s confused while walking to scriptDest!\n",param_1);
  }
  *(uint *)(param_1 + 0x24a4) = 0;
  *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
  *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
switchD_00448ada_caseD_3:
  if (0.0 < *(float *)(param_1 + 0xc1e4)) {
    *(float *)(param_1 + 0xc1e4) = *(float *)(param_1 + 0xc1e4) - param_2;
  }
  iVar2 = FUN_0042e120(param_1);
  if (iVar2 != 0) {
    iVar2 = *(int *)(param_1 + 0xc1e8);
    if ((iVar2 != 0) &&
       (iVar2 = (**(code **)(*(int *)(iVar2 + 0x154) + 0xf4))(iVar2), iVar2 == param_1)) {
      FUN_00559250(0x01E82168,*(uint *)(param_1 + 0xc1e8));
    }
    FUN_0042d700(param_1,param_2);
    afStack_cc[2] = *(float *)(param_1 + 0x2518) * param_2;
    afStack_cc[3] = *(float *)(param_1 + 0x251c) * param_2;
    fStack_bc = *(float *)(param_1 + 0x2520) * param_2;
    fStack_94 = afStack_cc[2];
    afStack_cc[(uint)bVar4 * -2 + 0xf] = afStack_cc[(uint)bVar4 * -2 + 3];
    afStack_cc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x10] =
         afStack_cc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
    fStack_a0 = fStack_94 + *(float *)(param_1 + 0x250c);
    fStack_9c = fStack_90 + *(float *)(param_1 + 0x2510);
    fStack_98 = fStack_8c + *(float *)(param_1 + 0x2514);
    afStack_78[2] = fStack_a0;
    afStack_78[(uint)bVar4 * -2 + 3] = afStack_cc[(uint)bVar4 * -2 + 0xc];
    afStack_78[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
         afStack_cc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0xd];
    fStack_b8 = afStack_78[2] + *(float *)(param_1 + 0x249c);
    fStack_b4 = afStack_78[3] + *(float *)(param_1 + 0x24a0);
    fStack_b0 = fStack_68 + *(float *)(param_1 + 0x24a4);
    afStack_28[0] = fStack_b8;
    afStack_78[(uint)bVar4 * -2 + 0x15] = afStack_cc[(uint)bVar4 * -2 + 6];
    afStack_78[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x16] =
         afStack_cc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7];
    *(uint *)(param_1 + 0x2514) = 0;
    *(uint *)(param_1 + 0x2510) = *(uint *)(param_1 + 0x2514);
    *(float *)(param_1 + 0x250c) = *(float *)(param_1 + 0x2510);
    *(uint *)(param_1 + 0x24a4) = 0;
    *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
    *(float *)(param_1 + 0x249c) = *(float *)(param_1 + 0x24a0);
    FUN_0042d750(param_1,afStack_78 + 0x14);
  }
  FUN_0042e160(param_1);
  FUN_005675a0(param_1 + 0x158);
  FUN_00433e80(param_1,param_2);
  return;
}
