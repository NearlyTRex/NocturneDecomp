// Name: core_turret.cpp_FUN_005e3720
// Address: 005e3720
// Address Range: [[005e3720, 005e3745]]
// Convention: unknown
// Signature: undefined4 * core_turret_cpp_FUN_005e3720(void)

#include "nocturne.h"

/* Signature: byte actors_weapon_turret.cpp_FUN_005e3720(uint param_1, uint
   param_2) */

uint * core_turret_cpp_FUN_005e3720(void)

{
  int in_stack_00000004;
  uint *in_stack_00000008;
  
  *in_stack_00000008 = *(uint *)(in_stack_00000004 + 0x860);
  in_stack_00000008[1] = *(uint *)(in_stack_00000004 + 0x864);
  in_stack_00000008[2] = *(uint *)(in_stack_00000004 + 0x868);
  return in_stack_00000008;
}
