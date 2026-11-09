// Name: core_charactr.cpp_FUN_004314f0
// Address: 004314f0
// Address Range: [[004314f0, 00431618]]
// Convention: unknown
// Signature: undefined4 core_charactr_cpp_FUN_004314f0(int param_1,int param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_charactr_cpp_FUN_004314f0(int param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  float afStackY_104c [1012];
  float *pfVar4;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar3 = 0;
  if (param_2 != 0) {
    iVar2 = (**(code **)(*(int *)(param_1 + 0x154) + 0x114))(param_1,&stack0xffffff90);
    if (iVar2 != 0) {
      core_actor_cpp_FUN_00408b40(param_2,param_3);
      fStack_4c = fStack_40;
      *(uint *)((int)&stack0xffffffb8 + (uint)bVar3 * -8) =
           *(uint *)(&stack0xffffffc4 + (uint)bVar3 * -8);
      *(uint *)((int)&stack0xffffffbc + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
           *(uint *)(&stack0xffffffc8 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
      fStack_34 = fStack_70 - fStack_4c;
      fStack_30 = fStack_6c - fStack_48;
      fStack_2c = fStack_68 - fStack_44;
      fStack_28 = fStack_70 - fStack_4c;
      *(uint *)((int)&stack0xffffffdc + (uint)bVar3 * -8) =
           *(uint *)((int)&stack0xffffffd0 + (uint)bVar3 * -8);
      *(uint *)((int)&stack0xffffffe0 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
           *(uint *)((int)&stack0xffffffd4 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
      fStack_1c = SQRT(fStack_20 * fStack_20 + fStack_28 * fStack_28);
      fStack_18 = *(float *)&g_CGamePtr->field_0x294 * (float)_DAT_005d5a67;
      fStack_24 = 0.0;
      if (fStack_18 < fStack_1c) {
        fStack_14 = fStack_18 / fStack_1c;
        fStack_28 = fStack_28 * fStack_14;
        fStack_24 = fStack_14 * 0.0;
        fStack_20 = fStack_20 * fStack_14;
      }
      iVar2 = param_2 + 0x30;
      iVar1 = *(int *)(param_2 + 0x154);
      pfVar4 = &stack0xffffff9c;
      fStack_58 = *(float *)(param_2 + 0x20) + fStack_28;
      fStack_54 = *(float *)(param_2 + 0x24) + fStack_24;
      fStack_50 = *(float *)(param_2 + 0x28) + fStack_20;
      fStack_64 = fStack_58;
      *(uint *)((int)&stack0xffffffa0 + (uint)bVar3 * 0xfffffffe * 4) =
           *(uint *)((int)&stack0xffffffac + (uint)bVar3 * -8);
      *(uint *)(&stack0xffffffa4 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
           *(uint *)((int)&stack0xffffffb0 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
      (**(code **)(iVar1 + 0x68))(param_2,pfVar4,iVar2);
      return 1;
    }
  }
  return 0;
}
