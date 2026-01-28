// Name: core_melee.cpp_FUN_0050ea70
// Address: 0050ea70
// Address Range: [[0050ea70, 0050ea87]]
// Convention: unknown
// Signature: float core_melee_cpp_FUN_0050ea70(void)

#include "nocturne.h"

/* Signature: byte actors_weapon_melee.cpp_FUN_0050ea70(uint param_1) */

float core_melee_cpp_FUN_0050ea70(void)

{
  float fVar1;
  int in_stack_00000004;
  
  fVar1 = core_actor_cpp_getRandomFloat_FUN_0040cc10
                    (*(float *)(in_stack_00000004 + 0x57c),*(float *)(in_stack_00000004 + 0x580));
  return fVar1;
}
