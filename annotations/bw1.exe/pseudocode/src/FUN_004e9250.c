// Name: FUN_004e9250
// Address: 004e9250
// Address Range: [[004e9250, 004e98a3]]
// Convention: unknown
// Signature: void FUN_004e9250(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e9250(int param_1,float param_2)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  float afStackY_1898 [1522];
  uint *puVar7;
  uint uVar8;
  float *pfVar9;
  uint uStack_bc;
  uint uStack_ac;
  uint uStack_9c;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  uint uStack_78;
  uint uStack_74;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  uint uStack_60;
  uint uStack_54;
  uint uStack_48;
  uint uStack_3c;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  int iStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar6 = 0;
  iVar3 = FUN_0042e1a0(param_1,param_2);
  if (iVar3 == 0) {
    return;
  }
  if (*(int *)(param_1 + 0xc1d4) == 2) {
    FUN_004e98b0(param_1,param_2);
  }
  FUN_00435320(param_1,param_2);
  fVar1 = *(float *)(param_1 + 0xc1d0) - param_2;
  *(float *)(param_1 + 0xc1d0) = fVar1;
  if (fVar1 < 0.0) {
    *(uint *)(param_1 + 0xc1d0) = 0;
  }
  *(uint *)(param_1 + 0x24a4) = 0;
  *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
  *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
  FUN_004e9f20(param_1,param_2);
  iVar3 = FUN_00432240(param_1,param_2);
  if (iVar3 == 0) {
    iVar3 = FUN_00524770(param_1 + 0x158);
    switch(*(uint *)(iVar3 + 0x24)) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 10:
      if (*(int *)(param_1 + 0x2500) != 0) {
        iVar3 = 0;
        if (*(int *)(param_1 + 0x1ffac) != 0) {
          iVar3 = 10;
        }
        if (*(int *)(param_1 + 0xc1d8) != 0) {
          if (*(int *)(param_1 + 0xc1e0) == 0) {
            iVar3 = 1;
          }
          else {
            iVar3 = 2;
          }
        }
        if (*(int *)(param_1 + 0xc1dc) != 0) {
          iVar3 = 3;
        }
        if (*(int *)(param_1 + 0xc1f0) != 0) {
          *(uint *)(param_1 + 0xc1f0) = 0;
          uVar5 = (uint)(*(int *)(param_1 + 0x1ffac) == 0);
          *(uint *)(param_1 + 0x1ffac) = uVar5;
          if (uVar5 == 0) {
            iVar3 = 0;
          }
          else {
            iVar3 = 10;
          }
        }
        if (*(int *)(param_1 + 0xc1e4) != 0) {
          bVar2 = true;
          if ((*(int *)(param_1 + 0x1ffac) == 0) && (*(int *)(param_1 + 0xc1d4) != 2)) {
            iVar4 = FUN_004eb090(param_1);
            bVar2 = false;
            if (iVar4 != 0) goto LAB_004e965f;
            iVar4 = FUN_004eb3e0(param_1,0);
            if ((iVar4 != 0) && (iVar4 != 1)) {
              FUN_004eb5e0(param_1);
            }
            if ((iVar4 != 0) || (iVar4 = FUN_004eb240(param_1), iVar4 != 0)) goto LAB_004e965f;
            iVar4 = FUN_004eb660(param_1);
            if (iVar4 != 0) {
              FUN_004eb7f0(param_1);
              goto LAB_004e965f;
            }
          }
          else {
LAB_004e965f:
            if (!bVar2) goto LAB_004e9680;
          }
          *(uint *)(param_1 + 0xc1e4) = 0;
          if (*(int *)(param_1 + 0x1ffb0) == 0) {
            iVar3 = 0xf;
          }
          else {
            iVar3 = 0xe;
          }
        }
LAB_004e9680:
        *(float *)(param_1 + 0x2508) = *(float *)(param_1 + 0xc200) * *(float *)(param_1 + 0x2528);
        iVar4 = FUN_00524770(param_1 + 0x158);
        if (iVar3 != *(int *)(iVar4 + 0x24)) goto LAB_004e931f;
      }
      break;
    case 9:
      goto switchD_004e9753_caseD_9;
    }
  }
  else {
    uVar5 = *(uint *)(param_1 + 0x273c);
    if (uVar5 < 2) {
      if (uVar5 == 1) {
        iVar3 = 1;
      }
      else {
LAB_004e95bd:
        iVar3 = 0;
      }
    }
    else {
      if (2 < uVar5) {
        if (uVar5 == 3) {
          FUN_005247c0(param_1 + 0x158,0,1);
          FUN_00445430(PTR_DAT_00611100,"%s confused while walking to scriptDest!\n",param_1);
          goto switchD_004e9753_caseD_4;
        }
        goto LAB_004e95bd;
      }
      iVar3 = 2;
    }
LAB_004e931f:
    FUN_005247c0(param_1 + 0x158,iVar3,1);
  }
