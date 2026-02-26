// Name: core_netgame.cpp_CNetGame_send_FUN_005411c0
// Address: 005411c0
// Address Range: [[005411c0, 00541223]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_send_FUN_005411c0(CNetGame *this_ptr,int player_index)

#include "nocturne.h"

void __cdecl core_netgame_cpp_CNetGame_send_FUN_005411c0(CNetGame *this_ptr,int player_index)

{
  SNetPacketHeader *in_stack_0000000c;
  
  if ((player_index < 0) || (this_ptr->player_count <= player_index)) {
    g_CurrentFilename = "..\\core\\netgame.cpp";
    g_CurrentLineNumber = 0x5c5;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CNetGame::send - invalid player index");
  }
  core_netgame_cpp_CNetGame_sendPacket_FUN_00541230
            (this_ptr,&this_ptr->players[player_index].addr,in_stack_0000000c);
  return;
}
