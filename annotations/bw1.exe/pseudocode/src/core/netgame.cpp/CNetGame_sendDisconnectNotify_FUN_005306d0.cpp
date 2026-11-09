// Name: core_netgame.cpp_CNetGame_sendDisconnectNotify_FUN_005306d0
// Address: 005306d0
// Address Range: [[005306d0, 00530703]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_sendDisconnectNotify_FUN_005306d0(CNetGame *this_ptr,SNetworkAddr *dest_addr,int payload)

#include "nocturne.h"

void __cdecl core_netgame_cpp_CNetGame_sendDisconnectNotify_FUN_005306d0(CNetGame *this_ptr,SNetworkAddr *dest_addr,int payload)

{
  uint local_10;
  byte local_c;
  int local_b;
  
  local_c = 0xd;
  local_b = payload;
  local_10 = 9;
  core_netgame_cpp_CNetGame_sendPacket_FUN_0052dfc0
            (this_ptr,dest_addr,(SNetPacketHeader *)&local_10);
  return;
}
