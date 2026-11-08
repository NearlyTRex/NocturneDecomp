// Name: FUN_005989e0
// Address: 005989e0
// Address Range: [[005989e0, 00598df6]]
// Convention: unknown
// Signature: void FUN_005989e0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005989e0(int param_1,float param_2)

{
  float *pfVar1;
  uint uVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  float afStackY_106c [1014];
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
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
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  int iStack_1c;
  float fStack_18;
  
  bVar6 = 0;
  if ((1.0 <= *(float *)(param_1 + 0xdc90)) ||
     (iVar4 = (**(code **)(*(int *)(param_1 + 0x154) + 0x148))(param_1,param_2), iVar4 == 0)) {
    return;
  }
  FUN_00433c60(param_1,param_2);
  FUN_00432330(param_1,param_2,0);
  *(uint *)(param_1 + 0x24a4) = 0;
  *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
  *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
  fStack_88 = param_2 * *(float *)(param_1 + 0xcdcc);
  while (0.0 < fStack_88) {
    uVar5 = FUN_004fbb70(param_1 + 0x158,&stack0xffffff78);
    FUN_00433fb0(param_1,uVar5);
  }
  iVar4 = FUN_004fc070(param_1 + 0x158);
  iVar4 = *(int *)(iVar4 + 0x24);
  *(uint *)(param_1 + 0x2524) = *(uint *)(param_1 + 0x24a4);
  FUN_00434850(param_1,param_2 * *(float *)(param_1 + 0xcdcc));
  if (iVar4 == 2) {
    *(float *)(param_1 + 0x2528) = *(float *)(param_1 + 0x2528) * (float)_DAT_005d9872;
  }
  iVar4 = FUN_00431660(param_1,param_2);
  if (iVar4 == 0) {
    if (1.0 <= *(float *)(param_1 + 0xdc90)) {
      return;
    }
    iVar4 = FUN_004fc070(param_1 + 0x158);
    iStack_1c = *(int *)(iVar4 + 0x24);
    if ((((iStack_1c == 6) || (iStack_1c == 7)) && (iStack_1c == 7)) &&
       ((fVar3 = param_2 * (float)_DAT_005d987a + *(float *)(param_1 + 0xdc90),
        *(float *)(param_1 + 0xdc90) = fVar3, 1.0 <= fVar3 && (*(int *)(param_1 + 0xd060) != 0)))) {
      FUN_004f6930(0x01D81080,*(int *)(param_1 + 0xd060));
      uVar5 = 0x01D81080;
      *(uint *)(param_1 + 0xd060) = 0;
      FUN_004f6f10(uVar5,param_1,1);
    }
    if (iStack_1c != 0) {
      FUN_00408b00(param_1,param_1 + 0x249c);
      pfVar1 = (float *)(param_1 + 0x20);
      fStack_78 = fStack_3c;
      *(uint *)((int)&stack0xffffff8c + (uint)bVar6 * -8) =
           *(uint *)(&stack0xffffffc8 + (uint)bVar6 * -8);
      *(uint *)((int)&stack0xffffff90 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
           *(uint *)(&stack0xffffffcc + (uint)bVar6 * -8 + (uint)bVar6 * -8);
      *pfVar1 = *pfVar1 + fStack_78;
      *(float *)(param_1 + 0x24) = *(float *)(param_1 + 0x24) + fStack_74;
      *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) + fStack_70;
      iVar4 = *(int *)(param_1 + 0xd060);
      if (iVar4 != 0) {
        *(float *)(iVar4 + 0x20) = *pfVar1;
        *(uint *)(iVar4 + 0x24) = *(uint *)(param_1 + 0x24);
        *(uint *)(iVar4 + 0x28) = *(uint *)(param_1 + 0x28);
        *(uint *)(iVar4 + 0x2c) = *(uint *)(param_1 + 0x2c);
      }
    }
    if (((iStack_1c == 3) &&
        (fStack_18 = (float)FUN_004fc930(param_1 + 0x158), fStack_18 < (float)_DAT_005d9882)) &&
       (iVar4 = FUN_00556700(*(uint *)(param_1 + 0xdc94)), iVar4 == 0)) {
      uVar5 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"dog_howl.wav");
      *(uint *)(param_1 + 0xdc94) = uVar5;
    }
    FUN_0054c130(param_1 + 0x158);
    FUN_00433350(param_1,param_2);
    goto LAB_00598b24;
  }
  uVar2 = *(uint *)(param_1 + 0x273c);
  if (uVar2 < 2) {
    if (uVar2 == 1) {
      uVar5 = 1;
    }
    else {
LAB_00598c63:
      uVar5 = 0;
    }
LAB_00598b04:
    FUN_004fc0d0(param_1 + 0x158,uVar5,1);
  }
  else {
    if (uVar2 < 3) {
      uVar5 = 2;
      goto LAB_00598b04;
    }
    if (uVar2 != 3) goto LAB_00598c63;
    FUN_004fc0d0(param_1 + 0x158,0,1);
    FUN_00441ff0(PTR_DAT_005f1690,"%s confused while walking to scriptDest!\n",param_1);
  }
  *(uint *)(param_1 + 0x24a4) = 0;
  *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
  *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
