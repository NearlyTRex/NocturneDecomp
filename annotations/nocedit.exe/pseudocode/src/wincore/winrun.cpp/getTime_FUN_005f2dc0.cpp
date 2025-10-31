// Name: wincore_winrun.cpp_getTime_FUN_005f2dc0
// Address: 005f2dc0
// Address Range: [[005f2dc0, 005f2e6f]]
// Convention: __cdecl
// Signature: int wincore_winrun.cpp_getTime_FUN_005f2dc0(void)
// Cross-references:
//   core_game.cpp_CGame_processCheatCodes_FUN_004ddaf0 (004ddaf0) at 004ddd40 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_processFrame_FUN_004da100 (004da100) at 004da3ce [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_process_FUN_004e3190 (004e3190) at 004e3440 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_saveClockTime_FUN_004d7d80 (004d7d80) at 004d7d80 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_updateDeltaTime_FUN_004d7d90 (004d7d90) at 004d7d97 [UNCONDITIONAL_CALL]
//   core_game.cpp_FUN_004e30f0 (004e30f0) at 004e30ff [UNCONDITIONAL_CALL]
//   core_game.cpp_FUN_004e3110 (004e3110) at 004e3127 [UNCONDITIONAL_CALL]
//   core_main.c_finalizeGameSystems_FUN_00508570 (00508570) at 005085c0 [UNCONDITIONAL_CALL]
//   core_main.c_showPromoScreen_FUN_00508340 (00508340) at 0050835f [UNCONDITIONAL_CALL]
//   core_main.c_waitWithSkip_FUN_005082a0 (005082a0) at 005082a8 [UNCONDITIONAL_CALL]
//   core_netgame.cpp_CNetGame_FUN_0053f780 (0053f780) at 0053f79a [UNCONDITIONAL_CALL]
//   core_netgame.cpp_CNetGame_FUN_0053fd00 (0053fd00) at 0053ffa8 [UNCONDITIONAL_CALL]
//   core_netgame.cpp_CNetGame_gameSettingsChanged_FUN_00542cf0 (00542cf0) at 00542d1a [UNCONDITIONAL_CALL]
//   core_netgame.cpp_CNetGame_processChatOut_FUN_00541e40 (00541e40) at 00541e83 [UNCONDITIONAL_CALL]
//   core_netgame.cpp_CNetGame_processServerFrame_FUN_00543150 (00543150) at 00543161 [UNCONDITIONAL_CALL]
//   core_netgame.cpp_CNetGame_receivePackets_FUN_005405b0 (005405b0) at 005405b9 [UNCONDITIONAL_CALL]
//   core_netgame.cpp_CNetGame_removeChatOut_FUN_00541ff0 (00541ff0) at 00541fff [UNCONDITIONAL_CALL]
//   core_netgame.cpp_CNetGame_sendGameSetting_FUN_00542dd0 (00542dd0) at 00542f7b [UNCONDITIONAL_CALL]
//   core_netgame.cpp_CNetGame_sendMyStateChanged_FUN_00542ff0 (00542ff0) at 00543029 [UNCONDITIONAL_CALL]
//   core_netgame.cpp_CNetGame_syncPlayers_FUN_005401e0 (005401e0) at 00540211 [UNCONDITIONAL_CALL]
//   core_netgame.cpp_CNetGame_updatePing_FUN_00541c80 (00541c80) at 00541cbe [UNCONDITIONAL_CALL]
//   core_netgame.cpp_FUN_0053f360 (0053f360) at 0053f36a [UNCONDITIONAL_CALL]
//   core_netgame.cpp_FUN_0053f390 (0053f390) at 0053f390 [UNCONDITIONAL_CALL]
//   core_netgame.cpp_FUN_00541390 (00541390) at 00541bc5 [UNCONDITIONAL_CALL]
//   core_netgame.cpp_initializeNetwork_FUN_0053fbc0 (0053fbc0) at 0053fc62 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_FUN_0056b810 (0056b810) at 0056bde0 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_FUN_0056be80 (0056be80) at 0056bf63 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_FUN_0056c1a0 (0056c1a0) at 0056c705 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_FUN_0056fbd0 (0056fbd0) at 0056ff85 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_00589b10 (00589b10) at 00589b5b [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058c190 (0058c190) at 0058d22b [UNCONDITIONAL_CALL]
//   engine_2d.c_clearInputAndWait_FUN_00403260 (00403260) at 00403287 [UNCONDITIONAL_CALL]
//   shape_cramtex.cpp_generateTextureAtlasLayout_FUN_00444d90 (00444d90) at 00444de7 [UNCONDITIONAL_CALL]
//   shape_cramtex.cpp_runInteractiveAtlasGeneration_FUN_00446160 (00446160) at 004473fd [UNCONDITIONAL_CALL]
//   shape_design.c_cramTextureList_FUN_0046bb80 (0046bb80) at 0046c6b2 [UNCONDITIONAL_CALL]
//   shape_design.c_showFacetPartEditor_FUN_0045f1d0 (0045f1d0) at 0045f318 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEdScrollBar_handleInput_FUN_004a5fc0 (004a5fc0) at 004a62f5 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330 (004a1330) at 004a1330 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430 (004a0430) at 004a04bc [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530 (004a0530) at 004a059e [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CInputString_draw_FUN_0049d9b0 (0049d9b0) at 0049da6d [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CPickList_handleDialogInput_FUN_004a4340 (004a4340) at 004a44cc [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_FUN_00516ba0 (00516ba0) at 00516bb8 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_FUN_005aaef0 (005aaef0) at 005ab0e6 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_SfxSlot_kill_FUN_005acdb0 (005acdb0) at 005acdd1 [UNCONDITIONAL_CALL]
//   wincore_winrun.cpp_calibrateCPUSpeed_FUN_005f2b80 (005f2b80) at 005f2bd6 [UNCONDITIONAL_CALL]
// Globals:
//   timeGetTime* timeGetTime = 00211884
//   double g_HighPartMultiplier = 4294967296
//   double g_TimeScaleFactor1 = 65536
//   double g_TimeScaleFactor2 = 18
//   DWORD g_PreviousCounterLow
//   DWORD g_PreviousCounterHigh
//   LARGE_INTEGER g_PerformanceCounter
//   undefined4 g_PerformanceCounter+4
//   double g_TimerCalibration
//   int g_AccumulatedGameTime
//   BOOL g_UseMultimediaTimer
// Function calls:
//   crt_math.c_round_FUN_005fe6b0
//   QueryPerformanceCounter
//   timeGetTime

