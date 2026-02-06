// Name: core_game.cpp_hostNetworkGame_FUN_004e2f10
// Address: 004e2f10
// Address Range: [[004e2f10, 004e2fbe]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_hostNetworkGame_FUN_004e2f10(void)

#include "nocturne.h"

void __cdecl core_game_cpp_hostNetworkGame_FUN_004e2f10(void)

{
  int iVar1;
  
  iVar1 = core_netgame_cpp_CNetGame_initializeNetworkToHost_FUN_0053f860(g_CNetGamePtr);
  if (iVar1 != 0) {
    iVar1 = shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
                      (g_CEditorToolsPtr,"Select mission to play","world",
                       "*.msn",(int)g_CNetGamePtr->unk);
    if (iVar1 != 0) {
      g_CurrentSaveFile = '\0';
      while( true ) {
        iVar1 = core_netgame_cpp_CNetGame_FUN_00541390(g_CNetGamePtr);
        if (iVar1 == 0) break;
        core_mission_cpp_CDemonMission_run_FUN_00524420(g_CDemonMissionPtr);
      }
    }
    core_netgame_cpp_CNetGame_FUN_0053fd00(g_CNetGamePtr);
    return;
  }
  core_netgame_cpp_CNetGame_FUN_0053fd00(g_CNetGamePtr);
  shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
            (g_CEditorToolsPtr,"Can't init network to host game.");
  return;
}
