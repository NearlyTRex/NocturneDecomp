// Name: core_netgame.cpp_CNetGame_send_FUN_004eb350
// Address: 004eb350
// Address Range: [[004eb350, 004eb3b3]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_send_FUN_004eb350(CNetGame *this_ptr,int player_index,SNetPacketHeader *packet)

#include "nocturne.h"

void __cdecl core_netgame_cpp_CNetGame_send_FUN_004eb350(CNetGame *this_ptr,int player_index,SNetPacketHeader *packet)

{
  if ((player_index < 0) || (this_ptr->player_count <= player_index)) {
    g_CurrentFilename = "..\\core\\netgame.cpp";
    g_CurrentLineNumber = 1477;
    core_main_c_displayErrorAndQuit_FUN_004c8440("CNetGame::send - invalid player index");
  }
  core_netgame_cpp_CNetGame_sendPacket_FUN_004eb3c0
            (this_ptr,&this_ptr->players[player_index].addr,packet);
  return;
}
