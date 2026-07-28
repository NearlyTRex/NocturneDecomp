// Name: core_netgame.cpp_CNetGame_sendPacket_FUN_004eb3c0
// Address: 004eb3c0
// Address Range: [[004eb3c0, 004eb3e5]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_sendPacket_FUN_004eb3c0(CNetGame *this_ptr,SNetworkAddr *dest_addr,SNetPacketHeader *packet)

#include "nocturne.h"

void __cdecl core_netgame_cpp_CNetGame_sendPacket_FUN_004eb3c0(CNetGame *this_ptr,SNetworkAddr *dest_addr,SNetPacketHeader *packet)

{
  support_trisock_cpp_performSocketOperation_FUN_00549090
            (&this_ptr->socket,(char *)&packet->type,packet->size + -4,dest_addr);
  return;
}
