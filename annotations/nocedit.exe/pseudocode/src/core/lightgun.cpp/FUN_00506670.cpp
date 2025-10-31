// Name: core_lightgun.cpp_FUN_00506670
// Address: 00506670
// Address Range: [[00506670, 0050669a]]
// Convention: unknown
// Signature: undefined core_lightgun.cpp_FUN_00506670()
// Function calls:
//   core_actor.cpp_getRandomFloat_FUN_0040cc10

#include "nocturne.h"

/* Signature: undefined1 actors_weapon_lightgun.cpp_FUN_00506670(undefined4 param_1) */

float core_lightgun_cpp_FUN_00506670(void)

{
  float fVar1;
  int in_stack_00000004;
  
  if (*(int *)(in_stack_00000004 + 0x56c) == 6) {
    return 0.0;
  }
  fVar1 = core_actor_cpp_getRandomFloat_FUN_0040cc10(150.0,200.0);
  return fVar1;
}


// Assembly code:
// 00506670: SUB ESP,0x8
//   Label: core_lightgun.cpp_FUN_00506670
// 00506673: MOV EAX,dword ptr [ESP + 0xc]
// 00506677: CMP dword ptr [EAX + 0x56c],0x6
// 0050667e: JNZ 0x0050668c
//   XREF to: 0050668c (CONDITIONAL_JUMP)
// 00506680: XOR ECX,ECX
// 00506682: MOV dword ptr [ESP],ECX
// 00506685: MOV EAX,dword ptr [ESP]
// 00506688: ADD ESP,0x8
// 0050668b: RET
// 0050668c: PUSH 0x43480000
//   Label: LAB_0050668c
// 00506691: PUSH 0x43160000
// 00506696: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
