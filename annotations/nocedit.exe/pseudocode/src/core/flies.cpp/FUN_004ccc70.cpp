// Name: core_flies.cpp_FUN_004ccc70
// Address: 004ccc70
// Address Range: [[004ccc70, 004cccab]]
// Convention: unknown
// Signature: undefined core_flies.cpp_FUN_004ccc70()
// Globals:
//   TerminatedCString s_With_CTRL_held_down_use__0062a486
//   int g_ClipLeft
// Function calls:
//   core_actor.cpp_CDemonActor_showEditorHelp_FUN_0040d150
//   engine_2d.c_drawText_FUN_00401fd0

#include "nocturne.h"

/* Signature: undefined1 actors_other_flies.cpp_FUN_004ccc70(undefined4 param_1, undefined4 param_2)
    */

void core_flies_cpp_FUN_004ccc70(void)

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
// 004ccc70: PUSH EBX
//   Label: core_flies.cpp_FUN_004ccc70
// 004ccc71: PUSH EDI
// 004ccc72: PUSH EBP
// 004ccc73: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 004ccc77: PUSH EBX
// 004ccc78: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004ccc7c: PUSH EDX
// 004ccc7d: CALL core_actor.cpp_CDemonActor_showEditorHelp_FUN_0040d150
//   XREF to: 0040d150 (UNCONDITIONAL_CALL)
// 004ccc82: MOV ECX,dword ptr [EBX]
// 004ccc84: ADD ESP,0x8
// 004ccc87: ADD ECX,0xb
// 004ccc8a: PUSH ECX
// 004ccc8b: MOV EDI,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 004ccc91: PUSH EDI
// 004ccc92: PUSH 0x62a486
//   XREF to: 0062a486 (DATA)
// 004ccc97: MOV dword ptr [EBX],ECX
// 004ccc99: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 004ccc9e: MOV EBP,dword ptr [EBX]
// 004ccca0: ADD EBP,0xb
// 004ccca3: ADD ESP,0xc
// 004ccca6: MOV dword ptr [EBX],EBP
// 004ccca8: POP EBP
// 004ccca9: POP EDI
// 004cccaa: POP EBX
// 004cccab: RET
