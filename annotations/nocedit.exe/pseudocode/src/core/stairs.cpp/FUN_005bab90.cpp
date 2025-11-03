// Name: core_stairs.cpp_FUN_005bab90
// Address: 005bab90
// Address Range: [[005bab90, 005babe3]]
// Convention: unknown
// Signature: undefined core_stairs.cpp_FUN_005bab90()
// Globals:
//   undefined4 s_With_CTRL_held_down:_006530e2
//   TerminatedCString s_Left_right_adjusts_width_006530f7
//   TerminatedCString s_Q_A_adjusts_rise_00653112
//   TerminatedCString s_Up_Down_adjusts_run_00653125
// Function calls:
//   core_actor.cpp_CDemonActor_showEditorHelp_FUN_0040d150
//   core_actor.cpp_drawTextLine_FUN_0040d240

#include "nocturne.h"

/* Signature: undefined1 actors_other_stairs.cpp_FUN_005bab90(undefined4 param_1, undefined4
   param_2) */

void core_stairs_cpp_FUN_005bab90(void)

{
  CDemonActor *in_stack_00000004;
  int *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_showEditorHelp_FUN_0040d150(in_stack_00000004,in_stack_00000008);
  *in_stack_00000008 = *in_stack_00000008 + 0xb;
  core_actor_cpp_drawTextLine_FUN_0040d240(in_stack_00000008,"?With CTRL held down:" + 1);
  core_actor_cpp_drawTextLine_FUN_0040d240(in_stack_00000008,"  Left/right adjusts width");
  core_actor_cpp_drawTextLine_FUN_0040d240(in_stack_00000008,"  Q/A adjusts rise");
  core_actor_cpp_drawTextLine_FUN_0040d240(in_stack_00000008,"  Up/Down adjusts run");
  return;
}


// Assembly code:
// 005bab90: PUSH EBX
//   Label: core_stairs.cpp_FUN_005bab90
// 005bab91: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 005bab95: PUSH EBX
// 005bab96: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005bab9a: PUSH EDX
// 005bab9b: CALL core_actor.cpp_CDemonActor_showEditorHelp_FUN_0040d150
//   XREF to: 0040d150 (UNCONDITIONAL_CALL)
// 005baba0: ADD ESP,0x8
// 005baba3: MOV ECX,dword ptr [EBX]
// 005baba5: PUSH 0x6530e2
//   XREF to: 006530e2 (DATA)
// 005babaa: ADD ECX,0xb
// 005babad: PUSH EBX
// 005babae: MOV dword ptr [EBX],ECX
// 005babb0: CALL core_actor.cpp_drawTextLine_FUN_0040d240
//   XREF to: 0040d240 (UNCONDITIONAL_CALL)
// 005babb5: ADD ESP,0x8
// 005babb8: PUSH 0x6530f7
//   XREF to: 006530f7 (DATA)
// 005babbd: PUSH EBX
// 005babbe: CALL core_actor.cpp_drawTextLine_FUN_0040d240
//   XREF to: 0040d240 (UNCONDITIONAL_CALL)
// 005babc3: ADD ESP,0x8
// 005babc6: PUSH 0x653112
//   XREF to: 00653112 (DATA)
// 005babcb: PUSH EBX
// 005babcc: CALL core_actor.cpp_drawTextLine_FUN_0040d240
//   XREF to: 0040d240 (UNCONDITIONAL_CALL)
// 005babd1: ADD ESP,0x8
// 005babd4: PUSH 0x653125
//   XREF to: 00653125 (DATA)
// 005babd9: PUSH EBX
// 005babda: CALL core_actor.cpp_drawTextLine_FUN_0040d240
//   XREF to: 0040d240 (UNCONDITIONAL_CALL)
// 005babdf: ADD ESP,0x8
// 005babe2: POP EBX
// 005babe3: RET
