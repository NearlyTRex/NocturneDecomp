// Name: core_elephant.cpp_FUN_004a79b0
// Address: 004a79b0
// Address Range: [[004a79b0, 004a79da]]
// Convention: unknown
// Signature: undefined core_elephant.cpp_FUN_004a79b0()
// Function calls:
//   core_actor.cpp_getRandomFloat_FUN_0040cc10

#include "nocturne.h"

/* Signature: undefined1 actors_other_emitter.cpp_FUN_004a79b0(undefined4 param_1) */

float core_elephant_cpp_FUN_004a79b0(void)

{
  float fVar1;
  int in_stack_00000004;
  
  if (*(int *)(in_stack_00000004 + 0x56c) == 6) {
    return 0.0;
  }
  fVar1 = core_actor_cpp_getRandomFloat_FUN_0040cc10(450.0,600.0);
  return fVar1;
}


// Assembly code:
// 004a79b0: SUB ESP,0x8
//   Label: core_elephant.cpp_FUN_004a79b0
// 004a79b3: MOV EAX,dword ptr [ESP + 0xc]
// 004a79b7: CMP dword ptr [EAX + 0x56c],0x6
// 004a79be: JNZ 0x004a79cc
//   XREF to: 004a79cc (CONDITIONAL_JUMP)
// 004a79c0: XOR ECX,ECX
// 004a79c2: MOV dword ptr [ESP],ECX
// 004a79c5: MOV EAX,dword ptr [ESP]
// 004a79c8: ADD ESP,0x8
// 004a79cb: RET
// 004a79cc: PUSH 0x44160000
//   Label: LAB_004a79cc
// 004a79d1: PUSH 0x43e10000
// 004a79d6: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
