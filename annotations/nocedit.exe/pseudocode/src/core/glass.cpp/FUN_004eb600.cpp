// Name: core_glass.cpp_FUN_004eb600
// Address: 004eb600
// Address Range: [[004eb600, 004eb68f]]
// Convention: __cdecl
// Signature: void core_glass.cpp_FUN_004eb600(CGlass * this_ptr)
// Globals:
//   TerminatedCString s_With_CTRL_held_down_use__0062e1a9
//   TerminatedCString s_Left_Right_changes_width_0062e1db
//   TerminatedCString s_Up_Down_changes_height_y_0062e1ff
//   TerminatedCString s_You_cannot_change_the_th_0062e221
//   int g_ClipLeft
// Function calls:
//   core_actor.cpp_CDemonActor_showEditorHelp_FUN_0040d150
//   engine_2d.c_drawText_FUN_00401fd0

#include "nocturne.h"

void __cdecl core_glass_cpp_FUN_004eb600(CGlass *this_ptr)

{
  int iVar1;
  int iVar2;
  int *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_showEditorHelp_FUN_0040d150(&this_ptr->base_actor,in_stack_00000008);
  iVar2 = g_ClipLeft;
  iVar1 = *in_stack_00000008;
  *in_stack_00000008 = iVar1 + 0xb;
  engine_2d_c_drawText_FUN_00401fd0("With CTRL held down, use slew keys to size glass:",iVar2,iVar1 + 0xb);
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
// 004eb600: PUSH EBX
//   Label: core_glass.cpp_FUN_004eb600
// 004eb601: PUSH EDI
// 004eb602: PUSH EBP
// 004eb603: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 004eb607: PUSH EBX
// 004eb608: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004eb60c: PUSH EDX
// 004eb60d: CALL core_actor.cpp_CDemonActor_showEditorHelp_FUN_0040d150
//   XREF to: 0040d150 (UNCONDITIONAL_CALL)
// 004eb612: MOV ECX,dword ptr [EBX]
// 004eb614: ADD ESP,0x8
// 004eb617: ADD ECX,0xb
// 004eb61a: PUSH ECX
// 004eb61b: MOV EDI,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 004eb621: PUSH EDI
// 004eb622: PUSH 0x62e1a9
//   XREF to: 0062e1a9 (DATA)
// 004eb627: MOV dword ptr [EBX],ECX
// 004eb629: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 004eb62e: MOV EBP,dword ptr [EBX]
// 004eb630: ADD ESP,0xc
// 004eb633: ADD EBP,0xb
// 004eb636: PUSH EBP
// 004eb637: MOV EDX,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 004eb63d: PUSH EDX
// 004eb63e: PUSH 0x62e1db
//   XREF to: 0062e1db (DATA)
// 004eb643: MOV dword ptr [EBX],EBP
// 004eb645: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 004eb64a: MOV ECX,dword ptr [EBX]
// 004eb64c: ADD ESP,0xc
// 004eb64f: ADD ECX,0xb
// 004eb652: PUSH ECX
// 004eb653: MOV EDI,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 004eb659: PUSH EDI
// 004eb65a: PUSH 0x62e1ff
//   XREF to: 0062e1ff (DATA)
// 004eb65f: MOV dword ptr [EBX],ECX
// 004eb661: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 004eb666: MOV EBP,dword ptr [EBX]
// 004eb668: ADD ESP,0xc
// 004eb66b: ADD EBP,0xb
// 004eb66e: PUSH EBP
// 004eb66f: MOV EDX,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 004eb675: PUSH EDX
// 004eb676: PUSH 0x62e221
//   XREF to: 0062e221 (DATA)
// 004eb67b: MOV dword ptr [EBX],EBP
// 004eb67d: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 004eb682: MOV ECX,dword ptr [EBX]
// 004eb684: ADD ECX,0xb
// 004eb687: ADD ESP,0xc
// 004eb68a: MOV dword ptr [EBX],ECX
// 004eb68c: POP EBP
// 004eb68d: POP EDI
// 004eb68e: POP EBX
// 004eb68f: RET
