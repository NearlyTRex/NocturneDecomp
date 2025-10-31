// Name: core_tommygun.cpp_FUN_005de330
// Address: 005de330
// Address Range: [[005de330, 005de341]]
// Convention: unknown
// Signature: undefined core_tommygun.cpp_FUN_005de330()
// Function calls:
//   core_actor.cpp_getRandomFloat_FUN_0040cc10

#include "nocturne.h"

/* Signature: undefined1 actors_weapon_tommygun.cpp_FUN_005de330() */

float core_tommygun_cpp_FUN_005de330(void)

{
  float fVar1;
  
  fVar1 = core_actor_cpp_getRandomFloat_FUN_0040cc10(10.0,15.0);
  return fVar1;
}


// Assembly code:
// 005de330: SUB ESP,0x8
//   Label: core_tommygun.cpp_FUN_005de330
// 005de333: PUSH 0x41700000
// 005de338: PUSH 0x41200000
// 005de33d: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
