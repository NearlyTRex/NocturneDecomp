// Name: core_melee.cpp_FUN_0050ea70
// Address: 0050ea70
// Address Range: [[0050ea70, 0050ea87]]
// Convention: unknown
// Signature: undefined core_melee.cpp_FUN_0050ea70()
// Function calls:
//   core_actor.cpp_getRandomFloat_FUN_0040cc10

#include "nocturne.h"

/* Signature: undefined1 actors_weapon_melee.cpp_FUN_0050ea70(undefined4 param_1) */

float core_melee_cpp_FUN_0050ea70(void)

{
  float fVar1;
  int in_stack_00000004;
  
  fVar1 = core_actor_cpp_getRandomFloat_FUN_0040cc10
                    (*(float *)(in_stack_00000004 + 0x57c),*(float *)(in_stack_00000004 + 0x580));
  return fVar1;
}


// Assembly code:
// 0050ea70: SUB ESP,0x8
//   Label: core_melee.cpp_FUN_0050ea70
// 0050ea73: MOV EAX,dword ptr [ESP + 0xc]
// 0050ea77: PUSH dword ptr [EAX + 0x580]
// 0050ea7d: PUSH dword ptr [EAX + 0x57c]
// 0050ea83: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
