// Name: core_netgame.cpp_initNetPacket_FUN_004edc80
// Address: 004edc80
// Address Range: [[004edc80, 004edc91]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_initNetPacket_FUN_004edc80(SNetPacketHeader *packet,int packet_size,uchar packet_type)

#include "nocturne.h"

void __cdecl core_netgame_cpp_initNetPacket_FUN_004edc80(SNetPacketHeader *packet,int packet_size,uchar packet_type)

{
  packet->size = packet_size;
  packet->type = packet_type;
  return;
}
