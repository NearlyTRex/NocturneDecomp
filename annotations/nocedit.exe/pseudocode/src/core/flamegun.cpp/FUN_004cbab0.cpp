// Name: core_flamegun.cpp_FUN_004cbab0
// Address: 004cbab0
// Address Range: [[004cbab0, 004cbacf]]
// Convention: __cdecl
// Signature: float __cdecl core_flamegun_cpp_FUN_004cbab0(void)

#include "nocturne.h"

/* Signature: byte actors_other_flame.cpp_FUN_004cbab0(uint param_1) */

float __cdecl core_flamegun_cpp_FUN_004cbab0(void)

{
  float fVar1;
  int in_stack_00000004;
  
  if (*(int *)(in_stack_00000004 + 0x56c) == 6) {
    return 0.0;
  }
  fVar1 = core_actor_cpp_getRandomFloat_FUN_0040cc10(150.0,200.0);
  return fVar1;
}
