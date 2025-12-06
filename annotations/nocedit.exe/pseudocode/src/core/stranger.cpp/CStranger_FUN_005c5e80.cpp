// Name: core_stranger.cpp_CStranger_FUN_005c5e80
// Address: 005c5e80
// Address Range: [[005c5e80, 005c5ee0]]
// Convention: unknown
// Signature: undefined core_stranger.cpp_CStranger_FUN_005c5e80()

#include "nocturne.h"

/* Signature: byte actors_hero_stranger.cpp_CStranger_FUN_005c5e80(uint param_1) */

uint core_stranger_cpp_CStranger_FUN_005c5e80(void)

{
  uint uVar1;
  uint uVar2;
  int in_stack_00000004;
  
  if (((*(int *)(in_stack_00000004 + 0x24f8) == 0) ||
      (uVar2 = (**(code **)(*(int *)(*(int *)(in_stack_00000004 + 0x24f8) + 0x154) + 0x6c))(),
      (uVar2 & 4) == 0)) &&
     ((*(int *)(in_stack_00000004 + 0x1fc2c) == 0 ||
      (*(int *)(*(int *)(in_stack_00000004 + 0x1fc2c) + 0x2e0) != 3)))) {
    return 0;
  }
  uVar1 = DAT_00663744;
  *(uint *)(in_stack_00000004 + 0x1fc38) = 3;
  *(uint *)(in_stack_00000004 + 0x1fbe4) = uVar1;
  return 1;
}
