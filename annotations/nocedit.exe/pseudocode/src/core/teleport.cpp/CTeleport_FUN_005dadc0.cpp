// Name: core_teleport.cpp_CTeleport_FUN_005dadc0
// Address: 005dadc0
// Address Range: [[005dadc0, 005dae0e]]
// Convention: __cdecl
// Signature: void core_teleport.cpp_CTeleport_FUN_005dadc0(CTeleport * this_ptr)
// Globals:
//   TerminatedCString s_With_CTRL_held_down_use__00654d43
//   TerminatedCString s_Select_my_CTeleportDest__00654d73
//   TerminatedCString s_T_00654d92
//   int g_ClipLeft
// Function calls:
//   core_actor.cpp_CDemonActor_showEditorHelp_FUN_0040d150
//   core_actor.cpp_SomethingElseWithStrings1_FUN_0040d1e0
//   engine_2d.c_drawText_FUN_00401fd0

#include "nocturne.h"

void __cdecl core_teleport_cpp_CTeleport_FUN_005dadc0(CTeleport *this_ptr)

{
  int iVar1;
  int x_pos;
  int *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_showEditorHelp_FUN_0040d150(&this_ptr->base_actor,in_stack_00000008);
  x_pos = g_ClipLeft;
  iVar1 = *in_stack_00000008;
  *in_stack_00000008 = iVar1 + 0xb;
  engine_2d_c_drawText_FUN_00401fd0("With CTRL held down, use slew keys to size box.",x_pos,iVar1 + 0xb);
  *in_stack_00000008 = *in_stack_00000008 + 0x16;
  core_actor_cpp_SomethingElseWithStrings1_FUN_0040d1e0();
  return;
}


// Assembly code:
// 005dadc0: PUSH EBX
//   Label: core_teleport.cpp_CTeleport_FUN_005dadc0
// 005dadc1: PUSH EDI
// 005dadc2: PUSH EBP
// 005dadc3: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 005dadc7: PUSH EBX
// 005dadc8: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005dadcc: PUSH EDX
// 005dadcd: CALL core_actor.cpp_CDemonActor_showEditorHelp_FUN_0040d150
//   XREF to: 0040d150 (UNCONDITIONAL_CALL)
// 005dadd2: MOV ECX,dword ptr [EBX]
// 005dadd4: ADD ESP,0x8
// 005dadd7: ADD ECX,0xb
// 005dadda: PUSH ECX
// 005daddb: MOV EDI,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 005dade1: PUSH EDI
// 005dade2: PUSH 0x654d43
//   XREF to: 00654d43 (DATA)
// 005dade7: MOV dword ptr [EBX],ECX
// 005dade9: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 005dadee: ADD ESP,0xc
// 005dadf1: PUSH 0x654d73
//   XREF to: 00654d73 (DATA)
// 005dadf6: MOV EBP,dword ptr [EBX]
// 005dadf8: PUSH 0x654d92
//   XREF to: 00654d92 (DATA)
// 005dadfd: ADD EBP,0x16
// 005dae00: PUSH EBX
// 005dae01: MOV dword ptr [EBX],EBP
// 005dae03: CALL core_actor.cpp_SomethingElseWithStrings1_FUN_0040d1e0
//   XREF to: 0040d1e0 (UNCONDITIONAL_CALL)
// 005dae08: ADD ESP,0xc
// 005dae0b: POP EBP
// 005dae0c: POP EDI
// 005dae0d: POP EBX
// 005dae0e: RET
