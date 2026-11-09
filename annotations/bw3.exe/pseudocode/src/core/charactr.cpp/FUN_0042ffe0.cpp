// Name: core_charactr.cpp_FUN_0042ffe0
// Address: 0042ffe0
// Address Range: [[0042ffe0, 004300da]]
// Convention: unknown
// Signature: void core_charactr_cpp_FUN_0042ffe0(int param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_charactr_cpp_FUN_0042ffe0(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  float afStackY_103c [1000];
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  float *pfVar9;
  uint uVar10;
  float local_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  uint uStack_48;
  uint uStack_3c;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  
  bVar4 = 0;
  (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1);
  puVar2 = (uint *)&stack0xffffff7c;
  puVar3 = &stack0xffffff94;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  fStack_30 = local_6c + fStack_60;
  fStack_2c = fStack_68 + fStack_5c;
  fStack_28 = fStack_64 + fStack_58;
  fStack_18 = local_6c + fStack_60;
  *(uint *)((int)&stack0xffffffec + (uint)bVar4 * -8) =
       *(uint *)((int)&stack0xffffffd4 + (uint)bVar4 * -8);
  *(uint *)((int)&stack0xfffffff0 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
       *(uint *)((int)&stack0xffffffd8 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  pfVar9 = &stack0xffffffac;
  fStack_24 = fStack_18 * _DAT_005b839a;
  fStack_20 = fStack_14 * _DAT_005b839a;
  fStack_1c = fStack_10 * _DAT_005b839a;
  fStack_54 = fStack_18 * _DAT_005b839a;
  *(uint *)((int)&stack0xffffffb0 + (uint)bVar4 * 0xfffffffe * 4) =
       *(uint *)((int)&stack0xffffffe0 + (uint)bVar4 * -8);
  *(uint *)(&stack0xffffffb4 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
       *(uint *)((int)&stack0xffffffe4 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  core_actor_cpp_FUN_00408b80(param_1,pfVar9);
  uVar10 = 0;
  uVar8 = 0x40800000;
  uVar7 = 0x44bb8000;
  puVar2 = &stack0xffffffb8;
  uVar6 = 0x40000000;
  uStack_48 = uStack_3c;
  *(uint *)((int)&stack0xffffffbc + (uint)bVar4 * 0xfffffffe * 4) =
       *(uint *)(&stack0xffffffc8 + (uint)bVar4 * -8);
  uVar5 = 0x01C73654;
  *(uint *)(&stack0xffffffc0 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
       *(uint *)(&stack0xffffffcc + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  core_fire_cpp_FUN_004a36e0(uVar5,puVar2,uVar6,uVar7,uVar8,uVar10);
  core_charactr_cpp_FUN_004300e0(param_1,param_2,param_3,1);
  return;
}
