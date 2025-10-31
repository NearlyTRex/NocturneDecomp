// Name: core_actor.cpp_CDemonActor_showEditorHelp_FUN_0040d150
// Address: 0040d150
// Address Range: [[0040d150, 0040d1d9]]
// Convention: __cdecl
// Signature: void core_actor.cpp_CDemonActor_showEditorHelp_FUN_0040d150(CDemonActor * this_ptr, int * y_pos)
// Cross-references:
//   core_barrier.cpp_CBarrier_FUN_00414610 (00414610) at 0041461c [UNCONDITIONAL_CALL]
//   core_bat.cpp_CBat_FUN_00414fb0 (00414fb0) at 00414fbb [UNCONDITIONAL_CALL]
//   core_curtain.cpp_FUN_0044b8d0 (0044b8d0) at 0044b8dd [UNCONDITIONAL_CALL]
//   core_emitter.cpp_FUN_004a9350 (004a9350) at 004a935d [UNCONDITIONAL_CALL]
//   core_flame.cpp_FUN_004cb0a0 (004cb0a0) at 004cb0ad [UNCONDITIONAL_CALL]
//   core_flies.cpp_FUN_004ccc70 (004ccc70) at 004ccc7d [UNCONDITIONAL_CALL]
//   core_frankgen.cpp_FUN_004d2740 (004d2740) at 004d274b [UNCONDITIONAL_CALL]
//   core_glass.cpp_FUN_004eb600 (004eb600) at 004eb60d [UNCONDITIONAL_CALL]
//   core_grave.cpp_FUN_004eead0 (004eead0) at 004eeadd [UNCONDITIONAL_CALL]
//   core_ladder.cpp_FUN_00502e50 (00502e50) at 00502e5d [UNCONDITIONAL_CALL]
//   core_lever.cpp_FUN_00505390 (00505390) at 0050539d [UNCONDITIONAL_CALL]
//   core_stairs.cpp_FUN_005bab90 (005bab90) at 005bab9b [UNCONDITIONAL_CALL]
//   core_teleport.cpp_CTeleportDest_FUN_005da970 (005da970) at 005da97b [UNCONDITIONAL_CALL]
//   core_teleport.cpp_CTeleport_FUN_005dadc0 (005dadc0) at 005dadcd [UNCONDITIONAL_CALL]
//   core_trigger.cpp_CTrigger_FUN_005e1350 (005e1350) at 005e135e [UNCONDITIONAL_CALL]
//   core_tvbat.cpp_CTVBat_FUN_005e5400 (005e5400) at 005e540d [UNCONDITIONAL_CALL]
//   core_wateract.cpp_CWaterActor_FUN_005ebc10 (005ebc10) at 005ebc1d [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Use_standard_slew_keys_t_00614340
//   TerminatedCString s_Arrow_keys_move_around_00614360
//   TerminatedCString s_Q_A_move_up_down_00614379
//   TerminatedCString s_End_PgDn_rotate_hozontal_0061438c
//   TerminatedCString s_F5_F8_Pitch_006143b3
//   TerminatedCString s_Home_PgUp_bank_006143c1
//   TerminatedCString s_Use_right_mouse_button_t_006143d2
//   TerminatedCString s_Position_to_ground_00614406
//   TerminatedCString s_G_0061441a
// Function calls:
//   core_actor.cpp_SomethingElseWithStrings1_FUN_0040d1e0
//   core_actor.cpp_SomethingElseWithStrings2_FUN_0040d240

#include "nocturne.h"

void __cdecl
core_actor_cpp_CDemonActor_showEditorHelp_FUN_0040d150(CDemonActor *this_ptr,int *y_pos)

