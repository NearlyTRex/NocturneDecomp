// Name: core_netgame.cpp_CNetGame_sendDisconnectNotify_FUN_0050f4b0
// Address: 0050f4b0
// Address Range: [[0050f4b0, 0050f4e3]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_sendDisconnectNotify_FUN_0050f4b0(CNetGame *this_ptr,SNetworkAddr *dest_addr,int payload)

#include "nocturne.h"

void __cdecl core_netgame_cpp_CNetGame_sendDisconnectNotify_FUN_0050f4b0(CNetGame *this_ptr,SNetworkAddr *dest_addr,int payload)

{
  SNetPacketHeader local_10;
  int local_b;
  
  local_10.type = PACKET_DISCONNECT;
  local_b = payload;
  local_10.size = 9;
  core_netgame_cpp_CNetGame_sendPacket_FUN_0050cdf0(this_ptr,dest_addr,&local_10);
  return;
}
