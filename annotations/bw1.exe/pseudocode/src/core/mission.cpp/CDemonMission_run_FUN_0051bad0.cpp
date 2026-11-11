// Name: core_mission.cpp_CDemonMission_run_FUN_0051bad0
// Address: 0051bad0
// Address Range: [[0051bad0, 0051bc89]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_run_FUN_0051bad0(CDemonMission *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_mission_cpp_CDemonMission_run_FUN_0051bad0(CDemonMission *this_ptr)

{
  CHero *this_ptr_00;
  int iVar1;
  uint uVar2;
  
  while( true ) {
    if (_DAT_01d06aa0 < 1) {
      _DAT_01d1d400 = "..\\core\\mission.cpp";
      _DAT_01d1d404 = 0x520;
      core_main_c_FUN_005030e0("CDemonMission::run - hero list empty");
    }
    if (*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) == 0) {
      _DAT_01d1d400 = "..\\core\\mission.cpp";
      _DAT_01d1d404 = 0x521;
      core_main_c_FUN_005030e0("CDemonMission::run - no gLocalHero");
    }
    core_mission_cpp_FUN_0051b610
              (this_ptr,*(uint *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x2c));
    DAT_01d33b20 = '\0';
    core_mission_cpp_FUN_0051b7b0(this_ptr);
    iVar1 = core_game_cpp_CGame_runGameSession_FUN_004cf5e0(g_CGamePtr);
    this_ptr_00 = *(CHero **)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
    core_mission_cpp_FUN_0051b1d0(this_ptr,this_ptr_00);
    (*(((this_ptr_00->base).base.vtable._uh)->_uh).reset)(this_ptr_00);
    core_mission_cpp_FUN_0051a3b0(this_ptr);
    if ((iVar1 == 0) || (DAT_01d33b20 == '\0')) break;
    iVar1 = _stricmp(g_CDemonSetPtr->geometry_filename,"hq.geo");
    if (iVar1 != 0) {
      core_game_cpp_CGame_displayActStats_FUN_004d8700(g_CGamePtr);
      uVar2 = 0xffffffff;
    }
    else {
      uVar2 = 1;
    }
    core_level_cpp_FUN_004fe840(0x01D1BD1C,9,iVar1 != 0,uVar2);
    core_mission_cpp_CDemonMission_load_FUN_0051a3f0(this_ptr,&DAT_01d33b20,0);
    iVar1 = core_mission_cpp_CDemonMission_createHeros_FUN_0051c0a0(this_ptr,&this_ptr_00->base);
    if ((iVar1 == 0) || (iVar1 = core_mission_cpp_FUN_0051bdc0(this_ptr), iVar1 == 0))
    goto LAB_0051bb9a;
  }
  core_mission_cpp_CDemonMission_removeActor_FUN_0051b4d0(this_ptr,(CDemonActor *)this_ptr_00,1);
LAB_0051bb9a:
  if (g_CGamePtr->act_completion_state != 0) {
    core_game_cpp_CGame_finishAct_FUN_004d8a90(g_CGamePtr);
    core_fldnotes_cpp_CFieldNotes_clear_FUN_004bdaa0(g_CFieldNotesPtr);
    return;
  }
  core_fldnotes_cpp_CFieldNotes_clear_FUN_004bdaa0(g_CFieldNotesPtr);
  return;
}
