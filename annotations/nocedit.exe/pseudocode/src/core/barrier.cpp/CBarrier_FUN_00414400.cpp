// Name: core_barrier.cpp_CBarrier_FUN_00414400
// Address: 00414400
// Address Range: [[00414400, 0041445e]]
// Convention: __cdecl
// Signature: void core_barrier.cpp_CBarrier_FUN_00414400(CBarrier * this_ptr)
// Globals:
//   TerminatedCString s_size_00615196
//   TerminatedCString s_effectClassNameList_0061519b
//   TerminatedCString s_addToPathGrid_006151af
// Function calls:
//   core_actor.cpp_CActorPropertyList_FUN_0040e260
//   core_actor.cpp_CActorPropertyList_FUN_0040e290
//   core_actor.cpp_CActorPropertyList_FUN_0040e330
//   core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290

#include "nocturne.h"

void __cdecl core_barrier_cpp_CBarrier_FUN_00414400(CBarrier *this_ptr)

{
  CActorPropertyList *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(&this_ptr->base_actor,in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e260(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e290(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e330(in_stack_00000008);
  return;
}


// Assembly code:
// 00414400: PUSH EBX
//   Label: core_barrier.cpp_CBarrier_FUN_00414400
// 00414401: PUSH ESI
// 00414402: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00414406: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 0041440a: PUSH ESI
// 0041440b: PUSH EBX
// 0041440c: CALL core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290
//   XREF to: 0040d290 (UNCONDITIONAL_CALL)
// 00414411: ADD ESP,0x8
// 00414414: PUSH 0x0
// 00414416: LEA EAX,[EBX + 0x158]
// 0041441c: PUSH EAX
// 0041441d: PUSH 0x615196
//   XREF to: 00615196 (DATA)
// 00414422: PUSH ESI
// 00414423: CALL core_actor.cpp_CActorPropertyList_FUN_0040e260
//   XREF to: 0040e260 (UNCONDITIONAL_CALL)
// 00414428: ADD ESP,0x10
// 0041442b: PUSH 0x0
// 0041442d: PUSH 0xc8
// 00414432: LEA EAX,[EBX + 0x168]
// 00414438: PUSH EAX
// 00414439: PUSH 0x61519b
//   XREF to: 0061519b (DATA)
// 0041443e: PUSH ESI
// 0041443f: CALL core_actor.cpp_CActorPropertyList_FUN_0040e290
//   XREF to: 0040e290 (UNCONDITIONAL_CALL)
// 00414444: ADD ESP,0x14
// 00414447: ADD EBX,0x164
// 0041444d: PUSH EBX
// 0041444e: PUSH 0x6151af
//   XREF to: 006151af (DATA)
// 00414453: PUSH ESI
// 00414454: CALL core_actor.cpp_CActorPropertyList_FUN_0040e330
//   XREF to: 0040e330 (UNCONDITIONAL_CALL)
// 00414459: ADD ESP,0xc
// 0041445c: POP ESI
// 0041445d: POP EBX
// 0041445e: RET
