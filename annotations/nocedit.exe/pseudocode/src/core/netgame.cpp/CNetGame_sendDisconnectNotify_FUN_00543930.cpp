// Name: core_netgame.cpp_CNetGame_sendDisconnectNotify_FUN_00543930
// Address: 00543930
// Address Range: [[00543930, 00543963]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_sendDisconnectNotify_FUN_00543930(CNetGame *this_ptr,SNetworkAddr *dest_addr,int payload)

#include "nocturne.h"

void __cdecl core_netgame_cpp_CNetGame_sendDisconnectNotify_FUN_00543930(CNetGame *this_ptr,SNetworkAddr *dest_addr,int payload)

{
  SNetPacket_Simple local_10;
  
  local_10.header.type = PACKET_DISCONNECT;
  local_10.value = payload;
  local_10.header.size = 9;
  core_netgame_cpp_CNetGame_sendPacket_FUN_00541230(this_ptr,dest_addr,&local_10.header);
  return;
}
