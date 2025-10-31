// Name: core_flamegun.cpp_FUN_004cbad1
// Address: 004cbad1
// Address Range: [[004cbad1, 004cbadf]]
// Convention: unknown
// Signature: undefined core_flamegun.cpp_FUN_004cbad1()
// Cross-references:
//   core_flamegun.cpp_FUN_004cbab0 (004cbab0) at 004cbabe [CONDITIONAL_JUMP]
// Function calls:
//   core_actor.cpp_getRandomFloat_FUN_0040cc10

#include "nocturne.h"

float core_flamegun_cpp_FUN_004cbad1(void)

{
  float fVar1;
  
  fVar1 = core_actor_cpp_getRandomFloat_FUN_0040cc10(150.0,200.0);
  return fVar1;
}


// Assembly code:
// 004cbad1: PUSH 0x43480000
//   Label: core_flamegun.cpp_FUN_004cbad1
// 004cbad6: PUSH 0x43160000
// 004cbadb: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
