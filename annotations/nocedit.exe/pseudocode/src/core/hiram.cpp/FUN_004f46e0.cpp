// Name: core_hiram.cpp_FUN_004f46e0
// Address: 004f46e0
// Address Range: [[004f46e0, 004f46f2]]
// Convention: unknown
// Signature: undefined core_hiram.cpp_FUN_004f46e0()
// Function calls:
//   core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0

#include "nocturne.h"

/* Signature: undefined1 actors_npc_hiram.cpp_FUN_004f46e0(undefined4 param_1, undefined4 param_2)
    */

void core_hiram_cpp_FUN_004f46e0(void)

{
  CDemonActor *in_stack_00000004;
  FILE *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_writeDependencies_FUN_0040cfd0(in_stack_00000004,in_stack_00000008);
  return;
}


// Assembly code:
// 004f46e0: MOV EDX,dword ptr [ESP + 0x8]
//   Label: core_hiram.cpp_FUN_004f46e0
//   XREF to: Stack[0x8] (READ)
// 004f46e4: PUSH EDX
// 004f46e5: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004f46e9: PUSH ECX
// 004f46ea: CALL core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0
//   XREF to: 0040cfd0 (UNCONDITIONAL_CALL)
// 004f46ef: ADD ESP,0x8
// 004f46f2: RET
