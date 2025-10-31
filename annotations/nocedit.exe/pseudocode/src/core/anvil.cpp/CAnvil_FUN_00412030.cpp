// Name: core_anvil.cpp_CAnvil_FUN_00412030
// Address: 00412030
// Address Range: [[00412030, 00412089]]
// Convention: __cdecl
// Signature: void core_anvil.cpp_CAnvil_FUN_00412030(CAnvil * this_ptr)
// Globals:
//   TerminatedCString s_Model_file_kfm_00614d6d
//   TerminatedCString s_Drop_cond_00614d7f
//   TerminatedCString s_Drop_height_00614d89
// Function calls:
//   core_actor.cpp_CActorPropertyList_FUN_0040e160
//   core_actor.cpp_CActorPropertyList_FUN_0040e3b0
//   core_actor.cpp_CActorPropertyList_FUN_0040e460
//   core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290

#include "nocturne.h"

void __cdecl core_anvil_cpp_CAnvil_FUN_00412030(CAnvil *this_ptr)

{
  CActorPropertyList *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(&this_ptr->base_actor,in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e3b0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e460(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e160(in_stack_00000008);
  return;
}


// Assembly code:
// 00412030: PUSH EBX
//   Label: core_anvil.cpp_CAnvil_FUN_00412030
// 00412031: PUSH ESI
// 00412032: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00412036: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 0041203a: PUSH ESI
// 0041203b: PUSH EBX
// 0041203c: CALL core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290
//   XREF to: 0040d290 (UNCONDITIONAL_CALL)
// 00412041: ADD ESP,0x8
// 00412044: PUSH 0x0
// 00412046: LEA EAX,[EBX + 0x158]
// 0041204c: PUSH EAX
// 0041204d: PUSH 0x614d6d
//   XREF to: 00614d6d (DATA)
// 00412052: PUSH ESI
// 00412053: CALL core_actor.cpp_CActorPropertyList_FUN_0040e3b0
//   XREF to: 0040e3b0 (UNCONDITIONAL_CALL)
// 00412058: ADD ESP,0x10
// 0041205b: LEA EAX,[EBX + 0x2d4]
// 00412061: PUSH EAX
// 00412062: PUSH 0x614d7f
//   XREF to: 00614d7f (DATA)
// 00412067: PUSH ESI
// 00412068: CALL core_actor.cpp_CActorPropertyList_FUN_0040e460
//   XREF to: 0040e460 (UNCONDITIONAL_CALL)
// 0041206d: ADD ESP,0xc
// 00412070: PUSH 0x0
// 00412072: ADD EBX,0x338
// 00412078: PUSH EBX
// 00412079: PUSH 0x614d89
//   XREF to: 00614d89 (DATA)
// 0041207e: PUSH ESI
// 0041207f: CALL core_actor.cpp_CActorPropertyList_FUN_0040e160
//   XREF to: 0040e160 (UNCONDITIONAL_CALL)
// 00412084: ADD ESP,0x10
// 00412087: POP ESI
// 00412088: POP EBX
// 00412089: RET
