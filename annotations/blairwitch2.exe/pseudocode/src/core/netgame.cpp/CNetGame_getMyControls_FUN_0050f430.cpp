// Name: core_netgame.cpp_CNetGame_getMyControls_FUN_0050f430
// Address: 0050f430
// Address Range: [[0050f430, 0050f4a2]]
// Convention: __cdecl
// Signature: SPlayerInput * __cdecl core_netgame_cpp_CNetGame_getMyControls_FUN_0050f430(CNetGame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

SPlayerInput * __cdecl core_netgame_cpp_CNetGame_getMyControls_FUN_0050f430(CNetGame *this_ptr)

{
  if (this_ptr->connection_type == CONNECTION_NONE) {
    return (SPlayerInput *)(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x10a68);
  }
  if (-1 < this_ptr->local_player_index) {
    return (SPlayerInput *)&this_ptr->players[this_ptr->local_player_index].field_0x4c;
  }
  _DAT_01d046a0 = "..\\core\\netgame.cpp";
  _DAT_01d046a4 = 0xa0f;
  core_main_c_FUN_004e4500("CNetGame::getMyControls - I'm not in the player list!");
  return (SPlayerInput *)&this_ptr->players[this_ptr->local_player_index].field_0x4c;
}
