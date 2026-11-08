// Name: FUN_0040f950
// Address: 0040f950
// Address Range: [[0040f950, 0040fee5]]
// Convention: unknown
// Signature: void FUN_0040f950(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void FUN_0040f950(int param_1,float param_2)

{
  uint uVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  float afStackY_1894 [1520];
  uint *puVar6;
  uint uStack_b8;
  uint uStack_a8;
  uint uStack_98;
  uint uStack_94;
  uint uStack_90;
  uint uStack_8c;
  uint uStack_80;
  uint uStack_74;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_2c;
  uint uStack_20;
  uint uStack_1c;
  uint uStack_18;
  float fStack_14;
  
  bVar5 = 0;
  if (*(int *)(param_1 + 0x25738) == 0) {
    iVar3 = FUN_0048e340(0x01C38BC0,param_1 + 0x25640);
    if (iVar3 != 0) {
      *(uint *)(param_1 + 0x25738) = 1;
      FUN_00503620(param_1 + 0x2b4,6,1);
      *(uint *)(param_1 + 0x2573c) = 1;
    }
  }
  else {
    iVar3 = FUN_0048e340(0x01C38BC0,param_1 + 0x256a4);
    if (iVar3 != 0) {
      FUN_00503620(param_1 + 0x2b4,7,1);
    }
  }
  if (((*(int *)(param_1 + 0x25738) == 0) && (*(int *)(param_1 + 0x10a64) == 2)) ||
     (iVar3 = FUN_004244b0(param_1,param_2), iVar3 == 0)) {
    return;
  }
  if (*(int *)(param_1 + 0x10a64) == 2) {
    FUN_00410080(param_1,param_2);
  }
  FUN_0042b2a0(param_1,param_2);
  fVar2 = *(float *)(param_1 + 0x10a60) - param_2;
  *(float *)(param_1 + 0x10a60) = fVar2;
  if (fVar2 < 0.0) {
    *(uint *)(param_1 + 0x10a60) = 0;
  }
  *(uint *)(param_1 + 0x2510) = 0;
  *(uint *)(param_1 + 0x250c) = *(uint *)(param_1 + 0x2510);
  *(uint *)(param_1 + 0x2508) = *(uint *)(param_1 + 0x250c);
  FUN_00410590(param_1,param_2);
  if (*(int *)(param_1 + 0x25738) == 0) {
    return;
  }
  iVar3 = FUN_004287f0(param_1,param_2);
  if (iVar3 == 0) {
    iVar3 = FUN_005035c0(param_1 + 0x2b4);
    switch(*(uint *)(iVar3 + 0x24)) {
    case 0:
    case 1:
    case 2:
    case 3:
      iVar3 = 0;
      if (*(int *)(param_1 + 0x10a68) != 0) {
        if (*(int *)(param_1 + 0x10a70) == 0) {
          iVar3 = 1;
        }
        else {
          iVar3 = 3;
        }
      }
      if (*(int *)(param_1 + 0x10a6c) != 0) {
        iVar3 = 2;
      }
      if (*(int *)(param_1 + 0x10a74) != 0) {
        *(uint *)(param_1 + 0x2571c) = 1;
        iVar3 = 4;
        *(uint *)(param_1 + 0x10a74) = 0;
      }
      *(float *)(param_1 + 0x2578) = *(float *)(param_1 + 0x10a90) * *(float *)(param_1 + 0x2598);
      iVar4 = FUN_005035c0(param_1 + 0x2b4);
      if (iVar3 == *(int *)(iVar4 + 0x24)) break;
      goto LAB_0040faba;
    case 4:
      FUN_00591530(&DAT_0265370c,param_1 + 0x1134 + DAT_007bc4cc * 0x30);
      puVar6 = &stack0xffffffc8;
      uStack_38 = uStack_2c;
      *(uint *)((int)&stack0xffffffcc + (uint)bVar5 * 0xfffffffe * 4) =
           *(uint *)(&stack0xffffffd8 + (uint)bVar5 * -8);
      *(uint *)(&stack0xffffffd0 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
           *(uint *)(&stack0xffffffdc + (uint)bVar5 * -8 + (uint)bVar5 * -8);
      FUN_00408d70(param_1,puVar6);
      uStack_98 = uStack_74;
      (&stack0xffffff6c)[(uint)bVar5 * 0xfffffffe] =
           *(uint *)(&stack0xffffff90 + (uint)bVar5 * -8);
      *(uint *)((int)&stack0xffffff70 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
           *(uint *)(&stack0xffffff94 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
      if (&stack0xffffffbc != &stack0xffffff68) {
        uStack_44 = uStack_98;
        uStack_40 = uStack_94;
        uStack_3c = uStack_90;
      }
      FUN_00591530(&DAT_0265370c,param_1 + 0x1134 + DAT_007bc4d0 * 0x30);
      puVar6 = &stack0xffffffb0;
      uStack_50 = uStack_80;
      *(uint *)((int)&stack0xffffffb4 + (uint)bVar5 * 0xfffffffe * 4) =
           *(uint *)(&stack0xffffff84 + (uint)bVar5 * -8);
      *(uint *)(&stack0xffffffb8 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
           *(uint *)(&stack0xffffff88 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
      FUN_00408d70(param_1,puVar6);
      uStack_5c = uStack_8c;
      (&stack0xffffffa8)[(uint)bVar5 * 0xfffffffe] =
           *(uint *)(&stack0xffffff78 + (uint)bVar5 * -8);
      *(uint *)((int)&stack0xffffffac + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
           *(uint *)(&stack0xffffff7c + (uint)bVar5 * -8 + (uint)bVar5 * -8);
      if (&stack0xffffffe0 != &stack0xffffffa4) {
        uStack_20 = uStack_5c;
        uStack_1c = uStack_58;
        uStack_18 = uStack_54;
      }
      if (*(int *)(param_1 + 0x2571c) == 0) {
        FUN_0049e850(0x01C3DEB4,&stack0xffffffbc,param_1 + 0x25720,0x40000000,0x3f000000,
                     0x3f000000,&DAT_00609810);
        FUN_0049e850(0x01C3DEB4,&stack0xffffffe0,param_1 + 0x2572c,0x40000000,0x3f000000,
                     0x3f000000,&DAT_00609810);
      }
      if ((uint *)(param_1 + 0x25720) != &stack0xffffffbc) {
        *(uint *)(param_1 + 0x25720) = uStack_44;
        *(uint *)(param_1 + 0x25724) = uStack_40;
        *(uint *)(param_1 + 0x25728) = uStack_3c;
      }
      if ((uint *)(param_1 + 0x2572c) != &stack0xffffffe0) {
        *(uint *)(param_1 + 0x2572c) = uStack_20;
        *(uint *)(param_1 + 0x25730) = uStack_1c;
        *(uint *)(param_1 + 0x25734) = uStack_18;
      }
      *(uint *)(param_1 + 0x2571c) = 0;
    }
    goto switchD_0040fedf_default;
  }
  uVar1 = *(uint *)(param_1 + 0x27ac);
  if (uVar1 < 2) {
    if (uVar1 != 1) goto LAB_0040fc5d;
    iVar3 = 1;
  }
  else if (uVar1 < 3) {
    iVar3 = 3;
  }
  else {
    if (uVar1 == 3) {
      FUN_00503620(param_1 + 0x2b4,0,1);
      FUN_00436710(PTR_DAT_00609ed0,"%s confused while walking to scriptDest!\n",param_1);
      goto switchD_0040fedf_default;
    }
LAB_0040fc5d:
    iVar3 = 0;
  }
LAB_0040faba:
  FUN_00503620(param_1 + 0x2b4,iVar3,1);
switchD_0040fedf_default:
  *(uint *)(param_1 + 0x2510) = 0;
  *(uint *)(param_1 + 0x250c) = *(uint *)(param_1 + 0x2510);
  *(uint *)(param_1 + 0x2508) = *(uint *)(param_1 + 0x250c);
  FUN_00423a10(param_1,param_2);
  FUN_00424470(param_1);
  iVar3 = param_1 + 0x2b4;
  FUN_00544f00(iVar3);
  FUN_00594380(param_1 + 0x25708,*(uint *)(param_1 + 0x25714),DAT_007bc498,&LAB_00544cc0);
  puVar6 = &stack0xffffff58;
  uStack_a8 = uStack_b8;
  *(uint *)((int)&stack0xffffff5c + (uint)bVar5 * 0xfffffffe * 4) =
       *(uint *)(&stack0xffffff4c + (uint)bVar5 * -8);
  *(uint *)(&stack0xffffff60 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
       *(uint *)(&stack0xffffff50 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  *(uint *)
   ((int)(&stack0xffffff60 + (uint)bVar5 * -8 + (uint)bVar5 * -8) + ((uint)bVar5 * -2 + 1) * 4) =
       *(uint *)
        ((int)(&stack0xffffff50 + (uint)bVar5 * -8 + (uint)bVar5 * -8) + ((uint)bVar5 * -2 + 1) * 4)
  ;
  FUN_005466c0(iVar3,puVar6);
  iVar3 = 0;
  FUN_00429e90(param_1,param_2);
  do {
    fStack_68 = (float)FUN_0040cf60(0xc0000000,0x40000000);
    iVar3 = iVar3 + 1;
    fStack_64 = 2.0;
    fStack_14 = fStack_68;
    fStack_14 = (float)FUN_0040cf60(0xc0000000,0x40000000);
    fStack_68 = fStack_68 + *(float *)(param_1 + 0x20);
    fStack_64 = fStack_64 + *(float *)(param_1 + 0x24);
    fStack_60 = fStack_14 + *(float *)(param_1 + 0x28);
    FUN_0049d230(0x01C3DEB4,&stack0xffffff98,0x40000000,0,0xffff);
  } while (iVar3 < 2);
  DAT_007bc4dc = DAT_007bc4dc + param_2;
  return;
}
