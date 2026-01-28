// Name: core_netgame.cpp_CNetGame_getMyControls_FUN_005438c0
// Address: 005438c0
// Address Range: [[005438c0, 0054392a]]
// Convention: __cdecl
// Signature: void ** __cdecl core_netgame_cpp_CNetGame_getMyControls_FUN_005438c0(CNetGame *this_ptr)

#include "nocturne.h"

void ** __cdecl core_netgame_cpp_CNetGame_getMyControls_FUN_005438c0(CNetGame *this_ptr)

{
  if (this_ptr->connection_type != 0) {
    if (this_ptr->local_player_index < 0) {
      g_CurrentFilename = "..\\core\\netgame.cpp";
      g_CurrentLineNumber = 0xa0f;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CNetGame::getMyControls - I'm not in the player list!");
    }
    return (void **)(this_ptr->players[this_ptr->local_player_index].unk1 + 0x14);
  }
  return (void **)g_HeroActors[g_LocalHeroIndex]->unk2;
}
