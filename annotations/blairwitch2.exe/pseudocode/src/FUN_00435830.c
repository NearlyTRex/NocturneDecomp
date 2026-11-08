// Name: FUN_00435830
// Address: 00435830
// Address Range: [[00435830, 00435e24]]
// Convention: unknown
// Signature: void FUN_00435830(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00435830(int param_1,float param_2)

{
  uint uVar1;
  float fVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  float afStackY_18b0 [1522];
  uint *puVar7;
  uint uVar8;
  uint uStack_d4;
  uint uStack_c4;
  float fStack_b4;
  uint uStack_a8;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  uint uStack_90;
  uint uStack_8c;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  uint uStack_6c;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  uint uStack_48;
  uint uStack_3c;
  uint uStack_30;
  int iStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar6 = 0;
  iVar4 = FUN_004244b0(param_1,param_2);
  if (iVar4 == 0) {
    return;
  }
  fVar2 = *(float *)(param_1 + 0x10a60) - param_2;
  *(float *)(param_1 + 0x10a60) = fVar2;
  if (fVar2 < 0.0) {
    *(uint *)(param_1 + 0x10a60) = 0;
  }
  *(uint *)(param_1 + 0x2510) = 0;
  *(uint *)(param_1 + 0x250c) = *(uint *)(param_1 + 0x2510);
  *(uint *)(param_1 + 0x2508) = *(uint *)(param_1 + 0x250c);
  FUN_00436420(param_1,param_2);
  if (*(int *)(param_1 + 0x10a64) == 2) {
    FUN_00435e30(param_1,param_2);
  }
  *(uint *)(param_1 + 0x2594) = *(uint *)(param_1 + 0x2510);
  FUN_0042b2a0(param_1,param_2);
  iVar4 = FUN_004287f0(param_1,param_2);
  if (iVar4 == 0) {
    iVar4 = FUN_005035c0(param_1 + 0x2b4);
    switch(*(uint *)(iVar4 + 0x24)) {
    case 0:
    case 1:
    case 2:
    case 3:
      if (*(int *)(param_1 + 0x2570) != 0) {
        iVar4 = 0;
        if (*(int *)(param_1 + 0x10a68) != 0) {
          if (*(int *)(param_1 + 0x10a70) == 0) {
            iVar4 = 1;
          }
          else {
            iVar4 = 2;
          }
        }
        if (*(int *)(param_1 + 0x10a6c) != 0) {
          iVar4 = 3;
        }
        if (*(int *)(param_1 + 0x10a80) != 0) {
          *(uint *)(param_1 + 0x10a80) = 0;
          iVar4 = 0;
          *(uint *)(param_1 + 0x25640) = (uint)(*(int *)(param_1 + 0x25640) == 0);
        }
        if (*(int *)(param_1 + 0x10a74) != 0) {
          bVar3 = true;
          if ((*(int *)(param_1 + 0x25640) == 0) && (*(int *)(param_1 + 0x10a64) != 2)) {
            iVar5 = FUN_004cec50(param_1);
            bVar3 = false;
            if (iVar5 != 0) goto LAB_00435c28;
            iVar5 = FUN_004cf030(param_1,0);
            if ((iVar5 != 0) && (iVar5 != 1)) {
              FUN_004cf230(param_1);
            }
            if ((iVar5 != 0) || (iVar5 = FUN_004cee90(param_1), iVar5 != 0)) goto LAB_00435c28;
            iVar5 = FUN_004cf2b0(param_1);
            if (iVar5 != 0) {
              FUN_004cf440(param_1);
              goto LAB_00435c28;
            }
          }
          else {
LAB_00435c28:
            if (!bVar3) goto LAB_00435c36;
          }
          *(uint *)(param_1 + 0x10a74) = 0;
        }
LAB_00435c36:
        *(float *)(param_1 + 0x2578) = *(float *)(param_1 + 0x10a90) * *(float *)(param_1 + 0x2598);
        iVar5 = FUN_005035c0(param_1 + 0x2b4);
        if (iVar4 != *(int *)(iVar5 + 0x24)) goto LAB_00435919;
      }
      break;
    case 6:
      goto switchD_00435cf7_caseD_6;
    }
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x27ac);
    if (uVar1 < 2) {
      if (uVar1 == 1) {
        iVar4 = 1;
      }
      else {
LAB_00435b9d:
        iVar4 = 0;
      }
    }
    else {
      if (2 < uVar1) {
        if (uVar1 == 3) {
          FUN_00503620(param_1 + 0x2b4,0,1);
          FUN_00436710(PTR_DAT_00609ed0,"%s confused while walking to scriptDest!\n",param_1);
          goto switchD_00435cf7_caseD_4;
        }
        goto LAB_00435b9d;
      }
      iVar4 = 2;
    }
LAB_00435919:
    FUN_00503620(param_1 + 0x2b4,iVar4,1);
  }
