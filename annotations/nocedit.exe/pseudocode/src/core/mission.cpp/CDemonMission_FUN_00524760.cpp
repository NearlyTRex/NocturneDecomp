// Name: core_mission.cpp_CDemonMission_FUN_00524760
// Address: 00524760
// Address Range: [[00524760, 00524893]]
// Convention: __cdecl
// Signature: int __cdecl core_mission_cpp_CDemonMission_FUN_00524760(CDemonMission *this_ptr)

#include "nocturne.h"

int __cdecl core_mission_cpp_CDemonMission_FUN_00524760(CDemonMission *this_ptr)

{
  CEventList *this_ptr_00;
  char *text;
  int extraout_EAX;
  int clear_screen;
  
  if (g_HeroCount < 1) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Can't run mission - no heros");
    return 0;
  }
  if (g_HeroActors[g_LocalHeroIndex] != (CHero *)0x0) {
    core_mission_cpp_CDemonMission_prepareAllActors_FUN_00523cf0(this_ptr);
    (this_ptr->pending_teleport).area_id = -1;
    this_ptr_00 = g_CEventListPtr;
    (this_ptr->pending_teleport).position.z = 0.0;
    (this_ptr->pending_teleport).position.y = (this_ptr->pending_teleport).position.z;
    (this_ptr->pending_teleport).position.x = (this_ptr->pending_teleport).position.y;
    core_event_cpp_CEventList_reset_FUN_004aaa70(this_ptr_00);
    g_CGamePtr->letterbox_mode = 0;
    core_mission_cpp_CDemonMission_loadSet_FUN_00523fb0
              (this_ptr,(g_HeroActors[g_LocalHeroIndex]->base).base.location.area_id);
    clear_screen = 0;
    text = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Loading script");
    core_level_cpp_CLevelLoader_update_FUN_00504160(g_CLevelLoaderPtr,text,clear_screen);
    core_mission_cpp_CDemonMission_loadScript_FUN_005235b0(this_ptr,g_CGamePtr->is_loading);
    if (extraout_EAX == 0) {
      return 0;
    }
    core_script_cpp_CScript_FUN_0055a540(g_CScriptPtr);
    core_script_cpp_CScript_FUN_0055a6c0(g_CScriptPtr);
    core_setdir_cpp_CDemonSet_clearCameraSwitchCooldown_FUN_00575b20(g_CDemonSetPtr);
    return 1;
  }
  shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
            (g_CEditorToolsPtr,"Can't run mission - no local hero");
  return 0;
}
