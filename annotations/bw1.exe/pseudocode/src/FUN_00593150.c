// Name: FUN_00593150
// Address: 00593150
// Address Range: [[00593150, 005938b7]]
// Convention: unknown
// Signature: void FUN_00593150(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00593150(int param_1,float param_2)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  float afStackY_18ac [1521];
  uint *puVar7;
  uint uVar8;
  uint uStack_d0;
  uint uStack_c0;
  uint uStack_b0;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  uint uStack_98;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  uint uStack_80;
  float fStack_7c;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  uint uStack_5c;
  uint uStack_50;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  uint uStack_38;
  int iStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar6 = 0;
  if ((*(float *)(param_1 + 0x2538) < (float)_DAT_005f756f) &&
     (fVar1 = *(float *)(param_1 + 0x2538) + param_2, *(float *)(param_1 + 0x2538) = fVar1,
     (float)_DAT_005f756f < fVar1)) {
    *(uint *)(param_1 + 0x2538) = 0x42c80000;
  }
  iVar3 = FUN_0042e1a0(param_1,param_2);
  if ((iVar3 == 0) || (*(int *)(param_1 + 0x1ffa8) == 4)) {
switchD_005935af_caseD_9:
    return;
  }
  FUN_00434790(param_1,param_2);
  FUN_00435320(param_1,param_2);
  fVar1 = *(float *)(param_1 + 0xc1d0) - param_2;
  *(float *)(param_1 + 0xc1d0) = fVar1;
  if (fVar1 < 0.0) {
    *(uint *)(param_1 + 0xc1d0) = 0;
  }
  *(uint *)(param_1 + 0x24a4) = 0;
  *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
  *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
  FUN_005940a0(param_1,param_2);
  *(uint *)(param_1 + 0x2524) = *(uint *)(param_1 + 0x24a4);
  iVar3 = FUN_00432240(param_1,param_2);
  if (iVar3 == 0) {
    if (*(int *)(param_1 + 0xc1d4) == 2) {
      FUN_005938c0(param_1,param_2);
    }
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
            if (iVar4 != 0) goto LAB_00593649;
            iVar4 = FUN_004eb3e0(param_1,0);
            if ((iVar4 != 0) && (iVar4 != 1)) {
              FUN_004eb5e0(param_1);
            }
            if ((iVar4 != 0) || (iVar4 = FUN_004eb240(param_1), iVar4 != 0)) goto LAB_00593649;
            iVar4 = FUN_004eb660(param_1);
            if (iVar4 != 0) {
              FUN_004eb7f0(param_1);
              goto LAB_00593649;
            }
          }
          else {
LAB_00593649:
            if (!bVar2) goto LAB_0059366a;
          }
          *(uint *)(param_1 + 0xc1e4) = 0;
          if (*(int *)(param_1 + 0x1ffb0) == 0) {
            iVar3 = 0xf;
          }
          else {
            iVar3 = 0xe;
          }
        }
LAB_0059366a:
        *(float *)(param_1 + 0x2508) = *(float *)(param_1 + 0xc200) * *(float *)(param_1 + 0x2528);
        iVar4 = FUN_00524770(param_1 + 0x158);
        if (iVar3 != *(int *)(iVar4 + 0x24)) goto LAB_005932a3;
      }
      break;
    case 9:
      goto switchD_005935af_caseD_9;
    }
  }
  else {
    iVar3 = FUN_00524770(param_1 + 0x158);
    if ((*(int *)(iVar3 + 0x24) != 0x1a) && (*(int *)(iVar3 + 0x24) != 0x1b)) {
      *(uint *)(param_1 + 0x24a4) = 0;
      *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
      *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
    }
    uVar5 = *(uint *)(param_1 + 0x273c);
    if (uVar5 < 2) {
      if (uVar5 == 1) {
        iVar3 = 1;
      }
      else {
LAB_0059356b:
        iVar3 = 0;
      }
    }
    else {
      if (2 < uVar5) {
        if (uVar5 == 3) {
          FUN_005247c0(param_1 + 0x158,0,1);
          FUN_00445430(PTR_DAT_00611100,"%s confused while walking to scriptDest!\n",param_1);
          goto switchD_005935af_caseD_4;
        }
        goto LAB_0059356b;
      }
      iVar3 = 2;
    }
LAB_005932a3:
    FUN_005247c0(param_1 + 0x158,iVar3,1);
  }