{
  char *pcStack0000000c;
  char *pcStack00000010;
  char *pcStack00000014;
  
  core_actor_cpp_SomethingElseWithStrings2_FUN_0040d240();
  core_actor_cpp_SomethingElseWithStrings2_FUN_0040d240();
  core_actor_cpp_SomethingElseWithStrings2_FUN_0040d240();
  core_actor_cpp_SomethingElseWithStrings2_FUN_0040d240();
  core_actor_cpp_SomethingElseWithStrings2_FUN_0040d240();
  pcStack0000000c = "  Home/PgUp bank";
  core_actor_cpp_SomethingElseWithStrings2_FUN_0040d240();
  pcStack00000010 = "Use right mouse button to move to the mouse cursor.";
  pcStack0000000c = (char *)y_pos;
  *y_pos = *y_pos + 0xb;
  core_actor_cpp_SomethingElseWithStrings2_FUN_0040d240();
  pcStack00000014 = "Position to ground.";
  pcStack00000010 = "G";
  pcStack0000000c = (char *)y_pos;
  *y_pos = *y_pos + 0xb;
  core_actor_cpp_SomethingElseWithStrings1_FUN_0040d1e0();
  return;
}


// Assembly code:
// 0040d150: PUSH EBX
//   Label: core_actor.cpp_CDemonActor_showEditorHelp_FUN_0040d150
// 0040d151: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0040d155: PUSH 0x614340
//   XREF to: 00614340 (DATA)
// 0040d15a: PUSH EBX
// 0040d15b: CALL core_actor.cpp_SomethingElseWithStrings2_FUN_0040d240
//   XREF to: 0040d240 (UNCONDITIONAL_CALL)
// 0040d160: ADD ESP,0x8
// 0040d163: PUSH 0x614360
//   XREF to: 00614360 (DATA)
// 0040d168: PUSH EBX
// 0040d169: CALL core_actor.cpp_SomethingElseWithStrings2_FUN_0040d240
//   XREF to: 0040d240 (UNCONDITIONAL_CALL)
// 0040d16e: ADD ESP,0x8
// 0040d171: PUSH 0x614379
//   XREF to: 00614379 (DATA)
// 0040d176: PUSH EBX
// 0040d177: CALL core_actor.cpp_SomethingElseWithStrings2_FUN_0040d240
//   XREF to: 0040d240 (UNCONDITIONAL_CALL)
// 0040d17c: ADD ESP,0x8
// 0040d17f: PUSH 0x61438c
//   XREF to: 0061438c (DATA)
// 0040d184: PUSH EBX
// 0040d185: CALL core_actor.cpp_SomethingElseWithStrings2_FUN_0040d240
//   XREF to: 0040d240 (UNCONDITIONAL_CALL)
// 0040d18a: ADD ESP,0x8
// 0040d18d: PUSH 0x6143b3
//   XREF to: 006143b3 (DATA)
// 0040d192: PUSH EBX
// 0040d193: CALL core_actor.cpp_SomethingElseWithStrings2_FUN_0040d240
//   XREF to: 0040d240 (UNCONDITIONAL_CALL)
// 0040d198: ADD ESP,0x8
// 0040d19b: PUSH 0x6143c1
//   XREF to: 006143c1 (DATA)
// 0040d1a0: PUSH EBX
// 0040d1a1: CALL core_actor.cpp_SomethingElseWithStrings2_FUN_0040d240
//   XREF to: 0040d240 (UNCONDITIONAL_CALL)
// 0040d1a6: ADD ESP,0x8
// 0040d1a9: MOV EDX,dword ptr [EBX]
// 0040d1ab: PUSH 0x6143d2
//   XREF to: 006143d2 (DATA)
// 0040d1b0: ADD EDX,0xb
// 0040d1b3: PUSH EBX
// 0040d1b4: MOV dword ptr [EBX],EDX
// 0040d1b6: CALL core_actor.cpp_SomethingElseWithStrings2_FUN_0040d240
//   XREF to: 0040d240 (UNCONDITIONAL_CALL)
// 0040d1bb: ADD ESP,0x8
// 0040d1be: PUSH 0x614406
//   XREF to: 00614406 (DATA)
// 0040d1c3: MOV ECX,dword ptr [EBX]
// 0040d1c5: PUSH 0x61441a
//   XREF to: 0061441a (DATA)
// 0040d1ca: ADD ECX,0xb
// 0040d1cd: PUSH EBX
// 0040d1ce: MOV dword ptr [EBX],ECX
// 0040d1d0: CALL core_actor.cpp_SomethingElseWithStrings1_FUN_0040d1e0
//   XREF to: 0040d1e0 (UNCONDITIONAL_CALL)
// 0040d1d5: ADD ESP,0xc
// 0040d1d8: POP EBX
// 0040d1d9: RET
