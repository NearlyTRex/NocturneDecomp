// Name: FUN_00460230
// Address: 00460230
// Address Range: [[00460230, 0046095e]]
// Convention: unknown
// Signature: void FUN_00460230(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00460230(int param_1,float param_2)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  byte *puVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  float afStackY_1078 [1012];
  uint uVar8;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  int iStack_84;
  int iStack_80;
  uint uStack_7c;
  float fStack_78;
  float afStack_74 [4];
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
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  uint uStack_18;
  float fStack_14;
  
  bVar7 = 0;
  iVar5 = FUN_0042e1a0(param_1,param_2);
  if (iVar5 == 0) {
    return;
  }
  *(uint *)(param_1 + 0x24a4) = 0;
  *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
  *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
  fStack_24 = param_2 * *(float *)(param_1 + 0xc1d0) * *(float *)(param_1 + 0xc2cc);
  iVar5 = param_1 + 0x158;
  while (0.0 < fStack_24) {
    uVar8 = FUN_00524270(iVar5,afStack_74 + 0x14);
    FUN_00434a80(param_1,uVar8);
  }
  iVar6 = FUN_00524770(iVar5);
  fVar3 = param_2 * *(float *)(param_1 + 0xc1d0) * _DAT_005d8d68;
  uVar1 = *(uint *)(iVar6 + 0x24);
  *(uint *)(param_1 + 0x2524) = *(uint *)(param_1 + 0x24a4);
  FUN_00435320(param_1,fVar3);
  iVar6 = FUN_00432240(param_1,param_2);
  if (iVar6 == 0) {
    if (*(int *)(param_1 + 0xc2f0) != 0) {
      *(uint *)(param_1 + 0xc1e8) = 0;
      *(uint *)(param_1 + 0xc9c4) = 0;
      FUN_00431cc0(param_1,*(uint *)(param_1 + 0xc2f0),0x3f800000,0x41000000,param_1 + 0xc2f4)
      ;
      uVar2 = *(uint *)(param_1 + 0xc2f4);
      if (uVar2 == 0) {
LAB_004605ea:
        *(uint *)(param_1 + 0xc2f0) = 0;
        *(uint *)(param_1 + 0xc9c4) = 0x40800000;
        FUN_005247c0(param_1 + 0x158,0x12,1);
        FUN_00445430(PTR_DAT_00611100,"DJIEN: reached dest - going to protect\n");
      }
      else if (uVar2 < 2) {
        FUN_005247c0(iVar5,6,1);
      }
      else {
        if (uVar2 != 2) goto LAB_004605ea;
        FUN_005247c0(iVar5,7,1);
      }
    }
    uVar8 = 0x02C82A60;
    if ((uVar1 < 3) || (uVar1 < 4)) {
      fVar3 = *(float *)(param_1 + 0xc9c4) - param_2;
      *(uint *)(param_1 + 0xc9c0) = 0;
      *(float *)(param_1 + 0xc9c4) = fVar3;
      puVar4 = PTR_DAT_00611100;
      if (fVar3 <= 0.0) {
        *(uint *)(param_1 + 0xc9c4) = 0;
        FUN_00445430(puVar4,"DJIEN: walk waited long enough - going home\n");
        uVar8 = FUN_00435380(param_1,"DjienHome");
        *(uint *)(param_1 + 0xc2f0) = uVar8;
      }
    }
    else if (uVar1 < 6) {
      if (uVar1 == 5) {
        *(uint *)(param_1 + 0xc9c0) = 1;
        iVar5 = FUN_0057d9c0(uVar8,*(uint *)(param_1 + 0xc2c8));
        if (iVar5 == 0) {
          uVar8 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))
                            (param_1,"djien_awake.wav @ 4");
          *(uint *)(param_1 + 0xc2c8) = uVar8;
        }
      }
    }
    else if ((uVar1 < 7) || (uVar1 < 8)) {
      *(uint *)(param_1 + 0xc9c0) = 1;
      (**(code **)(*(int *)(param_1 + 0x154) + 0x150))(param_1);
      iVar5 = *(int *)(param_1 + 0xc2f0);
      if (iVar5 == 0) {
        iVar6 = FUN_004a6c30(0x01C51D80,"DjienInZone");
        if (iVar6 == 0) {
          FUN_00445430(PTR_DAT_00611100,"DJIEN: got outside of box - hesitating\n");
          FUN_00460960(param_1);
        }
        else {
          (**(code **)(*(int *)(param_1 + 0x154) + 0x144))(param_1,param_2);
          uVar8 = 0x41000000;
          if (*(int *)(param_1 + 0xc1e8) == 0) {
            FUN_00445430(PTR_DAT_00611100,"DJIEN: lost victim - hesitating\n");
            FUN_00460960(param_1);
          }
          else {
            uStack_18 = 0x41000000;
            *(uint *)(param_1 + 0x24a4) = 0;
            *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
            *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
            uStack_7c = uVar8;
            iStack_84 = iVar5;
            iStack_80 = iVar5;
            uVar8 = (**(code **)(*(int *)(*(int *)(param_1 + 0xc1e8) + 0x154) + 0xc4))
                              (*(int *)(param_1 + 0xc1e8),&iStack_84,0x3f000000,0x3e32b8c2);
            iVar5 = FUN_0042ccf0(param_1,*(int *)(param_1 + 0xc1e8) + 0x20,uVar8);
            if (iVar5 != 0) {
              FUN_00445430(PTR_DAT_00611100,"DJIEN: reached victim or got confused - hesitating\n");
              FUN_00460960(param_1);
            }
          }
        }
      }
    }
    else if (uVar1 == 0x12) {
      fVar3 = *(float *)(param_1 + 0xc9c4) - param_2;
      *(uint *)(param_1 + 0xc9c0) = 1;
      *(float *)(param_1 + 0xc9c4) = fVar3;
      if (fVar3 <= 0.0) {
        *(uint *)(param_1 + 0xc9c4) = 0;
        (**(code **)(*(int *)(param_1 + 0x154) + 0x144))(param_1,param_2);
        iVar5 = *(int *)(param_1 + 0xc1e8);
        if (iVar5 != 0) {
          fStack_48 = *(float *)(iVar5 + 0x20) - *(float *)(param_1 + 0x20);
          fStack_44 = *(float *)(iVar5 + 0x24) - *(float *)(param_1 + 0x24);
          fStack_40 = *(float *)(iVar5 + 0x28) - *(float *)(param_1 + 0x28);
          fStack_30 = fStack_48;
          afStack_74[(uint)bVar7 * -2 + 0x12] = afStack_74[(uint)bVar7 * -2 + 0xc];
          afStack_74[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x13] =
               afStack_74[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd];
          fStack_1c = fStack_28 * fStack_28 + fStack_30 * fStack_30 + fStack_2c * fStack_2c;
          fStack_20 = (float)(((int)fStack_1c >> 1) + _DAT_01cc804c);
          if (fStack_20 < *(float *)(param_1 + 0xc1e0)) {
            FUN_00445430(PTR_DAT_00611100,"DJIEN: protect found victim - going to run\n");
            FUN_005247c0(param_1 + 0x158,7,1);
          }
        }
      }
    }
    goto LAB_00460332;
  }
  uVar1 = *(uint *)(param_1 + 0x273c);
  if (uVar1 < 2) {
    if (uVar1 == 1) {
LAB_00460307:
      uVar8 = 6;
    }
    else {
LAB_00460577:
      fStack_14 = (float)FUN_00525020(param_1 + 0x158);
      if (fStack_14 <= (float)_DAT_005d8d70) goto LAB_0046031a;
      uVar8 = 0;
    }
    FUN_005247c0(param_1 + 0x158,uVar8,1);
  }
  else {
    if (uVar1 < 3) goto LAB_00460307;
    if (uVar1 != 3) goto LAB_00460577;
    FUN_005247c0(iVar5,0,1);
    FUN_00445430(PTR_DAT_00611100,"%s confused while walking to scriptDest!\n",param_1);
  }
