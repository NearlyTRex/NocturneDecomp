// Name: core_netgame.cpp_CNetGame_sendPacket_FUN_005058d0
// Address: 005058d0
// Address Range: [[005058d0, 005058f5]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_sendPacket_FUN_005058d0(CNetGame *this_ptr,SNetworkAddr *dest_addr,SNetPacketHeader *packet)

#include "nocturne.h"

void __cdecl core_netgame_cpp_CNetGame_sendPacket_FUN_005058d0(CNetGame *this_ptr,SNetworkAddr *dest_addr,SNetPacketHeader *packet)

{
  support_trisock_cpp_CSocket_sendSocketData_FUN_0056fbb0
            (&this_ptr->socket,(char *)&packet->type,packet->size + -4,dest_addr);
  return;
}
