// Name: core_turret.cpp_FUN_005e36f0
// Address: 005e36f0
// Address Range: [[005e36f0, 005e3701]]
// Convention: unknown
// Signature: undefined core_turret.cpp_FUN_005e36f0()
// Function calls:
//   core_actor.cpp_getRandomFloat_FUN_0040cc10

#include "nocturne.h"

/* Signature: undefined1 actors_weapon_turret.cpp_FUN_005e36f0() */

float core_turret_cpp_FUN_005e36f0(void)

{
  float fVar1;
  
  fVar1 = core_actor_cpp_getRandomFloat_FUN_0040cc10(10.0,15.0);
  return fVar1;
}


// Assembly code:
// 005e36f0: SUB ESP,0x8
//   Label: core_turret.cpp_FUN_005e36f0
// 005e36f3: PUSH 0x41700000
// 005e36f8: PUSH 0x41200000
// 005e36fd: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
