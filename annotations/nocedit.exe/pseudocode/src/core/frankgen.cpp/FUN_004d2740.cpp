// Name: core_frankgen.cpp_FUN_004d2740
// Address: 004d2740
// Address Range: [[004d2740, 004d276e]]
// Convention: unknown
// Signature: undefined core_frankgen.cpp_FUN_004d2740()
// Globals:
//   TerminatedCString s_Move_bat_along_course_0062ac0d
//   TerminatedCString s_anon_0062ac24
// Function calls:
//   core_actor.cpp_CDemonActor_showEditorHelp_FUN_0040d150
//   core_actor.cpp_SomethingElseWithStrings1_FUN_0040d1e0

#include "nocturne.h"

/* Signature: undefined1 actors_other_frankgen.cpp_FUN_004d2740(undefined4 param_1, undefined4
   param_2) */

void core_frankgen_cpp_FUN_004d2740(void)

{
  CDemonActor *in_stack_00000004;
  int *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_showEditorHelp_FUN_0040d150(in_stack_00000004,in_stack_00000008);
  *in_stack_00000008 = *in_stack_00000008 + 0xb;
  core_actor_cpp_SomethingElseWithStrings1_FUN_0040d1e0();
  return;
}


// Assembly code:
// 004d2740: PUSH EBX
//   Label: core_frankgen.cpp_FUN_004d2740
// 004d2741: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 004d2745: PUSH EBX
// 004d2746: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004d274a: PUSH EDX
// 004d274b: CALL core_actor.cpp_CDemonActor_showEditorHelp_FUN_0040d150
//   XREF to: 0040d150 (UNCONDITIONAL_CALL)
// 004d2750: ADD ESP,0x8
// 004d2753: PUSH 0x62ac0d
//   XREF to: 0062ac0d (DATA)
// 004d2758: MOV ECX,dword ptr [EBX]
// 004d275a: PUSH 0x62ac24
//   XREF to: 0062ac24 (DATA)
// 004d275f: ADD ECX,0xb
// 004d2762: PUSH EBX
// 004d2763: MOV dword ptr [EBX],ECX
// 004d2765: CALL core_actor.cpp_SomethingElseWithStrings1_FUN_0040d1e0
//   XREF to: 0040d1e0 (UNCONDITIONAL_CALL)
// 004d276a: ADD ESP,0xc
// 004d276d: POP EBX
// 004d276e: RET
