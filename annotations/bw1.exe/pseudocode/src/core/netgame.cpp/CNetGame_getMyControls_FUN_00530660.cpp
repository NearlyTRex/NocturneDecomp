// Name: core_netgame.cpp_CNetGame_getMyControls_FUN_00530660
// Address: 00530660
// Address Range: [[00530660, 005306ca]]
// Convention: __cdecl
// Signature: SPlayerInput * __cdecl core_netgame_cpp_CNetGame_getMyControls_FUN_00530660(CNetGame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

SPlayerInput * __cdecl core_netgame_cpp_CNetGame_getMyControls_FUN_00530660(CNetGame *this_ptr)

{
  if (this_ptr->connection_type != CONNECTION_NONE) {
    if (this_ptr->local_player_index < 0) {
      _DAT_01d1d400 = "..\\core\\netgame.cpp";
      _DAT_01d1d404 = 0xa0f;
      core_main_c_FUN_005030e0("CNetGame::getMyControls - I'm not in the player list!");
    }
    return &this_ptr->players[this_ptr->local_player_index].player_input;
  }
  return (SPlayerInput *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0xc1d8);
}
