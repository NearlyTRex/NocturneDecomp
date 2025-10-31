// Name: core_stairs.cpp_FUN_005ba840
// Address: 005ba840
// Address Range: [[005ba840, 005ba8f5]]
// Convention: unknown
// Signature: undefined core_stairs.cpp_FUN_005ba840()
// Globals:
//   undefined4 s_stair_count_00653092
//   TerminatedCString s_rise_0065309e
//   TerminatedCString s_run_006530a3
//   TerminatedCString s_width_006530a7
//   TerminatedCString s_bevelY_006530ad
//   TerminatedCString s_bevelZ_006530b4
//   TerminatedCString s_ground_type_006530bb
// Function calls:
//   core_actor.cpp_CActorPropertyList_FUN_0040e160
//   core_actor.cpp_CActorPropertyList_FUN_0040e1e0
//   core_actor.cpp_CActorPropertyList_FUN_0040e300
//   core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290

#include "nocturne.h"

/* Signature: undefined1 actors_other_stairs.cpp_FUN_005ba840(undefined4 param_1, undefined4
   param_2) */

void core_stairs_cpp_FUN_005ba840(void)

{
  CDemonActor *in_stack_00000004;
  CActorPropertyList *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(in_stack_00000004,in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e1e0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e160(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e160(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e160(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e160(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e160(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e300(in_stack_00000008);
  return;
}


// Assembly code:
// 005ba840: PUSH EBX
//   Label: core_stairs.cpp_FUN_005ba840
// 005ba841: PUSH ESI
// 005ba842: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005ba846: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 005ba84a: PUSH ESI
// 005ba84b: PUSH EBX
// 005ba84c: CALL core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290
//   XREF to: 0040d290 (UNCONDITIONAL_CALL)
// 005ba851: ADD ESP,0x8
// 005ba854: PUSH 0x0
// 005ba856: LEA EAX,[EBX + 0x16c]
// 005ba85c: PUSH EAX
// 005ba85d: PUSH 0x653092
//   XREF to: 00653092 (DATA)
// 005ba862: PUSH ESI
// 005ba863: CALL core_actor.cpp_CActorPropertyList_FUN_0040e1e0
//   XREF to: 0040e1e0 (UNCONDITIONAL_CALL)
// 005ba868: ADD ESP,0x10
// 005ba86b: PUSH 0x0
// 005ba86d: LEA EAX,[EBX + 0x158]
// 005ba873: PUSH EAX
// 005ba874: PUSH 0x65309e
//   XREF to: 0065309e (DATA)
// 005ba879: PUSH ESI
// 005ba87a: CALL core_actor.cpp_CActorPropertyList_FUN_0040e160
//   XREF to: 0040e160 (UNCONDITIONAL_CALL)
// 005ba87f: ADD ESP,0x10
// 005ba882: PUSH 0x0
// 005ba884: LEA EAX,[EBX + 0x15c]
// 005ba88a: PUSH EAX
// 005ba88b: PUSH 0x6530a3
//   XREF to: 006530a3 (DATA)
// 005ba890: PUSH ESI
// 005ba891: CALL core_actor.cpp_CActorPropertyList_FUN_0040e160
//   XREF to: 0040e160 (UNCONDITIONAL_CALL)
// 005ba896: ADD ESP,0x10
// 005ba899: PUSH 0x0
// 005ba89b: LEA EAX,[EBX + 0x160]
// 005ba8a1: PUSH EAX
// 005ba8a2: PUSH 0x6530a7
//   XREF to: 006530a7 (DATA)
// 005ba8a7: PUSH ESI
// 005ba8a8: CALL core_actor.cpp_CActorPropertyList_FUN_0040e160
//   XREF to: 0040e160 (UNCONDITIONAL_CALL)
// 005ba8ad: ADD ESP,0x10
// 005ba8b0: PUSH 0x0
// 005ba8b2: LEA EAX,[EBX + 0x164]
// 005ba8b8: PUSH EAX
// 005ba8b9: PUSH 0x6530ad
//   XREF to: 006530ad (DATA)
// 005ba8be: PUSH ESI
// 005ba8bf: CALL core_actor.cpp_CActorPropertyList_FUN_0040e160
//   XREF to: 0040e160 (UNCONDITIONAL_CALL)
// 005ba8c4: ADD ESP,0x10
// 005ba8c7: PUSH 0x0
// 005ba8c9: LEA EAX,[EBX + 0x168]
// 005ba8cf: PUSH EAX
// 005ba8d0: PUSH 0x6530b4
//   XREF to: 006530b4 (DATA)
// 005ba8d5: PUSH ESI
// 005ba8d6: CALL core_actor.cpp_CActorPropertyList_FUN_0040e160
//   XREF to: 0040e160 (UNCONDITIONAL_CALL)
// 005ba8db: ADD ESP,0x10
// 005ba8de: ADD EBX,0xa30
// 005ba8e4: PUSH EBX
// 005ba8e5: PUSH 0x6530bb
//   XREF to: 006530bb (DATA)
// 005ba8ea: PUSH ESI
// 005ba8eb: CALL core_actor.cpp_CActorPropertyList_FUN_0040e300
//   XREF to: 0040e300 (UNCONDITIONAL_CALL)
// 005ba8f0: ADD ESP,0xc
// 005ba8f3: POP ESI
// 005ba8f4: POP EBX
// 005ba8f5: RET
