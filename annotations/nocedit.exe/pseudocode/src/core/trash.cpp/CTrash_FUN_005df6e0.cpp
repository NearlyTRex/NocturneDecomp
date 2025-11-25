// Name: core_trash.cpp_CTrash_FUN_005df6e0
// Address: 005df6e0
// Address Range: [[005df6e0, 005df712]]
// Convention: __cdecl
// Signature: void core_trash.cpp_CTrash_FUN_005df6e0(CTrash * this_ptr)
// Globals:
//   TerminatedCString s_Model_file_kfm_006555ca
// Function calls:
//   core_actor.cpp_CActorPropertyList_FUN_0040e3b0
//   core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290

#include "nocturne.h"

void __cdecl core_trash_cpp_CTrash_FUN_005df6e0(CTrash *this_ptr)

{
  CActorPropertyList *in_stack_00000008;
  CActorPropertyList *in_stack_0000000c;
  
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(&this_ptr->base_actor,in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e3b0(in_stack_0000000c);
  return;
}


// Assembly code:
// 005df6e0: PUSH EBX
//   Label: core_trash.cpp_CTrash_FUN_005df6e0
// 005df6e1: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 005df6e5: PUSH EDX
// 005df6e6: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005df6ea: PUSH ECX
// 005df6eb: CALL core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290
//   XREF to: 0040d290 (UNCONDITIONAL_CALL)
// 005df6f0: ADD ESP,0x8
// 005df6f3: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005df6f7: PUSH 0x0
// 005df6f9: ADD EAX,0x158
// 005df6fe: PUSH EAX
// 005df6ff: PUSH 0x6555ca
//   XREF to: 006555ca (DATA)
// 005df704: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005df708: PUSH EBX
// 005df709: CALL core_actor.cpp_CActorPropertyList_FUN_0040e3b0
//   XREF to: 0040e3b0 (UNCONDITIONAL_CALL)
// 005df70e: ADD ESP,0x10
// 005df711: POP EBX
// 005df712: RET
