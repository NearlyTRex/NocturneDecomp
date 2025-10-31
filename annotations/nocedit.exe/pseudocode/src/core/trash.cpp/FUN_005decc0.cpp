// Name: core_trash.cpp_FUN_005decc0
// Address: 005decc0
// Address Range: [[005decc0, 005decd1]]
// Convention: unknown
// Signature: undefined core_trash.cpp_FUN_005decc0()
// Function calls:
//   core_actor.cpp_getRandomFloat_FUN_0040cc10

#include "nocturne.h"

void core_trash_cpp_FUN_005decc0(void)

{
  float fVar1;
  float *in_stack_00000008;
  
  fVar1 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-0.05,0.05);
  *in_stack_00000008 = fVar1 + *in_stack_00000008;
  return;
}


// Assembly code:
// 005decc0: SUB ESP,0x4
//   Label: core_trash.cpp_FUN_005decc0
// 005decc3: PUSH 0x3d4ccccd
// 005decc8: PUSH 0xbd4ccccd
// 005deccd: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
