// Name: core_netgame.cpp_CNetGame_getMyControls_FUN_0050f430
// Address: 0050f430
// Address Range: [[0050f430, 0050f4a2]]
// Convention: __cdecl
// Signature: SPlayerInput * __cdecl core_netgame_cpp_CNetGame_getMyControls_FUN_0050f430(CNetGame *this_ptr)

#include "nocturne.h"

SPlayerInput * __cdecl core_netgame_cpp_CNetGame_getMyControls_FUN_0050f430(CNetGame *this_ptr)

{
  if (this_ptr->connection_type == CONNECTION_NONE) {
    return &g_CHero_PTR_ARRAY_01cedee4[g_INT_01cedef4]->player_input;
  }
  if (-1 < this_ptr->local_player_index) {
    return &this_ptr->players[this_ptr->local_player_index].player_input;
  }
  g_CHAR_PTR_01d046a0 = "..\\core\\netgame.cpp";
  g_INT_01d046a4 = 0xa0f;
  core_main_c_displayErrorAndQuit_FUN_004e4500("CNetGame::getMyControls - I'm not in the player list!");
  return &this_ptr->players[this_ptr->local_player_index].player_input;
}
