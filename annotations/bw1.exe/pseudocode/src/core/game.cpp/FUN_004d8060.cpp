// Name: core_game.cpp_FUN_004d8060
// Address: 004d8060
// Address Range: [[004d8060, 004d85e5]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_FUN_004d8060(CGame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_FUN_004d8060(CGame *this_ptr)

{
  CGame *pCVar1;
  CNetGame *pCVar2;
  CSound *this_ptr_00;
  uint seed_value;
  int iVar3;
  int unaff_ESI;
  
  if (*(int *)&this_ptr->field_0x228 != 0) {
    unaff_ESI = wincore_winrun_cpp_FUN_005b2420();
  }
  pCVar2 = g_CNetGamePtr;
  *(uint *)&this_ptr->field_0x258 = 1;
  if (*(int *)pCVar2 == 0) {
    seed_value = rand();
  }
  else {
    seed_value = *(uint *)&pCVar2->field_0x174;
  }
  core_actor_cpp_setRandomSeed_FUN_0040cb80(seed_value);
  core_game_cpp_FUN_004d60e0(this_ptr);
  if (*(int *)&g_CGamePtr->field_0x228 == 1) {
    _DAT_01cd0c90 = wincore_winrun_cpp_FUN_005b2420();
  }
  core_dfilter_cpp_FUN_0045df40(g_CFilterFXPtr);
  if (*(int *)&g_CGamePtr->field_0x228 == 1) {
    iVar3 = wincore_winrun_cpp_FUN_005b2420();
    engine_console_cpp_FUN_00445430
              (g_CConsolePtr,"G%s : %3.2f ms\n" + 1,"gFilterFX->process()",
               ((double)(iVar3 - _DAT_01cd0c90) * _DAT_005e346c * _DAT_005e3474 * _DAT_005e347c) /
               (double)*(float *)&g_CGamePtr->field_0x294);
  }
  if (*(int *)&g_CGamePtr->field_0x228 == 1) {
    _DAT_01cd0c90 = wincore_winrun_cpp_FUN_005b2420();
  }
  core_script_cpp_FUN_005437f0(g_CScriptPtr);
  if (*(int *)&g_CGamePtr->field_0x228 == 1) {
    iVar3 = wincore_winrun_cpp_FUN_005b2420();
    engine_console_cpp_FUN_00445430
              (g_CConsolePtr,"G%s : %3.2f ms\n" + 1,"gScript->process()",
               ((double)(iVar3 - _DAT_01cd0c90) * _DAT_005e346c * _DAT_005e3474 * _DAT_005e347c) /
               (double)*(float *)&g_CGamePtr->field_0x294);
  }
  this_ptr_00 = 0x02C82A60;
  if (*(int *)&this_ptr->field_0xe0 != 0) {
    if (*(int *)&this_ptr->field_0x244 == 0) {
      *(uint *)&this_ptr->field_0xe0 = 0;
      core_sound_cpp_FUN_0057cc00(this_ptr_00);
      core_setdir_cpp_FUN_00559f80(g_CDemonSetPtr,*(uint *)&g_CScriptPtr->field_0xc);
      core_game_cpp_CGame_saveClockTime_FUN_004cbf10(this_ptr);
      *(uint *)&g_CScriptPtr->field_0x10 = 0;
    }
    else {
      engine_2d_c_clearInputAndWait_FUN_004032b0();
    }
  }
  if (*(int *)&g_CGamePtr->field_0x228 == 1) {
    _DAT_01cd0c90 = wincore_winrun_cpp_FUN_005b2420();
  }
  core_set_cpp_FUN_005542c0(g_CDemonSetPtr);
  if (*(int *)&g_CGamePtr->field_0x228 == 1) {
    iVar3 = wincore_winrun_cpp_FUN_005b2420();
    engine_console_cpp_FUN_00445430
              (g_CConsolePtr,"G%s : %3.2f ms\n" + 1,"gSet->process()",
               ((double)(iVar3 - _DAT_01cd0c90) * _DAT_005e346c * _DAT_005e3474 * _DAT_005e347c) /
               (double)*(float *)&g_CGamePtr->field_0x294);
  }
  if (*(int *)&g_CGamePtr->field_0x228 == 1) {
    _DAT_01cd0c90 = wincore_winrun_cpp_FUN_005b2420();
  }
  core_gore_cpp_FUN_004e5e80(g_CGorePtr);
  if (*(int *)&g_CGamePtr->field_0x228 == 1) {
    iVar3 = wincore_winrun_cpp_FUN_005b2420();
    engine_console_cpp_FUN_00445430
              (g_CConsolePtr,"G%s : %3.2f ms\n" + 1,"gGore->process()",
               ((double)(iVar3 - _DAT_01cd0c90) * _DAT_005e346c * _DAT_005e3474 * _DAT_005e347c) /
               (double)*(float *)&g_CGamePtr->field_0x294);
  }
  core_water_cpp_FUN_005a9a90(g_CWaterPtr);
  if (*(int *)&g_CGamePtr->field_0x228 == 1) {
    _DAT_01cd0c90 = wincore_winrun_cpp_FUN_005b2420();
  }
  core_fire_cpp_FUN_004b4dd0(0x01C57074);
  if (*(int *)&g_CGamePtr->field_0x228 == 1) {
    iVar3 = wincore_winrun_cpp_FUN_005b2420();
    engine_console_cpp_FUN_00445430
              (g_CConsolePtr,"G%s : %3.2f ms\n" + 1,"gFire->process()",
               ((double)(iVar3 - _DAT_01cd0c90) * _DAT_005e346c * _DAT_005e3474 * _DAT_005e347c) /
               (double)*(float *)&g_CGamePtr->field_0x294);
  }
  if (*(int *)&g_CGamePtr->field_0x228 == 1) {
    _DAT_01cd0c90 = wincore_winrun_cpp_FUN_005b2420();
  }
  core_event_cpp_FUN_004a1a40(0x01C51D80);
  if (*(int *)&g_CGamePtr->field_0x228 == 1) {
    iVar3 = wincore_winrun_cpp_FUN_005b2420();
    engine_console_cpp_FUN_00445430
              (g_CConsolePtr,"G%s : %3.2f ms\n" + 1,"gEventList->process()",
               ((double)(iVar3 - _DAT_01cd0c90) * _DAT_005e346c * _DAT_005e3474 * _DAT_005e347c) /
               (double)*(float *)&g_CGamePtr->field_0x294);
  }
  core_terrain_cpp_CTerrain_process_FUN_0059f4f0(0x02C8AE68);
  core_weather_cpp_FUN_005ae190(0x02C997C0);
  core_game_cpp_FUN_004d27b0(this_ptr);
  core_fldnotes_cpp_FUN_004be970();
  unkafter_alphabit_cpp_FUN_00415cd0();
  if (*(int *)&g_CFieldNotesPtr->field_0x40 == 0) {
    core_set_cpp_FUN_0054fc20(g_CDemonSetPtr);
  }
  if (*(int *)&g_CGamePtr->field_0x228 == 1) {
    _DAT_01cd0c90 = wincore_winrun_cpp_FUN_005b2420();
  }
  core_mission_cpp_FUN_0051b8d0(0x01D2C900);
  if (*(int *)&g_CGamePtr->field_0x228 == 1) {
    iVar3 = wincore_winrun_cpp_FUN_005b2420();
    engine_console_cpp_FUN_00445430
              (g_CConsolePtr,"G%s : %3.2f ms\n" + 1,"gSit->process()",
               ((double)(iVar3 - _DAT_01cd0c90) * _DAT_005e346c * _DAT_005e3474 * _DAT_005e347c) /
               (double)*(float *)&g_CGamePtr->field_0x294);
  }
  pCVar1 = g_CGamePtr;
  *(uint *)&this_ptr->field_0x258 = 0;
  if (*(int *)&pCVar1->field_0x228 != 0) {
    iVar3 = wincore_winrun_cpp_FUN_005b2420();
    engine_console_cpp_FUN_00445430
              (g_CConsolePtr,"simulate : %3.2f ms\n",
               ((double)(iVar3 - unaff_ESI) * _DAT_005e346c * _DAT_005e3474 * _DAT_005e347c) /
               (double)*(float *)&g_CGamePtr->field_0x294);
  }
  *(float *)&this_ptr->field_0x270 =
       *(float *)&this_ptr->field_0x294 + *(float *)&this_ptr->field_0x270;
  return;
}
