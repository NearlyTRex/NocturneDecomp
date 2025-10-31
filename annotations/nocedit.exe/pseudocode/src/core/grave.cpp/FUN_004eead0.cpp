// Name: core_grave.cpp_FUN_004eead0
// Address: 004eead0
// Address Range: [[004eead0, 004eeb0b]]
// Convention: unknown
// Signature: undefined core_grave.cpp_FUN_004eead0()
// Globals:
//   TerminatedCString s_Hold_down_CTRL_to_view_g_0062e532
//   int g_ClipLeft
// Function calls:
//   core_actor.cpp_CDemonActor_showEditorHelp_FUN_0040d150
//   engine_2d.c_drawText_FUN_00401fd0

#include "nocturne.h"

/* Signature: undefined1 actors_other_grave.cpp_FUN_004eead0(undefined4 param_1, undefined4 param_2)
    */

void core_grave_cpp_FUN_004eead0(void)

{
  int iVar1;
  int x_pos;
  CDemonActor *in_stack_00000004;
  int *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_showEditorHelp_FUN_0040d150(in_stack_00000004,in_stack_00000008);
  x_pos = g_ClipLeft;
  iVar1 = *in_stack_00000008;
  *in_stack_00000008 = iVar1 + 0xb;
  engine_2d_c_drawText_FUN_00401fd0("Hold down CTRL to view grave animation on the very last frame.",x_pos,iVar1 + 0xb);
  *in_stack_00000008 = *in_stack_00000008 + 0xb;
  return;
}


// Assembly code:
// 004eead0: PUSH EBX
//   Label: core_grave.cpp_FUN_004eead0
// 004eead1: PUSH EDI
// 004eead2: PUSH EBP
// 004eead3: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 004eead7: PUSH EBX
// 004eead8: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004eeadc: PUSH EDX
// 004eeadd: CALL core_actor.cpp_CDemonActor_showEditorHelp_FUN_0040d150
//   XREF to: 0040d150 (UNCONDITIONAL_CALL)
// 004eeae2: MOV ECX,dword ptr [EBX]
// 004eeae4: ADD ESP,0x8
// 004eeae7: ADD ECX,0xb
// 004eeaea: PUSH ECX
// 004eeaeb: MOV EDI,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 004eeaf1: PUSH EDI
// 004eeaf2: PUSH 0x62e532
//   XREF to: 0062e532 (DATA)
// 004eeaf7: MOV dword ptr [EBX],ECX
// 004eeaf9: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 004eeafe: MOV EBP,dword ptr [EBX]
// 004eeb00: ADD EBP,0xb
// 004eeb03: ADD ESP,0xc
// 004eeb06: MOV dword ptr [EBX],EBP
// 004eeb08: POP EBP
// 004eeb09: POP EDI
// 004eeb0a: POP EBX
// 004eeb0b: RET
