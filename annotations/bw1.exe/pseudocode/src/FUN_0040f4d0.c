// Name: FUN_0040f4d0
// Address: 0040f4d0
// Address Range: [[0040f4d0, 0040fa65]]
// Convention: unknown
// Signature: void FUN_0040f4d0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void FUN_0040f4d0(int param_1,float param_2)

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
  if (*(int *)(param_1 + 0x200a4) == 0) {
    iVar3 = FUN_004a6c30(0x01C51D80,param_1 + 0x1ffac);
    if (iVar3 != 0) {
      *(uint *)(param_1 + 0x200a4) = 1;
      FUN_005247c0(param_1 + 0x158,6,1);
      *(uint *)(param_1 + 0x200a8) = 1;
    }
  }
  else {
    iVar3 = FUN_004a6c30(0x01C51D80,param_1 + 0x20010);
    if (iVar3 != 0) {
      FUN_005247c0(param_1 + 0x158,7,1);
    }
  }
  if (((*(int *)(param_1 + 0x200a4) == 0) && (*(int *)(param_1 + 0xc1d4) == 2)) ||
     (iVar3 = FUN_0042e1a0(param_1,param_2), iVar3 == 0)) {
    return;
  }
  if (*(int *)(param_1 + 0xc1d4) == 2) {
    FUN_0040fc00(param_1,param_2);
  }
  FUN_00435320(param_1,param_2);
  fVar2 = *(float *)(param_1 + 0xc1d0) - param_2;
  *(float *)(param_1 + 0xc1d0) = fVar2;
  if (fVar2 < 0.0) {
    *(uint *)(param_1 + 0xc1d0) = 0;
  }
  *(uint *)(param_1 + 0x24a4) = 0;
  *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
  *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
  FUN_00410110(param_1,param_2);
  if (*(int *)(param_1 + 0x200a4) == 0) {
    return;
  }
  iVar3 = FUN_00432240(param_1,param_2);
  if (iVar3 == 0) {
    iVar3 = FUN_00524770(param_1 + 0x158);
    switch(*(uint *)(iVar3 + 0x24)) {
    case 0:
    case 1:
    case 2:
    case 3:
      iVar3 = 0;
      if (*(int *)(param_1 + 0xc1d8) != 0) {
        if (*(int *)(param_1 + 0xc1e0) == 0) {
          iVar3 = 1;
        }
        else {
          iVar3 = 3;
        }
      }
      if (*(int *)(param_1 + 0xc1dc) != 0) {
        iVar3 = 2;
      }
      if (*(int *)(param_1 + 0xc1e4) != 0) {
        *(uint *)(param_1 + 0x20088) = 1;
        iVar3 = 4;
        *(uint *)(param_1 + 0xc1e4) = 0;
      }
      *(float *)(param_1 + 0x2508) = *(float *)(param_1 + 0xc200) * *(float *)(param_1 + 0x2528);
      iVar4 = FUN_00524770(param_1 + 0x158);
      if (iVar3 == *(int *)(iVar4 + 0x24)) break;
      goto LAB_0040f63a;
    case 4:
      FUN_005b5080(&DAT_02c8af28,param_1 + 0xfd8 + DAT_007c34cc * 0x30);
      puVar6 = &stack0xffffffc8;
      uStack_38 = uStack_2c;
      *(uint *)((int)&stack0xffffffcc + (uint)bVar5 * 0xfffffffe * 4) =
           *(uint *)(&stack0xffffffd8 + (uint)bVar5 * -8);
      *(uint *)(&stack0xffffffd0 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
           *(uint *)(&stack0xffffffdc + (uint)bVar5 * -8 + (uint)bVar5 * -8);
      FUN_00408b40(param_1,puVar6);
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
      FUN_005b5080(&DAT_02c8af28,param_1 + 0xfd8 + DAT_007c34d0 * 0x30);
      puVar6 = &stack0xffffffb0;
      uStack_50 = uStack_80;
      *(uint *)((int)&stack0xffffffb4 + (uint)bVar5 * 0xfffffffe * 4) =
           *(uint *)(&stack0xffffff84 + (uint)bVar5 * -8);
      *(uint *)(&stack0xffffffb8 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
           *(uint *)(&stack0xffffff88 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
      FUN_00408b40(param_1,puVar6);
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
      if (*(int *)(param_1 + 0x20088) == 0) {
        FUN_004b7150(0x01C57074,&stack0xffffffbc,param_1 + 0x2008c,0x40000000,0x3f000000,
                     0x3f000000,&DAT_00610914);
        FUN_004b7150(0x01C57074,&stack0xffffffe0,param_1 + 0x20098,0x40000000,0x3f000000,
                     0x3f000000,&DAT_00610914);
      }
      if ((uint *)(param_1 + 0x2008c) != &stack0xffffffbc) {
        *(uint *)(param_1 + 0x2008c) = uStack_44;
        *(uint *)(param_1 + 0x20090) = uStack_40;
        *(uint *)(param_1 + 0x20094) = uStack_3c;
      }
      if ((uint *)(param_1 + 0x20098) != &stack0xffffffe0) {
        *(uint *)(param_1 + 0x20098) = uStack_20;
        *(uint *)(param_1 + 0x2009c) = uStack_1c;
        *(uint *)(param_1 + 0x200a0) = uStack_18;
      }
      *(uint *)(param_1 + 0x20088) = 0;
    }
    goto switchD_0040fa5f_default;
  }
  uVar1 = *(uint *)(param_1 + 0x273c);
  if (uVar1 < 2) {
    if (uVar1 != 1) goto LAB_0040f7dd;
    iVar3 = 1;
  }
  else if (uVar1 < 3) {
    iVar3 = 3;
  }
  else {
    if (uVar1 == 3) {
      FUN_005247c0(param_1 + 0x158,0,1);
      FUN_00445430(PTR_DAT_00611100,"%s confused while walking to scriptDest!\n",param_1);
      goto switchD_0040fa5f_default;
    }
LAB_0040f7dd:
    iVar3 = 0;
  }
LAB_0040f63a:
  FUN_005247c0(param_1 + 0x158,iVar3,1);
switchD_0040fa5f_default:
  *(uint *)(param_1 + 0x24a4) = 0;
  *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
  *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
  FUN_0042d700(param_1,param_2);
  FUN_0042e160(param_1);
  iVar3 = param_1 + 0x158;
  FUN_005675a0(iVar3);
  FUN_005b7ed0(param_1 + 0x20074,*(uint *)(param_1 + 0x20080),DAT_007c3498,&LAB_00567360);
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
  FUN_00568d60(iVar3,puVar6);
  iVar3 = 0;
  FUN_00433e80(param_1,param_2);
  do {
    fStack_68 = (float)FUN_0040cc00(0xc0000000,0x40000000);
    iVar3 = iVar3 + 1;
    fStack_64 = 2.0;
    fStack_14 = fStack_68;
    fStack_14 = (float)FUN_0040cc00(0xc0000000,0x40000000);
    fStack_68 = fStack_68 + *(float *)(param_1 + 0x20);
    fStack_64 = fStack_64 + *(float *)(param_1 + 0x24);
    fStack_60 = fStack_14 + *(float *)(param_1 + 0x28);
    FUN_004b5b30(0x01C57074,&stack0xffffff98,0x40000000,0,0xffff);
  } while (iVar3 < 2);
  DAT_007c34dc = DAT_007c34dc + param_2;
  return;
}
