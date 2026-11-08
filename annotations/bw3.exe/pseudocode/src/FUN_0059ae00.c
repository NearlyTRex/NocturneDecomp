// Name: FUN_0059ae00
// Address: 0059ae00
// Address Range: [[0059ae00, 0059b2a7]]
// Convention: unknown
// Signature: void FUN_0059ae00(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0059ae00(int param_1,float param_2)

{
  float *pfVar1;
  uint uVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  byte bVar7;
  float afStackY_1094 [1014];
  uint *puVar8;
  char *pcVar9;
  uint uVar10;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  uint uStack_a0;
  float fStack_94;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  uint uStack_70;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  uint uStack_40;
  uint uStack_34;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  uint uStack_14;
  
  bVar7 = 0;
  FUN_00433c60(param_1,param_2);
  *(uint *)(param_1 + 0x24a4) = 0;
  *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
  *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
  fStack_b0 = param_2 * *(float *)(param_1 + 0x34168);
  uStack_14 = 1;
  while (0.0 < fStack_b0) {
    uVar6 = FUN_004fbb70(param_1 + 0x158,&stack0xffffff50);
    FUN_00433fb0(param_1,uVar6);
  }
  iVar4 = (**(code **)(*(int *)(param_1 + 0x154) + 0x10c))(param_1);
  if ((((1 < iVar4) && (*(int *)(param_1 + 0x70) == 1)) && (*(int *)(param_1 + 0x34164) == 0)) &&
     (*(int *)(param_1 + 0xdc) == 0)) {
    FUN_0054dbd0(param_1 + 0x158,0);
    puVar8 = &stack0xffffffc0;
    uStack_40 = uStack_34;
    *(uint *)((int)&stack0xffffffc4 + (uint)bVar7 * 0xfffffffe * 4) =
         *(uint *)(&stack0xffffffd0 + (uint)bVar7 * -8);
    *(uint *)(&stack0xffffffc8 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
         *(uint *)(&stack0xffffffd4 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
    FUN_00408b80(param_1,puVar8);
    uVar10 = 0;
    puVar8 = &stack0xffffff90;
    uStack_70 = uStack_a0;
    *(uint *)((int)&stack0xffffff94 + (uint)bVar7 * 0xfffffffe * 4) =
         *(uint *)(&stack0xffffff64 + (uint)bVar7 * -8);
    uVar6 = 0x01D22E44;
    *(uint *)(&stack0xffffff98 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
         *(uint *)(&stack0xffffff68 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
    FUN_004cec40(uVar6,puVar8,uVar10);
    *(uint *)(param_1 + 0x34164) = 1;
    uStack_14 = 1;
  }
  *(uint *)(param_1 + 0x2524) = *(uint *)(param_1 + 0x24a4);
  FUN_00434850(param_1,param_2 * *(float *)(param_1 + 0x34168));
  iVar5 = FUN_00431660(param_1,param_2);
  iVar4 = param_1 + 0x158;
  if (iVar5 == 0) {
    if (1.0 <= *(float *)(param_1 + 0x34da0)) {
      return;
    }
    iVar4 = FUN_004fc070(iVar4);
    iVar4 = *(int *)(iVar4 + 0x24);
    *(int *)(param_1 + 0x3416c) = iVar4;
    if ((iVar4 == 0x91) || (iVar4 == 0x92)) {
      *(uint *)(param_1 + 0xf8) = 1;
      *(uint *)(param_1 + 0xfc) = 0;
    }
    if (((*(int *)(param_1 + 0x3416c) == 0x91) || (*(int *)(param_1 + 0x3416c) == 0x92)) &&
       ((*(int *)(param_1 + 0x3416c) == 0x92 &&
        ((fVar3 = param_2 * (float)_DAT_005d9b90 + *(float *)(param_1 + 0x34da0),
         *(float *)(param_1 + 0x34da0) = fVar3, 1.0 <= fVar3 && (*(int *)(param_1 + 0x34170) != 0)))
        ))) {
      FUN_004f6930(0x01D81080,*(int *)(param_1 + 0x34170));
      uVar6 = 0x01D81080;
      *(uint *)(param_1 + 0x34170) = 0;
      FUN_004f6f10(uVar6,param_1,1);
    }
    if (*(int *)(param_1 + 0x3416c) != 0) {
      FUN_00408b00(param_1,param_1 + 0x249c);
      pfVar1 = (float *)(param_1 + 0x20);
      fStack_7c = fStack_58;
      *(uint *)((int)&stack0xffffff88 + (uint)bVar7 * -8) =
           *(uint *)(&stack0xffffffac + (uint)bVar7 * -8);
      *(uint *)((int)&stack0xffffff8c + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
           *(uint *)(&stack0xffffffb0 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
      *pfVar1 = *pfVar1 + fStack_7c;
      *(float *)(param_1 + 0x24) = *(float *)(param_1 + 0x24) + fStack_78;
      *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) + fStack_74;
      iVar4 = *(int *)(param_1 + 0x34170);
      if (iVar4 != 0) {
        *(float *)(iVar4 + 0x20) = *pfVar1;
        *(uint *)(iVar4 + 0x24) = *(uint *)(param_1 + 0x24);
        *(uint *)(iVar4 + 0x28) = *(uint *)(param_1 + 0x28);
        *(uint *)(iVar4 + 0x2c) = *(uint *)(param_1 + 0x2c);
      }
    }
    FUN_0054c130(param_1 + 0x158);
    FUN_00433350(param_1,param_2);
    goto LAB_0059af83;
  }
  uVar2 = *(uint *)(param_1 + 0x273c);
  if (uVar2 < 2) {
    if (uVar2 == 1) {
LAB_0059af55:
      pcVar9 = &DAT_005d9b85;
    }
    else {
LAB_0059b12a:
      pcVar9 = "STAND";
    }
    FUN_004fc160(param_1 + 0x158,pcVar9,1);
  }
  else if (uVar2 < 3) {
    uVar6 = FUN_004fc310(iVar4,&DAT_005d9b81,0);
    iVar5 = FUN_004fba50(uVar6);
    if (iVar5 < 0) goto LAB_0059af55;
    FUN_004fc0d0(iVar4,iVar5,1);
  }
  else {
    if (uVar2 != 3) goto LAB_0059b12a;
    FUN_004fc160(iVar4,"STAND",1);
    FUN_00441ff0(PTR_DAT_005f1690,"%s confused while walking to scriptDest!\n",param_1);
  }
  *(uint *)(param_1 + 0x24a4) = 0;
  *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
  *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
LAB_0059af83:
  FUN_0042c1e0(param_1,param_2);
  fStack_88 = *(float *)(param_1 + 0x2518) * param_2;
  fStack_84 = *(float *)(param_1 + 0x251c) * param_2;
  fStack_80 = *(float *)(param_1 + 0x2520) * param_2;
  fStack_ac = fStack_88;
  (&stack0xffffff58)[(uint)bVar7 * 0xfffffffe] =
       (float)*(uint *)((int)&stack0xffffff7c + (uint)bVar7 * -8);
  *(uint *)((int)&stack0xffffff5c + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
       *(uint *)((int)&stack0xffffff80 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
  fStack_4c = fStack_ac + *(float *)(param_1 + 0x250c);
  fStack_48 = fStack_a8 + *(float *)(param_1 + 0x2510);
  fStack_44 = fStack_a4 + *(float *)(param_1 + 0x2514);
  fStack_28 = fStack_4c;
  *(uint *)((int)&stack0xffffffdc + (uint)bVar7 * -8) =
       *(uint *)((int)&stack0xffffffb8 + (uint)bVar7 * -8);
  *(uint *)((int)&stack0xffffffe0 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
       *(uint *)((int)&stack0xffffffbc + (uint)bVar7 * -8 + (uint)bVar7 * -8);
  fStack_64 = fStack_28 + *(float *)(param_1 + 0x249c);
  fStack_60 = fStack_24 + *(float *)(param_1 + 0x24a0);
  fStack_5c = fStack_20 + *(float *)(param_1 + 0x24a4);
  fStack_94 = fStack_64;
  *(uint *)((int)&stack0xffffff70 + (uint)bVar7 * 0xfffffffe * 4) =
       *(uint *)((int)&stack0xffffffa0 + (uint)bVar7 * -8);
  *(uint *)(&stack0xffffff74 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
       *(uint *)((int)&stack0xffffffa4 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
  *(uint *)(param_1 + 0x2514) = 0;
  *(uint *)(param_1 + 0x2510) = *(uint *)(param_1 + 0x2514);
  *(float *)(param_1 + 0x250c) = *(float *)(param_1 + 0x2510);
  *(uint *)(param_1 + 0x24a4) = 0;
  *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
  *(float *)(param_1 + 0x249c) = *(float *)(param_1 + 0x24a0);
  FUN_0042c230(param_1,&stack0xffffff6c);
  FUN_0042cd30(param_1);
  FUN_0054c130(param_1 + 0x158);
  FUN_00432330(param_1,param_2,uStack_14);
  FUN_00433350(param_1,param_2);
  return;
}
