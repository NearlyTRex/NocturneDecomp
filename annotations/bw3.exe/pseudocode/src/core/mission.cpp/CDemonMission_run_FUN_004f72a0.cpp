// Name: core_mission.cpp_CDemonMission_run_FUN_004f72a0
// Address: 004f72a0
// Address Range: [[004f72a0, 004f7459]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_run_FUN_004f72a0(CDemonMission *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_mission_cpp_CDemonMission_run_FUN_004f72a0(CDemonMission *this_ptr)

{
  CCharacter *existing_hero;
  int iVar1;
  uint uVar2;
  
  while( true ) {
    if (_DAT_01d5ba00 < 1) {
      _DAT_01d71de0 = "..\\core\\mission.cpp";
      _DAT_01d71de4 = 0x520;
      core_main_c_FUN_004e4330("CDemonMission::run - hero list empty");
    }
    if (*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) == 0) {
      _DAT_01d71de0 = "..\\core\\mission.cpp";
      _DAT_01d71de4 = 0x521;
      core_main_c_FUN_004e4330("CDemonMission::run - no gLocalHero");
    }
    core_mission_cpp_FUN_004f6de0
              (this_ptr,*(uint *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x2c));
    DAT_01d882a0 = '\0';
    core_mission_cpp_FUN_004f6f80(this_ptr);
    iVar1 = core_game_cpp_CGame_runGameSession_FUN_004b7f90(g_CGamePtr);
    existing_hero = *(CCharacter **)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
    core_mission_cpp_FUN_004f69a0(this_ptr,existing_hero);
    (*(((existing_hero->base).vtable._uh)->_uh).reset)((CHero *)existing_hero);
    core_mission_cpp_FUN_004f5b80(this_ptr);
    if ((iVar1 == 0) || (DAT_01d882a0 == '\0')) break;
    iVar1 = _stricmp(g_CDemonSetPtr->geometry_filename,"hq.geo");
    if (iVar1 != 0) {
      core_game_cpp_CGame_displayActStats_FUN_004bfb50(g_CGamePtr);
      uVar2 = 0xffffffff;
    }
    else {
      uVar2 = 1;
    }
    core_level_cpp_FUN_004dfc50(0x01D70AB8,9,iVar1 != 0,uVar2);
    core_mission_cpp_CDemonMission_load_FUN_004f5bc0(this_ptr,&DAT_01d882a0,0);
    iVar1 = core_mission_cpp_CDemonMission_createHeros_FUN_004f7880(this_ptr,existing_hero);
    if ((iVar1 == 0) || (iVar1 = core_mission_cpp_FUN_004f7590(this_ptr), iVar1 == 0))
    goto LAB_004f736a;
  }
  core_mission_cpp_CDemonMission_removeActor_FUN_004f6ca0(this_ptr,&existing_hero->base,1);
LAB_004f736a:
  if (*(int *)&g_CGamePtr->field_0x284 != 0) {
    core_game_cpp_CGame_finishAct_FUN_004bfee0(g_CGamePtr);
    core_fldnotes_cpp_FUN_004ab7a0(g_CFieldNotesPtr);
    return;
  }
  core_fldnotes_cpp_FUN_004ab7a0(g_CFieldNotesPtr);
  return;
}
