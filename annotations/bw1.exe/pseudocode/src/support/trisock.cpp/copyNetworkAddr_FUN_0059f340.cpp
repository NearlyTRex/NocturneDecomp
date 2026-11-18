// Name: support_trisock.cpp_copyNetworkAddr_FUN_0059f340
// Address: 0059f340
// Address Range: [[0059f340, 0059f350]]
// Convention: __cdecl
// Signature: SNetworkAddr * __cdecl support_trisock_cpp_copyNetworkAddr_FUN_0059f340(SNetworkAddr *dest,SNetworkAddr *src)

#include "nocturne.h"

SNetworkAddr * __cdecl support_trisock_cpp_copyNetworkAddr_FUN_0059f340(SNetworkAddr *dest,SNetworkAddr *src)

{
  ushort uVar1;
  
  dest->ip_address = src->ip_address;
  uVar1 = src->padding;
  dest->port = src->port;
  dest->padding = uVar1;
  return dest;
}
