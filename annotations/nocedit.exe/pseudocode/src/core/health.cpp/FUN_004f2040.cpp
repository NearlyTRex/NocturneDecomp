// Name: core_health.cpp_FUN_004f2040
// Address: 004f2040
// Address Range: [[004f2040, 004f20a2]]
// Convention: unknown
// Signature: undefined core_health.cpp_FUN_004f2040()
// Globals:
//   TerminatedCString s_Model_file_kfm_0062ea39
//   TerminatedCString s_Number_of_uses_0062ea4b
//   TerminatedCString s_HP_restored_0062ea5a
// Function calls:
//   core_actor.cpp_CActorPropertyList_FUN_0040e1a0
//   core_actor.cpp_CActorPropertyList_FUN_0040e1e0
//   core_actor.cpp_CActorPropertyList_FUN_0040e3b0
//   core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290

#include "nocturne.h"

/* Signature: undefined1 actors_other_health.cpp_FUN_004f2040(undefined4 param_1, undefined4
   param_2) */

void core_health_cpp_FUN_004f2040(void)

{
  CDemonActor *in_stack_00000004;
  CActorPropertyList *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(in_stack_00000004,in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e3b0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e1e0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e1a0(in_stack_00000008);
  return;
}


// Assembly code:
// 004f2040: PUSH EBX
//   Label: core_health.cpp_FUN_004f2040
// 004f2041: PUSH ESI
// 004f2042: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004f2046: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 004f204a: PUSH ESI
// 004f204b: PUSH EBX
// 004f204c: CALL core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290
//   XREF to: 0040d290 (UNCONDITIONAL_CALL)
// 004f2051: ADD ESP,0x8
// 004f2054: PUSH 0x0
// 004f2056: LEA EAX,[EBX + 0x158]
// 004f205c: PUSH EAX
// 004f205d: PUSH 0x62ea39
//   XREF to: 0062ea39 (DATA)
// 004f2062: PUSH ESI
// 004f2063: CALL core_actor.cpp_CActorPropertyList_FUN_0040e3b0
//   XREF to: 0040e3b0 (UNCONDITIONAL_CALL)
// 004f2068: ADD ESP,0x10
// 004f206b: PUSH 0x0
// 004f206d: LEA EAX,[EBX + 0x2d4]
// 004f2073: PUSH EAX
// 004f2074: PUSH 0x62ea4b
//   XREF to: 0062ea4b (DATA)
// 004f2079: PUSH ESI
// 004f207a: CALL core_actor.cpp_CActorPropertyList_FUN_0040e1e0
//   XREF to: 0040e1e0 (UNCONDITIONAL_CALL)
// 004f207f: ADD ESP,0x10
// 004f2082: PUSH 0x0
// 004f2084: PUSH 0x42c80000
// 004f2089: ADD EBX,0x2d8
// 004f208f: PUSH 0x0
// 004f2091: PUSH EBX
// 004f2092: PUSH 0x62ea5a
//   XREF to: 0062ea5a (DATA)
// 004f2097: PUSH ESI
// 004f2098: CALL core_actor.cpp_CActorPropertyList_FUN_0040e1a0
//   XREF to: 0040e1a0 (UNCONDITIONAL_CALL)
// 004f209d: ADD ESP,0x18
// 004f20a0: POP ESI
// 004f20a1: POP EBX
// 004f20a2: RET
