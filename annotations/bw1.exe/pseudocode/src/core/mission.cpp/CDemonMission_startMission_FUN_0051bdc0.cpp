// Name: core_mission.cpp_CDemonMission_startMission_FUN_0051bdc0
// Address: 0051bdc0
// Address Range: [[0051bdc0, 0051bec7]]
// Convention: __cdecl
// Signature: int __cdecl core_mission_cpp_CDemonMission_startMission_FUN_0051bdc0(CDemonMission *this_ptr)

#include "nocturne.h"

int __cdecl core_mission_cpp_CDemonMission_startMission_FUN_0051bdc0(CDemonMission *this_ptr)

{
  CEventList *this_ptr_00;
  int clear_screen;
  char *pcVar1;
  
  if (g_HeroCount < 1) {
    pcVar1 = "Can't run mission - no heros";
  }
  else {
    if (g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4] != (CHero *)0x0) {
      core_mission_cpp_CDemonMission_prepareAllActors_FUN_0051b2b0(this_ptr);
      (this_ptr->pending_teleport).area_id = -1;
      this_ptr_00 = g_CEventListPtr;
      (this_ptr->pending_teleport).position.z = 0.0;
      (this_ptr->pending_teleport).position.y = (this_ptr->pending_teleport).position.z;
      (this_ptr->pending_teleport).position.x = (this_ptr->pending_teleport).position.y;
      core_event_cpp_CEventList_reset_FUN_004a19f0(this_ptr_00);
      g_CGamePtr->letterbox_mode = 0;
      core_mission_cpp_CDemonMission_loadSet_FUN_0051b610
                (this_ptr,(g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4]->base).base.location.area_id);
      clear_screen = 0;
      pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Loading script");
      core_level_cpp_CLevelLoader_update_FUN_004fe9c0(g_CLevelLoaderPtr,pcVar1,clear_screen);
      core_mission_cpp_CDemonMission_loadScript_FUN_0051abf0(this_ptr);
      core_script_cpp_CScript_initRuntime_FUN_00544190(g_CScriptPtr);
      core_script_cpp_CScript_executeInitSection_FUN_00544310(g_CScriptPtr);
      core_setdir_cpp_CDemonSet_clearCameraSwitchCooldown_FUN_0055b200(g_CDemonSetPtr);
      return 1;
    }
    pcVar1 = "Can't run mission - no local hero";
  }
  shape_edittool_cpp_CEditorTools_showError_FUN_004943a0(g_CEditorToolsPtr,pcVar1);
  return 0;
}
