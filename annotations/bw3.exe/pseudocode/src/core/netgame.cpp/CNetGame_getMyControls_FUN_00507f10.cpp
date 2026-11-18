// Name: core_netgame.cpp_CNetGame_getMyControls_FUN_00507f10
// Address: 00507f10
// Address Range: [[00507f10, 00507f82]]
// Convention: __cdecl
// Signature: SPlayerInput * __cdecl core_netgame_cpp_CNetGame_getMyControls_FUN_00507f10(CNetGame *this_ptr)

#include "nocturne.h"

SPlayerInput * __cdecl core_netgame_cpp_CNetGame_getMyControls_FUN_00507f10(CNetGame *this_ptr)

{
  if (this_ptr->connection_type == CONNECTION_NONE) {
    return &g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]->player_input;
  }
  if (-1 < this_ptr->local_player_index) {
    return &this_ptr->players[this_ptr->local_player_index].player_input;
  }
  g_CHAR_PTR_01d71de0 = "..\\core\\netgame.cpp";
  g_INT_01d71de4 = 0xa0f;
  core_main_c_displayErrorAndQuit_FUN_004e4330("CNetGame::getMyControls - I'm not in the player list!");
  return &this_ptr->players[this_ptr->local_player_index].player_input;
}
