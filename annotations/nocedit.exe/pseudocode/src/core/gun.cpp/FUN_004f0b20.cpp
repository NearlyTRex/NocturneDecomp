// Name: core_gun.cpp_FUN_004f0b20
// Address: 004f0b20
// Address Range: [[004f0b20, 004f0b31]]
// Convention: unknown
// Signature: undefined core_gun.cpp_FUN_004f0b20()
// Function calls:
//   core_actor.cpp_getRandomFloat_FUN_0040cc10

#include "nocturne.h"

/* Signature: undefined1 actors_weapon_gun.cpp_FUN_004f0b20() */

float core_gun_cpp_FUN_004f0b20(void)

{
  float fVar1;
  
  fVar1 = core_actor_cpp_getRandomFloat_FUN_0040cc10(10.0,15.0);
  return fVar1;
}


// Assembly code:
// 004f0b20: SUB ESP,0x8
//   Label: core_gun.cpp_FUN_004f0b20
// 004f0b23: PUSH 0x41700000
// 004f0b28: PUSH 0x41200000
// 004f0b2d: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
