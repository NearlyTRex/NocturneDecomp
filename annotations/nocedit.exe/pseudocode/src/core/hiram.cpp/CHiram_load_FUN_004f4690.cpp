// Name: core_hiram.cpp_CHiram_load_FUN_004f4690
// Address: 004f4690
// Address Range: [[004f4690, 004f469d]]
// Convention: unknown
// Signature: undefined core_hiram.cpp_CHiram_load_FUN_004f4690()
// Function calls:
//   core_npc.cpp_CNPC_serialize_FUN_00544ba0

#include "nocturne.h"

/* Signature: undefined1 actors_npc_hiram.cpp_CHiram_load(CHiram* param_1) */

void core_hiram_cpp_CHiram_load_FUN_004f4690(void)

{
  CNPC *in_stack_00000004;
  
  core_npc_cpp_CNPC_serialize_FUN_00544ba0(in_stack_00000004);
  return;
}


// Assembly code:
// 004f4690: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_hiram.cpp_CHiram_load_FUN_004f4690
//   XREF to: Stack[0x4] (READ)
// 004f4694: PUSH EDX
// 004f4695: CALL core_npc.cpp_CNPC_serialize_FUN_00544ba0
//   XREF to: 00544ba0 (UNCONDITIONAL_CALL)
// 004f469a: ADD ESP,0x4
// 004f469d: RET