LAB_00598b24:
  FUN_0042c1e0(param_1,param_2);
  fStack_48 = *(float *)(param_1 + 0x2518) * param_2;
  fStack_44 = *(float *)(param_1 + 0x251c) * param_2;
  fStack_40 = *(float *)(param_1 + 0x2520) * param_2;
  fStack_30 = fStack_48;
  *(uint *)((int)&stack0xffffffd4 + (uint)bVar6 * -8) =
       *(uint *)((int)&stack0xffffffbc + (uint)bVar6 * -8);
  *(uint *)((int)&stack0xffffffd8 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
       *(uint *)((int)&stack0xffffffc0 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
  fStack_84 = fStack_30 + *(float *)(param_1 + 0x250c);
  fStack_80 = fStack_2c + *(float *)(param_1 + 0x2510);
  fStack_7c = fStack_28 + *(float *)(param_1 + 0x2514);
  fStack_60 = fStack_84;
  *(float *)((int)&stack0xffffffa4 + (uint)bVar6 * -8) =
       (&stack0xffffff80)[(uint)bVar6 * 0xfffffffe];
  *(uint *)((int)&stack0xffffffa8 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
       *(uint *)((int)&stack0xffffff84 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
  fStack_54 = fStack_60 + *(float *)(param_1 + 0x249c);
  fStack_50 = fStack_5c + *(float *)(param_1 + 0x24a0);
  fStack_4c = fStack_58 + *(float *)(param_1 + 0x24a4);
  fStack_6c = fStack_54;
  *(uint *)((int)&stack0xffffff98 + (uint)bVar6 * 0xfffffffe * 4) =
       *(uint *)((int)&stack0xffffffb0 + (uint)bVar6 * -8);
  *(uint *)(&stack0xffffff9c + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
       *(uint *)((int)&stack0xffffffb4 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
  *(uint *)(param_1 + 0x2514) = 0;
  *(uint *)(param_1 + 0x2510) = *(uint *)(param_1 + 0x2514);
  *(float *)(param_1 + 0x250c) = *(float *)(param_1 + 0x2510);
  *(uint *)(param_1 + 0x24a4) = 0;
  *(float *)(param_1 + 0x24a0) = *(float *)(param_1 + 0x24a4);
  *(float *)(param_1 + 0x249c) = *(float *)(param_1 + 0x24a4);
  FUN_0042c230(param_1,&stack0xffffff94);
  FUN_0042cd30(param_1);
  FUN_0054c130(param_1 + 0x158);
  FUN_00433350(param_1,param_2);
  return;
}
