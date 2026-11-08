// Name: FUN_00485d70
// Address: 00485d70
// Address Range: [[00485d70, 00486464]]
// Convention: unknown
// Signature: void FUN_00485d70(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00485d70(int param_1,float param_2)

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
  iVar2 = FUN_0042e1a0();
  if (iVar2 == 0) {
    FUN_00573a80(*(uint *)(param_1 + 0xc278));
    return;
  }
  *(uint *)(param_1 + 0x24a4) = 0;
  *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
  *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
  fStack_24 = param_2 * *(float *)(param_1 + 0xc1d0);
  iVar2 = param_1 + 0x158;
  while (0.0 < fStack_24) {
    FUN_00524270();
    FUN_00434a80();
  }
  *(float *)(param_1 + 0x2524) = *(float *)(param_1 + 0x24a4) * (float)_DAT_005db69a;
  FUN_00435320();
  iVar3 = FUN_00524770(iVar2);
  iVar3 = *(int *)(iVar3 + 0x24);
  iStack_18 = iVar3;
  iVar4 = FUN_00432240();
  if (iVar4 == 0) {
    switch(iVar3) {
    case 0:
      iVar3 = FUN_004a0fe0();
      if (iVar3 == 0) {
        (**(code **)(*(int *)(param_1 + 0x154) + 0x144))();
        if (*(int *)(param_1 + 0xc1e8) != 0) {
          FUN_005247c0(iVar2,1,1);
        }
      }
      else {
        FUN_005247c0(iVar2,1,1);
      }
      break;
    case 1:
      (**(code **)(*(int *)(param_1 + 0x154) + 0x144))();
      uVar5 = 0x40400000;
      if (*(int *)(param_1 + 0xc1e8) == 0) {
        iVar3 = FUN_004a0fe0();
        if (iVar3 == 0) {
          FUN_005247c0(iVar2,0,1);
        }
      }
      else {
        uStack_1c = 0x40400000;
        *(uint *)(param_1 + 0x24a4) = 0;
        *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
        *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
        uStack_cc = 0;
        uStack_c8 = 0;
        uStack_c4 = uVar5;
        (**(code **)(*(int *)(*(int *)(param_1 + 0xc1e8) + 0x154) + 0xc4))();
        iVar3 = FUN_0042ccf0();
        if (iVar3 < 0) {
          FUN_00445430(PTR_DAT_00611100,"%s gave up chase - I'm confused\n",param_1);
          FUN_005247c0(iVar2,0,1);
        }
        else if ((0 < iVar3) && (*(float *)(param_1 + 0xc1e4) <= 0.0)) {
          FUN_005247c0(iVar2,2,1);
          *(uint *)(param_1 + 0xc1e4) = 0x3f800000;
          iVar2 = FUN_005735a0(*(uint *)(param_1 + 0xc27c));
          if (iVar2 == 0) {
            uVar5 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))();
            *(uint *)(param_1 + 0xc27c) = uVar5;
          }
        }
      }
      break;
    case 2:
      FUN_0042c010(auStack_144);
      fStack_140 = (float)FUN_0040cc00();
      iStack_110 = param_1;
      iStack_10c = param_1;
      iStack_20 = param_1 + 0xfd8;
      fStack_14 = fStack_140;
      FUN_005b5080();
      uStack_48 = afStack_bc[2];
      afStack_bc[(uint)bVar6 * -2 + 0x1e] = afStack_bc[(uint)bVar6 * -2 + 3];
      afStack_bc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x1f] =
           afStack_bc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
      FUN_00408b40();
      uStack_c0 = uStack_9c;
      afStack_bc[(uint)bVar6 * -2] = afStack_bc[(uint)bVar6 * -2 + 9];
      afStack_bc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
           afStack_bc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10];
      FUN_004a0770();
      fStack_140 = (float)FUN_0040cc00();
      iStack_110 = param_1;
      iStack_10c = param_1;
      fStack_14 = fStack_140;
      FUN_005b5080();
      uStack_f0 = uStack_78;
      afStack_104[(uint)bVar6 * -2 + 6] = afStack_bc[(uint)bVar6 * -2 + 0x12];
      afStack_104[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7] =
           afStack_bc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x13];
      FUN_00408b40();
      uStack_e4 = uStack_60;
      afStack_104[(uint)bVar6 * -2 + 9] = afStack_bc[(uint)bVar6 * -2 + 0x18];
      afStack_104[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10] =
           afStack_bc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x19];
      FUN_004a0770();
      break;
    case 8:
      if ((*(int *)(param_1 + 0xc1d4) == 0) && (*(int *)(param_1 + 0xdc) == 0)) {
        FUN_00569040();
        uStack_30 = uStack_3c;
        afStack_bc[(uint)bVar6 * -2 + 0x24] = afStack_bc[(uint)bVar6 * -2 + 0x21];
        afStack_bc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x25] =
             afStack_bc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x22];
        FUN_00408b40();
        uVar5 = 1;
        uVar7 = CONCAT44(afStack_bc + 0x1a,0x01CD0E3C);
        afStack_54[0] = (float)uStack_108;
        afStack_bc[(uint)bVar6 * -2 + 0x1b] = afStack_104[(uint)bVar6 * -2];
        afStack_bc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x1c] =
             afStack_104[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
        FUN_004e62e0(uVar7,uVar5);
        *(uint *)(param_1 + 0xc1d4) = 1;
      }
      break;
    case 9:
      if (*(int *)(param_1 + 0x2500) != 0) {
        FUN_005247c0(iVar2,10,1);
      }
    }
    goto switchD_004863fe_caseD_3;
  }
  uVar1 = *(uint *)(param_1 + 0x273c);
  if (uVar1 < 2) {
    if (uVar1 == 1) {
LAB_00485e46:
      uVar5 = 1;
    }
    else {
LAB_00486093:
      uVar5 = 0;
    }
    FUN_005247c0(param_1 + 0x158,uVar5,1);
  }
  else {
    if (uVar1 < 3) goto LAB_00485e46;
    if (uVar1 != 3) goto LAB_00486093;
    FUN_005247c0(iVar2,0,1);
    FUN_00445430(PTR_DAT_00611100,"%s confused while walking to scriptDest!\n",param_1);
  }
  *(uint *)(param_1 + 0x24a4) = 0;
  *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
  *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
