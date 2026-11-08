// Name: FUN_0046d870
// Address: 0046d870
// Address Range: [[0046d870, 0046df64]]
// Convention: unknown
// Signature: void FUN_0046d870(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046d870(int param_1,float param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  float afStackY_10f0 [996];
  ulonglong uVar7;
  byte auStack_144 [4];
  float fStack_140;
  int iStack_110;
  int iStack_10c;
  uint uStack_108;
  float afStack_104 [4];
  float fStack_f4;
  uint uStack_f0;
  uint uStack_e4;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  uint uStack_cc;
  uint uStack_c8;
  uint uStack_c4;
  uint uStack_c0;
  float afStack_bc [5];
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  uint uStack_9c;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  uint uStack_78;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  uint uStack_60;
  float afStack_54 [3];
  uint uStack_48;
  uint uStack_3c;
  uint uStack_30;
  float fStack_24;
  int iStack_20;
  uint uStack_1c;
  int iStack_18;
  float fStack_14;
  
  bVar6 = 0;
  iVar2 = FUN_004244b0();
  if (iVar2 == 0) {
    FUN_00551050(*(uint *)(param_1 + 0x10b08));
    return;
  }
  *(uint *)(param_1 + 0x2510) = 0;
  *(uint *)(param_1 + 0x250c) = *(uint *)(param_1 + 0x2510);
  *(uint *)(param_1 + 0x2508) = *(uint *)(param_1 + 0x250c);
  fStack_24 = param_2 * *(float *)(param_1 + 0x10a60);
  iVar2 = param_1 + 0x2b4;
  while (0.0 < fStack_24) {
    FUN_005030c0();
    FUN_0042aa00();
  }
  *(float *)(param_1 + 0x2594) = *(float *)(param_1 + 0x2510) * (float)_DAT_005d18a1;
  FUN_0042b2a0();
  iVar3 = FUN_005035c0(iVar2);
  iVar3 = *(int *)(iVar3 + 0x24);
  iStack_18 = iVar3;
  iVar4 = FUN_004287f0();
  if (iVar4 == 0) {
    switch(iVar3) {
    case 0:
      iVar3 = FUN_00488970();
      if (iVar3 == 0) {
        (**(code **)(*(int *)(param_1 + 0x2b0) + 0x150))();
        if (*(int *)(param_1 + 0x10a78) != 0) {
          FUN_00503620(iVar2,1,1);
        }
      }
      else {
        FUN_00503620(iVar2,1,1);
      }
      break;
    case 1:
      (**(code **)(*(int *)(param_1 + 0x2b0) + 0x150))();
      uVar5 = 0x40400000;
      if (*(int *)(param_1 + 0x10a78) == 0) {
        iVar3 = FUN_00488970();
        if (iVar3 == 0) {
          FUN_00503620(iVar2,0,1);
        }
      }
      else {
        uStack_1c = 0x40400000;
        *(uint *)(param_1 + 0x2510) = 0;
        *(uint *)(param_1 + 0x250c) = *(uint *)(param_1 + 0x2510);
        *(uint *)(param_1 + 0x2508) = *(uint *)(param_1 + 0x250c);
        uStack_cc = 0;
        uStack_c8 = 0;
        uStack_c4 = uVar5;
        (**(code **)(*(int *)(*(int *)(param_1 + 0x10a78) + 0x2b0) + 0xcc))();
        iVar3 = FUN_00423000();
        if (iVar3 < 0) {
          FUN_00436710(PTR_DAT_00609ed0,"%s gave up chase - I'm confused\n",param_1);
          FUN_00503620(iVar2,0,1);
        }
        else if ((0 < iVar3) && (*(float *)(param_1 + 0x10a74) <= 0.0)) {
          FUN_00503620(iVar2,2,1);
          *(uint *)(param_1 + 0x10a74) = 0x3f800000;
          iVar2 = FUN_00550b70(*(uint *)(param_1 + 0x10b0c));
          if (iVar2 == 0) {
            uVar5 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))();
            *(uint *)(param_1 + 0x10b0c) = uVar5;
          }
        }
      }
      break;
    case 2:
      FUN_004222d0(auStack_144);
      fStack_140 = (float)FUN_0040cf60();
      iStack_110 = param_1;
      iStack_10c = param_1;
      iStack_20 = param_1 + 0x1134;
      fStack_14 = fStack_140;
      FUN_00591530();
      uStack_48 = afStack_bc[2];
      afStack_bc[(uint)bVar6 * -2 + 0x1e] = afStack_bc[(uint)bVar6 * -2 + 3];
      afStack_bc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x1f] =
           afStack_bc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
      FUN_00408d70();
      uStack_c0 = uStack_9c;
      afStack_bc[(uint)bVar6 * -2] = afStack_bc[(uint)bVar6 * -2 + 9];
      afStack_bc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
           afStack_bc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10];
      FUN_00488110();
      fStack_140 = (float)FUN_0040cf60();
      iStack_110 = param_1;
      iStack_10c = param_1;
      fStack_14 = fStack_140;
      FUN_00591530();
      uStack_f0 = uStack_78;
      afStack_104[(uint)bVar6 * -2 + 6] = afStack_bc[(uint)bVar6 * -2 + 0x12];
      afStack_104[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7] =
           afStack_bc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x13];
      FUN_00408d70();
      uStack_e4 = uStack_60;
      afStack_104[(uint)bVar6 * -2 + 9] = afStack_bc[(uint)bVar6 * -2 + 0x18];
      afStack_104[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10] =
           afStack_bc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x19];
      FUN_00488110();
      break;
    case 8:
      if ((*(int *)(param_1 + 0x10a64) == 0) && (*(int *)(param_1 + 0xdc) == 0)) {
        FUN_005469a0();
        uStack_30 = uStack_3c;
        afStack_bc[(uint)bVar6 * -2 + 0x24] = afStack_bc[(uint)bVar6 * -2 + 0x21];
        afStack_bc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x25] =
             afStack_bc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x22];
        FUN_00408d70();
        uVar5 = 1;
        uVar7 = CONCAT44(afStack_bc + 0x1a,0x01CB8284);
        afStack_54[0] = (float)uStack_108;
        afStack_bc[(uint)bVar6 * -2 + 0x1b] = afStack_104[(uint)bVar6 * -2];
        afStack_bc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x1c] =
             afStack_104[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
        FUN_004c9ad0(uVar7,uVar5);
        *(uint *)(param_1 + 0x10a64) = 1;
      }
      break;
    case 9:
      if (*(int *)(param_1 + 0x2570) != 0) {
        FUN_00503620(iVar2,10,1);
      }
    }
    goto switchD_0046defe_caseD_3;
  }
  uVar1 = *(uint *)(param_1 + 0x27ac);
  if (uVar1 < 2) {
    if (uVar1 == 1) {
LAB_0046d946:
      uVar5 = 1;
    }
    else {
LAB_0046db93:
      uVar5 = 0;
    }
    FUN_00503620(param_1 + 0x2b4,uVar5,1);
  }
  else {
    if (uVar1 < 3) goto LAB_0046d946;
    if (uVar1 != 3) goto LAB_0046db93;
    FUN_00503620(iVar2,0,1);
    FUN_00436710(PTR_DAT_00609ed0,"%s confused while walking to scriptDest!\n",param_1);
  }
  *(uint *)(param_1 + 0x2510) = 0;
  *(uint *)(param_1 + 0x250c) = *(uint *)(param_1 + 0x2510);
  *(uint *)(param_1 + 0x2508) = *(uint *)(param_1 + 0x250c);
