// Name: core_ladder.cpp_FUN_00502e50
// Address: 00502e50
// Address Range: [[00502e50, 00502e8b]]
// Convention: unknown
// Signature: undefined core_ladder.cpp_FUN_00502e50()
// Globals:
//   TerminatedCString s_With_CTRL_held_down_use__00630e90
//   int g_ClipLeft
// Function calls:
//   core_actor.cpp_CDemonActor_showEditorHelp_FUN_0040d150
//   engine_2d.c_drawText_FUN_00401fd0

#include "nocturne.h"

/* Signature: undefined1 actors_other_ladder.cpp_FUN_00502e50(undefined4 param_1, undefined4
   param_2) */

void core_ladder_cpp_FUN_00502e50(void)

{
  int iVar1;
  int x_pos;
  CDemonActor *in_stack_00000004;
  int *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_showEditorHelp_FUN_0040d150(in_stack_00000004,in_stack_00000008);
  x_pos = g_ClipLeft;
  iVar1 = *in_stack_00000008;
  *in_stack_00000008 = iVar1 + 0xb;
  engine_2d_c_drawText_FUN_00401fd0("With CTRL held down, use slew keys to size ladder.",x_pos,iVar1 + 0xb);
  *in_stack_00000008 = *in_stack_00000008 + 0xb;
  return;
}


// Assembly code:
// 00502e50: PUSH EBX
//   Label: core_ladder.cpp_FUN_00502e50
// 00502e51: PUSH EDI
// 00502e52: PUSH EBP
// 00502e53: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 00502e57: PUSH EBX
// 00502e58: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00502e5c: PUSH EDX
// 00502e5d: CALL core_actor.cpp_CDemonActor_showEditorHelp_FUN_0040d150
//   XREF to: 0040d150 (UNCONDITIONAL_CALL)
// 00502e62: MOV ECX,dword ptr [EBX]
// 00502e64: ADD ESP,0x8
// 00502e67: ADD ECX,0xb
// 00502e6a: PUSH ECX
// 00502e6b: MOV EDI,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 00502e71: PUSH EDI
// 00502e72: PUSH 0x630e90
//   XREF to: 00630e90 (DATA)
// 00502e77: MOV dword ptr [EBX],ECX
// 00502e79: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00502e7e: MOV EBP,dword ptr [EBX]
// 00502e80: ADD EBP,0xb
// 00502e83: ADD ESP,0xc
// 00502e86: MOV dword ptr [EBX],EBP
// 00502e88: POP EBP
// 00502e89: POP EDI
// 00502e8a: POP EBX
// 00502e8b: RET