switchD_00435cf7_caseD_4:
  if (*(int *)(param_1 + 0x276c) == 0) {
    FUN_00423a10(param_1,param_2);
    fStack_60 = *(float *)(param_1 + 0x2588) * param_2;
    fStack_5c = *(float *)(param_1 + 0x258c) * param_2;
    fStack_58 = *(float *)(param_1 + 0x2590) * param_2;
    fStack_9c = fStack_60;
    *(uint *)((int)&stack0xffffff68 + (uint)bVar6 * -8) =
         *(uint *)((int)&stack0xffffffa4 + (uint)bVar6 * -8);
    *(uint *)((int)&stack0xffffff6c + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
         *(uint *)((int)&stack0xffffffa8 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
    fStack_54 = *(float *)(param_1 + 0x2508) + *(float *)(param_1 + 0x257c);
    fStack_50 = *(float *)(param_1 + 0x250c) + *(float *)(param_1 + 0x2580);
    fStack_4c = *(float *)(param_1 + 0x2510) + *(float *)(param_1 + 0x2584);
    fStack_84 = fStack_54;
    *(uint *)((int)&stack0xffffff80 + (uint)bVar6 * -8) =
         *(uint *)((int)&stack0xffffffb0 + (uint)bVar6 * -8);
    *(uint *)((int)&stack0xffffff84 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
         *(uint *)((int)&stack0xffffffb4 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
    fStack_78 = fStack_84 + fStack_9c;
    fStack_74 = fStack_80 + fStack_98;
    fStack_70 = fStack_7c + fStack_94;
    fStack_b4 = fStack_84 + fStack_9c;
    *(uint *)((int)&stack0xffffff50 + (uint)bVar6 * 0xfffffffe * 4) =
         *(uint *)((int)&stack0xffffff8c + (uint)bVar6 * -8);
    *(uint *)(&stack0xffffff54 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
         *(uint *)((int)&stack0xffffff90 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
    *(uint *)(param_1 + 0x2510) = 0;
    *(uint *)(param_1 + 0x250c) = *(uint *)(param_1 + 0x2510);
    *(float *)(param_1 + 0x2508) = *(float *)(param_1 + 0x250c);
    *(uint *)(param_1 + 0x2584) = 0;
    *(uint *)(param_1 + 0x2580) = *(uint *)(param_1 + 0x2584);
    *(float *)(param_1 + 0x257c) = *(float *)(param_1 + 0x2580);
    FUN_00423a60(param_1,&stack0xffffff4c);
  }
  else {
    if (*(int *)(param_1 + 0x2770) == 0) {
      FUN_00408de0(param_1,*(int *)(param_1 + 0x276c) + 0x20);
      uStack_a8 = uStack_6c;
      *(uint *)((int)&stack0xffffff5c + (uint)bVar6 * 0xfffffffe * 4) =
           *(uint *)(&stack0xffffff98 + (uint)bVar6 * -8);
      *(uint *)(&stack0xffffff60 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
           *(uint *)(&stack0xffffff9c + (uint)bVar6 * -8 + (uint)bVar6 * -8);
      FUN_005838f0(&stack0xffffff58);
      uStack_90 = uStack_30;
      *(uint *)((int)&stack0xffffff74 + (uint)bVar6 * -8) =
           *(uint *)(&stack0xffffffd4 + (uint)bVar6 * -8);
      *(uint *)(&stack0xffffff78 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
           *(uint *)(&stack0xffffffd8 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
      fStack_14 = (float)FUN_0040d0c0(uStack_8c);
      fStack_18 = fStack_14;
      if (fStack_14 < _DAT_005cdbe1) {
        fStack_18 = fStack_14 + _DAT_005cdbe5;
      }
      if (_DAT_005cdbe9 < fStack_18) {
        fStack_18 = fStack_18 + _DAT_005cdbed;
      }
      fStack_1c = param_2 * _DAT_005cdbe5;
      fStack_20 = -fStack_1c;
      if (fStack_18 < fStack_20) {
        fStack_18 = fStack_20;
      }
      if (fStack_1c < fStack_18) {
        fStack_18 = fStack_1c;
      }
      *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x34) + fStack_18;
      FUN_00408ae0(param_1);
    }
    iStack_24 = *(int *)(param_1 + 0x276c);
    fStack_14 = *(float *)(iStack_24 + 0x2b0);
    FUN_00546a90(param_1 + 0x2b4,0);
    fVar2 = fStack_14;
    iVar4 = iStack_24;
    puVar7 = &stack0xffffffb8;
    uStack_48 = uStack_3c;
    *(uint *)((int)&stack0xffffffbc + (uint)bVar6 * 0xfffffffe * 4) =
         *(uint *)(&stack0xffffffc8 + (uint)bVar6 * -8);
    iVar5 = param_1;
    *(uint *)(&stack0xffffffc0 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
         *(uint *)(&stack0xffffffcc + (uint)bVar6 * -8 + (uint)bVar6 * -8);
    iVar4 = (**(code **)((int)fVar2 + 0x118))(iVar4,iVar5,puVar7);
    if (iVar4 == 0) {
      *(uint *)(param_1 + 0x276c) = 0;
LAB_00435ad0:
      uVar8 = 0;
    }
    else {
      if (*(int *)(param_1 + 0x276c) == 0) goto LAB_00435ad0;
      if (*(int *)(param_1 + 0x10a74) == 0) goto LAB_00435ae3;
      uVar8 = 9;
    }
    FUN_00503620(param_1 + 0x2b4,uVar8,1);
  }
LAB_00435ae3:
  FUN_00424470(param_1);
  iVar4 = param_1 + 0x2b4;
  FUN_00544f00(iVar4);
  iVar5 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x114))(param_1);
  if (iVar5 == 0) {
    FUN_00594380(param_1 + 0x25648,*(uint *)(param_1 + 0x25654),DAT_007c150c,&LAB_00544cc0);
    puVar7 = &stack0xffffff2c;
    uStack_d4 = uStack_c4;
    *(uint *)((int)&stack0xffffff30 + (uint)bVar6 * 0xfffffffe * 4) =
         *(uint *)(&stack0xffffff40 + (uint)bVar6 * -8);
    *(uint *)(&stack0xffffff34 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
         *(uint *)(&stack0xffffff44 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
    *(uint *)
     ((int)(&stack0xffffff34 + (uint)bVar6 * -8 + (uint)bVar6 * -8) + ((uint)bVar6 * -2 + 1) * 4) =
         *(uint *)
          ((int)(&stack0xffffff44 + (uint)bVar6 * -8 + (uint)bVar6 * -8) +
          ((uint)bVar6 * -2 + 1) * 4);
    FUN_005466c0(iVar4,puVar7);
  }
  FUN_00429e90(param_1,param_2);
switchD_00435cf7_caseD_6:
  return;
}
