// Name: core_game.cpp_CGame_process_FUN_004e3190
// Address: 004e3190
// Address Range: [[004e3190, 004e36eb]]
// Convention: __cdecl
// Signature: void core_game.cpp_CGame_process_FUN_004e3190(CGame * this_ptr)
// Cross-references:
//   core_game.cpp_CGame_processFrame_FUN_004da100 (004da100) at 004dab42 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_s_3_2f_ms_0062d3e9
//   TerminatedCString s_gFilterFX_process_0062d415
//   TerminatedCString s_gScript_process_0062d42a
//   TerminatedCString s_gSet_process_0062d43d
//   TerminatedCString s_gGore_process_0062d44d
//   TerminatedCString s_gFire_process_0062d45e
//   TerminatedCString s_gEventList_process_0062d46f
//   TerminatedCString s_gSit_process_0062d485
//   TerminatedCString s_simulate_3_2f_ms_0062d495
//   double DOUBLE_0062d4ad = 0.0555555555555556
//   double DOUBLE_0062d4b5 = 0.0000152587890625
//   double DOUBLE_0062d4bd = 1000
//   CConsole* g_CConsolePtr = 0083b1a4
//   CFilterFx* g_CFilterFXPtr = 020a570c
//   CEventList* g_CEventListPtr = 02d05310
//   CFireEffect* g_CFireEffectPtr = 02d12db0
//   CGame* g_CGamePtr = 02d81a9c
//   CGore* g_CGorePtr = 02d83364
//   CDemonMission* g_CDemonMissionPtr = 02f33740
//   CNetGame* g_CNetGameInstance = 02f7c740
//   CScript* g_CScriptPtr = 0310f858
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CSound* g_CSoundPtr = 03f6af64
//   CTerrain* g_CTerrainPtr = 03f8749c
//   CWater* g_CWaterPtr = 03f875e0
//   CWeather* g_CWeatherPtr = 03f95dc0
//   CConsole g_ConsolePtr
//   CFilterFx g_CFilterFXInstance
//   CEventList g_CEventListInstance
//   CFireEffect g_CFireEffectInstance
//   CGame g_CGameInstance
//   undefined4 DAT_02d81ca8
//   undefined4 g_CGameInstance.delta_time_float
//   int g_ProfileStartTime
//   CGore g_CGoreInstance
//   CDemonMission g_CDemonMissionInstance
//   undefined4 DAT_02f7c740
//   undefined4 DAT_02f7c8ac
//   CScript g_CScriptInstance
//   undefined4 DAT_0310f864
//   undefined4 DAT_0310f868
//   CDemonSet g_CDemonSetInstance
//   CSound g_CSoundInstance
//   CTerrain g_CTerrainInstance
//   CWater g_CWaterInstance
//   CWeather g_CWeatherInstance
// Function calls:
//   core_actor.cpp_setRandomSeed_FUN_0040cb90
//   core_dfilter.cpp_CFilterFX_process_FUN_004708e0
//   core_event.cpp_CEventList_process_FUN_004aaac0
//   core_fire.cpp_CFireEffect_process_FUN_004c6ec0
//   core_game.cpp_CGame_processCheatCodes_FUN_004ddaf0
//   core_game.cpp_CGame_saveClockTime_FUN_004d7d80
//   core_game.cpp_FUN_004e09c0
//   core_gore.cpp_CGore_process_FUN_004ed9e0
//   core_mission.cpp_CDemonMission_process_FUN_00524250
//   core_script.cpp_CScript_process_FUN_00559960
//   core_set.cpp_CDemonSet_FUN_0056b810
//   core_set.cpp_CDemonSet_process_FUN_0056f940
//   core_setdir.cpp_CDemonSet_evaluateVirtualDirector_FUN_005751d0
//   core_sound.cpp_CSound_initializeAudioFrame_FUN_005b2dd0
//   core_terrain.cpp_CTerrain_process_FUN_005e2050
//   core_water.cpp_CWater_process_FUN_005e9ed0
//   core_weather.cpp_CWeather_SomethingWithLightingThunder_FUN_005eeaf0
//   crt_stdlib.c_rand_FUN_005feb5c
//   engine_2d.c_clearInputAndWait_FUN_00403260
//   engine_console.cpp_CConsole_printf_FUN_00441890
//   wincore_winrun.cpp_getTime_FUN_005f2dc0

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_process_FUN_004e3190(CGame *this_ptr)