switchD_005935af_caseD_4:
  if (*(int *)(param_1 + 0x26fc) == 0) {
    fStack_8c = *(float *)(param_1 + 0x249c);
    fStack_88 = *(float *)(param_1 + 0x24a0);
    fStack_84 = *(float *)(param_1 + 0x24a4);
    iVar3 = FUN_00524770(param_1 + 0x158);
    if (*(int *)(iVar3 + 0x24) != 0x1a) {
      FUN_0042d700(param_1,param_2);
    }
    fStack_74 = *(float *)(param_1 + 0x2518) * param_2;
    fStack_70 = *(float *)(param_1 + 0x251c) * param_2;
    fStack_6c = *(float *)(param_1 + 0x2520) * param_2;
    fStack_44 = fStack_74;
    *(uint *)((int)&stack0xffffffc0 + (uint)bVar6 * -8) =
         *(uint *)((int)&stack0xffffff90 + (uint)bVar6 * -8);
    *(uint *)((int)&stack0xffffffc4 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
         *(uint *)((int)&stack0xffffff94 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
    fStack_68 = fStack_44 + *(float *)(param_1 + 0x250c);
    fStack_64 = fStack_40 + *(float *)(param_1 + 0x2510);
    fStack_60 = fStack_3c + *(float *)(param_1 + 0x2514);
    fStack_a4 = fStack_68;
    *(uint *)((int)&stack0xffffff60 + (uint)bVar6 * -8) =
         *(uint *)((int)&stack0xffffff9c + (uint)bVar6 * -8);
    *(uint *)((int)&stack0xffffff64 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
         *(uint *)((int)&stack0xffffffa0 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
    fStack_8c = fStack_8c + fStack_a4;
    fStack_88 = fStack_88 + fStack_a0;
    fStack_84 = fStack_84 + fStack_9c;
    iVar3 = FUN_00524770(param_1 + 0x158);
    iVar3 = *(int *)(iVar3 + 0x24);
    if ((((iVar3 != 0x17) && (iVar3 != 0x18)) && (iVar3 != 0x19)) &&
       (((iVar3 != 0x25 && (iVar3 != 0x26)) && ((iVar3 != 0x27 && (iVar3 != 0x28)))))) {
      FUN_0042d750(param_1,&stack0xffffff74);
    }
    iVar3 = FUN_00524770(param_1 + 0x158);
    if (*(int *)(iVar3 + 0x24) == 0x1a) {
      *(float *)(param_1 + 0x24) = param_2 * (float)_DAT_005f7577 + *(float *)(param_1 + 0x24);
    }
    goto LAB_00593467;
  }
  if (*(int *)(param_1 + 0x2700) == 0) {
    FUN_00408bb0(param_1,*(int *)(param_1 + 0x26fc) + 0x20);
    uStack_98 = uStack_5c;
    *(uint *)((int)&stack0xffffff6c + (uint)bVar6 * 0xfffffffe * 4) =
         *(uint *)(&stack0xffffffa8 + (uint)bVar6 * -8);
    *(uint *)(&stack0xffffff70 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
         *(uint *)(&stack0xffffffac + (uint)bVar6 * -8 + (uint)bVar6 * -8);
    FUN_005a7520(&stack0xffffff68);
    uStack_80 = uStack_50;
    (&stack0xffffff84)[(uint)bVar6 * 0xfffffffe] =
         (float)*(uint *)(&stack0xffffffb4 + (uint)bVar6 * -8);
    *(uint *)(&stack0xffffff88 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
         *(uint *)(&stack0xffffffb8 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
    fStack_14 = (float)FUN_0040cd60(fStack_7c);
    fStack_18 = fStack_14;
    if (fStack_14 < _DAT_005f757f) {
      fStack_18 = fStack_14 + _DAT_005f7583;
    }
    if (_DAT_005f7587 < fStack_18) {
      fStack_18 = fStack_18 + _DAT_005f758b;
    }
    fStack_1c = param_2 * _DAT_005f7583;
    fStack_20 = -fStack_1c;
    if (fStack_18 < fStack_20) {
      fStack_18 = fStack_20;
    }
    if (fStack_1c < fStack_18) {
      fStack_18 = fStack_1c;
    }
    *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x34) + fStack_18;
    FUN_004088b0(param_1);
  }
  iStack_24 = *(int *)(param_1 + 0x26fc);
  fStack_14 = *(float *)(iStack_24 + 0x154);
  FUN_00569130(param_1 + 0x158,0);
  puVar7 = &stack0xffffff50;
  uStack_b0 = uStack_38;
  *(uint *)((int)&stack0xffffff54 + (uint)bVar6 * 0xfffffffe * 4) =
       *(uint *)(&stack0xffffffcc + (uint)bVar6 * -8);
  *(uint *)(&stack0xffffff58 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
       *(uint *)(&stack0xffffffd0 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
  iVar3 = (**(code **)((int)fStack_14 + 0x110))(iStack_24,param_1,puVar7);
  if (iVar3 == 0) {
    *(uint *)(param_1 + 0x26fc) = 0;
LAB_00593454:
    uVar8 = 0;
  }
  else {
    if (*(int *)(param_1 + 0x26fc) == 0) goto LAB_00593454;
    if (*(int *)(param_1 + 0xc1e4) == 0) goto LAB_00593467;
    uVar8 = 0x10;
  }
  FUN_005247c0(param_1 + 0x158,uVar8,1);
LAB_00593467:
  FUN_0042e160(param_1);
  iVar3 = param_1 + 0x158;
  FUN_005675a0(iVar3);
  iVar4 = (**(code **)(*(int *)(param_1 + 0x154) + 0x10c))(param_1);
  if (iVar4 == 0) {
    FUN_005b7ed0(param_1 + 0x95618,*(uint *)(param_1 + 0x95624),_DAT_02c83708,&LAB_00567360);
    puVar7 = &stack0xffffff30;
    uStack_d0 = uStack_c0;
    *(uint *)((int)&stack0xffffff34 + (uint)bVar6 * 0xfffffffe * 4) =
         *(uint *)(&stack0xffffff44 + (uint)bVar6 * -8);
    *(uint *)(&stack0xffffff38 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
         *(uint *)(&stack0xffffff48 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
    *(uint *)
     ((int)(&stack0xffffff38 + (uint)bVar6 * -8 + (uint)bVar6 * -8) + ((uint)bVar6 * -2 + 1) * 4) =
         *(uint *)
          ((int)(&stack0xffffff48 + (uint)bVar6 * -8 + (uint)bVar6 * -8) +
          ((uint)bVar6 * -2 + 1) * 4);
    FUN_00568d60(iVar3,puVar7);
  }
  FUN_00433e80(param_1,param_2);
  FUN_00440610(param_1 + 0x1ffb4,param_1 + 0x20,param_1 + 0x30,param_2,
               *(uint *)(param_1 + 0x2504),param_1 + 0x158);
  FUN_00440610(param_1 + 0x5aae4,param_1 + 0x20,param_1 + 0x30,param_2,
               *(uint *)(param_1 + 0x2504),param_1 + 0x158);
  return;
}
