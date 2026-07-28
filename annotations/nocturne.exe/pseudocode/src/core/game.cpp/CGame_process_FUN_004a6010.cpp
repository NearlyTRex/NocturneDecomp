// Name: core_game.cpp_CGame_process_FUN_004a6010
// Address: 004a6010
// Address Range: [[004a6010, 004a656b]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_process_FUN_004a6010(CGame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_CGame_process_FUN_004a6010(CGame *this_ptr)

{
  int *piVar1;
  CSound *this_ptr_00;
  uint seed_value;
  int iVar2;
  int unaff_ESI;
  
  if (this_ptr->profile_mode != 0) {
    unaff_ESI = wincore_winrun_cpp_getTime_FUN_00558a30();
  }
  piVar1 = 0x01CEA280;
  this_ptr->is_processing = 1;
  if (*piVar1 == 0) {
    seed_value = rand();
  }
  else {
    seed_value = piVar1[0x5b];
  }
  core_actor_cpp_setRandomSeed_FUN_0040dd20(seed_value);
  core_game_cpp_CGame_updateFadeTransition_FUN_004a3880(this_ptr);
  if (*(int *)(0x01C775EC + 0x20c) == 1) {
    _DAT_01c78b14 = wincore_winrun_cpp_getTime_FUN_00558a30();
  }
  core_dfilter_cpp_CFilterFX_process_FUN_0044c4a0(0x014B98EC);
  if (*(int *)(0x01C775EC + 0x20c) == 1) {
    iVar2 = wincore_winrun_cpp_getTime_FUN_00558a30();
    engine_console_cpp_CConsole_printf_FUN_0043ac60
              (PTR_DAT_005ad350,"%s : %3.2f ms\n","gFilterFX->process()",
               ((double)(iVar2 - _DAT_01c78b14) * 0.055555555555555601 * 1.52587890625e-05 *
               1000) / (double)*(float *)(0x01C775EC + 0x264));
  }
  if (*(int *)(0x01C775EC + 0x20c) == 1) {
    _DAT_01c78b14 = wincore_winrun_cpp_getTime_FUN_00558a30();
  }
  core_script_cpp_CScript_process_FUN_004fe5b0(0x01E56DA0);
  if (*(int *)(0x01C775EC + 0x20c) == 1) {
    iVar2 = wincore_winrun_cpp_getTime_FUN_00558a30();
    engine_console_cpp_CConsole_printf_FUN_0043ac60
              (PTR_DAT_005ad350,"%s : %3.2f ms\n","gScript->process()",
               ((double)(iVar2 - _DAT_01c78b14) * 0.055555555555555601 * 1.52587890625e-05 *
               1000) / (double)*(float *)(0x01C775EC + 0x264));
  }
  this_ptr_00 = 0x02DC9450;
  if (this_ptr->cutscene_skippable != 0) {
    if (this_ptr->letterbox_mode == 0) {
      this_ptr->cutscene_skippable = 0;
      core_sound_cpp_CSound_init_FUN_0052ddf0(this_ptr_00);
      core_setdir_cpp_FUN_005125a0(0x01E57284,0x01E56DA0->focus_actor);
      core_game_cpp_CGame_saveClockTime_FUN_0049a890(this_ptr);
      0x01E56DA0->focus_actor_changed = 0;
    }
    else {
      engine_2d_c_clearInputAndWait_FUN_00403f50();
    }
  }
  if (*(int *)(0x01C775EC + 0x20c) == 1) {
    _DAT_01c78b14 = wincore_winrun_cpp_getTime_FUN_00558a30();
  }
  core_set_cpp_CDemonSet_process_FUN_0050d040(0x01E57284);
  if (*(int *)(0x01C775EC + 0x20c) == 1) {
    iVar2 = wincore_winrun_cpp_getTime_FUN_00558a30();
    engine_console_cpp_CConsole_printf_FUN_0043ac60
              (PTR_DAT_005ad350,"%s : %3.2f ms\n","gSet->process()",
               ((double)(iVar2 - _DAT_01c78b14) * 0.055555555555555601 * 1.52587890625e-05 *
               1000) / (double)*(float *)(0x01C775EC + 0x264));
  }
  if (*(int *)(0x01C775EC + 0x20c) == 1) {
    _DAT_01c78b14 = wincore_winrun_cpp_getTime_FUN_00558a30();
  }
  core_gore_cpp_CGore_process_FUN_004b0030((CGore *)INT_005b96c4);
  if (*(int *)(0x01C775EC + 0x20c) == 1) {
    iVar2 = wincore_winrun_cpp_getTime_FUN_00558a30();
    engine_console_cpp_CConsole_printf_FUN_0043ac60
              (PTR_DAT_005ad350,"%s : %3.2f ms\n","gGore->process()",
               ((double)(iVar2 - _DAT_01c78b14) * 0.055555555555555601 * 1.52587890625e-05 *
               1000) / (double)*(float *)(0x01C775EC + 0x264));
  }
  core_water_cpp_CWater_process_FUN_00550860(0x02DD1210);
  if (*(int *)(0x01C775EC + 0x20c) == 1) {
    _DAT_01c78b14 = wincore_winrun_cpp_getTime_FUN_00558a30();
  }
  core_fire_cpp_CFireEffect_process_FUN_0048a390(0x01C08D04);
  if (*(int *)(0x01C775EC + 0x20c) == 1) {
    iVar2 = wincore_winrun_cpp_getTime_FUN_00558a30();
    engine_console_cpp_CConsole_printf_FUN_0043ac60
              (PTR_DAT_005ad350,"%s : %3.2f ms\n","gFire->process()",
               ((double)(iVar2 - _DAT_01c78b14) * 0.055555555555555601 * 1.52587890625e-05 *
               1000) / (double)*(float *)(0x01C775EC + 0x264));
  }
  if (*(int *)(0x01C775EC + 0x20c) == 1) {
    _DAT_01c78b14 = wincore_winrun_cpp_getTime_FUN_00558a30();
  }
  core_event_cpp_CEventList_process_FUN_0047aa50(0x01C03A10);
  if (*(int *)(0x01C775EC + 0x20c) == 1) {
    iVar2 = wincore_winrun_cpp_getTime_FUN_00558a30();
    engine_console_cpp_CConsole_printf_FUN_0043ac60
              (PTR_DAT_005ad350,"%s : %3.2f ms\n","gEventList->process()",
               ((double)(iVar2 - _DAT_01c78b14) * 0.055555555555555601 * 1.52587890625e-05 *
               1000) / (double)*(float *)(0x01C775EC + 0x264));
  }
  core_terrain_cpp_CTerrain_process_FUN_00549410(0x02DD10C8);
  core_weather_cpp_CWeather_update_FUN_00554980(0x02DDF9F0);
  core_game_cpp_CGame_processCheatCodes_FUN_004a0550(this_ptr);
  core_set_cpp_CDemonSet_processActors_FUN_00509140(0x01E57284);
  if (*(int *)(0x01C775EC + 0x20c) == 1) {
    _DAT_01c78b14 = wincore_winrun_cpp_getTime_FUN_00558a30();
  }
  core_mission_cpp_CDemonMission_process_FUN_004d92a0(0x01CC9450);
  if (*(int *)(0x01C775EC + 0x20c) == 1) {
    iVar2 = wincore_winrun_cpp_getTime_FUN_00558a30();
    engine_console_cpp_CConsole_printf_FUN_0043ac60
              (PTR_DAT_005ad350,"%s : %3.2f ms\n","gSit->process()",
               ((double)(iVar2 - _DAT_01c78b14) * 0.055555555555555601 * 1.52587890625e-05 *
               1000) / (double)*(float *)(0x01C775EC + 0x264));
  }
  iVar2 = 0x01C775EC;
  this_ptr->is_processing = 0;
  if (*(int *)(iVar2 + 0x20c) != 0) {
    iVar2 = wincore_winrun_cpp_getTime_FUN_00558a30();
    engine_console_cpp_CConsole_printf_FUN_0043ac60
              (PTR_DAT_005ad350,"simulate : %3.2f ms\n",
               ((double)(iVar2 - unaff_ESI) * 0.055555555555555601 * 1.52587890625e-05 * 1000) /
               (double)*(float *)(0x01C775EC + 0x264));
  }
  this_ptr->total_play_time = this_ptr->delta_time_float + this_ptr->total_play_time;
  return;
}
