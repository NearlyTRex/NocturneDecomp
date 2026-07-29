// Name: core_netgame.cpp_copyNetAddr_FUN_004edf80
// Address: 004edf80
// Address Range: [[004edf80, 004edf94]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_copyNetAddr_FUN_004edf80(SNetworkAddr *dest,SNetworkAddr *src)

#include "nocturne.h"

void __cdecl core_netgame_cpp_copyNetAddr_FUN_004edf80(SNetworkAddr *dest,SNetworkAddr *src)

{
  dest->ip_address = src->ip_address;
  dest->port = src->port;
  return;
}
