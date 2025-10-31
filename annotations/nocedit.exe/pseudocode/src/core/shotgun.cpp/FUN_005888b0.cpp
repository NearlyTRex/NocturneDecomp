// Name: core_shotgun.cpp_FUN_005888b0
// Address: 005888b0
// Address Range: [[005888b0, 005888da]]
// Convention: unknown
// Signature: undefined core_shotgun.cpp_FUN_005888b0()
// Function calls:
//   core_actor.cpp_getRandomFloat_FUN_0040cc10

#include "nocturne.h"

/* Signature: undefined1 actors_weapon_shotgun.cpp_FUN_005888b0(undefined4 param_1) */

float core_shotgun_cpp_FUN_005888b0(void)

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
// 005888b0: SUB ESP,0x8
//   Label: core_shotgun.cpp_FUN_005888b0
// 005888b3: MOV EAX,dword ptr [ESP + 0xc]
// 005888b7: CMP dword ptr [EAX + 0x56c],0x6
// 005888be: JNZ 0x005888cc
//   XREF to: 005888cc (CONDITIONAL_JUMP)
// 005888c0: XOR ECX,ECX
// 005888c2: MOV dword ptr [ESP],ECX
// 005888c5: MOV EAX,dword ptr [ESP]
// 005888c8: ADD ESP,0x8
// 005888cb: RET
// 005888cc: PUSH 0x43480000
//   Label: LAB_005888cc
// 005888d1: PUSH 0x43160000
// 005888d6: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
