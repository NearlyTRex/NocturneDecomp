// Name: core_netgame.cpp_CNetGame_sendPacket_FUN_0050cdf0
// Address: 0050cdf0
// Address Range: [[0050cdf0, 0050ce15]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_sendPacket_FUN_0050cdf0(CNetGame *this_ptr,SNetworkAddr *dest_addr,SNetPacketHeader *packet)

#include "nocturne.h"

void __cdecl core_netgame_cpp_CNetGame_sendPacket_FUN_0050cdf0(CNetGame *this_ptr,SNetworkAddr *dest_addr,SNetPacketHeader *packet)

{
  support_trisock_cpp_CSocket_sendSocketData_FUN_005792e0
            ((CSocket *)&this_ptr->field_0x180,(char *)(packet + 4),*(int *)packet + -4,dest_addr);
  return;
}
