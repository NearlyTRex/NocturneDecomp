// Name: core_emitter.cpp_FUN_004a9350
// Address: 004a9350
// Address Range: [[004a9350, 004a938b]]
// Convention: unknown
// Signature: undefined core_emitter.cpp_FUN_004a9350()
// Globals:
//   TerminatedCString s_With_CTRL_held_down_use__006242d2
//   int g_ClipLeft
// Function calls:
//   core_actor.cpp_CDemonActor_showEditorHelp_FUN_0040d150
//   engine_2d.c_drawText_FUN_00401fd0

#include "nocturne.h"

/* Signature: undefined1 actors_other_emitter.cpp_FUN_004a9350(undefined4 param_1, undefined4
   param_2) */

void core_emitter_cpp_FUN_004a9350(void)

{
  int iVar1;
  int x_pos;
  CDemonActor *in_stack_00000004;
  int *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_showEditorHelp_FUN_0040d150(in_stack_00000004,in_stack_00000008);
  x_pos = g_ClipLeft;
  iVar1 = *in_stack_00000008;
  *in_stack_00000008 = iVar1 + 0xb;
  engine_2d_c_drawText_FUN_00401fd0("With CTRL held down, use slew keys to size box.",x_pos,iVar1 + 0xb);
  *in_stack_00000008 = *in_stack_00000008 + 0xb;
  return;
}


// Assembly code:
// 004a9350: PUSH EBX
//   Label: core_emitter.cpp_FUN_004a9350
// 004a9351: PUSH EDI
// 004a9352: PUSH EBP
// 004a9353: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 004a9357: PUSH EBX
// 004a9358: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004a935c: PUSH EDX
// 004a935d: CALL core_actor.cpp_CDemonActor_showEditorHelp_FUN_0040d150
//   XREF to: 0040d150 (UNCONDITIONAL_CALL)
// 004a9362: MOV ECX,dword ptr [EBX]
// 004a9364: ADD ESP,0x8
// 004a9367: ADD ECX,0xb
// 004a936a: PUSH ECX
// 004a936b: MOV EDI,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 004a9371: PUSH EDI
// 004a9372: PUSH 0x6242d2
//   XREF to: 006242d2 (DATA)
// 004a9377: MOV dword ptr [EBX],ECX
// 004a9379: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 004a937e: MOV EBP,dword ptr [EBX]
// 004a9380: ADD EBP,0xb
// 004a9383: ADD ESP,0xc
// 004a9386: MOV dword ptr [EBX],EBP
// 004a9388: POP EBP
// 004a9389: POP EDI
// 004a938a: POP EBX
// 004a938b: RET
