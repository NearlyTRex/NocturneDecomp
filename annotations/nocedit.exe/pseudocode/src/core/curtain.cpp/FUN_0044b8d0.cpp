// Name: core_curtain.cpp_FUN_0044b8d0
// Address: 0044b8d0
// Address Range: [[0044b8d0, 0044b95f]]
// Convention: unknown
// Signature: undefined core_curtain.cpp_FUN_0044b8d0()
// Globals:
//   undefined4 s_With_CTRL_held_down,_use_slew_ke_00619dea
//   TerminatedCString s_Left_Right_changes_width_00619e1a
//   TerminatedCString s_Up_Down_changes_height_y_00619e3e
//   TerminatedCString s_You_cannot_change_the_th_00619e60
//   int g_ClipLeft
// Function calls:
//   core_actor.cpp_CDemonActor_showEditorHelp_FUN_0040d150
//   engine_2d.c_drawText_FUN_00401fd0

#include "nocturne.h"

/* Signature: undefined1 actors_other_curtain.cpp_FUN_0044b8d0(undefined4 param_1, undefined4
   param_2) */

void core_curtain_cpp_FUN_0044b8d0(void)

{
  int iVar1;
  int iVar2;
  CDemonActor *in_stack_00000004;
  int *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_showEditorHelp_FUN_0040d150(in_stack_00000004,in_stack_00000008);
  iVar2 = g_ClipLeft;
  iVar1 = *in_stack_00000008;
  *in_stack_00000008 = iVar1 + 0xb;
  engine_2d_c_drawText_FUN_00401fd0("@With CTRL held down, use slew keys to size box:" + 1,iVar2,iVar1 + 0xb);
  iVar2 = g_ClipLeft;
  iVar1 = *in_stack_00000008;
  *in_stack_00000008 = iVar1 + 0xb;
  engine_2d_c_drawText_FUN_00401fd0("  Left/Right changes width (x-size)",iVar2,iVar1 + 0xb);
  iVar2 = g_ClipLeft;
  iVar1 = *in_stack_00000008;
  *in_stack_00000008 = iVar1 + 0xb;
  engine_2d_c_drawText_FUN_00401fd0("  Up/Down changes height (y-size)",iVar2,iVar1 + 0xb);
  iVar2 = g_ClipLeft;
  iVar1 = *in_stack_00000008;
  *in_stack_00000008 = iVar1 + 0xb;
  engine_2d_c_drawText_FUN_00401fd0("  You cannot change the thickness (z-size)",iVar2,iVar1 + 0xb);
  *in_stack_00000008 = *in_stack_00000008 + 0xb;
  return;
}


// Assembly code:
// 0044b8d0: PUSH EBX
//   Label: core_curtain.cpp_FUN_0044b8d0
// 0044b8d1: PUSH EDI
// 0044b8d2: PUSH EBP
// 0044b8d3: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0044b8d7: PUSH EBX
// 0044b8d8: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0044b8dc: PUSH EDX
// 0044b8dd: CALL core_actor.cpp_CDemonActor_showEditorHelp_FUN_0040d150
//   XREF to: 0040d150 (UNCONDITIONAL_CALL)
// 0044b8e2: MOV ECX,dword ptr [EBX]
// 0044b8e4: ADD ESP,0x8
// 0044b8e7: ADD ECX,0xb
// 0044b8ea: PUSH ECX
// 0044b8eb: MOV EDI,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 0044b8f1: PUSH EDI
// 0044b8f2: PUSH 0x619dea
//   XREF to: 00619dea (DATA)
// 0044b8f7: MOV dword ptr [EBX],ECX
// 0044b8f9: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0044b8fe: MOV EBP,dword ptr [EBX]
// 0044b900: ADD ESP,0xc
// 0044b903: ADD EBP,0xb
// 0044b906: PUSH EBP
// 0044b907: MOV EDX,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 0044b90d: PUSH EDX
// 0044b90e: PUSH 0x619e1a
//   XREF to: 00619e1a (DATA)
// 0044b913: MOV dword ptr [EBX],EBP
// 0044b915: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0044b91a: MOV ECX,dword ptr [EBX]
// 0044b91c: ADD ESP,0xc
// 0044b91f: ADD ECX,0xb
// 0044b922: PUSH ECX
// 0044b923: MOV EDI,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 0044b929: PUSH EDI
// 0044b92a: PUSH 0x619e3e
//   XREF to: 00619e3e (DATA)
// 0044b92f: MOV dword ptr [EBX],ECX
// 0044b931: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0044b936: MOV EBP,dword ptr [EBX]
// 0044b938: ADD ESP,0xc
// 0044b93b: ADD EBP,0xb
// 0044b93e: PUSH EBP
// 0044b93f: MOV EDX,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 0044b945: PUSH EDX
// 0044b946: PUSH 0x619e60
//   XREF to: 00619e60 (DATA)
// 0044b94b: MOV dword ptr [EBX],EBP
// 0044b94d: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0044b952: MOV ECX,dword ptr [EBX]
// 0044b954: ADD ECX,0xb
// 0044b957: ADD ESP,0xc
// 0044b95a: MOV dword ptr [EBX],ECX
// 0044b95c: POP EBP
// 0044b95d: POP EDI
// 0044b95e: POP EBX
// 0044b95f: RET
