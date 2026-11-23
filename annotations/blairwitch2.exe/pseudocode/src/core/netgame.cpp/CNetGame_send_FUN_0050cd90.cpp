// Name: core_netgame.cpp_CNetGame_send_FUN_0050cd90
// Address: 0050cd90
// Address Range: [[0050cd90, 0050cdea]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_send_FUN_0050cd90(CNetGame *this_ptr,int player_index,SNetPacketHeader *packet)

#include "nocturne.h"

void __cdecl core_netgame_cpp_CNetGame_send_FUN_0050cd90(CNetGame *this_ptr,int player_index,SNetPacketHeader *packet)

{
  if ((player_index < 0) || (this_ptr->player_count <= player_index)) {
    g_CurrentFilename = "..\\core\\netgame.cpp";
    g_CurrentLineNumber = 1477;
    core_main_c_displayErrorAndQuit_FUN_004e4500("CNetGame::send - invalid player index");
  }
  core_netgame_cpp_CNetGame_sendPacket_FUN_0050cdf0
            (this_ptr,&this_ptr->players[player_index].addr,packet);
  return;
}
