// Name: support_trisock.cpp_copyNetworkAddr_FUN_0057b7c0
// Address: 0057b7c0
// Address Range: [[0057b7c0, 0057b7d0]]
// Convention: __cdecl
// Signature: SNetworkAddr * __cdecl support_trisock_cpp_copyNetworkAddr_FUN_0057b7c0(SNetworkAddr *dest,SNetworkAddr *src)

#include "nocturne.h"

SNetworkAddr * __cdecl support_trisock_cpp_copyNetworkAddr_FUN_0057b7c0(SNetworkAddr *dest,SNetworkAddr *src)

{
  ushort uVar1;
  
  dest->ip_address = src->ip_address;
  uVar1 = src->padding;
  dest->port = src->port;
  dest->padding = uVar1;
  return dest;
}
