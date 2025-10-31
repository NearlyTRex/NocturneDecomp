// Name: core_crossbow.cpp_FUN_00449570
// Address: 00449570
// Address Range: [[00449570, 00449581]]
// Convention: unknown
// Signature: undefined core_crossbow.cpp_FUN_00449570()
// Function calls:
//   core_actor.cpp_getRandomFloat_FUN_0040cc10

#include "nocturne.h"

/* Signature: undefined1 actors_weapon_crossbow.cpp_FUN_00449570() */

float core_crossbow_cpp_FUN_00449570(void)

{
  float fVar1;
  
  fVar1 = core_actor_cpp_getRandomFloat_FUN_0040cc10(10.0,15.0);
  return fVar1;
}


// Assembly code:
// 00449570: SUB ESP,0x8
//   Label: core_crossbow.cpp_FUN_00449570
// 00449573: PUSH 0x41700000
// 00449578: PUSH 0x41200000
// 0044957d: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
