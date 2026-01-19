// Name: core_game.cpp_FUN_004e2f10
// Address: 004e2f10
// Address Range: [[004e2f10, 004e2fbe]]
// Convention: unknown
// Signature: undefined core_game.cpp_FUN_004e2f10()

#include "nocturne.h"

void core_game_cpp_FUN_004e2f10(uint param_1,uint param_2,uint unaff_EBX)

{
  int iVar1;
  
  iVar1 = core_netgame_cpp_initializeNetworkToHost_FUN_0053f860();
  if (iVar1 != 0) {
    iVar1 = shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
                      (g_CEditorToolsPtr,"Select mission to play","world",
                       "*.msn",(int)g_CNetGameInstance->field7_0x118);
    if (iVar1 != 0) {
      g_CurrentSaveFile = '\0';
      while( true ) {
        iVar1 = core_netgame_cpp_FUN_00541390();
        if (iVar1 == 0) break;
        core_mission_cpp_CDemonMission_run_FUN_00524420(g_CDemonMissionPtr);
      }
    }
    core_netgame_cpp_CNetGame_FUN_0053fd00(g_CNetGameInstance);
    return;
  }
  core_netgame_cpp_CNetGame_FUN_0053fd00(g_CNetGameInstance);
  shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
            (g_CEditorToolsPtr,"Can't init network to host game.",unaff_EBX);
  return;
}
