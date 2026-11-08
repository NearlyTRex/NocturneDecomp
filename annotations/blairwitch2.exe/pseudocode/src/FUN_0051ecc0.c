// Name: FUN_0051ecc0
// Address: 0051ecc0
// Address Range: [[0051ecc0, 0051f482]]
// Convention: unknown
// Signature: void FUN_0051ecc0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0051ecc0(int param_1,float param_2)

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
  iVar6 = FUN_004244b0(param_1,param_2);
  if (iVar6 == 0) {
switchD_0051f1f0_caseD_5:
    return;
  }
  FUN_0042b2a0(param_1,param_2);
  fVar1 = *(float *)(param_1 + 0x10a60) - param_2;
  *(float *)(param_1 + 0x10a60) = fVar1;
  if (fVar1 < 0.0) {
    *(uint *)(param_1 + 0x10a60) = 0;
  }
  *(uint *)(param_1 + 0x2510) = 0;
  *(uint *)(param_1 + 0x250c) = *(uint *)(param_1 + 0x2510);
  *(uint *)(param_1 + 0x2508) = *(uint *)(param_1 + 0x250c);
  FUN_0051f9c0(param_1,param_2);
  *(uint *)(param_1 + 0x2594) = *(uint *)(param_1 + 0x2510);
  iVar6 = FUN_004287f0(param_1,param_2);
  if (iVar6 == 0) {
    if (*(int *)(param_1 + 0x10a64) == 2) {
      FUN_0051f490(param_1,param_2);
    }
    iVar6 = FUN_005035c0(param_1 + 0x2b4);
    switch(*(uint *)(iVar6 + 0x24)) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 7:
    case 9:
    case 10:
      if (*(int *)(param_1 + 0x2570) != 0) {
        iVar6 = FUN_0051fcb0(param_1);
        iVar7 = 0;
        if (iVar6 != 0) {
          iVar7 = 7;
        }
        if (*(int *)(param_1 + 0x10a68) != 0) {
          iVar6 = FUN_0051fcb0(param_1);
          if (iVar6 == 0) {
            if (*(int *)(param_1 + 0x10a70) == 0) {
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
        if (*(int *)(param_1 + 0x10a6c) != 0) {
          iVar6 = FUN_0051fcb0(param_1);
          if (iVar6 == 0) {
            iVar7 = 3;
          }
          else {
            iVar7 = 10;
          }
        }
        if ((((*(int *)(param_1 + 0x10a74) != 0) && (*(int *)(param_1 + 0x25640) != 0)) &&
            (iVar6 = *(int *)(param_1 + 0x25654), iVar6 != 0)) &&
           (iVar6 = (**(code **)(*(int *)(iVar6 + 0x2b0) + 0xf0))(iVar6), iVar6 != 0)) {
          (**(code **)(*(int *)(*(int *)(param_1 + 0x25654) + 0x2b0) + 0xec))
                    (*(int *)(param_1 + 0x25654));
          *(uint *)(param_1 + 0x10a74) = 0;
          if (*(int *)(*(int *)(param_1 + 0x25654) + 0x43c) == 9) {
            iVar7 = 0xb;
          }
        }
        *(float *)(param_1 + 0x2578) =
             *(float *)(param_1 + 0x10a90) * *(float *)(param_1 + 0x2598) +
             *(float *)(param_1 + 0x2578);
        iVar6 = FUN_005035c0(param_1 + 0x2b4);
        if (iVar7 != *(int *)(iVar6 + 0x24)) {
          FUN_00503620(param_1 + 0x2b4,iVar7,1);
        }
        if (*(int *)(param_1 + 0x10a80) != 0) {
          *(uint *)(param_1 + 0x10a80) = 0;
          (**(code **)(*(int *)(param_1 + 0x2b0) + 0x150))(param_1,*(int *)(param_1 + 0x25640) == 0)
          ;
        }
      }
      break;
    case 5:
      goto switchD_0051f1f0_caseD_5;
    }
  }
  else {
    *(uint *)(param_1 + 0x2510) = 0;
    *(uint *)(param_1 + 0x250c) = *(uint *)(param_1 + 0x2510);
    *(uint *)(param_1 + 0x2508) = *(uint *)(param_1 + 0x250c);
    uVar2 = *(uint *)(param_1 + 0x27ac);
    if (uVar2 < 2) {
      if (uVar2 == 1) {
        iVar6 = FUN_0051fcb0(param_1);
        if (iVar6 == 0) {
          uVar10 = 1;
        }
        else {
LAB_0051edb3:
          uVar10 = 9;
        }
      }
      else {
LAB_0051f19d:
        iVar6 = FUN_0051fcb0(param_1);
        if (iVar6 == 0) {
          uVar10 = 0;
        }
        else {
          uVar10 = 7;
        }
      }
    }
    else if (uVar2 < 3) {
      iVar6 = FUN_0051fcb0(param_1);
      if (iVar6 != 0) goto LAB_0051edb3;
      uVar10 = 2;
    }
    else {
      if (uVar2 != 3) goto LAB_0051f19d;
      FUN_00436710(PTR_DAT_00609ed0,"%s confused while walking to scriptDest!\n",param_1);
      iVar6 = FUN_0051fcb0(param_1);
      if (iVar6 == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = 7;
      }
    }
    FUN_00503620(param_1 + 0x2b4,uVar10,1);
  }
  if (*(int *)(param_1 + 0x276c) == 0) {
    fStack_54 = *(float *)(param_1 + 0x2508) + *(float *)(param_1 + 0x257c);
    fStack_50 = *(float *)(param_1 + 0x250c) + *(float *)(param_1 + 0x2580);
    fStack_4c = *(float *)(param_1 + 0x2510) + *(float *)(param_1 + 0x2584);
    fStack_30 = fStack_54;
    (&stack0xffffffd4)[(uint)bVar8 * 0xfffffffe] =
         (float)*(uint *)((int)&stack0xffffffb0 + (uint)bVar8 * -8);
    *(uint *)((int)&stack0xffffffd8 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
         *(uint *)((int)&stack0xffffffb4 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
    *(uint *)(param_1 + 0x2510) = 0;
    *(uint *)(param_1 + 0x250c) = *(uint *)(param_1 + 0x2510);
    *(float *)(param_1 + 0x2508) = *(float *)(param_1 + 0x250c);
    *(uint *)(param_1 + 0x2584) = 0;
    *(uint *)(param_1 + 0x2580) = *(uint *)(param_1 + 0x2584);
    *(float *)(param_1 + 0x257c) = *(float *)(param_1 + 0x2580);
    FUN_00423a10(param_1,param_2);
    fStack_60 = *(float *)(param_1 + 0x2588) * param_2;
    pfVar11 = &stack0xffffffd0;
    fStack_5c = *(float *)(param_1 + 0x258c) * param_2;
    fStack_58 = *(float *)(param_1 + 0x2590) * param_2;
    fStack_84 = fStack_60;
    *(uint *)((int)&stack0xffffff80 + (uint)bVar8 * -8) =
         *(uint *)((int)&stack0xffffffa4 + (uint)bVar8 * -8);
    *(uint *)((int)&stack0xffffff84 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
         *(uint *)((int)&stack0xffffffa8 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
    fStack_30 = fStack_30 + fStack_84;
    fStack_2c = fStack_2c + fStack_80;
    fStack_28 = fStack_28 + fStack_7c;
    FUN_00423a60(param_1,pfVar11);
    goto LAB_0051ef62;
  }
  FUN_00408de0(param_1,*(int *)(param_1 + 0x276c) + 0x20);
  uStack_6c = uStack_90;
  *(uint *)((int)&stack0xffffff98 + (uint)bVar8 * 0xfffffffe * 4) =
       *(uint *)(&stack0xffffff74 + (uint)bVar8 * -8);
  *(uint *)(&stack0xffffff9c + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
       *(uint *)(&stack0xffffff78 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
  FUN_005838f0(&stack0xffffff94);
  uStack_78 = uStack_3c;
  *(uint *)((int)&stack0xffffff8c + (uint)bVar8 * -8) =
       *(uint *)(&stack0xffffffc8 + (uint)bVar8 * -8);
  *(uint *)(&stack0xffffff90 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
       *(uint *)(&stack0xffffffcc + (uint)bVar8 * -8 + (uint)bVar8 * -8);
  fStack_14 = (float)FUN_0040d0c0(uStack_74);
  fStack_18 = fStack_14;
  if (fStack_14 < _DAT_005e2b3f) {
    fStack_18 = fStack_14 + _DAT_005e2b43;
  }
  if (_DAT_005e2b47 < fStack_18) {
    fStack_18 = fStack_18 + _DAT_005e2b4b;
  }
  fStack_1c = param_2 * _DAT_005e2b43;
  fStack_20 = -fStack_1c;
  if (fStack_18 < fStack_20) {
    fStack_18 = fStack_20;
  }
  if (fStack_1c < fStack_18) {
    fStack_18 = fStack_1c;
  }
  *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x34) + fStack_18;
  FUN_00408ae0(param_1);
  iVar6 = *(int *)(param_1 + 0x276c);
  fStack_14 = *(float *)(iVar6 + 0x2b0);
  iStack_24 = param_1 + 0x2b4;
  FUN_00546a90(iStack_24,0);
  fVar1 = fStack_14;
  puVar9 = &stack0xffffffb8;
  uStack_48 = uStack_9c;
  *(uint *)((int)&stack0xffffffbc + (uint)bVar8 * 0xfffffffe * 4) =
       *(uint *)(&stack0xffffff68 + (uint)bVar8 * -8);
  iVar7 = param_1;
  *(uint *)(&stack0xffffffc0 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
       *(uint *)(&stack0xffffff6c + (uint)bVar8 * -8 + (uint)bVar8 * -8);
  iVar6 = (**(code **)((int)fVar1 + 0x118))(iVar6,iVar7,puVar9);
  if (iVar6 == 0) {
    *(uint *)(param_1 + 0x276c) = 0;
LAB_0051ef4f:
    uVar10 = 0;
    iVar6 = param_1 + 0x2b4;
  }
  else {
    if (*(int *)(param_1 + 0x276c) == 0) goto LAB_0051ef4f;
    if (*(int *)(param_1 + 0x10a74) == 0) goto LAB_0051ef62;
    uVar10 = 0xf;
    iVar6 = iStack_24;
  }
  FUN_00503620(iVar6,uVar10,1);
LAB_0051ef62:
  FUN_004dccd0(param_1 + 0x2437c);
  iVar6 = *(int *)(param_1 + 0x25654);
  if (iVar6 != 0) {
    (**(code **)(*(int *)(iVar6 + 0x2b0) + 0x14))(iVar6,param_2);
  }
  FUN_0051fd00(param_1,param_2);
  FUN_00424470(param_1);
  fVar1 = *(float *)(param_1 + 0x25a8);
  iVar6 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0xfc))(param_1);
  fStack_14 = (float)FUN_005038a0(param_1 + 0x2b4,0xc);
  bVar3 = 0.0 < fStack_14;
  fStack_14 = (float)FUN_005038a0(param_1 + 0x2b4,0xd);
  bVar4 = 0.0 < fStack_14;
  fStack_14 = (float)FUN_005038a0(param_1 + 0x2b4,4);
  bVar5 = 0.0 < fStack_14;
  fStack_14 = (float)FUN_005038a0(param_1 + 0x2b4,5);
  FUN_005203c0(param_1,param_2,
               0.0 < fStack_14 || (bVar5 || (bVar4 || (bVar3 || (iVar6 != 0 || fVar1 <= 0.0)))));
  iVar6 = param_1 + 0x2b4;
  FUN_00544f00(iVar6);
  FUN_0051ff60(param_1);
  iVar7 = FUN_0051fcb0(param_1);
  if ((iVar7 == 0) &&
     (iVar7 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x114))(param_1), iVar7 == 0)) {
    FUN_00594380(param_1 + 0x25644,*(uint *)(param_1 + 0x25650),_DAT_01e62068,&LAB_00544cc0);
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
    FUN_005466c0(iVar6,puVar9);
  }
  FUN_00429e90(param_1,param_2);
  FUN_00520df0(param_1);
  return;
}