switchD_004863fe_caseD_3:
  if (0.0 < *(float *)(param_1 + 0xc1e4)) {
    *(float *)(param_1 + 0xc1e4) = *(float *)(param_1 + 0xc1e4) - param_2;
  }
  if ((iStack_18 == 1) &&
     (iVar2 = FUN_00574010((double)*(float *)(param_1 + 0x20),(double)*(float *)(param_1 + 0x24),
                           (double)*(float *)(param_1 + 0x28),0x42480000), iVar2 != 0)) {
    iVar2 = FUN_005735a0(*(uint *)(param_1 + 0xc278));
    if (iVar2 == 0) {
      FUN_00572ac0();
      fStack_14 = (float)FUN_0040cc00(0,0x3f800000,2);
      FUN_00572a50((double)fStack_14);
      uVar5 = (**(code **)(*(int *)(param_1 + 0x154) + 0x30))();
      *(uint *)(param_1 + 0xc278) = uVar5;
      FUN_00572b40();
    }
  }
  else {
    FUN_00573a80(*(uint *)(param_1 + 0xc278));
  }
  iVar2 = FUN_0042e120(param_1);
  if (iVar2 != 0) {
    iVar2 = *(int *)(param_1 + 0xc1e8);
    if ((iVar2 != 0) &&
       (iVar2 = (**(code **)(*(int *)(iVar2 + 0x154) + 0xf4))(iVar2), iVar2 == param_1)) {
      FUN_00559250();
    }
    FUN_0042d700();
    afStack_104[2] = *(float *)(param_1 + 0x2518) * param_2;
    afStack_104[3] = *(float *)(param_1 + 0x251c) * param_2;
    fStack_f4 = *(float *)(param_1 + 0x2520) * param_2;
    fStack_90 = afStack_104[2];
    afStack_bc[(uint)bVar6 * -2 + 0xc] = afStack_104[(uint)bVar6 * -2 + 3];
    afStack_bc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd] =
         afStack_104[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
    fStack_6c = fStack_90 + *(float *)(param_1 + 0x250c);
    fStack_68 = fStack_8c + *(float *)(param_1 + 0x2510);
    fStack_64 = fStack_88 + *(float *)(param_1 + 0x2514);
    fStack_a8 = fStack_6c;
    afStack_bc[(uint)bVar6 * -2 + 6] = afStack_bc[(uint)bVar6 * -2 + 0x15];
    afStack_bc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7] =
         afStack_bc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x16];
    fStack_d8 = fStack_a8 + *(float *)(param_1 + 0x249c);
    fStack_d4 = fStack_a4 + *(float *)(param_1 + 0x24a0);
    fStack_d0 = fStack_a0 + *(float *)(param_1 + 0x24a4);
    fStack_84 = fStack_d8;
    afStack_bc[(uint)bVar6 * -2 + 0xf] = afStack_104[(uint)bVar6 * -2 + 0xc];
    afStack_bc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x10] =
         afStack_104[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd];
    *(uint *)(param_1 + 0x2514) = 0;
    *(uint *)(param_1 + 0x2510) = *(uint *)(param_1 + 0x2514);
    *(float *)(param_1 + 0x250c) = *(float *)(param_1 + 0x2510);
    *(uint *)(param_1 + 0x24a4) = 0;
    *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
    *(float *)(param_1 + 0x249c) = *(float *)(param_1 + 0x24a0);
    FUN_0042d750();
  }
  FUN_0042e160(param_1);
  FUN_005675a0(param_1 + 0x158);
  FUN_00433e80();
  return;
}
