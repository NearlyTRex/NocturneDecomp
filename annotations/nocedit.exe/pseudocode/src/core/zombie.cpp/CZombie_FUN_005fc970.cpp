// Name: core_zombie.cpp_CZombie_FUN_005fc970
// Address: 005fc970
// Address Range: [[005fc970, 005fc9d0]]
// Convention: unknown
// Signature: undefined4 core_zombie_cpp_CZombie_FUN_005fc970(void)

#include "nocturne.h"

/* Signature: byte actors_enemy_zombie.cpp_CZombie_FUN_005fc970(CZombie* param_1, uint
   param_2, uint param_3) */

uint core_zombie_cpp_CZombie_FUN_005fc970(void)

{
  int iVar1;
  int in_stack_00000004;
  uint in_stack_00000008;
  int in_stack_0000000c;
  
  if (in_stack_0000000c == 1) {
    if (*(int *)(in_stack_00000004 + 0xbe3c) != 0) {
      iVar1 = (**(code **)(*(int *)(*(int *)(in_stack_00000004 + 0xbe3c) + 0x154) + 0x108))();
      if (iVar1 == in_stack_00000004) {
        (**(code **)(*(int *)(*(int *)(in_stack_00000004 + 0xbe3c) + 0x154) + 0x104))();
      }
    }
    *(uint *)(in_stack_00000004 + 0x2598) = in_stack_00000008;
    *(uint *)(in_stack_00000004 + 0x259c) = 1;
    return 1;
  }
  return 0;
}
