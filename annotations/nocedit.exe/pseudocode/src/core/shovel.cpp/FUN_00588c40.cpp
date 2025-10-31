// Name: core_shovel.cpp_FUN_00588c40
// Address: 00588c40
// Address Range: [[00588c40, 00588c51]]
// Convention: unknown
// Signature: undefined core_shovel.cpp_FUN_00588c40()
// Function calls:
//   core_actor.cpp_getRandomFloat_FUN_0040cc10

#include "nocturne.h"

/* Signature: undefined1 actors_weapon_shovel.cpp_FUN_00588c40() */

float core_shovel_cpp_FUN_00588c40(void)

{
  float fVar1;
  
  fVar1 = core_actor_cpp_getRandomFloat_FUN_0040cc10(10.0,15.0);
  return fVar1;
}


// Assembly code:
// 00588c40: SUB ESP,0x8
//   Label: core_shovel.cpp_FUN_00588c40
// 00588c43: PUSH 0x41700000
// 00588c48: PUSH 0x41200000
// 00588c4d: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
