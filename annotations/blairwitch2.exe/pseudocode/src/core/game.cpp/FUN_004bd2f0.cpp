// Name: core_game.cpp_FUN_004bd2f0
// Address: 004bd2f0
// Address Range: [[004bd2f0, 004bd39e]]
// Convention: unknown
// Signature: void core_game_cpp_FUN_004bd2f0(void)

#include "nocturne.h"

void core_game_cpp_FUN_004bd2f0(void)

{
  int iVar1;
  
  iVar1 = core_netgame_cpp_FUN_0050b420(g_CNetGamePtr);
  if (iVar1 != 0) {
    iVar1 = shape_edittool_cpp_FUN_0047c970
                      (g_CEditorToolsPtr,"Select mission to play","world",
                       (char *)0x5d87eb,&g_CNetGamePtr->field_0x128,0);
    if (iVar1 != 0) {
      DAT_01cb7b50 = 0;
      while( true ) {
        iVar1 = core_netgame_cpp_CNetGame_runLobby_FUN_0050cf50(g_CNetGamePtr);
        if (iVar1 == 0) break;
        core_mission_cpp_CDemonMission_run_FUN_004fcb00(0x01D182F0);
      }
    }
    core_netgame_cpp_FUN_0050b8d0(g_CNetGamePtr,1);
    return;
  }
  core_netgame_cpp_FUN_0050b8d0(g_CNetGamePtr,0);
  shape_edittool_cpp_FUN_0047be40(g_CEditorToolsPtr,"Can't init network to host game.");
  return;
}
