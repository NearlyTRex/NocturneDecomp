// Name: core_game.cpp_CGame_slamDT_FUN_004e3080
// Address: 004e3080
// Address Range: [[004e3080, 004e30e5]]
// Convention: __cdecl
// Signature: void core_game.cpp_CGame_slamDT_FUN_004e3080(CGame * this_ptr, float delta_time)
// Cross-references:
//   core_fire.cpp_CSpark_process_FUN_004c0240 (004c0240) at 004c02aa [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_processFrame_FUN_004da100 (004da100) at 004da196 [UNCONDITIONAL_CALL]
//   core_netgame.cpp_CNetGame_applySimFrameHistory_FUN_00543800 (00543800) at 00543830 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005bb960 (005bb960) at 005bbac0 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_process_FUN_005bb830 (005bb830) at 005bb8ad [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_game_cpp_0062d3b7
//   TerminatedCString s_CGame_slamDT_invalid_dt_0062d3c8
//   float g_DeltaTimeScale = 65536
//   int g_GlobalDeltaTimeInt
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_math.c_round_FUN_005fe6b0

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_slamDT_FUN_004e3080(CGame *this_ptr,float delta_time)

{
  undefined4 in_EDX;
  undefined4 extraout_EDX;
  float10 fVar1;
  float in_stack_0000000c;
  
  if (delta_time < 0.0) {
    g_CurrentFilename = "..\\core\\game.cpp";
    g_CurrentLineNumber = 0x10ac;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CGame::slamDT - invalid dt!");
    in_EDX = extraout_EDX;
  }
  this_ptr->delta_time_float = in_stack_0000000c;
  fVar1 = (float10)this_ptr->delta_time_float * (float10)g_DeltaTimeScale;
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44(in_EDX,in_stack_0000000c));
  this_ptr->delta_time_int = (int)ROUND(fVar1);
  g_GlobalDeltaTimeInt = this_ptr->delta_time_int;
  return;
}


// Assembly code:
// 004e3080: PUSH EBX
//   Label: core_game.cpp_CGame_slamDT_FUN_004e3080
// 004e3081: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004e3085: FLD float ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 004e3089: FLDZ
// 004e308b: FCOMPP
// 004e308d: FNSTSW AX
// 004e308f: SAHF
// 004e3090: JA 0x004e30c1
//   XREF to: 004e30c1 (CONDITIONAL_JUMP)
// 004e3092: MOV EAX,dword ptr [ESP + 0xc]
//   Label: LAB_004e3092
//   XREF to: Stack[0x8] (READ)
// 004e3096: MOV dword ptr [EBX + 0x264],EAX
// 004e309c: FLD float ptr [EBX + 0x264]
// 004e30a2: FMUL float ptr [0x0062d3e5]
//   XREF to: 0062d3e5 (READ)
// 004e30a8: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004e30ad: FISTP dword ptr [EBX + 0x260]
// 004e30b3: MOV EBX,dword ptr [EBX + 0x260]
// 004e30b9: MOV dword ptr [0x02cf6a80],EBX
//   XREF to: 02cf6a80 (WRITE)
// 004e30bf: POP EBX
// 004e30c0: RET
// 004e30c1: MOV EDX,0x62d3b7
//   Label: LAB_004e30c1
//   XREF to: 0062d3b7 (PARAM)
// 004e30c6: MOV ECX,0x10ac
// 004e30cb: PUSH 0x62d3c8
//   XREF to: 0062d3c8 (DATA)
// 004e30d0: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 004e30d6: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 004e30dc: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004e30e1: ADD ESP,0x4
// 004e30e4: JMP 0x004e3092
//   XREF to: 004e3092 (UNCONDITIONAL_JUMP)
