// Name: core_trap.cpp_CTrap_FUN_005dea50
// Address: 005dea50
// Address Range: [[005dea50, 005dea82]]
// Convention: __cdecl
// Signature: void core_trap.cpp_CTrap_FUN_005dea50(CTrap * this_ptr)
// Globals:
//   TerminatedCString s_Model_file_kfm_00655554
// Function calls:
//   core_actor.cpp_CActorPropertyList_FUN_0040e3b0
//   core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290

#include "nocturne.h"

void __cdecl core_trap_cpp_CTrap_FUN_005dea50(CTrap *this_ptr)

{
  CActorPropertyList *in_stack_00000008;
  CActorPropertyList *in_stack_0000000c;
  
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(&this_ptr->base_actor,in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e3b0(in_stack_0000000c);
  return;
}


// Assembly code:
// 005dea50: PUSH EBX
//   Label: core_trap.cpp_CTrap_FUN_005dea50
// 005dea51: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 005dea55: PUSH EDX
// 005dea56: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005dea5a: PUSH ECX
// 005dea5b: CALL core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290
//   XREF to: 0040d290 (UNCONDITIONAL_CALL)
// 005dea60: ADD ESP,0x8
// 005dea63: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005dea67: PUSH 0x0
// 005dea69: ADD EAX,0x158
// 005dea6e: PUSH EAX
// 005dea6f: PUSH 0x655554
//   XREF to: 00655554 (DATA)
// 005dea74: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005dea78: PUSH EBX
// 005dea79: CALL core_actor.cpp_CActorPropertyList_FUN_0040e3b0
//   XREF to: 0040e3b0 (UNCONDITIONAL_CALL)
// 005dea7e: ADD ESP,0x10
// 005dea81: POP EBX
// 005dea82: RET
