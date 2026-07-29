// Name: core_netgame.cpp_matchPacketHeader_FUN_004edc50
// Address: 004edc50
// Address Range: [[004edc50, 004edc73]]
// Convention: __cdecl
// Signature: int __cdecl core_netgame_cpp_matchPacketHeader_FUN_004edc50(SNetPacketHeader *a,SNetPacketHeader *b)

#include "nocturne.h"

int __cdecl core_netgame_cpp_matchPacketHeader_FUN_004edc50(SNetPacketHeader *a,SNetPacketHeader *b)

{
  if ((*(short *)&b->type == *(short *)&a->type) && (a->size == b->size)) {
    return 1;
  }
  return 0;
}