switchD_004e9753_caseD_4:
  if (*(int *)(param_1 + 0x26fc) == 0) {
    FUN_0042d700(param_1,param_2);
    fStack_90 = *(float *)(param_1 + 0x249c) + *(float *)(param_1 + 0x250c);
    fStack_8c = *(float *)(param_1 + 0x24a0) + *(float *)(param_1 + 0x2510);
    fStack_88 = *(float *)(param_1 + 0x24a4) + *(float *)(param_1 + 0x2514);
    fStack_84 = fStack_90;
    (&stack0xffffff80)[(uint)bVar6 * 0xfffffffe] =
         (float)*(uint *)((int)&stack0xffffff74 + (uint)bVar6 * -8);
    *(uint *)((int)&stack0xffffff84 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
         *(uint *)((int)&stack0xffffff78 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
    *(uint *)(param_1 + 0x24a4) = 0;
    *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
    *(float *)(param_1 + 0x249c) = *(float *)(param_1 + 0x24a0);
    *(uint *)(param_1 + 0x2514) = 0;
    *(float *)(param_1 + 0x2510) = *(float *)(param_1 + 0x2514);
    *(float *)(param_1 + 0x250c) = *(float *)(param_1 + 0x2514);
    iVar3 = FUN_00524770(param_1 + 0x158);
    if ((*(int *)(iVar3 + 0x24) == 0xe) || (*(int *)(iVar3 + 0x24) == 0xf)) {
      fStack_80 = 0.0;
      fStack_84 = 0.0;
      fStack_7c = 0.0;
    }
    fStack_6c = *(float *)(param_1 + 0x2518) * param_2;
    pfVar9 = &stack0xffffff7c;
    fStack_68 = *(float *)(param_1 + 0x251c) * param_2;
    fStack_64 = *(float *)(param_1 + 0x2520) * param_2;
    fStack_30 = fStack_6c;
    *(uint *)((int)&stack0xffffffd4 + (uint)bVar6 * -8) =
         *(uint *)((int)&stack0xffffff98 + (uint)bVar6 * -8);
    *(uint *)((int)&stack0xffffffd8 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
         *(uint *)((int)&stack0xffffff9c + (uint)bVar6 * -8 + (uint)bVar6 * -8);
    fStack_84 = fStack_84 + fStack_30;
    fStack_80 = fStack_80 + fStack_2c;
    fStack_7c = fStack_7c + fStack_28;
    FUN_0042d750(param_1,pfVar9);
  }
  else {
    if (*(int *)(param_1 + 0x2700) == 0) {
      FUN_00408bb0(param_1,*(int *)(param_1 + 0x26fc) + 0x20);
      uStack_60 = uStack_54;
      *(uint *)((int)&stack0xffffffa4 + (uint)bVar6 * 0xfffffffe * 4) =
           *(uint *)(&stack0xffffffb0 + (uint)bVar6 * -8);
      *(uint *)(&stack0xffffffa8 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
           *(uint *)(&stack0xffffffb4 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
      FUN_005a7520(&stack0xffffffa0);
      uStack_78 = uStack_48;
      *(uint *)((int)&stack0xffffff8c + (uint)bVar6 * -8) =
           *(uint *)(&stack0xffffffbc + (uint)bVar6 * -8);
      *(uint *)(&stack0xffffff90 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
           *(uint *)(&stack0xffffffc0 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
      fStack_14 = (float)FUN_0040cd60(uStack_74);
      fStack_1c = fStack_14;
      if (fStack_14 < _DAT_005e4533) {
        fStack_1c = fStack_14 + _DAT_005e4537;
      }
      if (_DAT_005e453b < fStack_1c) {
        fStack_1c = fStack_1c + _DAT_005e453f;
      }
      fStack_24 = param_2 * _DAT_005e4537;
      fStack_18 = -fStack_24;
      if (fStack_1c < fStack_18) {
        fStack_1c = fStack_18;
      }
      if (fStack_24 < fStack_1c) {
        fStack_1c = fStack_24;
      }
      *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x34) + fStack_1c;
      FUN_004088b0(param_1);
    }
    iStack_20 = *(int *)(param_1 + 0x26fc);
    fStack_14 = *(float *)(iStack_20 + 0x154);
    FUN_00569130(param_1 + 0x158,0);
    puVar7 = &stack0xffffff64;
    uStack_9c = uStack_3c;
    *(uint *)((int)&stack0xffffff68 + (uint)bVar6 * 0xfffffffe * 4) =
         *(uint *)(&stack0xffffffc8 + (uint)bVar6 * -8);
    *(uint *)(&stack0xffffff6c + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
         *(uint *)(&stack0xffffffcc + (uint)bVar6 * -8 + (uint)bVar6 * -8);
    iVar3 = (**(code **)((int)fStack_14 + 0x110))(iStack_20,param_1,puVar7);
    if (iVar3 == 0) {
      *(uint *)(param_1 + 0x26fc) = 0;
LAB_004e94ca:
      uVar8 = 0;
    }
    else {
      if (*(int *)(param_1 + 0x26fc) == 0) goto LAB_004e94ca;
      if (*(int *)(param_1 + 0xc1e4) == 0) goto LAB_004e94dd;
      uVar8 = 0x11;
    }
    FUN_005247c0(param_1 + 0x158,uVar8,1);
  }
LAB_004e94dd:
  FUN_0042e160(param_1);
  iVar3 = param_1 + 0x158;
  FUN_005675a0(iVar3);
  iVar4 = (**(code **)(*(int *)(param_1 + 0x154) + 0x10c))(param_1);
  if ((iVar4 == 0) && (iVar4 = FUN_00524770(iVar3), *(int *)(iVar4 + 0x24) != 0x13)) {
    FUN_005b7ed0(param_1 + 0x1ffb4,*(uint *)(param_1 + 0x1ffc0),_DAT_01d069d8,&LAB_00567360);
    puVar7 = &stack0xffffff54;
    uStack_ac = uStack_bc;
    *(uint *)((int)&stack0xffffff58 + (uint)bVar6 * 0xfffffffe * 4) =
         *(uint *)(&stack0xffffff48 + (uint)bVar6 * -8);
    *(uint *)(&stack0xffffff5c + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
         *(uint *)(&stack0xffffff4c + (uint)bVar6 * -8 + (uint)bVar6 * -8);
    *(uint *)
     ((int)(&stack0xffffff5c + (uint)bVar6 * -8 + (uint)bVar6 * -8) + ((uint)bVar6 * -2 + 1) * 4) =
         *(uint *)
          ((int)(&stack0xffffff4c + (uint)bVar6 * -8 + (uint)bVar6 * -8) +
          ((uint)bVar6 * -2 + 1) * 4);
    FUN_00568d60(iVar3,puVar7);
  }
  FUN_00433e80(param_1,param_2);
switchD_004e9753_caseD_9:
  return;
}
