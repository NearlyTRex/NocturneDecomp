// Name: core_crate.cpp_FUN_00448b20
// Address: 00448b20
// Address Range: [[00448b20, 00448b52]]
// Convention: unknown
// Signature: undefined core_crate.cpp_FUN_00448b20()
// Globals:
//   TerminatedCString s_Model_file_kfm_00619b3d
// Function calls:
//   core_actor.cpp_CActorPropertyList_FUN_0040e3b0
//   core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290

#include "nocturne.h"

/* Signature: undefined1 actors_other_crate.cpp_FUN_00448b20(undefined4 param_1, CActorPropertyList*
   param_2) */

void core_crate_cpp_FUN_00448b20(void)

{
  CDemonActor *in_stack_00000004;
  CActorPropertyList *in_stack_00000008;
  CActorPropertyList *in_stack_0000000c;
  
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(in_stack_00000004,in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e3b0(in_stack_0000000c);
  return;
}


// Assembly code:
// 00448b20: PUSH EBX
//   Label: core_crate.cpp_FUN_00448b20
// 00448b21: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00448b25: PUSH EDX
// 00448b26: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00448b2a: PUSH ECX
// 00448b2b: CALL core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290
//   XREF to: 0040d290 (UNCONDITIONAL_CALL)
// 00448b30: ADD ESP,0x8
// 00448b33: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00448b37: PUSH 0x0
// 00448b39: ADD EAX,0x158
// 00448b3e: PUSH EAX
// 00448b3f: PUSH 0x619b3d
//   XREF to: 00619b3d (DATA)
// 00448b44: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00448b48: PUSH EBX
// 00448b49: CALL core_actor.cpp_CActorPropertyList_FUN_0040e3b0
//   XREF to: 0040e3b0 (UNCONDITIONAL_CALL)
// 00448b4e: ADD ESP,0x10
// 00448b51: POP EBX
// 00448b52: RET
