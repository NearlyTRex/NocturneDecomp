// Name: core_game.cpp_FUN_004bd570
// Address: 004bd570
// Address Range: [[004bd570, 004bdb0a]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_FUN_004bd570(CGame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_FUN_004bd570(CGame *this_ptr)

{
  CGame *pCVar1;
  CNetGame *pCVar2;
  CSound *this_ptr_00;
  uint seed_value;
  int iVar3;
  int unaff_ESI;
  
  if (*(int *)&this_ptr->field_0x228 != 0) {
    unaff_ESI = wincore_winrun_cpp_FUN_0058e9e0();
  }
  pCVar2 = g_CNetGamePtr;
  *(uint *)&this_ptr->field_0x258 = 1;
  if (*(int *)pCVar2 == 0) {
    seed_value = rand();
  }
  else {
    seed_value = *(uint *)&pCVar2->field_0x17c;
  }
  core_actor_cpp_FUN_0040cee0(seed_value);
  core_game_cpp_FUN_004bb2f0(this_ptr);
  core_game_cpp_FUN_004bb5b0();
  if (*(int *)&g_CGamePtr->field_0x228 == 1) {
    _DAT_01cb8118 = wincore_winrun_cpp_FUN_0058e9e0();
  }
  core_dfilter_cpp_FUN_00447de0(g_CFilterFXPtr);
  if (*(int *)&g_CGamePtr->field_0x228 == 1) {
    iVar3 = wincore_winrun_cpp_FUN_0058e9e0();
    engine_console_cpp_FUN_00436710
              (g_CConsolePtr,"G%s : %3.2f ms\n" + 1,"@gFilterFX->process()" + 1,
               ((double)(iVar3 - _DAT_01cb8118) * _DAT_005d8913 * _DAT_005d891b * _DAT_005d8923) /
               (double)*(float *)&g_CGamePtr->field_0x284);
  }
  if (*(int *)&g_CGamePtr->field_0x228 == 1) {
    _DAT_01cb8118 = wincore_winrun_cpp_FUN_0058e9e0();
  }
  core_script_cpp_FUN_005216e0(g_CScriptPtr);
  if (*(int *)&g_CGamePtr->field_0x228 == 1) {
    iVar3 = wincore_winrun_cpp_FUN_0058e9e0();
    engine_console_cpp_FUN_00436710
              (g_CConsolePtr,"G%s : %3.2f ms\n" + 1,"gScript->process()",
               ((double)(iVar3 - _DAT_01cb8118) * _DAT_005d8913 * _DAT_005d891b * _DAT_005d8923) /
               (double)*(float *)&g_CGamePtr->field_0x284);
  }
  this_ptr_00 = 0x0264B290;
  if (*(int *)&this_ptr->field_0xe0 != 0) {
    if (*(int *)&this_ptr->field_0x244 == 0) {
      *(uint *)&this_ptr->field_0xe0 = 0;
      core_sound_cpp_FUN_0055a1d0(this_ptr_00);
      core_setdir_cpp_FUN_00538d10(g_CDemonSetPtr,*(uint *)&g_CScriptPtr->field_0xc);
      core_game_cpp_FUN_004b3000(this_ptr);
      *(uint *)&g_CScriptPtr->field_0x10 = 0;
    }
    else {
      engine_2d_c_clearInputAndWait_FUN_004032b0();
    }
  }
  if (*(int *)&g_CGamePtr->field_0x228 == 1) {
    _DAT_01cb8118 = wincore_winrun_cpp_FUN_0058e9e0();
  }
  core_set_cpp_FUN_00533010(g_CDemonSetPtr);
  if (*(int *)&g_CGamePtr->field_0x228 == 1) {
    iVar3 = wincore_winrun_cpp_FUN_0058e9e0();
    engine_console_cpp_FUN_00436710
              (g_CConsolePtr,"G%s : %3.2f ms\n" + 1,"gSet->process()",
               ((double)(iVar3 - _DAT_01cb8118) * _DAT_005d8913 * _DAT_005d891b * _DAT_005d8923) /
               (double)*(float *)&g_CGamePtr->field_0x284);
  }
  if (*(int *)&g_CGamePtr->field_0x228 == 1) {
    _DAT_01cb8118 = wincore_winrun_cpp_FUN_0058e9e0();
  }
  core_gore_cpp_FUN_004c9670(g_CGorePtr);
  if (*(int *)&g_CGamePtr->field_0x228 == 1) {
    iVar3 = wincore_winrun_cpp_FUN_0058e9e0();
    engine_console_cpp_FUN_00436710
              (g_CConsolePtr,"G%s : %3.2f ms\n" + 1,"gGore->process()",
               ((double)(iVar3 - _DAT_01cb8118) * _DAT_005d8913 * _DAT_005d891b * _DAT_005d8923) /
               (double)*(float *)&g_CGamePtr->field_0x284);
  }
  core_water_cpp_FUN_00585e60(g_CWaterPtr);
  if (*(int *)&g_CGamePtr->field_0x228 == 1) {
    _DAT_01cb8118 = wincore_winrun_cpp_FUN_0058e9e0();
  }
  core_fire_cpp_FUN_0049c430(0x01C3DEB4);
  unkafter_superopt_cpp_FUN_005a8180(g_CSimpleParticleSystemPtr);
  if (*(int *)&g_CGamePtr->field_0x228 == 1) {
    iVar3 = wincore_winrun_cpp_FUN_0058e9e0();
    engine_console_cpp_FUN_00436710
              (g_CConsolePtr,"G%s : %3.2f ms\n" + 1,"gFire->process()",
               ((double)(iVar3 - _DAT_01cb8118) * _DAT_005d8913 * _DAT_005d891b * _DAT_005d8923) /
               (double)*(float *)&g_CGamePtr->field_0x284);
  }
  if (*(int *)&g_CGamePtr->field_0x228 == 1) {
    _DAT_01cb8118 = wincore_winrun_cpp_FUN_0058e9e0();
  }
  core_event_cpp_FUN_004893d0(0x01C38BC0);
  if (*(int *)&g_CGamePtr->field_0x228 == 1) {
    iVar3 = wincore_winrun_cpp_FUN_0058e9e0();
    engine_console_cpp_FUN_00436710
              (g_CConsolePtr,"G%s : %3.2f ms\n" + 1,"gEventList->process()",
               ((double)(iVar3 - _DAT_01cb8118) * _DAT_005d8913 * _DAT_005d891b * _DAT_005d8923) /
               (double)*(float *)&g_CGamePtr->field_0x284);
  }
  core_terrain_cpp_CTerrain_process_FUN_0057b970(0x0265364C);
  core_weather_cpp_FUN_0058a660(0x02661F80);
  core_game_cpp_FUN_004b90d0();
  core_fldnotes_cpp_FUN_004a5f60();
  unkaddr_0059aa80_cpp_FUN_0059ac60();
  core_set_cpp_FUN_0052e940(g_CDemonSetPtr);
  if (*(int *)&g_CGamePtr->field_0x228 == 1) {
    _DAT_01cb8118 = wincore_winrun_cpp_FUN_0058e9e0();
  }
  core_mission_cpp_FUN_004fc940(0x01D182F0);
  if (*(int *)&g_CGamePtr->field_0x228 == 1) {
    iVar3 = wincore_winrun_cpp_FUN_0058e9e0();
    engine_console_cpp_FUN_00436710
              (g_CConsolePtr,"G%s : %3.2f ms\n" + 1,"gSit->process()",
               ((double)(iVar3 - _DAT_01cb8118) * _DAT_005d8913 * _DAT_005d891b * _DAT_005d8923) /
               (double)*(float *)&g_CGamePtr->field_0x284);
  }
  pCVar1 = g_CGamePtr;
  *(uint *)&this_ptr->field_0x258 = 0;
  if (*(int *)&pCVar1->field_0x228 != 0) {
    iVar3 = wincore_winrun_cpp_FUN_0058e9e0();
    engine_console_cpp_FUN_00436710
              (g_CConsolePtr,"simulate : %3.2f ms\n",
               ((double)(iVar3 - unaff_ESI) * _DAT_005d8913 * _DAT_005d891b * _DAT_005d8923) /
               (double)*(float *)&g_CGamePtr->field_0x284);
  }
  *(float *)&this_ptr->field_0x270 =
       *(float *)&this_ptr->field_0x284 + *(float *)&this_ptr->field_0x270;
  return;
}
