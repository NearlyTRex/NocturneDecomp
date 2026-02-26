// Name: core_netgame.cpp_matchPacketSize_FUN_00543ab0
// Address: 00543ab0
// Address Range: [[00543ab0, 00543ac6]]
// Convention: __cdecl
// Signature: int __cdecl core_netgame_cpp_matchPacketSize_FUN_00543ab0(SNetPacketHeader *a,SNetPacketHeader *b)

#include "nocturne.h"

int __cdecl core_netgame_cpp_matchPacketSize_FUN_00543ab0(SNetPacketHeader *a,SNetPacketHeader *b)

{
  return (uint)(a->size == b->size);
}
