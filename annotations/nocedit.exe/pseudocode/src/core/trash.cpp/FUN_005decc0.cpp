// Name: core_trash.cpp_FUN_005decc0
// Address: 005decc0
// Address Range: [[005decc0, 005decd1]]
// Convention: __cdecl
// Signature: void __cdecl core_trash_cpp_FUN_005decc0(void)

#include "nocturne.h"

void __cdecl core_trash_cpp_FUN_005decc0(void)

{
  float fVar1;
  float *in_stack_00000004;
  
  fVar1 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-0.05,0.05);
  *in_stack_00000004 = fVar1 + *in_stack_00000004;
  return;
}
