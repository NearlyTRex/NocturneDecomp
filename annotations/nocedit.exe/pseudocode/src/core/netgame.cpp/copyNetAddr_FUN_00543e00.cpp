// Name: core_netgame.cpp_copyNetAddr_FUN_00543e00
// Address: 00543e00
// Address Range: [[00543e00, 00543e14]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_copyNetAddr_FUN_00543e00(SNetworkAddr *dest,SNetworkAddr *src)

#include "nocturne.h"

void __cdecl core_netgame_cpp_copyNetAddr_FUN_00543e00(SNetworkAddr *dest,SNetworkAddr *src)

{
  dest->ip_address = src->ip_address;
  dest->port = src->port;
  return;
}
