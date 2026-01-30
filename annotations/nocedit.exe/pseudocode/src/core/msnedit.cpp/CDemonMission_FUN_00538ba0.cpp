// Name: core_msnedit.cpp_CDemonMission_FUN_00538ba0
// Address: 00538ba0
// Address Range: [[00538ba0, 00538d5c]]
// Convention: __cdecl
// Signature: void __cdecl core_msnedit_cpp_CDemonMission_FUN_00538ba0(CDemonMission *this_ptr)

#include "nocturne.h"

void __cdecl core_msnedit_cpp_CDemonMission_FUN_00538ba0(CDemonMission *this_ptr)

{
  CEditorTools *this_ptr_00;
  int iVar1;
  char local_11c [260];
  char local_18 [4];
  char acStack_14 [4];
  char acStack_10 [4];
  char cStack_c;
  
  if (0 < (int)this_ptr->set_list) {
    local_18 = (char  [4])"$PLAYMSN.TMP"._0_4_;
    acStack_14 = (char  [4])"$PLAYMSN.TMP"._4_4_;
    acStack_10 = (char  [4])"$PLAYMSN.TMP"._8_4_;
    cStack_c = "$PLAYMSN.TMP"[0xc];
    shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
              (g_CEditorToolsPtr,"Backing up to %s...");
    core_mission_cpp_CDemonMission_save_FUN_00522e30(this_ptr);
    this_ptr->unk1[4] = '\0';
    this_ptr->unk1[5] = '\0';
    this_ptr->unk1[6] = '\0';
    this_ptr->unk1[7] = '\0';
    iVar1 = core_mission_cpp_CDemonMission_createHeros_FUN_00524a80(this_ptr,0);
    if (iVar1 != 0) {
      shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                (g_CEditorToolsPtr,"Preparing actors...");
      core_mission_cpp_CDemonMission_FUN_00523cf0(this_ptr);
      shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                (g_CEditorToolsPtr,"Preparing set...");
      this_ptr->unk1[0] = -1;
      this_ptr->unk1[1] = -1;
      this_ptr->unk1[2] = -1;
      this_ptr->unk1[3] = -1;
      core_mission_cpp_CDemonMission_FUN_00523fb0(this_ptr);
      shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                (g_CEditorToolsPtr,"Preparing...");
      core_event_cpp_CEventList_FUN_004b0460(g_CEventListPtr);
      iVar1 = core_mission_cpp_CDemonMission_FUN_00524760(this_ptr);
      if (iVar1 != 0) {
        core_mission_cpp_CDemonMission_buildActiveSetActorList_FUN_00524120(this_ptr);
        shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                  (g_CEditorToolsPtr,"Running...");
        core_game_cpp_CGame_runGameSession_FUN_004daf80(g_CGamePtr);
      }
    }
    this_ptr_00 = g_CEditorToolsPtr;
    g_EditorFont = g_SmallEditorFont;
    this_ptr->unk1[4] = '\x01';
    this_ptr->unk1[5] = '\0';
    this_ptr->unk1[6] = '\0';
    this_ptr->unk1[7] = '\0';
    shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
              (this_ptr_00,"Reloading mission from %s");
    core_mission_cpp_CDemonMission_load_FUN_00522d90(this_ptr,local_18,1);
    sprintf(local_11c,"world\\%s",local_18);
    remove(local_11c);
    core_event_cpp_CEventList_FUN_004b0460(g_CEventListPtr);
    return;
  }
  shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
            (g_CEditorToolsPtr,"No sets to walk around!");
  return;
}
