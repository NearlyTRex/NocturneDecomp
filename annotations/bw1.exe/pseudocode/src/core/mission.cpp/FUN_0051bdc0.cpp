// Name: core_mission.cpp_FUN_0051bdc0
// Address: 0051bdc0
// Address Range: [[0051bdc0, 0051bec7]]
// Convention: __cdecl
// Signature: int __cdecl core_mission_cpp_FUN_0051bdc0(CDemonMission *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_mission_cpp_FUN_0051bdc0(CDemonMission *this_ptr)

{
  CEventList *this_ptr_00;
  int clear_screen;
  char *pcVar1;
  
  if (_DAT_01d06aa0 < 1) {
    pcVar1 = "Can't run mission - no heros";
  }
  else {
    if (*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) != 0) {
      core_mission_cpp_CDemonMission_prepareAllActors_FUN_0051b2b0(this_ptr);
      (this_ptr->pending_teleport).area_id = -1;
      this_ptr_00 = 0x01C51D80;
      (this_ptr->pending_teleport).position.z = 0.0;
      (this_ptr->pending_teleport).position.y = (this_ptr->pending_teleport).position.z;
      (this_ptr->pending_teleport).position.x = (this_ptr->pending_teleport).position.y;
      core_event_cpp_CEventList_reset_FUN_004a19f0(this_ptr_00);
      g_CGamePtr->letterbox_mode = 0;
      core_mission_cpp_FUN_0051b610
                (this_ptr,*(uint *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x2c));
      clear_screen = 0;
      pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Loading script");
      core_level_cpp_CLevelLoader_update_FUN_004fe9c0(0x01D1BD1C,pcVar1,clear_screen);
      core_mission_cpp_FUN_0051abf0(this_ptr);
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
