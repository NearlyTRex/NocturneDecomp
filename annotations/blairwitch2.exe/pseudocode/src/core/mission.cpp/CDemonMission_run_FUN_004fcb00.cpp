// Name: core_mission.cpp_CDemonMission_run_FUN_004fcb00
// Address: 004fcb00
// Address Range: [[004fcb00, 004fccc2]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_run_FUN_004fcb00(CDemonMission *this_ptr)

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_run_FUN_004fcb00(CDemonMission *this_ptr)

{
  CHero *this_ptr_00;
  int iVar1;
  bool bVar2;
  
  while( true ) {
    if (g_INT_01cedee0 < 1) {
      g_CHAR_PTR_01d046a0 = "..\\core\\mission.cpp";
      g_INT_01d046a4 = 0x511;
      core_main_c_displayErrorAndQuit_FUN_004e4500("CDemonMission::run - hero list empty");
    }
    if (g_CHero_PTR_ARRAY_01cedee4[g_INT_01cedef4] == (CHero *)0x0) {
      g_CHAR_PTR_01d046a0 = "..\\core\\mission.cpp";
      g_INT_01d046a4 = 0x512;
      core_main_c_displayErrorAndQuit_FUN_004e4500("CDemonMission::run - no gLocalHero");
    }
    core_mission_cpp_CDemonMission_loadSet_FUN_004fc6b0
              (this_ptr,(g_CHero_PTR_ARRAY_01cedee4[g_INT_01cedef4]->base).base.location.area_id);
    g_CHAR_01d1c630 = '\0';
    core_mission_cpp_CDemonMission_buildActiveSetActorList_FUN_004fc820(this_ptr);
    iVar1 = core_game_cpp_CGame_runGameSession_FUN_004b6170(g_CGamePtr);
    this_ptr_00 = g_CHero_PTR_ARRAY_01cedee4[g_INT_01cedef4];
    core_mission_cpp_CDemonMission_removeActorFromList_FUN_004fc270
              (this_ptr,(CDemonActor *)this_ptr_00);
    (*(((this_ptr_00->base).base.vtable._uh)->_uh).reset)(this_ptr_00);
    core_mission_cpp_CDemonMission_clearMissionData_FUN_004fb450(this_ptr);
    if ((iVar1 == 0) || (g_CHAR_01d1c630 == '\0')) break;
    iVar1 = _stricmp(g_CDemonSetPtr->geometry_filename,"hq.geo");
    bVar2 = iVar1 != 0;
    if (bVar2) {
      iVar1 = -1;
    }
    else {
      iVar1 = 1;
    }
    core_level_cpp_CLevelLoader_show_FUN_004e1480(g_CLevelLoaderPtr,9,(uint)bVar2,iVar1);
    core_mission_cpp_CDemonMission_load_FUN_004fb490(this_ptr,&g_CHAR_01d1c630,0);
    iVar1 = core_mission_cpp_CDemonMission_createHeros_FUN_004fd0e0(this_ptr,&this_ptr_00->base);
    if (iVar1 == 0) goto LAB_004fcbce;
    iVar1 = core_mission_cpp_CDemonMission_startMission_FUN_004fce00(this_ptr);
    if (iVar1 == 0) goto LAB_004fcbce;
    if (bVar2) {
      wincore_wddvmem_cpp_swapBuffers_FUN_00589560();
      engine_2d_c_clearInputAndWait_FUN_004032b0();
    }
  }
  core_mission_cpp_CDemonMission_removeActor_FUN_004fc570(this_ptr,(CDemonActor *)this_ptr_00,1);
LAB_004fcbce:
  if (g_CGamePtr->act_completion_state == 0) {
    core_fldnotes_cpp_CFieldNotes_clear_FUN_004a50b0(g_CFieldNotesPtr);
    return;
  }
  core_game_cpp_CGame_finishAct_FUN_004bdfb0(g_CGamePtr);
  core_fldnotes_cpp_CFieldNotes_clear_FUN_004a50b0(g_CFieldNotesPtr);
  return;
}
