// Name: core_hero.cpp_FUN_004d2cf0
// Address: 004d2cf0
// Address Range: [[004d2cf0, 004d2e93]]
// Convention: unknown
// Signature: bool core_hero_cpp_FUN_004d2cf0(int param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool core_hero_cpp_FUN_004d2cf0(int param_1)

{
  CDemonSet *pCVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  byte bVar6;
  float afStackY_105c [1001];
  float fStack_a8;
  float local_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_74;
  uint uStack_70;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_2c;
  int iStack_20;
  float fStack_1c;
  float fStack_18;
  
  bVar6 = 0;
  (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1);
  puVar3 = (uint *)&stack0xffffff74;
  puVar4 = &stack0xffffff5c;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar6 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
  }
  fStack_50 = local_a4 + fStack_98;
  fStack_4c = fStack_a0 + fStack_94;
  fStack_48 = fStack_9c + fStack_90;
  fStack_68 = local_a4 + fStack_98;
  *(uint *)((int)&stack0xffffff9c + (uint)bVar6 * -8) =
       *(uint *)((int)&stack0xffffffb4 + (uint)bVar6 * -8);
  *(uint *)((int)&stack0xffffffa0 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
       *(uint *)((int)&stack0xffffffb8 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
  fStack_5c = fStack_68 * _DAT_005c4d01;
  fStack_58 = fStack_64 * _DAT_005c4d01;
  fStack_54 = fStack_60 * _DAT_005c4d01;
  fStack_74 = fStack_68 * _DAT_005c4d01;
  *(uint *)((int)&stack0xffffff90 + (uint)bVar6 * -8) =
       *(uint *)((int)&stack0xffffffa8 + (uint)bVar6 * -8);
  *(uint *)(&stack0xffffff94 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
       *(uint *)((int)&stack0xffffffac + (uint)bVar6 * -8 + (uint)bVar6 * -8);
  uStack_40 = uStack_70;
  uStack_44 = 0;
  uStack_3c = 0x3fc00000;
  core_actor_cpp_FUN_00408b80(param_1,&stack0xffffffbc);
  uStack_2c = uStack_38;
  *(uint *)((int)&stack0xffffffd8 + (uint)bVar6 * 0xfffffffe * 4) =
       *(uint *)((int)&stack0xffffffcc + (uint)bVar6 * 0xfffffffe * 4);
  *(uint *)(&stack0xffffffdc + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
       *(uint *)(&stack0xffffffd0 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
  fStack_18 = 1e+30;
  iVar2 = 0;
  for (iVar5 = 0; iVar5 < g_CDemonSetPtr->actor_count; iVar5 = iVar5 + 1) {
    iStack_20 = *(int *)((int)g_CDemonSetPtr->actors + iVar2);
    fStack_a8 = (float)(**(code **)(*(int *)(iStack_20 + 0x154) + 0x60))
                                 (iStack_20,param_1,&stack0xffffffd4,&iStack_20);
    pCVar1 = g_CDemonSetPtr;
    if ((0.0 <= fStack_a8) && (fStack_a8 < fStack_18)) {
      *(uint *)(param_1 + 0x20b68) = 1;
      *(uint *)(param_1 + 0x20b6c) = *(uint *)((int)pCVar1->actors + iVar2);
      *(uint *)(param_1 + 0x20b7c) = 0;
      *(int *)(param_1 + 0x20b70) = iStack_20;
      fStack_18 = fStack_a8;
    }
    iVar2 = iVar2 + 4;
    fStack_1c = fStack_a8;
  }
  return *(int *)(param_1 + 0x20b68) == 1;
}
