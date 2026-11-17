// Name: core_game.cpp_hostNetworkGame_FUN_004bd2f0
// Address: 004bd2f0
// Address Range: [[004bd2f0, 004bd39e]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_hostNetworkGame_FUN_004bd2f0(void)

#include "nocturne.h"

void __cdecl core_game_cpp_hostNetworkGame_FUN_004bd2f0(void)

{
  int iVar1;
  
  iVar1 = core_netgame_cpp_CNetGame_initializeNetworkToHost_FUN_0050b420(g_CNetGamePtr);
  if (iVar1 != 0) {
    iVar1 = shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_0047c970
                      (g_CEditorToolsPtr,"Select mission to play","world",
                       "*.msn",g_CNetGamePtr->mission_name,0);
    if (iVar1 != 0) {
      g_CurrentSaveFile[0] = '\0';
      while( true ) {
        iVar1 = core_netgame_cpp_CNetGame_runLobby_FUN_0050cf50(g_CNetGamePtr);
        if (iVar1 == 0) break;
        core_mission_cpp_CDemonMission_run_FUN_004fcb00(g_CDemonMission_PTR_00618170);
      }
    }
    core_netgame_cpp_CNetGame_disconnect_FUN_0050b8d0(g_CNetGamePtr,1);
    return;
  }
  core_netgame_cpp_CNetGame_disconnect_FUN_0050b8d0(g_CNetGamePtr,0);
  shape_edittool_cpp_CEditorTools_showError_FUN_0047be40
            (g_CEditorToolsPtr,"Can't init network to host game.");
  return;
}
