// Name: FUN_0059d9e0
// Address: 0059d9e0
// Address Range: [[0059d9e0, 0059dda1]]
// Convention: unknown
// Signature: void FUN_0059d9e0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0059d9e0(int param_1,float param_2)

{
  float *pfVar1;
  uint uVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  float afStackY_1064 [1014];
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
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
  float fStack_28;
  float fStack_24;
  float fStack_20;
  
  bVar6 = 0;
  if (1.0 <= *(float *)(param_1 + 0x487c4)) {
    return;
  }
  iVar4 = (**(code **)(*(int *)(param_1 + 0x154) + 0x148))(param_1,param_2);
  if (iVar4 == 0) {
    return;
  }
  FUN_00433c60(param_1,param_2);
  *(uint *)(param_1 + 0x24a4) = 0;
  *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
  *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
  fStack_80 = param_2 * *(float *)(param_1 + 0xcdcc);
  while (0.0 < fStack_80) {
    uVar5 = FUN_004fbb70(param_1 + 0x158,&stack0xffffff80);
    FUN_00433fb0(param_1,uVar5);
  }
  iVar4 = FUN_004fc070(param_1 + 0x158);
  iVar4 = *(int *)(iVar4 + 0x24);
  *(uint *)(param_1 + 0x2524) = *(uint *)(param_1 + 0x24a4);
  FUN_00434850(param_1,param_2 * *(float *)(param_1 + 0xcdcc));
  if (iVar4 == 4) {
    *(float *)(param_1 + 0x2528) = *(float *)(param_1 + 0x2528) * (float)_DAT_005d9f19;
  }
  iVar4 = FUN_00431660(param_1,param_2);
  if (iVar4 == 0) {
    if (1.0 <= *(float *)(param_1 + 0x487c4)) {
      return;
    }
    iVar4 = FUN_004fc070(param_1 + 0x158);
    iVar4 = *(int *)(iVar4 + 0x24);
    if ((((iVar4 == 0x99) || (iVar4 == 0x9a)) && (iVar4 == 0x9a)) &&
       (((*(int *)(param_1 + 0x47b90) == 0 &&
         (fVar3 = param_2 * (float)_DAT_005d9f21 + *(float *)(param_1 + 0x487c4),
         *(float *)(param_1 + 0x487c4) = fVar3, 1.0 <= fVar3)) && (*(int *)(param_1 + 0x47b94) != 0)
        ))) {
      FUN_004f6930(0x01D81080,*(int *)(param_1 + 0x47b94));
      uVar5 = 0x01D81080;
      *(uint *)(param_1 + 0x47b94) = 0;
      FUN_004f6f10(uVar5,param_1,1);
    }
    if (iVar4 != 0) {
      FUN_00408b00(param_1,param_1 + 0x249c);
      pfVar1 = (float *)(param_1 + 0x20);
      fStack_40 = fStack_34;
      *(uint *)((int)&stack0xffffffc4 + (uint)bVar6 * -8) =
           *(uint *)(&stack0xffffffd0 + (uint)bVar6 * -8);
      *(uint *)((int)&stack0xffffffc8 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
           *(uint *)(&stack0xffffffd4 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
      *pfVar1 = *pfVar1 + fStack_40;
      *(float *)(param_1 + 0x24) = *(float *)(param_1 + 0x24) + fStack_3c;
      *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) + fStack_38;
      iVar4 = *(int *)(param_1 + 0x47b94);
      if (iVar4 != 0) {
        *(float *)(iVar4 + 0x20) = *pfVar1;
        *(uint *)(iVar4 + 0x24) = *(uint *)(param_1 + 0x24);
        *(uint *)(iVar4 + 0x28) = *(uint *)(param_1 + 0x28);
        *(uint *)(iVar4 + 0x2c) = *(uint *)(param_1 + 0x2c);
      }
    }
    FUN_0054c130(param_1 + 0x158);
    FUN_00433350(param_1,param_2);
    goto LAB_0059db1e;
  }
  uVar2 = *(uint *)(param_1 + 0x273c);
  if (uVar2 < 2) {
    if (uVar2 == 1) {
LAB_0059daf3:
      uVar5 = 1;
    }
    else {
LAB_0059dc5c:
      uVar5 = 0;
    }
    FUN_004fc0d0(param_1 + 0x158,uVar5,1);
  }
  else {
    if (uVar2 < 3) goto LAB_0059daf3;
    if (uVar2 != 3) goto LAB_0059dc5c;
    FUN_004fc0d0(param_1 + 0x158,0,1);
    FUN_00441ff0(PTR_DAT_005f1690,"%s confused while walking to scriptDest!\n",param_1);
  }
  *(uint *)(param_1 + 0x24a4) = 0;
  *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
  *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
LAB_0059db1e:
  FUN_0042c1e0(param_1,param_2);
  fStack_58 = *(float *)(param_1 + 0x2518) * param_2;
  fStack_54 = *(float *)(param_1 + 0x251c) * param_2;
  fStack_50 = *(float *)(param_1 + 0x2520) * param_2;
  fStack_64 = fStack_58;
  *(uint *)((int)&stack0xffffffa0 + (uint)bVar6 * -8) =
       *(uint *)((int)&stack0xffffffac + (uint)bVar6 * -8);
  *(uint *)((int)&stack0xffffffa4 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
       *(uint *)((int)&stack0xffffffb0 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
  fStack_28 = fStack_64 + *(float *)(param_1 + 0x250c);
  fStack_24 = fStack_60 + *(float *)(param_1 + 0x2510);
  fStack_20 = fStack_5c + *(float *)(param_1 + 0x2514);
  fStack_7c = fStack_28;
  (&stack0xffffff88)[(uint)bVar6 * 0xfffffffe] =
       (float)*(uint *)((int)&stack0xffffffdc + (uint)bVar6 * -8);
  *(uint *)((int)&stack0xffffff8c + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
       *(uint *)((int)&stack0xffffffe0 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
  fStack_4c = fStack_7c + *(float *)(param_1 + 0x249c);
  fStack_48 = fStack_78 + *(float *)(param_1 + 0x24a0);
  fStack_44 = fStack_74 + *(float *)(param_1 + 0x24a4);
  fStack_70 = fStack_4c;
  *(uint *)((int)&stack0xffffff94 + (uint)bVar6 * 0xfffffffe * 4) =
       *(uint *)((int)&stack0xffffffb8 + (uint)bVar6 * -8);
  *(uint *)(&stack0xffffff98 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
       *(uint *)((int)&stack0xffffffbc + (uint)bVar6 * -8 + (uint)bVar6 * -8);
  *(uint *)(param_1 + 0x2514) = 0;
  *(uint *)(param_1 + 0x2510) = *(uint *)(param_1 + 0x2514);
  *(float *)(param_1 + 0x250c) = *(float *)(param_1 + 0x2510);
  *(uint *)(param_1 + 0x24a4) = 0;
  *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
  *(float *)(param_1 + 0x249c) = *(float *)(param_1 + 0x24a0);
  FUN_0042c230(param_1,&stack0xffffff90);
  FUN_0042cd30(param_1);
  FUN_0054c130(param_1 + 0x158);
  FUN_00433350(param_1,param_2);
  return;
}
