// Name: core_game.cpp_CGame_process_FUN_004e3190
// Address: 004e3190
// Address Range: [[004e3190, 004e36eb]]
// Convention: __cdecl
// Signature: void core_game.cpp_CGame_process_FUN_004e3190(CGame * this_ptr)

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
               ((double)(iVar4 - g_ProfileStartTime) * 0.055555555555555601 * 1.52587890625e-05 *
               1000) / (double)g_CGamePtr->delta_time_float);
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
      core_sound_cpp_CSound_init_FUN_005b2dd0(this_ptr_00);
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
