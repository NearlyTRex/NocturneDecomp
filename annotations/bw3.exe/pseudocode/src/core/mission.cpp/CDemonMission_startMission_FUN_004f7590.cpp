// Name: core_mission.cpp_CDemonMission_startMission_FUN_004f7590
// Address: 004f7590
// Address Range: [[004f7590, 004f76a1]]
// Convention: __cdecl
// Signature: int __cdecl core_mission_cpp_CDemonMission_startMission_FUN_004f7590(CDemonMission *this_ptr)

#include "nocturne.h"

int __cdecl core_mission_cpp_CDemonMission_startMission_FUN_004f7590(CDemonMission *this_ptr)

{
  CEventList *this_ptr_00;
  CGame *pCVar1;
  int clear_screen;
  char *pcVar2;
  
  if (g_HeroCount < 1) {
    pcVar2 = "Can't run mission - no heros";
  }
  else {
    if (g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14] != (CHero *)0x0) {
      core_mission_cpp_CDemonMission_prepareAllActors_FUN_004f6a80(this_ptr);
      (this_ptr->pending_teleport).area_id = -1;
      this_ptr_00 = g_CEventListPtr;
      (this_ptr->pending_teleport).position.z = 0.0;
      (this_ptr->pending_teleport).position.y = (this_ptr->pending_teleport).position.z;
      (this_ptr->pending_teleport).position.x = (this_ptr->pending_teleport).position.y;
      core_event_cpp_CEventList_reset_FUN_0048bfd0(this_ptr_00);
      pCVar1 = g_CGamePtr;
      g_CGamePtr->letterbox_mode = 0;
      pCVar1->end_timer = -1.0;
      core_mission_cpp_CDemonMission_loadSet_FUN_004f6de0
                (this_ptr,(g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]->base).base.location.area_id);
      clear_screen = 0;
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Loading script");
      core_level_cpp_CLevelLoader_update_FUN_004e0000(g_CLevelLoaderPtr,pcVar2,clear_screen);
      core_mission_cpp_CDemonMission_loadScript_FUN_004f63c0(this_ptr);
      core_script_cpp_CScript_initRuntime_FUN_005297a0(g_CScriptPtr);
      core_script_cpp_CScript_executeInitSection_FUN_00529920(g_CScriptPtr);
      core_setdir_cpp_CDemonSet_clearCameraSwitchCooldown_FUN_00540bc0(g_CDemonSetPtr);
      return 1;
    }
    pcVar2 = "Can't run mission - no local hero";
  }
  shape_edittool_cpp_CEditorTools_showError_FUN_0047cf40(g_CEditorToolsPtr,pcVar2);
  return 0;
}
