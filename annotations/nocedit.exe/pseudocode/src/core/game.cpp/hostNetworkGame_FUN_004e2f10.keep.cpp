// Name: core_game.cpp_hostNetworkGame_FUN_004e2f10
// Address: 004e2f10
// MANUAL RECONSTRUCTION
// Address Range: [[004e2f10, 004e2fbe]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_hostNetworkGame_FUN_004e2f10(void)

#include "nocturne.h"

void __cdecl core_game_cpp_hostNetworkGame_FUN_004e2f10(void)

{
  int iVar1;
#if !NOCTURNE_AUTHENTIC_CHAPTER_SELECT
  char picked_mission [sizeof(g_CNetGamePtr->mission_name)];
  int use_file_dialog;

  use_file_dialog = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LCONTROL);
  if ((use_file_dialog == 0) &&
      (nocturne_chapter_pick_mission(picked_mission,(int)sizeof(picked_mission)) == 0)) {
    return;
  }
#endif

  iVar1 = core_netgame_cpp_CNetGame_initializeNetworkToHost_FUN_0053f860(g_CNetGamePtr);
  if (iVar1 != 0) {
#if NOCTURNE_AUTHENTIC_CHAPTER_SELECT
    iVar1 = shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
                      (g_CEditorToolsPtr,"Select mission to play","world",
                       "*.msn",g_CNetGamePtr->mission_name,0);
#else
    if (use_file_dialog != 0) {
      iVar1 = shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
                        (g_CEditorToolsPtr,"Select mission to play","world",
                         "*.msn",g_CNetGamePtr->mission_name,0);
    }
    else {
      strcpy(g_CNetGamePtr->mission_name,picked_mission);
      iVar1 = 1;
    }
#endif
    if (iVar1 != 0) {
      g_CurrentSaveFile[0] = '\0';
      while( true ) {
        iVar1 = core_netgame_cpp_CNetGame_runLobby_FUN_00541390(g_CNetGamePtr);
        if (iVar1 == 0) break;
        core_mission_cpp_CDemonMission_run_FUN_00524420(g_CDemonMissionPtr);
      }
    }
    core_netgame_cpp_CNetGame_disconnect_FUN_0053fd00(g_CNetGamePtr,1);
    return;
  }
  core_netgame_cpp_CNetGame_disconnect_FUN_0053fd00(g_CNetGamePtr,0);
  shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
            (g_CEditorToolsPtr,"Can't init network to host game.");
  return;
}
