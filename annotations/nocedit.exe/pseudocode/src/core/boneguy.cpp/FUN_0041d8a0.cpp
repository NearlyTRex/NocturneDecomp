// Name: core_boneguy.cpp_FUN_0041d8a0
// Address: 0041d8a0
// Address Range: [[0041d8a0, 0041d96d]]
// Convention: unknown
// Signature: undefined core_boneguy.cpp_FUN_0041d8a0()

#include "nocturne.h"

/* Signature: byte actors_enemy_boneguy.cpp_FUN_0041d8a0(uint param_1) */

void core_boneguy_cpp_FUN_0041d8a0(void)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  int in_stack_00000004;
  int aiStackY_1800 [1526];
  CVector3f *in_stack_ffffffdc;
  int local_14;
  
  bVar6 = 0;
  local_14 = 0;
  if (0 < *(int *)(in_stack_00000004 + 0xbf38)) {
    puVar3 = (uint *)(in_stack_00000004 + 0xbf74);
    iVar2 = in_stack_00000004;
    do {
      core_xform_cpp_eulerToQuaternion_FUN_005f7b20
                ((CQuaternion4f *)(*(int *)(iVar2 + 0xbf80) + 0x30),in_stack_ffffffdc);
      puVar4 = (uint *)(iVar2 + 0xbf58 + (uint)bVar6 * -8);
      *(CVector3f **)(iVar2 + 0xbf54) = in_stack_ffffffdc;
      puVar5 = puVar4 + (uint)bVar6 * -2 + 1;
      *puVar4 = *(uint *)(&stack0xffffffe0 + (uint)bVar6 * -8);
      *puVar5 = *(uint *)(&stack0xffffffe4 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
      puVar5[(uint)bVar6 * -2 + 1] =
           *(uint *)
            ((int)(&stack0xffffffe4 + (uint)bVar6 * -8 + (uint)bVar6 * -8) +
            ((uint)bVar6 * -2 + 1) * 4);
      *(uint *)(*(int *)(iVar2 + 0xbf80) + 0xf20) = 0;
      iVar1 = *(int *)(iVar2 + 0xbf80);
      if (puVar3 != (uint *)(iVar1 + 0x20)) {
        *puVar3 = *(uint *)(iVar1 + 0x20);
        puVar3[1] = *(uint *)(iVar1 + 0x24);
        puVar3[2] = *(uint *)(iVar1 + 0x28);
      }
      local_14 = local_14 + 1;
      puVar3 = puVar3 + 0x12;
      iVar2 = iVar2 + 0x48;
    } while (local_14 < *(int *)(in_stack_00000004 + 0xbf38));
  }
  *(uint *)(in_stack_00000004 + 0xc4dc) = 2;
  *(uint *)(in_stack_00000004 + 0xc4e0) = 0;
  (**(code **)(*(int *)(in_stack_00000004 + 0x154) + 0x24))();
  return;
}
