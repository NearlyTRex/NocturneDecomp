// Name: core_weapon.cpp_FUN_005ee6e0
// Address: 005ee6e0
// Address Range: [[005ee6e0, 005ee703]]
// Convention: unknown
// Signature: undefined core_weapon.cpp_FUN_005ee6e0()

#include "nocturne.h"

/* Signature: byte actors_weapon_weapon.cpp_FUN_005ee6e0(uint param_1) */

uint core_weapon_cpp_FUN_005ee6e0(void)

{
  int in_stack_00000004;
  
  if (0 < *(int *)(in_stack_00000004 + 0x568)) {
    *(int *)(in_stack_00000004 + 0x568) = *(int *)(in_stack_00000004 + 0x568) + -1;
    return 1;
  }
  return 0;
}