#include "nocturne.h"

int __cdecl wincore_winrun_cpp_getTime_FUN_005f2dc0(void)

{
  int iVar1;
  DWORD DVar2;
  undefined4 extraout_EDX;
  float10 fVar3;
  
  if (g_UseMultimediaTimer != 0) {
    DVar2 = (*timeGetTime)();
    return DVar2 * 0x49c;
  }
  g_PreviousCounterLow = g_PerformanceCounter.s.LowPart;
  g_PreviousCounterHigh = g_PerformanceCounter.s.HighPart;
  (*QueryPerformanceCounter)(&g_PerformanceCounter);
  iVar1 = g_AccumulatedGameTime;
  fVar3 = ((((float10)g_PerformanceCounter._0_4_ +
            (float10)g_PerformanceCounter.s.HighPart * (float10)g_HighPartMultiplier) -
           ((float10)g_PreviousCounterLow +
           (float10)(int)g_PreviousCounterHigh * (float10)g_HighPartMultiplier)) /
          (float10)g_TimerCalibration) * (float10)g_TimeScaleFactor1 * (float10)g_TimeScaleFactor2;
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX,g_PerformanceCounter.s.LowPart));
  g_AccumulatedGameTime = iVar1 + (int)ROUND(fVar3);
  return iVar1 + (int)ROUND(fVar3);
}


