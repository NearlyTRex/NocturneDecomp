// Name: core_hero.cpp_FUN_004f2ed0
// Address: 004f2ed0
// Address Range: [[004f2ed0, 004f2f49]]
// Convention: unknown
// Signature: undefined core_hero.cpp_FUN_004f2ed0()

#include "nocturne.h"

/* Signature: byte actors_hero_hero.cpp_FUN_004f2ed0(uint param_1) */

uint core_hero_cpp_FUN_004f2ed0(void)

{
  int iVar1;
  int in_stack_00000004;
  
  if (*(int *)(in_stack_00000004 + 0x1fb9c) == 0) {
    return 0;
  }
  iVar1 = core_inv_cpp_CInventory_checkHasMatchingKey_FUN_005013d0
                    ((CInventory *)(in_stack_00000004 + 0x1f738),
                     *(uint *)(*(int *)(in_stack_00000004 + 0x1fb9c) + 0x990),1);
  if (iVar1 != 0) {
    core_door_cpp_FUN_0047fcf0();
    *(uint *)(in_stack_00000004 + 0x1fb9c) = 0;
    return 1;
  }
  core_door_cpp_CDoor_FUN_00481210(*(CDoor **)(in_stack_00000004 + 0x1fb9c));
  *(uint *)(in_stack_00000004 + 0x1fb9c) = 0;
  return 0;
}