{
  CScript *pCVar1;
  CGame *pCVar2;
  CNetGame *pCVar3;
  CSound *this_ptr_00;
  uint seed_value;
  int iVar4;
  int unaff_ESI;
  CGame *in_stack_00000014;
  CWeather *pCStack00000044;
  int iStack00000070;
  
  if (this_ptr->profile_mode != 0) {
    unaff_ESI = wincore_winrun_cpp_getTime_FUN_005f2dc0();
  }
  pCVar3 = g_CNetGameInstance;
  this_ptr->is_processing = 1;
  if (pCVar3->connection_type == 0) {
    seed_value = crt_stdlib_c_rand_FUN_005feb5c();
  }
  else {
    seed_value = *(uint *)(pCVar3->field7_0x118 + 0x54);
  }
  core_actor_cpp_setRandomSeed_FUN_0040cb90(seed_value);
  core_game_cpp_FUN_004e09c0();
  if (g_CGamePtr->profile_mode == 1) {
    g_ProfileStartTime = wincore_winrun_cpp_getTime_FUN_005f2dc0();
  }
  core_dfilter_cpp_CFilterFX_process_FUN_004708e0(g_CFilterFXPtr);
  if (g_CGamePtr->profile_mode == 1) {
    iVar4 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
    engine_console_cpp_CConsole_printf_FUN_00441890
              (g_CConsolePtr,"%s : %3.2f ms\n","gFilterFX->process()",
               ((double)(iVar4 - g_ProfileStartTime) * DOUBLE_0062d4ad * DOUBLE_0062d4b5 *
               DOUBLE_0062d4bd) / (double)g_CGamePtr->delta_time_float);
  }
  if (g_CGamePtr->profile_mode == 1) {
    g_ProfileStartTime = wincore_winrun_cpp_getTime_FUN_005f2dc0();
  }
  core_script_cpp_CScript_process_FUN_00559960(g_CScriptPtr);
  if (g_CGamePtr->profile_mode == 1) {
    wincore_winrun_cpp_getTime_FUN_005f2dc0();
    engine_console_cpp_CConsole_printf_FUN_00441890
              (g_CConsolePtr,"%s : %3.2f ms\n","gScript->process()");
  }
  this_ptr_00 = g_CSoundPtr;
  if (this_ptr->cutscene_skippable != 0) {
    if (this_ptr->letterbox_mode == 0) {
      this_ptr->cutscene_skippable = 0;
      core_sound_cpp_CSound_initializeAudioFrame_FUN_005b2dd0(this_ptr_00);
      core_setdir_cpp_CDemonSet_evaluateVirtualDirector_FUN_005751d0
                (g_CDemonSetPtr,(CDemonActor *)g_CScriptPtr->focusActor,2);
      core_game_cpp_CGame_saveClockTime_FUN_004d7d80(this_ptr,in_stack_00000014);
      pCVar1 = g_CScriptPtr;
      pCVar1->padding_0x10[0] = '\0';
      pCVar1->padding_0x10[1] = '\0';
      pCVar1->padding_0x10[2] = '\0';
      pCVar1->padding_0x10[3] = '\0';
    }
    else {
      engine_2d_c_clearInputAndWait_FUN_00403260();
    }
  }
  if (g_CGamePtr->profile_mode == 1) {
    g_ProfileStartTime = wincore_winrun_cpp_getTime_FUN_005f2dc0();
  }
  core_set_cpp_CDemonSet_process_FUN_0056f940(g_CDemonSetPtr);
  if (g_CGamePtr->profile_mode == 1) {
    wincore_winrun_cpp_getTime_FUN_005f2dc0();
    engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"%s : %3.2f ms\n");
  }
  if (g_CGamePtr->profile_mode == 1) {
    g_ProfileStartTime = wincore_winrun_cpp_getTime_FUN_005f2dc0();
  }
  core_gore_cpp_CGore_process_FUN_004ed9e0();
  if (g_CGamePtr->profile_mode == 1) {
    wincore_winrun_cpp_getTime_FUN_005f2dc0();
    engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"%s : %3.2f ms\n");
  }
  core_water_cpp_CWater_process_FUN_005e9ed0();
  if (g_CGamePtr->profile_mode == 1) {
    g_ProfileStartTime = wincore_winrun_cpp_getTime_FUN_005f2dc0();
  }
  core_fire_cpp_CFireEffect_process_FUN_004c6ec0(g_CFireEffectPtr);
  if (g_CGamePtr->profile_mode == 1) {
    wincore_winrun_cpp_getTime_FUN_005f2dc0();
    engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"%s : %3.2f ms\n");
  }
  if (g_CGamePtr->profile_mode == 1) {
    g_ProfileStartTime = wincore_winrun_cpp_getTime_FUN_005f2dc0();
  }
  core_event_cpp_CEventList_process_FUN_004aaac0(g_CEventListPtr);
  if (g_CGamePtr->profile_mode == 1) {
    wincore_winrun_cpp_getTime_FUN_005f2dc0();
    engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"%s : %3.2f ms\n");
  }
  core_terrain_cpp_CTerrain_process_FUN_005e2050(g_CTerrainPtr);
  pCStack00000044 = g_CWeatherPtr;
  core_weather_cpp_CWeather_SomethingWithLightingThunder_FUN_005eeaf0();
  pCStack00000044 = (CWeather *)0x4e356c;
  core_game_cpp_CGame_processCheatCodes_FUN_004ddaf0(this_ptr);
  core_set_cpp_CDemonSet_FUN_0056b810(g_CDemonSetPtr);
  if (g_CGamePtr->profile_mode == 1) {
    g_ProfileStartTime = wincore_winrun_cpp_getTime_FUN_005f2dc0();
  }
  core_mission_cpp_CDemonMission_process_FUN_00524250(g_CDemonMissionPtr);
  if (g_CGamePtr->profile_mode == 1) {
    wincore_winrun_cpp_getTime_FUN_005f2dc0();
    engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"%s : %3.2f ms\n");
  }
  pCVar2 = g_CGamePtr;
  this_ptr->is_processing = 0;
  if (pCVar2->profile_mode != 0) {
    iStack00000070 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
    iStack00000070 = iStack00000070 - unaff_ESI;
    engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"simulate : %3.2f ms\n");
  }
  this_ptr->player_rotation = this_ptr->delta_time_float + this_ptr->player_rotation;
  return;
}


