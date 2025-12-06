// Name: core_lightgun.cpp_FUN_00506670
// Address: 00506670
// Address Range: [[00506670, 0050669a]]
// Convention: unknown
// Signature: undefined core_lightgun.cpp_FUN_00506670()

#include "nocturne.h"

/* Signature: byte actors_weapon_lightgun.cpp_FUN_00506670(uint param_1) */

float core_lightgun_cpp_FUN_00506670(void)

{
  float fVar1;
  int in_stack_00000004;
  
  if (*(int *)(in_stack_00000004 + 0x56c) == 6) {
    return 0.0;
  }
  fVar1 = core_actor_cpp_getRandomFloat_FUN_0040cc10(150.0,200.0);
  return fVar1;
}
