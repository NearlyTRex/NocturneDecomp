// Name: core_netgame.cpp_matchPacketHeader_FUN_00543ad0
// Address: 00543ad0
// Address Range: [[00543ad0, 00543af3]]
// Convention: __cdecl
// Signature: int __cdecl core_netgame_cpp_matchPacketHeader_FUN_00543ad0(SNetPacketHeader *a,SNetPacketHeader *b)

#include "nocturne.h"

int __cdecl core_netgame_cpp_matchPacketHeader_FUN_00543ad0(SNetPacketHeader *a,SNetPacketHeader *b)

{
  if ((*(short *)&b->type == *(short *)&a->type) && (a->size == b->size)) {
    return 1;
  }
  return 0;
}
