// Name: core_netgame.cpp_matchPacketSize_FUN_004edc30
// Address: 004edc30
// Address Range: [[004edc30, 004edc46]]
// Convention: __cdecl
// Signature: int __cdecl core_netgame_cpp_matchPacketSize_FUN_004edc30(SNetPacketHeader *a,SNetPacketHeader *b)

#include "nocturne.h"

int __cdecl core_netgame_cpp_matchPacketSize_FUN_004edc30(SNetPacketHeader *a,SNetPacketHeader *b)

{
  return (uint)(a->size == b->size);
}
