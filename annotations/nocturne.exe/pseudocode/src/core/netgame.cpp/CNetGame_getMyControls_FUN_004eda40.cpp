// Name: core_netgame.cpp_CNetGame_getMyControls_FUN_004eda40
// Address: 004eda40
// Address Range: [[004eda40, 004edaaa]]
// Convention: __cdecl
// Signature: SPlayerInput * __cdecl core_netgame_cpp_CNetGame_getMyControls_FUN_004eda40(CNetGame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

SPlayerInput * __cdecl core_netgame_cpp_CNetGame_getMyControls_FUN_004eda40(CNetGame *this_ptr)

{
  if (this_ptr->connection_type != CONNECTION_NONE) {
    if (this_ptr->local_player_index < 0) {
      g_CurrentFilename = "..\\core\\netgame.cpp";
      g_CurrentLineNumber = 2575;
      core_main_c_displayErrorAndQuit_FUN_004c8440("CNetGame::getMyControls - I'm not in the player list!");
    }
    return &this_ptr->players[this_ptr->local_player_index].player_input;
  }
  return (SPlayerInput *)(*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) + 0xbc94);
}
