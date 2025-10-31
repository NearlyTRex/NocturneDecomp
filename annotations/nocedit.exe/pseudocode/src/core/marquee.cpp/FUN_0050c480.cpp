// Name: core_marquee.cpp_FUN_0050c480
// Address: 0050c480
// Address Range: [[0050c480, 0050c4b0]]
// Convention: unknown
// Signature: undefined core_marquee.cpp_FUN_0050c480()
// Globals:
//   TerminatedCString s_DATA_s_00635a1c
// Function calls:
//   core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0
//   crt_stdio.c_fprintf_FUN_005fe6d0

#include "nocturne.h"

/* Signature: undefined1 actors_other_marquee.cpp_FUN_0050c480(undefined4 param_1, undefined4
   param_2) */

void core_marquee_cpp_FUN_0050c480(void)

{
  CDemonActor *in_stack_00000004;
  FILE *in_stack_00000008;
  FILE *in_stack_0000000c;
  
  core_actor_cpp_CDemonActor_writeDependencies_FUN_0040cfd0(in_stack_00000004,in_stack_00000008);
  crt_stdio_c_fprintf_FUN_005fe6d0
            (in_stack_0000000c,"DATA\\%s\n",&in_stack_00000008[0xc]._link);
  return;
}


// Assembly code:
// 0050c480: PUSH EBX
//   Label: core_marquee.cpp_FUN_0050c480
// 0050c481: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0050c485: PUSH EDX
// 0050c486: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0050c48a: PUSH ECX
// 0050c48b: CALL core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0
//   XREF to: 0040cfd0 (UNCONDITIONAL_CALL)
// 0050c490: ADD ESP,0x8
// 0050c493: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0050c497: ADD EAX,0x158
// 0050c49c: PUSH EAX
// 0050c49d: PUSH 0x635a1c
//   XREF to: 00635a1c (DATA)
// 0050c4a2: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0050c4a6: PUSH EBX
// 0050c4a7: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0050c4ac: ADD ESP,0xc
// 0050c4af: POP EBX
// 0050c4b0: RET