// Assembly code:
// 004e3190: PUSH EBX
//   Label: core_game.cpp_CGame_process_FUN_004e3190
// 004e3191: PUSH ESI
// 004e3192: PUSH EDI
// 004e3193: PUSH EBP
// 004e3194: SUB ESP,0xc
// 004e3197: MOV EBX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 004e319b: CMP dword ptr [EBX + 0x20c],0x0
// 004e31a2: JNZ 0x004e363d
//   XREF to: 004e363d (CONDITIONAL_JUMP)
// 004e31a8: MOV EAX,[0x00680a00]
//   Label: LAB_004e31a8
//   XREF to: 02f7c740 (PARAM)
//   XREF to: 00680a00 (READ)
// 004e31ad: MOV dword ptr [EBX + 0x23c],0x1
// 004e31b7: CMP dword ptr [EAX],0x0
//   XREF to: 02f7c740 (READ)
// 004e31ba: JNZ 0x004e3649
//   XREF to: 004e3649 (CONDITIONAL_JUMP)
// 004e31c0: CALL crt_stdlib.c_rand_FUN_005feb5c
//   XREF to: 005feb5c (UNCONDITIONAL_CALL)
// 004e31c5: PUSH EAX
// 004e31c6: CALL core_actor.cpp_setRandomSeed_FUN_0040cb90
//   Label: LAB_004e31c6
//   XREF to: 0040cb90 (UNCONDITIONAL_CALL)
// 004e31cb: ADD ESP,0x4
// 004e31ce: PUSH EBX
// 004e31cf: CALL core_game.cpp_FUN_004e09c0
//   XREF to: 004e09c0 (UNCONDITIONAL_CALL)
// 004e31d4: MOV EAX,[0x0067b654]
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 004e31d9: MOV EBP,dword ptr [EAX + 0x20c]
//   XREF to: 02d81ca8 (READ)
// 004e31df: ADD ESP,0x4
// 004e31e2: CMP EBP,0x1
// 004e31e5: JNZ 0x004e31f1
//   XREF to: 004e31f1 (CONDITIONAL_JUMP)
// 004e31e7: CALL wincore_winrun.cpp_getTime_FUN_005f2dc0
//   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)
// 004e31ec: MOV [0x02d831fc],EAX
//   XREF to: 02d831fc (WRITE)
// 004e31f1: MOV EAX,[0x0066efd0]
//   Label: LAB_004e31f1
//   XREF to: 020a570c (PARAM)
//   XREF to: 0066efd0 (READ)
// 004e31f6: PUSH EAX
//   XREF to: 020a570c (DATA)
// 004e31f7: CALL core_dfilter.cpp_CFilterFX_process_FUN_004708e0
//   XREF to: 004708e0 (UNCONDITIONAL_CALL)
// 004e31fc: MOV EAX,[0x0067b654]
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 004e3201: MOV EDX,dword ptr [EAX + 0x20c]
//   XREF to: 02d81ca8 (READ)
// 004e3207: ADD ESP,0x4
// 004e320a: CMP EDX,0x1
// 004e320d: JNZ 0x004e3264
//   XREF to: 004e3264 (CONDITIONAL_JUMP)
// 004e320f: CALL wincore_winrun.cpp_getTime_FUN_005f2dc0
//   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)
// 004e3214: MOV ECX,dword ptr [0x02d831fc]
//   XREF to: 02d831fc (READ)
// 004e321a: SUB EAX,ECX
// 004e321c: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004e3220: FILD dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x14] (READ)
// 004e3224: FMUL double ptr [0x0062d4ad]
//   XREF to: 0062d4ad (READ)
// 004e322a: MOV EAX,[0x0067b654]
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 004e322f: FMUL double ptr [0x0062d4b5]
//   XREF to: 0062d4b5 (READ)
// 004e3235: FLD float ptr [EAX + 0x264]
//   XREF to: 02d81d00 (READ)
// 004e323b: FXCH
// 004e323d: FMUL double ptr [0x0062d4bd]
//   XREF to: 0062d4bd (READ)
// 004e3243: FDIVRP
// 004e3245: SUB ESP,0x8
// 004e3248: FSTP double ptr [ESP]
//   XREF to: Stack[-0x24] (DATA)
// 004e324b: PUSH 0x62d415
//   XREF to: 0062d415 (DATA)
// 004e3250: PUSH 0x62d3e9
//   XREF to: 0062d3e9 (DATA)
// 004e3255: MOV EDI,dword ptr [0x0066e8e0]
//   XREF to: 0066e8e0 (READ)
// 004e325b: PUSH EDI
//   XREF to: 0083b1a4 (DATA)
// 004e325c: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 004e3261: ADD ESP,0x14
// 004e3264: MOV EAX,[0x0067b654]
//   Label: LAB_004e3264
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 004e3269: CMP dword ptr [EAX + 0x20c],0x1
//   XREF to: 02d81ca8 (READ)
// 004e3270: JNZ 0x004e327c
//   XREF to: 004e327c (CONDITIONAL_JUMP)
// 004e3272: CALL wincore_winrun.cpp_getTime_FUN_005f2dc0
//   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)
// 004e3277: MOV [0x02d831fc],EAX
//   XREF to: 02d831fc (WRITE)
// 004e327c: MOV EAX,[0x00680d50]
//   Label: LAB_004e327c
//   XREF to: 0310f858 (PARAM)
//   XREF to: 00680d50 (READ)
// 004e3281: PUSH EAX
//   XREF to: 0310f858 (DATA)
// 004e3282: CALL core_script.cpp_CScript_process_FUN_00559960
//   XREF to: 00559960 (UNCONDITIONAL_CALL)
// 004e3287: MOV EAX,[0x0067b654]
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 004e328c: MOV EDX,dword ptr [EAX + 0x20c]
//   XREF to: 02d81ca8 (READ)
// 004e3292: ADD ESP,0x4
// 004e3295: CMP EDX,0x1
// 004e3298: JNZ 0x004e32ef
//   XREF to: 004e32ef (CONDITIONAL_JUMP)
// 004e329a: CALL wincore_winrun.cpp_getTime_FUN_005f2dc0
//   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)
// 004e329f: MOV ECX,dword ptr [0x02d831fc]
//   XREF to: 02d831fc (READ)
// 004e32a5: SUB EAX,ECX
// 004e32a7: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004e32ab: FILD dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x14] (READ)
// 004e32af: FMUL double ptr [0x0062d4ad]
//   XREF to: 0062d4ad (READ)
// 004e32b5: MOV EAX,[0x0067b654]
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 004e32ba: FMUL double ptr [0x0062d4b5]
//   XREF to: 0062d4b5 (READ)
// 004e32c0: FLD float ptr [EAX + 0x264]
//   XREF to: 02d81d00 (READ)
// 004e32c6: FXCH
// 004e32c8: FMUL double ptr [0x0062d4bd]
//   XREF to: 0062d4bd (READ)
// 004e32ce: FDIVRP
// 004e32d0: SUB ESP,0x8
// 004e32d3: FSTP double ptr [ESP]
//   XREF to: Stack[-0x24] (DATA)
// 004e32d6: PUSH 0x62d42a
//   XREF to: 0062d42a (DATA)
// 004e32db: PUSH 0x62d3e9
//   XREF to: 0062d3e9 (DATA)
// 004e32e0: MOV EDI,dword ptr [0x0066e8e0]
//   XREF to: 0066e8e0 (READ)
// 004e32e6: PUSH EDI
//   XREF to: 0083b1a4 (DATA)
// 004e32e7: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 004e32ec: ADD ESP,0x14
// 004e32ef: CMP dword ptr [EBX + 0xcc],0x0
//   Label: LAB_004e32ef
// 004e32f6: JZ 0x004e330b
//   XREF to: 004e330b (CONDITIONAL_JUMP)
// 004e32f8: MOV EAX,dword ptr [EBX + 0x228]
// 004e32fe: TEST EAX,EAX
// 004e3300: JZ 0x004e3655
//   XREF to: 004e3655 (CONDITIONAL_JUMP)
// 004e3306: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 004e330b: MOV EAX,[0x0067b654]
//   Label: LAB_004e330b
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 004e3310: CMP dword ptr [EAX + 0x20c],0x1
//   XREF to: 02d81ca8 (READ)
// 004e3317: JNZ 0x004e3323
//   XREF to: 004e3323 (CONDITIONAL_JUMP)
// 004e3319: CALL wincore_winrun.cpp_getTime_FUN_005f2dc0
//   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)
// 004e331e: MOV [0x02d831fc],EAX
//   XREF to: 02d831fc (WRITE)
// 004e3323: MOV EAX,[0x006810c8]
//   Label: LAB_004e3323
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 004e3328: PUSH EAX
//   XREF to: 03114278 (DATA)
// 004e3329: CALL core_set.cpp_CDemonSet_process_FUN_0056f940
//   XREF to: 0056f940 (UNCONDITIONAL_CALL)
// 004e332e: MOV EAX,[0x0067b654]
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 004e3333: MOV EDX,dword ptr [EAX + 0x20c]
//   XREF to: 02d81ca8 (READ)
// 004e3339: ADD ESP,0x4
// 004e333c: CMP EDX,0x1
// 004e333f: JNZ 0x004e3396
//   XREF to: 004e3396 (CONDITIONAL_JUMP)
// 004e3341: CALL wincore_winrun.cpp_getTime_FUN_005f2dc0
//   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)
// 004e3346: MOV ECX,dword ptr [0x02d831fc]
//   XREF to: 02d831fc (READ)
// 004e334c: SUB EAX,ECX
// 004e334e: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004e3352: FILD dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x14] (READ)
// 004e3356: FMUL double ptr [0x0062d4ad]
//   XREF to: 0062d4ad (READ)
// 004e335c: MOV EAX,[0x0067b654]
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 004e3361: FMUL double ptr [0x0062d4b5]
//   XREF to: 0062d4b5 (READ)
// 004e3367: FLD float ptr [EAX + 0x264]
//   XREF to: 02d81d00 (READ)
// 004e336d: FXCH
// 004e336f: FMUL double ptr [0x0062d4bd]
//   XREF to: 0062d4bd (READ)
// 004e3375: FDIVRP
// 004e3377: SUB ESP,0x8
// 004e337a: FSTP double ptr [ESP]
//   XREF to: Stack[-0x24] (DATA)
// 004e337d: PUSH 0x62d43d
//   XREF to: 0062d43d (DATA)
// 004e3382: PUSH 0x62d3e9
//   XREF to: 0062d3e9 (DATA)
// 004e3387: MOV EDI,dword ptr [0x0066e8e0]
//   XREF to: 0066e8e0 (READ)
// 004e338d: PUSH EDI
//   XREF to: 0083b1a4 (DATA)
// 004e338e: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 004e3393: ADD ESP,0x14
// 004e3396: MOV EAX,[0x0067b654]
//   Label: LAB_004e3396
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 004e339b: CMP dword ptr [EAX + 0x20c],0x1
//   XREF to: 02d81ca8 (READ)
// 004e33a2: JNZ 0x004e33ae
//   XREF to: 004e33ae (CONDITIONAL_JUMP)
// 004e33a4: CALL wincore_winrun.cpp_getTime_FUN_005f2dc0
//   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)
// 004e33a9: MOV [0x02d831fc],EAX
//   XREF to: 02d831fc (WRITE)
// 004e33ae: MOV EAX,[0x0067b9a0]
//   Label: LAB_004e33ae
//   XREF to: 02d83364 (PARAM)
//   XREF to: 0067b9a0 (READ)
// 004e33b3: PUSH EAX
//   XREF to: 02d83364 (DATA)
// 004e33b4: CALL core_gore.cpp_CGore_process_FUN_004ed9e0
//   XREF to: 004ed9e0 (UNCONDITIONAL_CALL)
// 004e33b9: MOV EAX,[0x0067b654]
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 004e33be: MOV EDX,dword ptr [EAX + 0x20c]
//   XREF to: 02d81ca8 (READ)
// 004e33c4: ADD ESP,0x4
// 004e33c7: CMP EDX,0x1
// 004e33ca: JNZ 0x004e3421
//   XREF to: 004e3421 (CONDITIONAL_JUMP)
// 004e33cc: CALL wincore_winrun.cpp_getTime_FUN_005f2dc0
//   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)
// 004e33d1: MOV ECX,dword ptr [0x02d831fc]
//   XREF to: 02d831fc (READ)
// 004e33d7: SUB EAX,ECX
// 004e33d9: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004e33dd: FILD dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x14] (READ)
// 004e33e1: FMUL double ptr [0x0062d4ad]
//   XREF to: 0062d4ad (READ)
// 004e33e7: MOV EAX,[0x0067b654]
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 004e33ec: FMUL double ptr [0x0062d4b5]
//   XREF to: 0062d4b5 (READ)
// 004e33f2: FLD float ptr [EAX + 0x264]
//   XREF to: 02d81d00 (READ)
// 004e33f8: FXCH
// 004e33fa: FMUL double ptr [0x0062d4bd]
//   XREF to: 0062d4bd (READ)
// 004e3400: FDIVRP
// 004e3402: SUB ESP,0x8
// 004e3405: FSTP double ptr [ESP]
//   XREF to: Stack[-0x24] (DATA)
// 004e3408: PUSH 0x62d44d
//   XREF to: 0062d44d (DATA)
// 004e340d: PUSH 0x62d3e9
//   XREF to: 0062d3e9 (DATA)
// 004e3412: MOV EDI,dword ptr [0x0066e8e0]
//   XREF to: 0066e8e0 (READ)
// 004e3418: PUSH EDI
//   XREF to: 0083b1a4 (DATA)
// 004e3419: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 004e341e: ADD ESP,0x14
// 004e3421: MOV EBP,dword ptr [0x006844f0]
//   Label: LAB_004e3421
//   XREF to: 006844f0 (READ)
// 004e3427: PUSH EBP
//   XREF to: 03f875e0 (DATA)
// 004e3428: CALL core_water.cpp_CWater_process_FUN_005e9ed0
//   XREF to: 005e9ed0 (UNCONDITIONAL_CALL)
// 004e342d: MOV EAX,[0x0067b654]
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 004e3432: MOV EDX,dword ptr [EAX + 0x20c]
//   XREF to: 02d81ca8 (READ)
// 004e3438: ADD ESP,0x4
// 004e343b: CMP EDX,0x1
// 004e343e: JNZ 0x004e344a
//   XREF to: 004e344a (CONDITIONAL_JUMP)
// 004e3440: CALL wincore_winrun.cpp_getTime_FUN_005f2dc0
//   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)
// 004e3445: MOV [0x02d831fc],EAX
//   XREF to: 02d831fc (WRITE)
// 004e344a: MOV ECX,dword ptr [0x0067a3d0]
//   Label: LAB_004e344a
//   XREF to: 02d12db0 (PARAM)
//   XREF to: 0067a3d0 (READ)
// 004e3450: PUSH ECX
//   XREF to: 02d12db0 (DATA)
// 004e3451: CALL core_fire.cpp_CFireEffect_process_FUN_004c6ec0
//   XREF to: 004c6ec0 (UNCONDITIONAL_CALL)
// 004e3456: MOV EAX,[0x0067b654]
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 004e345b: MOV EDI,dword ptr [EAX + 0x20c]
//   XREF to: 02d81ca8 (READ)
// 004e3461: ADD ESP,0x4
// 004e3464: CMP EDI,0x1
// 004e3467: JNZ 0x004e34bd
//   XREF to: 004e34bd (CONDITIONAL_JUMP)
// 004e3469: CALL wincore_winrun.cpp_getTime_FUN_005f2dc0
//   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)
// 004e346e: MOV EBP,dword ptr [0x02d831fc]
//   XREF to: 02d831fc (READ)
// 004e3474: SUB EAX,EBP
// 004e3476: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004e347a: FILD dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x14] (READ)
// 004e347e: FMUL double ptr [0x0062d4ad]
//   XREF to: 0062d4ad (READ)
// 004e3484: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004e3489: FMUL double ptr [0x0062d4b5]
//   XREF to: 0062d4b5 (READ)
// 004e348f: FLD float ptr [EAX + 0x264]
//   XREF to: 02d81d00 (READ)
// 004e3495: FXCH
// 004e3497: FMUL double ptr [0x0062d4bd]
//   XREF to: 0062d4bd (READ)
// 004e349d: FDIVRP
// 004e349f: SUB ESP,0x8
// 004e34a2: FSTP double ptr [ESP]
//   XREF to: Stack[-0x24] (DATA)
// 004e34a5: PUSH 0x62d45e
//   XREF to: 0062d45e (DATA)
// 004e34aa: PUSH 0x62d3e9
//   XREF to: 0062d3e9 (DATA)
// 004e34af: MOV EAX,[0x0066e8e0]
//   XREF to: 0083b1a4 (PARAM)
//   XREF to: 0066e8e0 (READ)
// 004e34b4: PUSH EAX
//   XREF to: 0083b1a4 (DATA)
// 004e34b5: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 004e34ba: ADD ESP,0x14
// 004e34bd: MOV EAX,[0x0067b654]
//   Label: LAB_004e34bd
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 004e34c2: CMP dword ptr [EAX + 0x20c],0x1
//   XREF to: 02d81ca8 (READ)
// 004e34c9: JNZ 0x004e34d5
//   XREF to: 004e34d5 (CONDITIONAL_JUMP)
// 004e34cb: CALL wincore_winrun.cpp_getTime_FUN_005f2dc0
//   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)
// 004e34d0: MOV [0x02d831fc],EAX
//   XREF to: 02d831fc (WRITE)
// 004e34d5: MOV ECX,dword ptr [0x006793d0]
//   Label: LAB_004e34d5
//   XREF to: 02d05310 (PARAM)
//   XREF to: 006793d0 (READ)
// 004e34db: PUSH ECX
//   XREF to: 02d05310 (DATA)
// 004e34dc: CALL core_event.cpp_CEventList_process_FUN_004aaac0
//   XREF to: 004aaac0 (UNCONDITIONAL_CALL)
// 004e34e1: MOV EAX,[0x0067b654]
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 004e34e6: MOV EDI,dword ptr [EAX + 0x20c]
//   XREF to: 02d81ca8 (READ)
// 004e34ec: ADD ESP,0x4
// 004e34ef: CMP EDI,0x1
// 004e34f2: JNZ 0x004e3548
//   XREF to: 004e3548 (CONDITIONAL_JUMP)
// 004e34f4: CALL wincore_winrun.cpp_getTime_FUN_005f2dc0
//   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)
// 004e34f9: MOV EBP,dword ptr [0x02d831fc]
//   XREF to: 02d831fc (READ)
// 004e34ff: SUB EAX,EBP
// 004e3501: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004e3505: FILD dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x14] (READ)
// 004e3509: FMUL double ptr [0x0062d4ad]
//   XREF to: 0062d4ad (READ)
// 004e350f: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004e3514: FMUL double ptr [0x0062d4b5]
//   XREF to: 0062d4b5 (READ)
// 004e351a: FLD float ptr [EAX + 0x264]
//   XREF to: 02d81d00 (READ)
// 004e3520: FXCH
// 004e3522: FMUL double ptr [0x0062d4bd]
//   XREF to: 0062d4bd (READ)
// 004e3528: FDIVRP
// 004e352a: SUB ESP,0x8
// 004e352d: FSTP double ptr [ESP]
//   XREF to: Stack[-0x24] (DATA)
// 004e3530: PUSH 0x62d46f
//   XREF to: 0062d46f (DATA)
// 004e3535: PUSH 0x62d3e9
//   XREF to: 0062d3e9 (DATA)
// 004e353a: MOV EAX,[0x0066e8e0]
//   XREF to: 0083b1a4 (PARAM)
//   XREF to: 0066e8e0 (READ)
// 004e353f: PUSH EAX
//   XREF to: 0083b1a4 (DATA)
// 004e3540: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 004e3545: ADD ESP,0x14
// 004e3548: MOV EDX,dword ptr [0x006843f8]
//   Label: LAB_004e3548
//   XREF to: 03f8749c (PARAM)
//   XREF to: 006843f8 (READ)
// 004e354e: PUSH EDX
//   XREF to: 03f8749c (DATA)
// 004e354f: CALL core_terrain.cpp_CTerrain_process_FUN_005e2050
//   XREF to: 005e2050 (UNCONDITIONAL_CALL)
// 004e3554: ADD ESP,0x4
// 004e3557: MOV ECX,dword ptr [0x006848fc]
//   XREF to: 03f95dc0 (PARAM)
//   XREF to: 006848fc (READ)
// 004e355d: PUSH ECX
//   XREF to: 03f95dc0 (DATA)
// 004e355e: CALL core_weather.cpp_CWeather_SomethingWithLightingThunder_FUN_005eeaf0
//   XREF to: 005eeaf0 (UNCONDITIONAL_CALL)
// 004e3563: ADD ESP,0x4
// 004e3566: PUSH EBX
// 004e3567: CALL core_game.cpp_CGame_processCheatCodes_FUN_004ddaf0
//   XREF to: 004ddaf0 (UNCONDITIONAL_CALL)
// 004e356c: ADD ESP,0x4
// 004e356f: MOV EDI,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
// 004e3575: PUSH EDI
//   XREF to: 03114278 (DATA)
// 004e3576: CALL core_set.cpp_CDemonSet_FUN_0056b810
//   XREF to: 0056b810 (UNCONDITIONAL_CALL)
// 004e357b: MOV EAX,[0x0067b654]
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 004e3580: MOV EBP,dword ptr [EAX + 0x20c]
//   XREF to: 02d81ca8 (READ)
// 004e3586: ADD ESP,0x4
// 004e3589: CMP EBP,0x1
// 004e358c: JNZ 0x004e3598
//   XREF to: 004e3598 (CONDITIONAL_JUMP)
// 004e358e: CALL wincore_winrun.cpp_getTime_FUN_005f2dc0
//   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)
// 004e3593: MOV [0x02d831fc],EAX
//   XREF to: 02d831fc (WRITE)
// 004e3598: MOV EAX,[0x0067d550]
//   Label: LAB_004e3598
//   XREF to: 02f33740 (PARAM)
//   XREF to: 0067d550 (READ)
// 004e359d: PUSH EAX
//   XREF to: 02f33740 (DATA)
// 004e359e: CALL core_mission.cpp_CDemonMission_process_FUN_00524250
//   XREF to: 00524250 (UNCONDITIONAL_CALL)
// 004e35a3: MOV EAX,[0x0067b654]
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 004e35a8: MOV EDX,dword ptr [EAX + 0x20c]
//   XREF to: 02d81ca8 (READ)
// 004e35ae: ADD ESP,0x4
// 004e35b1: CMP EDX,0x1
// 004e35b4: JNZ 0x004e360b
//   XREF to: 004e360b (CONDITIONAL_JUMP)
// 004e35b6: CALL wincore_winrun.cpp_getTime_FUN_005f2dc0
//   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)
// 004e35bb: MOV ECX,dword ptr [0x02d831fc]
//   XREF to: 02d831fc (READ)
// 004e35c1: SUB EAX,ECX
// 004e35c3: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004e35c7: FILD dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x14] (READ)
// 004e35cb: FMUL double ptr [0x0062d4ad]
//   XREF to: 0062d4ad (READ)
// 004e35d1: MOV EAX,[0x0067b654]
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 004e35d6: FMUL double ptr [0x0062d4b5]
//   XREF to: 0062d4b5 (READ)
// 004e35dc: FLD float ptr [EAX + 0x264]
//   XREF to: 02d81d00 (READ)
// 004e35e2: FXCH
// 004e35e4: FMUL double ptr [0x0062d4bd]
//   XREF to: 0062d4bd (READ)
// 004e35ea: FDIVRP
// 004e35ec: SUB ESP,0x8
// 004e35ef: FSTP double ptr [ESP]
//   XREF to: Stack[-0x24] (DATA)
// 004e35f2: PUSH 0x62d485
//   XREF to: 0062d485 (DATA)
// 004e35f7: PUSH 0x62d3e9
//   XREF to: 0062d3e9 (DATA)
// 004e35fc: MOV EDI,dword ptr [0x0066e8e0]
//   XREF to: 0066e8e0 (READ)
// 004e3602: PUSH EDI
//   XREF to: 0083b1a4 (DATA)
// 004e3603: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 004e3608: ADD ESP,0x14
// 004e360b: MOV EAX,[0x0067b654]
//   Label: LAB_004e360b
//   XREF to: 02d81a9c (DATA)
//   XREF to: 0067b654 (READ)
// 004e3610: MOV dword ptr [EBX + 0x23c],0x0
// 004e361a: CMP dword ptr [EAX + 0x20c],0x0
//   XREF to: 02d81ca8 (READ)
// 004e3621: JNZ 0x004e369e
//   XREF to: 004e369e (CONDITIONAL_JUMP)
// 004e3623: FLD float ptr [EBX + 0x264]
//   Label: LAB_004e3623
// 004e3629: FADD float ptr [EBX + 0x250]
// 004e362f: FSTP float ptr [EBX + 0x250]
// 004e3635: ADD ESP,0xc
// 004e3638: POP EBP
// 004e3639: POP EDI
// 004e363a: POP ESI
// 004e363b: POP EBX
// 004e363c: RET
// 004e363d: CALL wincore_winrun.cpp_getTime_FUN_005f2dc0
//   Label: LAB_004e363d
//   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)
// 004e3642: MOV ESI,EAX
// 004e3644: JMP 0x004e31a8
//   XREF to: 004e31a8 (UNCONDITIONAL_JUMP)
// 004e3649: MOV EDI,dword ptr [EAX + 0x16c]
//   Label: LAB_004e3649
//   XREF to: 02f7c8ac (READ)
// 004e364f: PUSH EDI
// 004e3650: JMP 0x004e31c6
//   XREF to: 004e31c6 (UNCONDITIONAL_JUMP)
// 004e3655: MOV EDX,dword ptr [0x00681ef8]
//   Label: LAB_004e3655
//   XREF to: 03f6af64 (PARAM)
//   XREF to: 00681ef8 (READ)
// 004e365b: PUSH EDX
//   XREF to: 03f6af64 (DATA)
// 004e365c: MOV dword ptr [EBX + 0xcc],EAX
// 004e3662: CALL core_sound.cpp_CSound_initializeAudioFrame_FUN_005b2dd0
//   XREF to: 005b2dd0 (UNCONDITIONAL_CALL)
// 004e3667: ADD ESP,0x4
// 004e366a: MOV EAX,[0x00680d50]
//   XREF to: 0310f858 (PARAM)
//   XREF to: 00680d50 (READ)
// 004e366f: PUSH 0x2
// 004e3671: MOV ECX,dword ptr [EAX + 0xc]
//   XREF to: 0310f864 (READ)
// 004e3674: PUSH ECX
// 004e3675: MOV EDI,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
// 004e367b: PUSH EDI
//   XREF to: 03114278 (DATA)
// 004e367c: CALL core_setdir.cpp_CDemonSet_evaluateVirtualDirector_FUN_005751d0
//   XREF to: 005751d0 (UNCONDITIONAL_CALL)
// 004e3681: ADD ESP,0xc
// 004e3684: PUSH EBX
// 004e3685: CALL core_game.cpp_CGame_saveClockTime_FUN_004d7d80
//   XREF to: 004d7d80 (UNCONDITIONAL_CALL)
// 004e368a: MOV EAX,[0x00680d50]
//   XREF to: 00680d50 (READ)
// 004e368f: ADD ESP,0x4
// 004e3692: MOV dword ptr [EAX + 0x10],0x0
//   XREF to: 0310f868 (WRITE)
// 004e3699: JMP 0x004e330b
//   XREF to: 004e330b (UNCONDITIONAL_JUMP)
// 004e369e: CALL wincore_winrun.cpp_getTime_FUN_005f2dc0
//   Label: LAB_004e369e
//   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)
// 004e36a3: SUB EAX,ESI
// 004e36a5: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004e36a9: FILD dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x14] (READ)
// 004e36ad: FMUL double ptr [0x0062d4ad]
//   XREF to: 0062d4ad (READ)
// 004e36b3: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004e36b8: FMUL double ptr [0x0062d4b5]
//   XREF to: 0062d4b5 (READ)
// 004e36be: FLD float ptr [EAX + 0x264]
//   XREF to: 02d81d00 (READ)
// 004e36c4: FXCH
// 004e36c6: FMUL double ptr [0x0062d4bd]
//   XREF to: 0062d4bd (READ)
// 004e36cc: FDIVRP
// 004e36ce: SUB ESP,0x8
// 004e36d1: FSTP double ptr [ESP]
//   XREF to: Stack[-0x24] (DATA)
// 004e36d4: PUSH 0x62d495
//   XREF to: 0062d495 (DATA)
// 004e36d9: MOV EAX,[0x0066e8e0]
//   XREF to: 0083b1a4 (PARAM)
//   XREF to: 0066e8e0 (READ)
// 004e36de: PUSH EAX
//   XREF to: 0083b1a4 (DATA)
// 004e36df: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 004e36e4: ADD ESP,0x10
// 004e36e7: JMP 0x004e3623
//   XREF to: 004e3623 (UNCONDITIONAL_JUMP)
