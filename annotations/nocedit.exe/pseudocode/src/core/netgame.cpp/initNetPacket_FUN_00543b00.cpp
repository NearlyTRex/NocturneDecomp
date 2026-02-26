// Name: core_netgame.cpp_initNetPacket_FUN_00543b00
// Address: 00543b00
// Address Range: [[00543b00, 00543b11]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_initNetPacket_FUN_00543b00(SNetPacketHeader *packet,int packet_size,uchar packet_type)

#include "nocturne.h"

void __cdecl core_netgame_cpp_initNetPacket_FUN_00543b00(SNetPacketHeader *packet,int packet_size,uchar packet_type)

{
  packet->size = packet_size;
  packet->type = packet_type;
  return;
}
