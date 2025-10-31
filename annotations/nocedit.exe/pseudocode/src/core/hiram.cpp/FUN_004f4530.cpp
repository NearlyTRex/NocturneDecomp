// Name: core_hiram.cpp_FUN_004f4530
// Address: 004f4530
// Address Range: [[004f4530, 004f454b]]
// Convention: unknown
// Signature: undefined core_hiram.cpp_FUN_004f4530()
// Function calls:
//   core_npc.cpp_CNPC_FUN_00544870

#include "nocturne.h"

/* Signature: undefined1 actors_npc_hiram.cpp_FUN_004f4530(undefined4 param_1) */

void core_hiram_cpp_FUN_004f4530(void)

{
  CNPC *in_stack_00000004;
  int in_stack_00000008;
  
  core_npc_cpp_CNPC_FUN_00544870(in_stack_00000004);
  *(undefined4 *)(in_stack_00000008 + 0x25c4) = 0;
  return;
}


// Assembly code:
// 004f4530: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_hiram.cpp_FUN_004f4530
//   XREF to: Stack[0x4] (READ)
// 004f4534: PUSH EDX
// 004f4535: CALL core_npc.cpp_CNPC_FUN_00544870
//   XREF to: 00544870 (UNCONDITIONAL_CALL)
// 004f453a: ADD ESP,0x4
// 004f453d: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 004f4541: MOV dword ptr [EAX + 0x25c4],0x0
// 004f454b: RET
