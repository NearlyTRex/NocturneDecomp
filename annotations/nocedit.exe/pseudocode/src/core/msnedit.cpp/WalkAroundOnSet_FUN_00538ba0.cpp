// Name: core_msnedit.cpp_WalkAroundOnSet_FUN_00538ba0
// Address: 00538ba0
// Address Range: [[00538ba0, 00538d5c]]
// Convention: unknown
// Signature: undefined core_msnedit.cpp_WalkAroundOnSet_FUN_00538ba0()

#include "nocturne.h"

/* Signature: byte core_msnedit.cpp_WalkAroundOnSet(uint param_1) */

void core_msnedit_cpp_WalkAroundOnSet_FUN_00538ba0(void)

{
  CEditorTools *this_ptr;
  int iVar1;
  CDemonMission *in_stack_00000004;
  char local_11c [260];
  char local_18 [4];
  char acStack_14 [4];
  char acStack_10 [4];
  char cStack_c;
  
  if (0 < (int)in_stack_00000004->set_list) {
    local_18 = (char  [4])"$PLAYMSN.TMP"._0_4_;
    acStack_14 = (char  [4])"$PLAYMSN.TMP"._4_4_;
    acStack_10 = (char  [4])"$PLAYMSN.TMP"._8_4_;
    cStack_c = "$PLAYMSN.TMP"[0xc];
    shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
              (g_CEditorToolsPtr,"Backing up to %s...");
    core_mission_cpp_CDemonMission_save_FUN_00522e30(in_stack_00000004);
    in_stack_00000004->field0_0x0[4] = '\0';
    in_stack_00000004->field0_0x0[5] = '\0';
    in_stack_00000004->field0_0x0[6] = '\0';
    in_stack_00000004->field0_0x0[7] = '\0';
    iVar1 = core_mission_cpp_CDemonMission_createHeros_FUN_00524a80(in_stack_00000004,0);
    if (iVar1 != 0) {
      shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                (g_CEditorToolsPtr,"Preparing actors...");
      core_mission_cpp_CDemonMission_FUN_00523cf0(in_stack_00000004);
      shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                (g_CEditorToolsPtr,"Preparing set...");
      in_stack_00000004->field0_0x0[0] = -1;
      in_stack_00000004->field0_0x0[1] = -1;
      in_stack_00000004->field0_0x0[2] = -1;
      in_stack_00000004->field0_0x0[3] = -1;
      core_mission_cpp_CDemonMission_FUN_00523fb0(in_stack_00000004);
      shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                (g_CEditorToolsPtr,"Preparing...");
      core_event_cpp_CEventList_FUN_004b0460(g_CEventListPtr);
      iVar1 = core_mission_cpp_CDemonMission_FUN_00524760(in_stack_00000004);
      if (iVar1 != 0) {
        core_mission_cpp_CDemonMission_buildActiveSetActorList_FUN_00524120(in_stack_00000004);
        shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                  (g_CEditorToolsPtr,"Running...");
        core_game_cpp_CGame_runGameSession_FUN_004daf80(g_CGamePtr);
      }
    }
    this_ptr = g_CEditorToolsPtr;
    g_EditorFont = g_SmallEditorFont;
    in_stack_00000004->field0_0x0[4] = '\x01';
    in_stack_00000004->field0_0x0[5] = '\0';
    in_stack_00000004->field0_0x0[6] = '\0';
    in_stack_00000004->field0_0x0[7] = '\0';
    shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
              (this_ptr,"Reloading mission from %s");
    core_mission_cpp_CDemonMission_load_FUN_00522d90(in_stack_00000004,local_18,1);
    crt_stdio_c_sprintf_FUN_005fdbd0(local_11c,"world\\%s",local_18);
    crt_io_c_deleteFile_FUN_005ff9d0(local_11c);
    core_event_cpp_CEventList_FUN_004b0460(g_CEventListPtr);
    return;
  }
  shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
            (g_CEditorToolsPtr,"No sets to walk around!");
  return;
}
