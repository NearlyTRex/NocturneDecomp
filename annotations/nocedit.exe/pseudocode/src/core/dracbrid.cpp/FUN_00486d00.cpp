// Name: core_dracbrid.cpp_FUN_00486d00
// Address: 00486d00
// Address Range: [[00486d00, 00486d2b]]
// Convention: unknown
// Signature: undefined core_dracbrid.cpp_FUN_00486d00()
// Function calls:
//   core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0
//   core_skeledit.cpp_GetModelPtrOfFile_FUN_0058a260

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_draculabride.cpp_FUN_00486d00(undefined4 param_1, undefined4
   param_2) */

void core_dracbrid_cpp_FUN_00486d00(void)

{
  CDemonActor *in_stack_00000004;
  FILE *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_writeDependencies_FUN_0040cfd0(in_stack_00000004,in_stack_00000008);
  core_skeledit_cpp_GetModelPtrOfFile_FUN_0058a260();
  return;
}


// Assembly code:
// 00486d00: PUSH EBX
//   Label: core_dracbrid.cpp_FUN_00486d00
// 00486d01: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00486d05: PUSH EDX
// 00486d06: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00486d0a: PUSH ECX
// 00486d0b: CALL core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0
//   XREF to: 0040cfd0 (UNCONDITIONAL_CALL)
// 00486d10: ADD ESP,0x8
// 00486d13: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00486d17: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00486d1b: PUSH EBX
// 00486d1c: ADD EAX,0x158
// 00486d21: PUSH EAX
// 00486d22: CALL core_skeledit.cpp_GetModelPtrOfFile_FUN_0058a260
//   XREF to: 0058a260 (UNCONDITIONAL_CALL)
// 00486d27: ADD ESP,0x8
// 00486d2a: POP EBX
// 00486d2b: RET
