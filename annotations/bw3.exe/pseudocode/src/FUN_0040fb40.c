// Name: FUN_0040fb40
// Address: 0040fb40
// Address Range: [[0040fb40, 0040fe5f]]
// Convention: unknown
// Signature: void FUN_0040fb40(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void FUN_0040fb40(int param_1,float param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  float afStackY_1074 [1014];
  uint *puVar5;
  char *pcVar6;
  uint uVar7;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  uint uStack_5c;
  uint uStack_50;
  uint uStack_44;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  uint uStack_20;
  uint uStack_14;
  
  bVar4 = 0;
  iVar2 = FUN_0042cd70(param_1,param_2);
  if (iVar2 == 0) {
    return;
  }
  FUN_00433c60(param_1,param_2);
  *(uint *)(param_1 + 0x24a4) = 0;
  uStack_14 = 0;
  *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
  *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
  fStack_90 = param_2;
  while (0.0 < fStack_90) {
    uVar3 = FUN_004fbb70(param_1 + 0x158,&stack0xffffff70);
    FUN_00433fb0(param_1,uVar3);
  }
  iVar2 = (**(code **)(*(int *)(param_1 + 0x154) + 0x10c))(param_1);
  if ((((1 < iVar2) && (*(int *)(param_1 + 0x70) == 1)) && (*(int *)(param_1 + 0x206ac) == 0)) &&
     (*(int *)(param_1 + 0xdc) == 0)) {
    FUN_0054dbd0(param_1 + 0x158,0);
    puVar5 = &stack0xffffffb0;
    uStack_50 = uStack_44;
    *(uint *)((int)&stack0xffffffb4 + (uint)bVar4 * 0xfffffffe * 4) =
         *(uint *)(&stack0xffffffc0 + (uint)bVar4 * -8);
    *(uint *)(&stack0xffffffb8 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
         *(uint *)(&stack0xffffffc4 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
    FUN_00408b80(param_1,puVar5);
    uVar7 = 0;
    puVar5 = &stack0xffffffe0;
    uStack_20 = uStack_5c;
    *(uint *)((int)&stack0xffffffe4 + (uint)bVar4 * 0xfffffffe * 4) =
         *(uint *)(&stack0xffffffa8 + (uint)bVar4 * -8);
    uVar3 = 0x01D22E44;
    *(uint *)(&stack0xffffffe8 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
         *(uint *)(&stack0xffffffac + (uint)bVar4 * -8 + (uint)bVar4 * -8);
    FUN_004cec40(uVar3,puVar5,uVar7);
    *(uint *)(param_1 + 0x206ac) = 1;
    uStack_14 = 1;
  }
  *(uint *)(param_1 + 0x2524) = *(uint *)(param_1 + 0x24a4);
  FUN_00434850(param_1,param_2);
  iVar2 = FUN_00431660(param_1,param_2);
  if (iVar2 == 0) goto LAB_0040fcbd;
  uVar1 = *(uint *)(param_1 + 0x273c);
  if (uVar1 < 2) {
    if (uVar1 == 1) {
      pcVar6 = &DAT_005b63d1;
    }
    else {
LAB_0040fe31:
      if (*(int *)(param_1 + 0x2704) == 0) {
        pcVar6 = "STAND";
      }
      else {
        iVar2 = FUN_005a3d00(*(int *)(param_1 + 0x2704),"WPPerch*");
        if (iVar2 == 1) {
          pcVar6 = "LAND_TREE";
        }
        else {
          pcVar6 = "LAND_GROUND";
        }
      }
    }
LAB_0040fc9d:
    FUN_004fc160(param_1 + 0x158,pcVar6,1);
  }
  else {
    if (uVar1 < 3) {
      pcVar6 = &DAT_005b63cd;
      goto LAB_0040fc9d;
    }
    if (uVar1 != 3) goto LAB_0040fe31;
    FUN_004fc160(param_1 + 0x158,"STAND",1);
    FUN_00441ff0(PTR_DAT_005f1690,"%s confused while walking to scriptDest!\n",param_1);
  }
  *(uint *)(param_1 + 0x24a4) = 0;
  *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
  *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
LAB_0040fcbd:
  FUN_0042c1e0(param_1,param_2);
  fStack_80 = *(float *)(param_1 + 0x2518) * param_2;
  fStack_7c = *(float *)(param_1 + 0x251c) * param_2;
  fStack_78 = *(float *)(param_1 + 0x2520) * param_2;
  fStack_8c = fStack_80;
  (&stack0xffffff78)[(uint)bVar4 * 0xfffffffe] =
       (float)*(uint *)((int)&stack0xffffff84 + (uint)bVar4 * -8);
  *(uint *)((int)&stack0xffffff7c + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
       *(uint *)((int)&stack0xffffff88 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  fStack_2c = fStack_8c + *(float *)(param_1 + 0x250c);
  fStack_28 = fStack_88 + *(float *)(param_1 + 0x2510);
  fStack_24 = fStack_84 + *(float *)(param_1 + 0x2514);
  fStack_38 = fStack_2c;
  *(uint *)((int)&stack0xffffffcc + (uint)bVar4 * -8) =
       *(uint *)((int)&stack0xffffffd8 + (uint)bVar4 * -8);
  *(uint *)((int)&stack0xffffffd0 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
       *(uint *)((int)&stack0xffffffdc + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  fStack_68 = fStack_38 + *(float *)(param_1 + 0x249c);
  fStack_64 = fStack_34 + *(float *)(param_1 + 0x24a0);
  fStack_60 = fStack_30 + *(float *)(param_1 + 0x24a4);
  fStack_74 = fStack_68;
  *(uint *)((int)&stack0xffffff90 + (uint)bVar4 * 0xfffffffe * 4) =
       *(uint *)((int)&stack0xffffff9c + (uint)bVar4 * -8);
  *(uint *)(&stack0xffffff94 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
       *(uint *)((int)&stack0xffffffa0 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  *(uint *)(param_1 + 0x2514) = 0;
  *(uint *)(param_1 + 0x2510) = *(uint *)(param_1 + 0x2514);
  *(float *)(param_1 + 0x250c) = *(float *)(param_1 + 0x2510);
  *(uint *)(param_1 + 0x24a4) = 0;
  *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
  *(float *)(param_1 + 0x249c) = *(float *)(param_1 + 0x24a0);
  FUN_0042c230(param_1,&stack0xffffff8c);
  FUN_0042cd30(param_1);
  FUN_0054c130(param_1 + 0x158);
  FUN_00432330(param_1,param_2,uStack_14);
  FUN_00433350(param_1,param_2);
  return;
}
