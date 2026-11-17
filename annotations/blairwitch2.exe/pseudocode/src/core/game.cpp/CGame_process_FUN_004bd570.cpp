// Name: core_game.cpp_CGame_process_FUN_004bd570
// Address: 004bd570
// Address Range: [[004bd570, 004bdb0a]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_process_FUN_004bd570(CGame *this_ptr)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_process_FUN_004bd570(CGame *this_ptr)

{
  CGame *pCVar1;
  CNetGame *pCVar2;
  CSound *this_ptr_00;
  uint seed_value;
  
  if (this_ptr->profile_mode != 0) {
    wincore_winrun_cpp_getTime_FUN_0058e9e0();
  }
  pCVar2 = g_CNetGamePtr;
  this_ptr->is_processing = 1;
  if (pCVar2->connection_type == CONNECTION_NONE) {
    seed_value = rand();
  }
  else {
    seed_value = pCVar2->random_seed;
  }
  core_actor_cpp_setRandomSeed_FUN_0040cee0(seed_value);
  core_game_cpp_CGame_updateFadeTransition_FUN_004bb2f0(this_ptr);
  core_game_cpp_CGame_updateAlphaFade_FUN_004bb5b0(this_ptr);
  if (g_CGamePtr->profile_mode == 1) {
    g_ProfileStartTime = wincore_winrun_cpp_getTime_FUN_0058e9e0();
  }
  core_dfilter_cpp_CFilterFX_process_FUN_00447de0(g_CFilterFXPtr);
  if (g_CGamePtr->profile_mode == 1) {
    wincore_winrun_cpp_getTime_FUN_0058e9e0();
    engine_console_cpp_CConsole_printf_FUN_00436710(g_CConsolePtr,"%s : %3.2f ms\n");
  }
  if (g_CGamePtr->profile_mode == 1) {
    g_ProfileStartTime = wincore_winrun_cpp_getTime_FUN_0058e9e0();
  }
  core_script_cpp_CScript_process_FUN_005216e0(g_CScriptPtr);
  if (g_CGamePtr->profile_mode == 1) {
    wincore_winrun_cpp_getTime_FUN_0058e9e0();
    engine_console_cpp_CConsole_printf_FUN_00436710(g_CConsolePtr,"%s : %3.2f ms\n");
  }
  this_ptr_00 = g_CSound_PTR_0061c068;
  if (this_ptr->cinematic_skip_in_progress != 0) {
    if (this_ptr->letterbox_mode == 0) {
      this_ptr->cinematic_skip_in_progress = 0;
      core_sound_cpp_CSound_init_FUN_0055a1d0(this_ptr_00);
      core_setdir_cpp_CDemonSet_evaluateVirtualDirector_FUN_00538d10
                (g_CDemonSetPtr,g_CScriptPtr->focus_actor,2);
      core_game_cpp_CGame_saveClockTime_FUN_004b3000(this_ptr);
      g_CScriptPtr->focus_actor_changed = 0;
    }
    else {
      engine_2d_c_clearInputAndWait_FUN_004032b0();
    }
  }
  if (g_CGamePtr->profile_mode == 1) {
    g_ProfileStartTime = wincore_winrun_cpp_getTime_FUN_0058e9e0();
  }
  core_set_cpp_CDemonSet_process_FUN_00533010(g_CDemonSetPtr);
  if (g_CGamePtr->profile_mode == 1) {
    wincore_winrun_cpp_getTime_FUN_0058e9e0();
    engine_console_cpp_CConsole_printf_FUN_00436710(g_CConsolePtr,"%s : %3.2f ms\n");
  }
  if (g_CGamePtr->profile_mode == 1) {
    g_ProfileStartTime = wincore_winrun_cpp_getTime_FUN_0058e9e0();
  }
  core_gore_cpp_CGore_process_FUN_004c9670(g_CGorePtr);
  if (g_CGamePtr->profile_mode == 1) {
    wincore_winrun_cpp_getTime_FUN_0058e9e0();
    engine_console_cpp_CConsole_printf_FUN_00436710(g_CConsolePtr,"%s : %3.2f ms\n");
  }
  core_water_cpp_CWater_process_FUN_00585e60(g_CWaterPtr);
  if (g_CGamePtr->profile_mode == 1) {
    g_ProfileStartTime = wincore_winrun_cpp_getTime_FUN_0058e9e0();
  }
  core_fire_cpp_CFireEffect_process_FUN_0049c430(g_CFireEffectPtr);
  core_bwspart_cpp_CSimpleParticleSystem_process_FUN_005a8180
            (g_CSimpleParticleSystemPtr,g_CGamePtr->delta_time_float);
  if (g_CGamePtr->profile_mode == 1) {
    wincore_winrun_cpp_getTime_FUN_0058e9e0();
    engine_console_cpp_CConsole_printf_FUN_00436710(g_CConsolePtr,"%s : %3.2f ms\n");
  }
  if (g_CGamePtr->profile_mode == 1) {
    g_ProfileStartTime = wincore_winrun_cpp_getTime_FUN_0058e9e0();
  }
  core_event_cpp_CEventList_process_FUN_004893d0(g_CEventListPtr);
  if (g_CGamePtr->profile_mode == 1) {
    wincore_winrun_cpp_getTime_FUN_0058e9e0();
    engine_console_cpp_CConsole_printf_FUN_00436710(g_CConsolePtr,"%s : %3.2f ms\n");
  }
  core_terrain_cpp_CTerrain_process_FUN_0057b970(g_CTerrainPtr);
  core_weather_cpp_CWeather_update_FUN_0058a660(g_CWeatherPtr);
  core_game_cpp_CGame_processCheatCodes_FUN_004b90d0(this_ptr);
  core_fldnotes_cpp_CFieldNotes_process_FUN_004a5f60(g_CFieldNotesPtr);
  core_bmppuzzl_cpp_processActivePuzzle_FUN_0059ac60();
  core_set_cpp_CDemonSet_processActors_FUN_0052e940(g_CDemonSetPtr);
  if (g_CGamePtr->profile_mode == 1) {
    g_ProfileStartTime = wincore_winrun_cpp_getTime_FUN_0058e9e0();
  }
  core_mission_cpp_CDemonMission_process_FUN_004fc940(g_CDemonMission_PTR_00618170);
  if (g_CGamePtr->profile_mode == 1) {
    wincore_winrun_cpp_getTime_FUN_0058e9e0();
    engine_console_cpp_CConsole_printf_FUN_00436710(g_CConsolePtr,"%s : %3.2f ms\n");
  }
  pCVar1 = g_CGamePtr;
  this_ptr->is_processing = 0;
  if (pCVar1->profile_mode != 0) {
    wincore_winrun_cpp_getTime_FUN_0058e9e0();
    engine_console_cpp_CConsole_printf_FUN_00436710(g_CConsolePtr,"simulate : %3.2f ms\n");
  }
  this_ptr->total_play_time = this_ptr->delta_time_float + this_ptr->total_play_time;
  return;
}
