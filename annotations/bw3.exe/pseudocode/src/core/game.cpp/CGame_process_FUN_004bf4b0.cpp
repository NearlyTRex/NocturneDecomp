// Name: core_game.cpp_CGame_process_FUN_004bf4b0
// Address: 004bf4b0
// Address Range: [[004bf4b0, 004bfa35]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_process_FUN_004bf4b0(CGame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_CGame_process_FUN_004bf4b0(CGame *this_ptr)

{
  CGame *pCVar1;
  CNetGame *pCVar2;
  CSound *this_ptr_00;
  uint seed_value;
  int iVar3;
  int unaff_ESI;
  
  if (this_ptr->profile_mode != 0) {
    unaff_ESI = wincore_winrun_cpp_getTime_FUN_005806a0();
  }
  pCVar2 = g_CNetGamePtr;
  this_ptr->is_processing = 1;
  if (pCVar2->connection_type == CONNECTION_NONE) {
    seed_value = rand();
  }
  else {
    seed_value = pCVar2->random_seed;
  }
  core_actor_cpp_setRandomSeed_FUN_0040cdc0(seed_value);
  core_game_cpp_CGame_updateFadeTransition_FUN_004bd6d0(this_ptr);
  if (g_CGamePtr->profile_mode == 1) {
    _DAT_01d22c98 = wincore_winrun_cpp_getTime_FUN_005806a0();
  }
  core_dfilter_cpp_CFilterFX_process_FUN_00459e90(g_CFilterFXPtr);
  if (g_CGamePtr->profile_mode == 1) {
    iVar3 = wincore_winrun_cpp_getTime_FUN_005806a0();
    engine_console_cpp_FUN_00441ff0
              (g_CConsolePtr,"G%s : %3.2f ms\n" + 1,"@gFilterFX->process()" + 1,
               ((double)(iVar3 - _DAT_01d22c98) * _DAT_005c3a70 * _DAT_005c3a78 * _DAT_005c3a80) /
               (double)g_CGamePtr->delta_time_float);
  }
  if (g_CGamePtr->profile_mode == 1) {
    _DAT_01d22c98 = wincore_winrun_cpp_getTime_FUN_005806a0();
  }
  core_script_cpp_CScript_process_FUN_00528e00(g_CScriptPtr);
  if (g_CGamePtr->profile_mode == 1) {
    iVar3 = wincore_winrun_cpp_getTime_FUN_005806a0();
    engine_console_cpp_FUN_00441ff0
              (g_CConsolePtr,"G%s : %3.2f ms\n" + 1,"gScript->process()",
               ((double)(iVar3 - _DAT_01d22c98) * _DAT_005c3a70 * _DAT_005c3a78 * _DAT_005c3a80) /
               (double)g_CGamePtr->delta_time_float);
  }
  this_ptr_00 = 0x02CF5680;
  if (this_ptr->cinematic_skip_in_progress != 0) {
    if (this_ptr->letterbox_mode == 0) {
      this_ptr->cinematic_skip_in_progress = 0;
      core_sound_cpp_FUN_0055fd30(this_ptr_00);
      core_setdir_cpp_FUN_0053f940(g_CDemonSetPtr,g_CScriptPtr->focus_actor);
      core_game_cpp_CGame_saveClockTime_FUN_004b4430(this_ptr);
      g_CScriptPtr->focus_actor_changed = 0;
    }
    else {
      engine_2d_c_clearInputAndWait_FUN_004032b0();
    }
  }
  if (g_CGamePtr->profile_mode == 1) {
    _DAT_01d22c98 = wincore_winrun_cpp_getTime_FUN_005806a0();
  }
  core_set_cpp_CDemonSet_process_FUN_00539c50(g_CDemonSetPtr);
  if (g_CGamePtr->profile_mode == 1) {
    iVar3 = wincore_winrun_cpp_getTime_FUN_005806a0();
    engine_console_cpp_FUN_00441ff0
              (g_CConsolePtr,"G%s : %3.2f ms\n" + 1,"gSet->process()",
               ((double)(iVar3 - _DAT_01d22c98) * _DAT_005c3a70 * _DAT_005c3a78 * _DAT_005c3a80) /
               (double)g_CGamePtr->delta_time_float);
  }
  if (g_CGamePtr->profile_mode == 1) {
    _DAT_01d22c98 = wincore_winrun_cpp_getTime_FUN_005806a0();
  }
  core_gore_cpp_CGore_process_FUN_004ce7e0(g_CGorePtr);
  if (g_CGamePtr->profile_mode == 1) {
    iVar3 = wincore_winrun_cpp_getTime_FUN_005806a0();
    engine_console_cpp_FUN_00441ff0
              (g_CConsolePtr,"G%s : %3.2f ms\n" + 1,"gGore->process()",
               ((double)(iVar3 - _DAT_01d22c98) * _DAT_005c3a70 * _DAT_005c3a78 * _DAT_005c3a80) /
               (double)g_CGamePtr->delta_time_float);
  }
  core_water_cpp_CWater_process_FUN_005772e0(g_CWaterPtr);
  if (g_CGamePtr->profile_mode == 1) {
    _DAT_01d22c98 = wincore_winrun_cpp_getTime_FUN_005806a0();
  }
  core_fire_cpp_FUN_004a1760();
  if (g_CGamePtr->profile_mode == 1) {
    iVar3 = wincore_winrun_cpp_getTime_FUN_005806a0();
    engine_console_cpp_FUN_00441ff0
              (g_CConsolePtr,"G%s : %3.2f ms\n" + 1,"gFire->process()",
               ((double)(iVar3 - _DAT_01d22c98) * _DAT_005c3a70 * _DAT_005c3a78 * _DAT_005c3a80) /
               (double)g_CGamePtr->delta_time_float);
  }
  if (g_CGamePtr->profile_mode == 1) {
    _DAT_01d22c98 = wincore_winrun_cpp_getTime_FUN_005806a0();
  }
  core_event_cpp_CEventList_process_FUN_0048c020(0x01C6E360);
  if (g_CGamePtr->profile_mode == 1) {
    iVar3 = wincore_winrun_cpp_getTime_FUN_005806a0();
    engine_console_cpp_FUN_00441ff0
              (g_CConsolePtr,"G%s : %3.2f ms\n" + 1,"gEventList->process()",
               ((double)(iVar3 - _DAT_01d22c98) * _DAT_005c3a70 * _DAT_005c3a78 * _DAT_005c3a80) /
               (double)g_CGamePtr->delta_time_float);
  }
  core_terrain_cpp_CTerrain_process_FUN_005724e0(0x02CFD8B8);
  core_weather_cpp_FUN_0057bda0();
  core_game_cpp_CGame_processCheatCodes_FUN_004bb100(this_ptr);
  core_fldnotes_cpp_FUN_004ac6b0();
  core_bmppuzzl_cpp_FUN_00411a90();
  if (g_CFieldNotesPtr->is_displayed == 0) {
    core_set_cpp_CDemonSet_processActors_FUN_005353e0(g_CDemonSetPtr);
  }
  if (g_CGamePtr->profile_mode == 1) {
    _DAT_01d22c98 = wincore_winrun_cpp_getTime_FUN_005806a0();
  }
  core_mission_cpp_CDemonMission_process_FUN_004f70a0(0x01D81080);
  if (g_CGamePtr->profile_mode == 1) {
    iVar3 = wincore_winrun_cpp_getTime_FUN_005806a0();
    engine_console_cpp_FUN_00441ff0
              (g_CConsolePtr,"G%s : %3.2f ms\n" + 1,"gSit->process()",
               ((double)(iVar3 - _DAT_01d22c98) * _DAT_005c3a70 * _DAT_005c3a78 * _DAT_005c3a80) /
               (double)g_CGamePtr->delta_time_float);
  }
  pCVar1 = g_CGamePtr;
  this_ptr->is_processing = 0;
  if (pCVar1->profile_mode != 0) {
    iVar3 = wincore_winrun_cpp_getTime_FUN_005806a0();
    engine_console_cpp_FUN_00441ff0
              (g_CConsolePtr,"simulate : %3.2f ms\n",
               ((double)(iVar3 - unaff_ESI) * _DAT_005c3a70 * _DAT_005c3a78 * _DAT_005c3a80) /
               (double)g_CGamePtr->delta_time_float);
  }
  this_ptr->total_play_time = this_ptr->delta_time_float + this_ptr->total_play_time;
  return;
}
