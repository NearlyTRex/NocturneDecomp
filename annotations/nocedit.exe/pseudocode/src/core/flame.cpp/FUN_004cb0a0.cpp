// Name: core_flame.cpp_FUN_004cb0a0
// Address: 004cb0a0
// Address Range: [[004cb0a0, 004cb0df]]
// Convention: unknown
// Signature: undefined core_flame.cpp_FUN_004cb0a0()
// Globals:
//   TerminatedCString s_With_CTRL_held_down_use__0062a276
//   int g_ClipLeft
// Function calls:
//   core_actor.cpp_CDemonActor_showEditorHelp_FUN_0040d150
//   engine_2d.c_drawText_FUN_00401fd0

#include "nocturne.h"

/* Signature: undefined1 actors_other_flame.cpp_FUN_004cb0a0(undefined4 param_1, undefined4 param_2)
    */

void core_flame_cpp_FUN_004cb0a0(void)

{
  int iVar1;
  int x_pos;
  CDemonActor *in_stack_00000004;
  int *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_showEditorHelp_FUN_0040d150(in_stack_00000004,in_stack_00000008);
  x_pos = g_ClipLeft;
  iVar1 = *in_stack_00000008;
  *in_stack_00000008 = iVar1 + 0xb;
  engine_2d_c_drawText_FUN_00401fd0("With CTRL held down, use slew keys to size flame.",x_pos,iVar1 + 0xb);
  *in_stack_00000008 = *in_stack_00000008 + 0xb;
  return;
}


// Assembly code:
// 004cb0a0: PUSH EBX
//   Label: core_flame.cpp_FUN_004cb0a0
// 004cb0a1: PUSH EDI
// 004cb0a2: PUSH EBP
// 004cb0a3: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 004cb0a7: PUSH EBX
// 004cb0a8: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004cb0ac: PUSH EDX
// 004cb0ad: CALL core_actor.cpp_CDemonActor_showEditorHelp_FUN_0040d150
//   XREF to: 0040d150 (UNCONDITIONAL_CALL)
// 004cb0b2: MOV ECX,dword ptr [EBX]
// 004cb0b4: ADD ESP,0x8
// 004cb0b7: ADD ECX,0xb
// 004cb0ba: PUSH ECX
// 004cb0bb: MOV EDI,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 004cb0c1: PUSH EDI
// 004cb0c2: PUSH 0x62a276
//   XREF to: 0062a276 (DATA)
// 004cb0c7: MOV dword ptr [EBX],ECX
// 004cb0c9: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 004cb0ce: MOV EBP,dword ptr [EBX]
// 004cb0d0: ADD EBP,0xb
// 004cb0d3: ADD ESP,0xc
// 004cb0d6: MOV dword ptr [EBX],EBP
// 004cb0d8: POP EBP
// 004cb0d9: POP EDI
// 004cb0da: POP EBX
// 004cb0db: LEA EAX,[EAX]
// 004cb0de: MOV ECX,ECX
