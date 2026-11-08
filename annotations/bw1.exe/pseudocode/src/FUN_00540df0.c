// Name: FUN_00540df0
// Address: 00540df0
// Address Range: [[00540df0, 005415b2]]
// Convention: unknown
// Signature: void FUN_00540df0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00540df0(int param_1,float param_2)

{
  float fVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  byte bVar8;
  float afStackY_1898 [1522];
  uint *puVar9;
  uint uVar10;
  float *pfVar11;
  uint uStack_bc;
  uint uStack_ac;
  uint uStack_9c;
  uint uStack_90;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  uint uStack_78;
  uint uStack_74;
  uint uStack_6c;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  uint uStack_48;
  uint uStack_3c;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  int iStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar8 = 0;
  iVar6 = FUN_0042e1a0(param_1,param_2);
  if (iVar6 == 0) {
switchD_00541320_caseD_5:
    return;
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
  FUN_00541af0(param_1,param_2);
  *(uint *)(param_1 + 0x2524) = *(uint *)(param_1 + 0x24a4);
  iVar6 = FUN_00432240(param_1,param_2);
  if (iVar6 == 0) {
    if (*(int *)(param_1 + 0xc1d4) == 2) {
      FUN_005415c0(param_1,param_2);
    }
    iVar6 = FUN_00524770(param_1 + 0x158);
    switch(*(uint *)(iVar6 + 0x24)) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 7:
    case 9:
    case 10:
      if (*(int *)(param_1 + 0x2500) != 0) {
        iVar6 = FUN_00541de0(param_1);
        iVar7 = 0;
        if (iVar6 != 0) {
          iVar7 = 7;
        }
        if (*(int *)(param_1 + 0xc1d8) != 0) {
          iVar6 = FUN_00541de0(param_1);
          if (iVar6 == 0) {
            if (*(int *)(param_1 + 0xc1e0) == 0) {
              iVar7 = 1;
            }
            else {
              iVar7 = 2;
            }
          }
          else {
            iVar7 = 9;
          }
        }
        if (*(int *)(param_1 + 0xc1dc) != 0) {
          iVar6 = FUN_00541de0(param_1);
          if (iVar6 == 0) {
            iVar7 = 3;
          }
          else {
            iVar7 = 10;
          }
        }
        if ((((*(int *)(param_1 + 0xc1e4) != 0) && (*(int *)(param_1 + 0x1ffac) != 0)) &&
            (iVar6 = *(int *)(param_1 + 0x1ffc0), iVar6 != 0)) &&
           (iVar6 = (**(code **)(*(int *)(iVar6 + 0x154) + 0xe8))(iVar6), iVar6 != 0)) {
          (**(code **)(*(int *)(*(int *)(param_1 + 0x1ffc0) + 0x154) + 0xe4))
                    (*(int *)(param_1 + 0x1ffc0));
          *(uint *)(param_1 + 0xc1e4) = 0;
          if (*(int *)(*(int *)(param_1 + 0x1ffc0) + 0x2e0) == 8) {
            iVar7 = 0xb;
          }
        }
        *(float *)(param_1 + 0x2508) =
             *(float *)(param_1 + 0xc200) * *(float *)(param_1 + 0x2528) +
             *(float *)(param_1 + 0x2508);
        iVar6 = FUN_00524770(param_1 + 0x158);
        if (iVar7 != *(int *)(iVar6 + 0x24)) {
          FUN_005247c0(param_1 + 0x158,iVar7,1);
        }
        if (*(int *)(param_1 + 0xc1f0) != 0) {
          *(uint *)(param_1 + 0xc1f0) = 0;
          (**(code **)(*(int *)(param_1 + 0x154) + 0x144))(param_1,*(int *)(param_1 + 0x1ffac) == 0)
          ;
        }
      }
      break;
    case 5:
      goto switchD_00541320_caseD_5;
    }
  }
  else {
    *(uint *)(param_1 + 0x24a4) = 0;
    *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
    *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
    uVar2 = *(uint *)(param_1 + 0x273c);
    if (uVar2 < 2) {
      if (uVar2 == 1) {
        iVar6 = FUN_00541de0(param_1);
        if (iVar6 == 0) {
          uVar10 = 1;
        }
        else {
LAB_00540ee3:
          uVar10 = 9;
        }
      }
      else {
LAB_005412cd:
        iVar6 = FUN_00541de0(param_1);
        if (iVar6 == 0) {
          uVar10 = 0;
        }
        else {
          uVar10 = 7;
        }
      }
    }
    else if (uVar2 < 3) {
      iVar6 = FUN_00541de0(param_1);
      if (iVar6 != 0) goto LAB_00540ee3;
      uVar10 = 2;
    }
    else {
      if (uVar2 != 3) goto LAB_005412cd;
      FUN_00445430(PTR_DAT_00611100,"%s confused while walking to scriptDest!\n",param_1);
      iVar6 = FUN_00541de0(param_1);
      if (iVar6 == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = 7;
      }
    }
    FUN_005247c0(param_1 + 0x158,uVar10,1);
  }
  if (*(int *)(param_1 + 0x26fc) == 0) {
    fStack_54 = *(float *)(param_1 + 0x249c) + *(float *)(param_1 + 0x250c);
    fStack_50 = *(float *)(param_1 + 0x24a0) + *(float *)(param_1 + 0x2510);
    fStack_4c = *(float *)(param_1 + 0x24a4) + *(float *)(param_1 + 0x2514);
    fStack_30 = fStack_54;
    (&stack0xffffffd4)[(uint)bVar8 * 0xfffffffe] =
         (float)*(uint *)((int)&stack0xffffffb0 + (uint)bVar8 * -8);
    *(uint *)((int)&stack0xffffffd8 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
         *(uint *)((int)&stack0xffffffb4 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
    *(uint *)(param_1 + 0x24a4) = 0;
    *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
    *(float *)(param_1 + 0x249c) = *(float *)(param_1 + 0x24a0);
    *(uint *)(param_1 + 0x2514) = 0;
    *(uint *)(param_1 + 0x2510) = *(uint *)(param_1 + 0x2514);
    *(float *)(param_1 + 0x250c) = *(float *)(param_1 + 0x2510);
    FUN_0042d700(param_1,param_2);
    fStack_60 = *(float *)(param_1 + 0x2518) * param_2;
    pfVar11 = &stack0xffffffd0;
    fStack_5c = *(float *)(param_1 + 0x251c) * param_2;
    fStack_58 = *(float *)(param_1 + 0x2520) * param_2;
    fStack_84 = fStack_60;
    *(uint *)((int)&stack0xffffff80 + (uint)bVar8 * -8) =
         *(uint *)((int)&stack0xffffffa4 + (uint)bVar8 * -8);
    *(uint *)((int)&stack0xffffff84 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
         *(uint *)((int)&stack0xffffffa8 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
    fStack_30 = fStack_30 + fStack_84;
    fStack_2c = fStack_2c + fStack_80;
    fStack_28 = fStack_28 + fStack_7c;
    FUN_0042d750(param_1,pfVar11);
    goto LAB_00541092;
  }
  FUN_00408bb0(param_1,*(int *)(param_1 + 0x26fc) + 0x20);
  uStack_6c = uStack_90;
  *(uint *)((int)&stack0xffffff98 + (uint)bVar8 * 0xfffffffe * 4) =
       *(uint *)(&stack0xffffff74 + (uint)bVar8 * -8);
  *(uint *)(&stack0xffffff9c + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
       *(uint *)(&stack0xffffff78 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
  FUN_005a7520(&stack0xffffff94);
  uStack_78 = uStack_3c;
  *(uint *)((int)&stack0xffffff8c + (uint)bVar8 * -8) =
       *(uint *)(&stack0xffffffc8 + (uint)bVar8 * -8);
  *(uint *)(&stack0xffffff90 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
       *(uint *)(&stack0xffffffcc + (uint)bVar8 * -8 + (uint)bVar8 * -8);
  fStack_14 = (float)FUN_0040cd60(uStack_74);
  fStack_18 = fStack_14;
  if (fStack_14 < _DAT_005ede4b) {
    fStack_18 = fStack_14 + _DAT_005ede4f;
  }
  if (_DAT_005ede53 < fStack_18) {
    fStack_18 = fStack_18 + _DAT_005ede57;
  }
  fStack_1c = param_2 * _DAT_005ede4f;
  fStack_20 = -fStack_1c;
  if (fStack_18 < fStack_20) {
    fStack_18 = fStack_20;
  }
  if (fStack_1c < fStack_18) {
    fStack_18 = fStack_1c;
  }
  *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x34) + fStack_18;
  FUN_004088b0(param_1);
  iVar6 = *(int *)(param_1 + 0x26fc);
  fStack_14 = *(float *)(iVar6 + 0x154);
  iStack_24 = param_1 + 0x158;
  FUN_00569130(iStack_24,0);
  fVar1 = fStack_14;
  puVar9 = &stack0xffffffb8;
  uStack_48 = uStack_9c;
  *(uint *)((int)&stack0xffffffbc + (uint)bVar8 * 0xfffffffe * 4) =
       *(uint *)(&stack0xffffff68 + (uint)bVar8 * -8);
  iVar7 = param_1;
  *(uint *)(&stack0xffffffc0 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
       *(uint *)(&stack0xffffff6c + (uint)bVar8 * -8 + (uint)bVar8 * -8);
  iVar6 = (**(code **)((int)fVar1 + 0x110))(iVar6,iVar7,puVar9);
  if (iVar6 == 0) {
    *(uint *)(param_1 + 0x26fc) = 0;
LAB_0054107f:
    uVar10 = 0;
    iVar6 = param_1 + 0x158;
  }
  else {
    if (*(int *)(param_1 + 0x26fc) == 0) goto LAB_0054107f;
    if (*(int *)(param_1 + 0xc1e4) == 0) goto LAB_00541092;
    uVar10 = 0xf;
    iVar6 = iStack_24;
  }
  FUN_005247c0(iVar6,uVar10,1);
LAB_00541092:
  FUN_004f9f10(param_1 + 0x1fae8);
  iVar6 = *(int *)(param_1 + 0x1ffc0);
  if (iVar6 != 0) {
    (**(code **)(*(int *)(iVar6 + 0x154) + 0xc))(iVar6,param_2);
  }
  FUN_00541e30(param_1,param_2);
  FUN_0042e160(param_1);
  fVar1 = *(float *)(param_1 + 0x2538);
  iVar6 = (**(code **)(*(int *)(param_1 + 0x154) + 0xf4))(param_1);
  fStack_14 = (float)FUN_00524a40(param_1 + 0x158,0xc);
  bVar3 = 0.0 < fStack_14;
  fStack_14 = (float)FUN_00524a40(param_1 + 0x158,0xd);
  bVar4 = 0.0 < fStack_14;
  fStack_14 = (float)FUN_00524a40(param_1 + 0x158,4);
  bVar5 = 0.0 < fStack_14;
  fStack_14 = (float)FUN_00524a40(param_1 + 0x158,5);
  FUN_005424f0(param_1,param_2,
               0.0 < fStack_14 || (bVar5 || (bVar4 || (bVar3 || (iVar6 != 0 || fVar1 <= 0.0)))));
  iVar6 = param_1 + 0x158;
  FUN_005675a0(iVar6);
  FUN_00542090(param_1);
  iVar7 = FUN_00541de0(param_1);
  if ((iVar7 == 0) &&
     (iVar7 = (**(code **)(*(int *)(param_1 + 0x154) + 0x10c))(param_1), iVar7 == 0)) {
    FUN_005b7ed0(param_1 + 0x1ffb0,*(uint *)(param_1 + 0x1ffbc),_DAT_01e7e014,&LAB_00567360);
    puVar9 = &stack0xffffff54;
    uStack_ac = uStack_bc;
    *(uint *)((int)&stack0xffffff58 + (uint)bVar8 * 0xfffffffe * 4) =
         *(uint *)(&stack0xffffff48 + (uint)bVar8 * -8);
    *(uint *)(&stack0xffffff5c + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
         *(uint *)(&stack0xffffff4c + (uint)bVar8 * -8 + (uint)bVar8 * -8);
    *(uint *)
     ((int)(&stack0xffffff5c + (uint)bVar8 * -8 + (uint)bVar8 * -8) + ((uint)bVar8 * -2 + 1) * 4) =
         *(uint *)
          ((int)(&stack0xffffff4c + (uint)bVar8 * -8 + (uint)bVar8 * -8) +
          ((uint)bVar8 * -2 + 1) * 4);
    FUN_00568d60(iVar6,puVar9);
  }
  FUN_00433e80(param_1,param_2);
  FUN_00542f20(param_1);
  return;
}
