// Name: core_passngr.cpp_FUN_005462f0
// Address: 005462f0
// Address Range: [[005462f0, 00546302]]
// Convention: unknown
// Signature: undefined core_passngr.cpp_FUN_005462f0()
// Function calls:
//   core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0

#include "nocturne.h"

/* Signature: undefined1 actors_npc_passenger.cpp_FUN_005462f0(undefined4 param_1, undefined4
   param_2) */

void core_passngr_cpp_FUN_005462f0(void)

{
  CDemonActor *in_stack_00000004;
  FILE *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_writeDependencies_FUN_0040cfd0(in_stack_00000004,in_stack_00000008);
  return;
}


// Assembly code:
// 005462f0: MOV EDX,dword ptr [ESP + 0x8]
//   Label: core_passngr.cpp_FUN_005462f0
//   XREF to: Stack[0x8] (READ)
// 005462f4: PUSH EDX
// 005462f5: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005462f9: PUSH ECX
// 005462fa: CALL core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0
//   XREF to: 0040cfd0 (UNCONDITIONAL_CALL)
// 005462ff: ADD ESP,0x8
// 00546302: RET
