// Name: core_game.cpp_CGame_process_FUN_004d8060
// Address: 004d8060
// Address Range: [[004d8060, 004d85e5]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_process_FUN_004d8060(CGame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_CGame_process_FUN_004d8060(CGame *this_ptr)

{
  CGame *pCVar1;
  CNetGame *pCVar2;
  CSound *this_ptr_00;
  uint seed_value;
  
  if (this_ptr->profile_mode != 0) {
    wincore_winrun_cpp_getTime_FUN_005b2420();
  }
  pCVar2 = g_CNetGamePtr;
  this_ptr->is_processing = 1;
  if (pCVar2->connection_type == CONNECTION_NONE) {
    seed_value = rand();
  }
  else {
    seed_value = pCVar2->random_seed;
  }
  core_actor_cpp_setRandomSeed_FUN_0040cb80(seed_value);
  core_game_cpp_CGame_updateFadeTransition_FUN_004d60e0(this_ptr);
  if (g_CGamePtr->profile_mode == 1) {
    _DAT_01cd0c90 = wincore_winrun_cpp_getTime_FUN_005b2420();
  }
  core_dfilter_cpp_CFilterFX_process_FUN_0045df40(g_CFilterFXPtr);
  if (g_CGamePtr->profile_mode == 1) {
    wincore_winrun_cpp_getTime_FUN_005b2420();
    engine_console_cpp_CConsole_printf_FUN_00445430(g_CConsolePtr,"G%s : %3.2f ms\n" + 1);
  }
  if (g_CGamePtr->profile_mode == 1) {
    _DAT_01cd0c90 = wincore_winrun_cpp_getTime_FUN_005b2420();
  }
  core_script_cpp_CScript_process_FUN_005437f0(g_CScriptPtr);
  if (g_CGamePtr->profile_mode == 1) {
    wincore_winrun_cpp_getTime_FUN_005b2420();
    engine_console_cpp_CConsole_printf_FUN_00445430(g_CConsolePtr,"G%s : %3.2f ms\n" + 1);
  }
  this_ptr_00 = 0x02C82A60;
  if (this_ptr->cinematic_skip_in_progress != 0) {
    if (this_ptr->letterbox_mode == 0) {
      this_ptr->cinematic_skip_in_progress = 0;
      core_sound_cpp_FUN_0057cc00(this_ptr_00);
      core_setdir_cpp_FUN_00559f80(g_CDemonSetPtr,g_CScriptPtr->focus_actor);
      core_game_cpp_CGame_saveClockTime_FUN_004cbf10(this_ptr);
      g_CScriptPtr->focus_actor_changed = 0;
    }
    else {
      engine_2d_c_clearInputAndWait_FUN_004032b0();
    }
  }
  if (g_CGamePtr->profile_mode == 1) {
    _DAT_01cd0c90 = wincore_winrun_cpp_getTime_FUN_005b2420();
  }
  core_set_cpp_CDemonSet_process_FUN_005542c0(g_CDemonSetPtr);
  if (g_CGamePtr->profile_mode == 1) {
    wincore_winrun_cpp_getTime_FUN_005b2420();
    engine_console_cpp_CConsole_printf_FUN_00445430(g_CConsolePtr,"G%s : %3.2f ms\n" + 1);
  }
  if (g_CGamePtr->profile_mode == 1) {
    _DAT_01cd0c90 = wincore_winrun_cpp_getTime_FUN_005b2420();
  }
  core_gore_cpp_CGore_process_FUN_004e5e80(g_CGorePtr);
  if (g_CGamePtr->profile_mode == 1) {
    wincore_winrun_cpp_getTime_FUN_005b2420();
    engine_console_cpp_CConsole_printf_FUN_00445430(g_CConsolePtr,"G%s : %3.2f ms\n" + 1);
  }
  core_water_cpp_CWater_process_FUN_005a9a90(g_CWaterPtr);
  if (g_CGamePtr->profile_mode == 1) {
    _DAT_01cd0c90 = wincore_winrun_cpp_getTime_FUN_005b2420();
  }
  core_fire_cpp_CFireEffect_process_FUN_004b4dd0(0x01C57074);
  if (g_CGamePtr->profile_mode == 1) {
    wincore_winrun_cpp_getTime_FUN_005b2420();
    engine_console_cpp_CConsole_printf_FUN_00445430(g_CConsolePtr,"G%s : %3.2f ms\n" + 1);
  }
  if (g_CGamePtr->profile_mode == 1) {
    _DAT_01cd0c90 = wincore_winrun_cpp_getTime_FUN_005b2420();
  }
  core_event_cpp_CEventList_process_FUN_004a1a40(0x01C51D80);
  if (g_CGamePtr->profile_mode == 1) {
    wincore_winrun_cpp_getTime_FUN_005b2420();
    engine_console_cpp_CConsole_printf_FUN_00445430(g_CConsolePtr,"G%s : %3.2f ms\n" + 1);
  }
  core_terrain_cpp_CTerrain_process_FUN_0059f4f0(0x02C8AE68);
  core_weather_cpp_CWeather_update_FUN_005ae190(0x02C997C0);
  core_game_cpp_CGame_processCheatCodes_FUN_004d27b0(this_ptr);
  core_fldnotes_cpp_CFieldNotes_process_FUN_004be970(g_CFieldNotesPtr);
  core_bmppuzzl_cpp_processActivePuzzle_FUN_00415cd0();
  if (g_CFieldNotesPtr->is_displayed == 0) {
    core_set_cpp_CDemonSet_processActors_FUN_0054fc20(g_CDemonSetPtr);
  }
  if (g_CGamePtr->profile_mode == 1) {
    _DAT_01cd0c90 = wincore_winrun_cpp_getTime_FUN_005b2420();
  }
  core_mission_cpp_CDemonMission_process_FUN_0051b8d0(0x01D2C900);
  if (g_CGamePtr->profile_mode == 1) {
    wincore_winrun_cpp_getTime_FUN_005b2420();
    engine_console_cpp_CConsole_printf_FUN_00445430(g_CConsolePtr,"G%s : %3.2f ms\n" + 1);
  }
  pCVar1 = g_CGamePtr;
  this_ptr->is_processing = 0;
  if (pCVar1->profile_mode != 0) {
    wincore_winrun_cpp_getTime_FUN_005b2420();
    engine_console_cpp_CConsole_printf_FUN_00445430(g_CConsolePtr,"simulate : %3.2f ms\n");
  }
  this_ptr->total_play_time = this_ptr->delta_time_float + this_ptr->total_play_time;
  return;
}
