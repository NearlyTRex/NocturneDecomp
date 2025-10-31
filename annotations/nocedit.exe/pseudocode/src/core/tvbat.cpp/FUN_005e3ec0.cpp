// Name: core_tvbat.cpp_FUN_005e3ec0
// Address: 005e3ec0
// Address Range: [[005e3ec0, 005e3ed1]]
// Convention: unknown
// Signature: undefined core_tvbat.cpp_FUN_005e3ec0()
// Function calls:
//   core_actor.cpp_getRandomFloat_FUN_0040cc10

#include "nocturne.h"

float core_tvbat_cpp_FUN_005e3ec0(void)

{
  float fVar1;
  float in_stack_00000008;
  
  fVar1 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.9,1.1);
  return fVar1 * in_stack_00000008;
}


// Assembly code:
// 005e3ec0: SUB ESP,0x8
//   Label: core_tvbat.cpp_FUN_005e3ec0
// 005e3ec3: PUSH 0x3f8ccccd
// 005e3ec8: PUSH 0x3f666666
// 005e3ecd: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
