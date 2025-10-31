// Name: core_backgnd.cpp_CBackgroundActor_FUN_00412a40
// Address: 00412a40
// Address Range: [[00412a40, 00412aa4]]
// Convention: __cdecl
// Signature: void core_backgnd.cpp_CBackgroundActor_FUN_00412a40(CBackgroundActor * this_ptr)
// Globals:
//   TerminatedCString s_Model_file_kfm_00614e81
//   TerminatedCString s_Collision_enabled_00614e93
//   TerminatedCString s_ground_type_00614ea5
// Function calls:
//   core_actor.cpp_CActorPropertyList_FUN_0040e300
//   core_actor.cpp_CActorPropertyList_FUN_0040e330
//   core_actor.cpp_CActorPropertyList_FUN_0040e3b0
//   core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290

#include "nocturne.h"

void __cdecl core_backgnd_cpp_CBackgroundActor_FUN_00412a40(CBackgroundActor *this_ptr)

{
  CActorPropertyList *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(&this_ptr->base_actor,in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e3b0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e330(in_stack_00000008);
  if (this_ptr->collide_with_me == 0) {
    return;
  }
  core_actor_cpp_CActorPropertyList_FUN_0040e300(in_stack_00000008);
  return;
}


// Assembly code:
// 00412a40: PUSH EBX
//   Label: core_backgnd.cpp_CBackgroundActor_FUN_00412a40
// 00412a41: PUSH ESI
// 00412a42: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00412a46: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 00412a4a: PUSH ESI
// 00412a4b: PUSH EBX
// 00412a4c: CALL core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290
//   XREF to: 0040d290 (UNCONDITIONAL_CALL)
// 00412a51: ADD ESP,0x8
// 00412a54: PUSH 0x0
// 00412a56: LEA EAX,[EBX + 0x158]
// 00412a5c: PUSH EAX
// 00412a5d: PUSH 0x614e81
//   XREF to: 00614e81 (DATA)
// 00412a62: PUSH ESI
// 00412a63: CALL core_actor.cpp_CActorPropertyList_FUN_0040e3b0
//   XREF to: 0040e3b0 (UNCONDITIONAL_CALL)
// 00412a68: ADD ESP,0x10
// 00412a6b: LEA EAX,[EBX + 0x2d4]
// 00412a71: PUSH EAX
// 00412a72: PUSH 0x614e93
//   XREF to: 00614e93 (DATA)
// 00412a77: PUSH ESI
// 00412a78: CALL core_actor.cpp_CActorPropertyList_FUN_0040e330
//   XREF to: 0040e330 (UNCONDITIONAL_CALL)
// 00412a7d: MOV EDX,dword ptr [EBX + 0x2d4]
// 00412a83: ADD ESP,0xc
// 00412a86: TEST EDX,EDX
// 00412a88: JNZ 0x00412a8d
//   XREF to: 00412a8d (CONDITIONAL_JUMP)
// 00412a8a: POP ESI
// 00412a8b: POP EBX
// 00412a8c: RET
// 00412a8d: ADD EBX,0x2d8
//   Label: LAB_00412a8d
// 00412a93: PUSH EBX
// 00412a94: PUSH 0x614ea5
//   XREF to: 00614ea5 (DATA)
// 00412a99: PUSH ESI
// 00412a9a: CALL core_actor.cpp_CActorPropertyList_FUN_0040e300
//   XREF to: 0040e300 (UNCONDITIONAL_CALL)
// 00412a9f: ADD ESP,0xc
// 00412aa2: POP ESI
// 00412aa3: POP EBX
// 00412aa4: RET