switchD_0046defe_caseD_3:
  if (0.0 < *(float *)(param_1 + 0x10a74)) {
    *(float *)(param_1 + 0x10a74) = *(float *)(param_1 + 0x10a74) - param_2;
  }
  if ((iStack_18 == 1) &&
     (iVar2 = FUN_005515e0((double)*(float *)(param_1 + 0x20),(double)*(float *)(param_1 + 0x24),
                           (double)*(float *)(param_1 + 0x28),0x42480000), iVar2 != 0)) {
    iVar2 = FUN_00550b70(*(uint *)(param_1 + 0x10b08));
    if (iVar2 == 0) {
      FUN_00550450();
      fStack_14 = (float)FUN_0040cf60(0,0x3f800000,2);
      FUN_005503e0((double)fStack_14);
      uVar5 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x38))();
      *(uint *)(param_1 + 0x10b08) = uVar5;
      FUN_005504d0();
    }
  }
  else {
    FUN_00551050(*(uint *)(param_1 + 0x10b08));
  }
  iVar2 = FUN_00424430(param_1);
  if (iVar2 != 0) {
    iVar2 = *(int *)(param_1 + 0x10a78);
    if ((iVar2 != 0) &&
       (iVar2 = (**(code **)(*(int *)(iVar2 + 0x2b0) + 0xfc))(iVar2), iVar2 == param_1)) {
      FUN_00537e30();
    }
    FUN_00423a10();
    afStack_104[2] = *(float *)(param_1 + 0x2588) * param_2;
    afStack_104[3] = *(float *)(param_1 + 0x258c) * param_2;
    fStack_f4 = *(float *)(param_1 + 0x2590) * param_2;
    fStack_90 = afStack_104[2];
    afStack_bc[(uint)bVar6 * -2 + 0xc] = afStack_104[(uint)bVar6 * -2 + 3];
    afStack_bc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd] =
         afStack_104[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
    fStack_6c = fStack_90 + *(float *)(param_1 + 0x257c);
    fStack_68 = fStack_8c + *(float *)(param_1 + 0x2580);
    fStack_64 = fStack_88 + *(float *)(param_1 + 0x2584);
    fStack_a8 = fStack_6c;
    afStack_bc[(uint)bVar6 * -2 + 6] = afStack_bc[(uint)bVar6 * -2 + 0x15];
    afStack_bc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7] =
         afStack_bc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x16];
    fStack_d8 = fStack_a8 + *(float *)(param_1 + 0x2508);
    fStack_d4 = fStack_a4 + *(float *)(param_1 + 0x250c);
    fStack_d0 = fStack_a0 + *(float *)(param_1 + 0x2510);
    fStack_84 = fStack_d8;
    afStack_bc[(uint)bVar6 * -2 + 0xf] = afStack_104[(uint)bVar6 * -2 + 0xc];
    afStack_bc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x10] =
         afStack_104[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd];
    *(uint *)(param_1 + 0x2584) = 0;
    *(uint *)(param_1 + 0x2580) = *(uint *)(param_1 + 0x2584);
    *(float *)(param_1 + 0x257c) = *(float *)(param_1 + 0x2580);
    *(uint *)(param_1 + 0x2510) = 0;
    *(uint *)(param_1 + 0x250c) = *(uint *)(param_1 + 0x2510);
    *(float *)(param_1 + 0x2508) = *(float *)(param_1 + 0x250c);
    FUN_00423a60();
  }
  FUN_00424470(param_1);
  FUN_00544f00(param_1 + 0x2b4);
  FUN_00429e90();
  return;
}