LAB_0046031a:
  *(uint *)(param_1 + 0x24a4) = 0;
  *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
  *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
LAB_00460332:
  if (*(int *)(param_1 + 0xc2d4) <= *(int *)(param_1 + 0xc2d0)) {
    FUN_004a1b70(0x01C51D80,"DjienSacksGone");
    iVar5 = FUN_004a6c30(0x01C51D80,"DjienHeartDestroyed");
    if (iVar5 != 0) {
      *(uint *)(param_1 + 0x2538) = 0;
      iVar5 = FUN_00524770(param_1 + 0x158);
      if ((*(int *)(iVar5 + 0x24) != 0xf) && (*(int *)(iVar5 + 0x24) != 0xe)) {
        FUN_0057d9d0(0x02C82A60,*(uint *)(param_1 + 0xc2c8));
        uVar8 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"djien_die.wav@ 4");
        *(uint *)(param_1 + 0xc1d4) = 1;
        *(uint *)(param_1 + 0xc2c8) = uVar8;
        if (*(int *)(param_1 + 0xc9bc) == 0) {
          FUN_00460cb0(param_1);
          FUN_00524b10(param_1 + 0x158,0xf,0);
        }
      }
    }
  }
  if (0.0 < *(float *)(param_1 + 0xc1e4)) {
    *(float *)(param_1 + 0xc1e4) = *(float *)(param_1 + 0xc1e4) - param_2;
  }
  iVar5 = FUN_0042e120(param_1);
  if (iVar5 != 0) {
    FUN_0042d700(param_1,param_2);
    afStack_74[2] = *(float *)(param_1 + 0x2518) * param_2;
    afStack_74[3] = *(float *)(param_1 + 0x251c) * param_2;
    fStack_64 = *(float *)(param_1 + 0x2520) * param_2;
    fStack_90 = afStack_74[2];
    *(float *)((int)&stack0xffffff74 + (uint)bVar7 * -8) = afStack_74[(uint)bVar7 * -2 + 3];
    *(float *)((int)&stack0xffffff78 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
         afStack_74[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
    fStack_60 = fStack_90 + *(float *)(param_1 + 0x250c);
    fStack_5c = fStack_8c + *(float *)(param_1 + 0x2510);
    fStack_58 = fStack_88 + *(float *)(param_1 + 0x2514);
    fStack_54 = fStack_60;
    afStack_74[(uint)bVar7 * -2 + 9] = afStack_74[(uint)bVar7 * -2 + 6];
    afStack_74[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10] =
         afStack_74[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
    fStack_3c = fStack_54 + *(float *)(param_1 + 0x249c);
    fStack_38 = fStack_50 + *(float *)(param_1 + 0x24a0);
    fStack_34 = fStack_4c + *(float *)(param_1 + 0x24a4);
    fStack_78 = fStack_3c;
    afStack_74[(uint)bVar7 * -2] = afStack_74[(uint)bVar7 * -2 + 0xf];
    afStack_74[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
         afStack_74[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x10];
    *(uint *)(param_1 + 0x2514) = 0;
    *(uint *)(param_1 + 0x2510) = *(uint *)(param_1 + 0x2514);
    *(float *)(param_1 + 0x250c) = *(float *)(param_1 + 0x2510);
    *(uint *)(param_1 + 0x24a4) = 0;
    *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
    *(float *)(param_1 + 0x249c) = *(float *)(param_1 + 0x24a0);
    FUN_0042d750(param_1,&fStack_78);
  }
  FUN_0042e160(param_1);
  FUN_005675a0(param_1 + 0x158);
  FUN_00433e80(param_1,param_2);
  return;
}
