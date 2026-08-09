// Name: core_netgame.cpp_CNetGame_getMyControls_FUN_004eda40
// Address: 004eda40
// Address Range: [[004eda40, 004edaaa]]
// Convention: __cdecl
// Signature: SPlayerInput * __cdecl core_netgame_cpp_CNetGame_getMyControls_FUN_004eda40(CNetGame *this_ptr)

#include "nocturne.h"

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
  return &g_HeroActors[g_LocalHeroIndex]->player_input;
}