// Assembly code:
// 005f2dc0: SUB ESP,0x24
//   Label: wincore_winrun.cpp_getTime_FUN_005f2dc0
// 005f2dc3: CMP dword ptr [0x03f96bc4],0x0
//   XREF to: 03f96bc4 (READ)
// 005f2dca: JZ 0x005f2ddd
//   XREF to: 005f2ddd (CONDITIONAL_JUMP)
// 005f2dcc: CALL dword ptr CS:[0x61141c]
//   XREF to: EXTERNAL:00000015 (COMPUTED_CALL)
//   XREF to: 0061141c (READ)
// 005f2dd3: IMUL EAX,EAX,0x49c
// 005f2dd9: ADD ESP,0x24
// 005f2ddc: RET
// 005f2ddd: PUSH EDI
//   Label: LAB_005f2ddd
// 005f2dde: PUSH ESI
// 005f2ddf: MOV EDI,0x3f96ba0
//   XREF to: 03f96ba0 (DATA)
// 005f2de4: MOV ESI,0x3f96ba8
//   XREF to: 03f96ba8 (DATA)
// 005f2de9: PUSH 0x3f96ba8
//   XREF to: 03f96ba8 (DATA)
// 005f2dee: MOVSD ES:EDI,ESI
//   XREF to: 03f96ba0 (WRITE)
//   XREF to: 03f96ba8 (READ)
// 005f2def: MOVSD ES:EDI,ESI
//   XREF to: 03f96ba4 (WRITE)
//   XREF to: 03f96bac (READ)
// 005f2df0: CALL dword ptr CS:[0x6115f8]
//   XREF to: EXTERNAL:00000089 (COMPUTED_CALL)
//   XREF to: 006115f8 (READ)
// 005f2df7: FLD double ptr [0x00657f34]
//   XREF to: 00657f34 (READ)
// 005f2dfd: FILD dword ptr [0x03f96ba4]
//   XREF to: 03f96ba4 (READ)
// 005f2e03: FMUL ST1
// 005f2e05: FILD dword ptr [0x03f96bac]
//   XREF to: 03f96bac (READ)
// 005f2e0b: FMULP ST2
// 005f2e0d: XOR ECX,ECX
// 005f2e0f: MOV EAX,[0x03f96ba0]
//   XREF to: 03f96ba0 (READ)
// 005f2e14: MOV dword ptr [ESP + 0x1c],ECX
// 005f2e18: MOV dword ptr [ESP + 0x18],EAX
// 005f2e1c: MOV EAX,[0x03f96ba8]
//   XREF to: 03f96ba8 (READ)
// 005f2e21: MOV dword ptr [ESP + 0x24],ECX
// 005f2e25: MOV dword ptr [ESP + 0x20],EAX
// 005f2e29: FILD qword ptr [ESP + 0x18]
// 005f2e2d: FILD qword ptr [ESP + 0x20]
// 005f2e31: FADDP ST3,ST0
// 005f2e33: FADDP
// 005f2e35: FSUBP
// 005f2e37: FLD ST0
// 005f2e39: FDIV double ptr [0x03f96bb8]
//   XREF to: 03f96bb8 (READ)
// 005f2e3f: FMUL double ptr [0x00657f3c]
//   XREF to: 00657f3c (READ)
// 005f2e45: FMUL double ptr [0x00657f44]
//   XREF to: 00657f44 (READ)
// 005f2e4b: MOV ESI,dword ptr [0x03f96bc0]
//   XREF to: 03f96bc0 (READ)
// 005f2e51: FSTP ST1
// 005f2e53: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 005f2e58: FISTP dword ptr [ESP + 0x28]
// 005f2e5c: MOV EAX,dword ptr [ESP + 0x28]
// 005f2e60: ADD ESI,EAX
// 005f2e62: MOV dword ptr [0x03f96bc0],ESI
//   XREF to: 03f96bc0 (WRITE)
// 005f2e68: MOV EAX,ESI
// 005f2e6a: POP ESI
// 005f2e6b: POP EDI
// 005f2e6c: ADD ESP,0x24
// 005f2e6f: RET
