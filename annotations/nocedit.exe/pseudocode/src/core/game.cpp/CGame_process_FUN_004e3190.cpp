// Name: core_game.cpp_CGame_process_FUN_004e3190
// Address: 004e3190
// Address Range: [[004e3190, 004e36eb]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_process_FUN_004e3190(CGame *this_ptr)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_process_FUN_004e3190(CGame *this_ptr)

{
  CGame *pCVar1;
  CNetGame *pCVar2;
  CSound *this_ptr_00;
  uint seed_value;
  int iVar3;
  int unaff_ESI;
  
  if (this_ptr->profile_mode != 0) {
    unaff_ESI = wincore_winrun_cpp_getTime_FUN_005f2dc0();
  }
  pCVar2 = g_CNetGamePtr;
  this_ptr->is_processing = 1;
  if (pCVar2->connection_type == CONNECTION_NONE) {
    seed_value = rand();
  }
  else {
    seed_value = pCVar2->random_seed;
  }
  core_actor_cpp_setRandomSeed_FUN_0040cb90(seed_value);
  core_game_cpp_CGame_updateFadeTransition_FUN_004e09c0(this_ptr);
  if (g_CGamePtr->profile_mode == 1) {
    g_ProfileStartTime = wincore_winrun_cpp_getTime_FUN_005f2dc0();
  }
  core_dfilter_cpp_CFilterFX_process_FUN_004708e0(g_CFilterFXPtr);
  if (g_CGamePtr->profile_mode == 1) {
    iVar3 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
    engine_console_cpp_CConsole_printf_FUN_00441890
              (g_CConsolePtr,"%s : %3.2f ms\n","gFilterFX->process()",
               ((double)(iVar3 - g_ProfileStartTime) * 0.055555555555555601 * 1.52587890625e-05 *
               1000) / (double)g_CGamePtr->delta_time_float);
  }
  if (g_CGamePtr->profile_mode == 1) {
    g_ProfileStartTime = wincore_winrun_cpp_getTime_FUN_005f2dc0();
  }
  core_script_cpp_CScript_process_FUN_00559960(g_CScriptPtr);
  if (g_CGamePtr->profile_mode == 1) {
    iVar3 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
    engine_console_cpp_CConsole_printf_FUN_00441890
              (g_CConsolePtr,"%s : %3.2f ms\n","gScript->process()",
               ((double)(iVar3 - g_ProfileStartTime) * 0.055555555555555601 * 1.52587890625e-05 *
               1000) / (double)g_CGamePtr->delta_time_float);
  }
  this_ptr_00 = g_CSoundPtr;
  if (this_ptr->cutscene_skippable != 0) {
    if (this_ptr->letterbox_mode == 0) {
      this_ptr->cutscene_skippable = 0;
      core_sound_cpp_CSound_init_FUN_005b2dd0(this_ptr_00);
      core_setdir_cpp_CDemonSet_evaluateVirtualDirector_FUN_005751d0
                (g_CDemonSetPtr,g_CScriptPtr->focus_actor,2);
      core_game_cpp_CGame_saveClockTime_FUN_004d7d80(this_ptr);
      g_CScriptPtr->focus_actor_changed = 0;
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
    iVar3 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
    engine_console_cpp_CConsole_printf_FUN_00441890
              (g_CConsolePtr,"%s : %3.2f ms\n","gSet->process()",
               ((double)(iVar3 - g_ProfileStartTime) * 0.055555555555555601 * 1.52587890625e-05 *
               1000) / (double)g_CGamePtr->delta_time_float);
  }
  if (g_CGamePtr->profile_mode == 1) {
    g_ProfileStartTime = wincore_winrun_cpp_getTime_FUN_005f2dc0();
  }
  core_gore_cpp_CGore_process_FUN_004ed9e0(g_CGorePtr);
  if (g_CGamePtr->profile_mode == 1) {
    iVar3 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
    engine_console_cpp_CConsole_printf_FUN_00441890
              (g_CConsolePtr,"%s : %3.2f ms\n","gGore->process()",
               ((double)(iVar3 - g_ProfileStartTime) * 0.055555555555555601 * 1.52587890625e-05 *
               1000) / (double)g_CGamePtr->delta_time_float);
  }
  core_water_cpp_CWater_process_FUN_005e9ed0(g_CWaterPtr);
  if (g_CGamePtr->profile_mode == 1) {
    g_ProfileStartTime = wincore_winrun_cpp_getTime_FUN_005f2dc0();
  }
  core_fire_cpp_CFireEffect_process_FUN_004c6ec0(g_CFireEffectPtr);
  if (g_CGamePtr->profile_mode == 1) {
    iVar3 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
    engine_console_cpp_CConsole_printf_FUN_00441890
              (g_CConsolePtr,"%s : %3.2f ms\n","gFire->process()",
               ((double)(iVar3 - g_ProfileStartTime) * 0.055555555555555601 * 1.52587890625e-05 *
               1000) / (double)g_CGamePtr->delta_time_float);
  }
  if (g_CGamePtr->profile_mode == 1) {
    g_ProfileStartTime = wincore_winrun_cpp_getTime_FUN_005f2dc0();
  }
  core_event_cpp_CEventList_process_FUN_004aaac0(g_CEventListPtr);
  if (g_CGamePtr->profile_mode == 1) {
    iVar3 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
    engine_console_cpp_CConsole_printf_FUN_00441890
              (g_CConsolePtr,"%s : %3.2f ms\n","gEventList->process()",
               ((double)(iVar3 - g_ProfileStartTime) * 0.055555555555555601 * 1.52587890625e-05 *
               1000) / (double)g_CGamePtr->delta_time_float);
  }
  core_terrain_cpp_CTerrain_process_FUN_005e2050(g_CTerrainPtr);
  core_weather_cpp_CWeather_update_FUN_005eeaf0(g_CWeatherPtr);
  core_game_cpp_CGame_processCheatCodes_FUN_004ddaf0(this_ptr);
  core_set_cpp_CDemonSet_processActors_FUN_0056b810(g_CDemonSetPtr);
  if (g_CGamePtr->profile_mode == 1) {
    g_ProfileStartTime = wincore_winrun_cpp_getTime_FUN_005f2dc0();
  }
  core_mission_cpp_CDemonMission_process_FUN_00524250(g_CDemonMissionPtr);
  if (g_CGamePtr->profile_mode == 1) {
    iVar3 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
    engine_console_cpp_CConsole_printf_FUN_00441890
              (g_CConsolePtr,"%s : %3.2f ms\n","gSit->process()",
               ((double)(iVar3 - g_ProfileStartTime) * 0.055555555555555601 * 1.52587890625e-05 *
               1000) / (double)g_CGamePtr->delta_time_float);
  }
  pCVar1 = g_CGamePtr;
  this_ptr->is_processing = 0;
  if (pCVar1->profile_mode != 0) {
    iVar3 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
    engine_console_cpp_CConsole_printf_FUN_00441890
              (g_CConsolePtr,"simulate : %3.2f ms\n",
               ((double)(iVar3 - unaff_ESI) * 0.055555555555555601 * 1.52587890625e-05 * 1000) /
               (double)g_CGamePtr->delta_time_float);
  }
  this_ptr->total_play_time = this_ptr->delta_time_float + this_ptr->total_play_time;
  return;
}
