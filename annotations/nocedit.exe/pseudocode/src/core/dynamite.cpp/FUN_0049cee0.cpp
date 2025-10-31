// Name: core_dynamite.cpp_FUN_0049cee0
// Address: 0049cee0
// Address Range: [[0049cee0, 0049cef1]]
// Convention: unknown
// Signature: undefined core_dynamite.cpp_FUN_0049cee0()
// Function calls:
//   core_actor.cpp_getRandomFloat_FUN_0040cc10

#include "nocturne.h"

/* Signature: undefined1 actors_weapon_dynamite.cpp_FUN_0049cee0() */

float core_dynamite_cpp_FUN_0049cee0(void)

{
  float fVar1;
  
  fVar1 = core_actor_cpp_getRandomFloat_FUN_0040cc10(400.0,500.0);
  return fVar1;
}


// Assembly code:
// 0049cee0: SUB ESP,0x8
//   Label: core_dynamite.cpp_FUN_0049cee0
// 0049cee3: PUSH 0x43fa0000
// 0049cee8: PUSH 0x43c80000
// 0049ceed: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
