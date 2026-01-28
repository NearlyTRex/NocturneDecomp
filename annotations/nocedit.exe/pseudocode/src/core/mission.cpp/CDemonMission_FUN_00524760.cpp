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
    core_mission_cpp_CDemonMission_FUN_00523cf0(this_ptr);
    this_ptr->unk4[0x10] = -1;
    this_ptr_00 = g_CEventListPtr;
    this_ptr->unk4[0x11] = -1;
    this_ptr->unk4[0x12] = -1;
    this_ptr->unk4[0x13] = -1;
    this_ptr->unk4[0xc] = '\0';
    this_ptr->unk4[0xd] = '\0';
    this_ptr->unk4[0xe] = '\0';
    this_ptr->unk4[0xf] = '\0';
    *(uint *)(this_ptr->unk4 + 8) = *(uint *)(this_ptr->unk4 + 0xc);
    *(uint *)(this_ptr->unk4 + 4) = *(uint *)(this_ptr->unk4 + 8);
    core_event_cpp_CEventList_FUN_004aaa70(this_ptr_00);
    g_CGamePtr->letterbox_mode = 0;
    core_mission_cpp_CDemonMission_FUN_00523fb0(this_ptr);
    clear_screen = 0;
    text = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Loading script");
    core_level_cpp_CLevelLoader_update_FUN_00504160(g_CLevelLoaderPtr,text,clear_screen);
    core_mission_cpp_CDemonMission_FUN_005235b0(this_ptr);
    if (extraout_EAX == 0) {
      return 0;
    }
    core_script_cpp_FUN_0055a540();
    core_script_cpp_CScript_checkInitSection_FUN_0055a6c0();
    core_setdir_cpp_CDemonSet_clearCameraSwitchCooldown_FUN_00575b20(g_CDemonSetPtr);
    return 1;
  }
  shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
            (g_CEditorToolsPtr,"Can't run mission - no local hero");
  return 0;
}
