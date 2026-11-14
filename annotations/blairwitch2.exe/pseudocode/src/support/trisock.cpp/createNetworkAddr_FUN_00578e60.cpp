// Name: support_trisock.cpp_createNetworkAddr_FUN_00578e60
// Address: 00578e60
// Address Range: [[00578e60, 00578e72]]
// Convention: __cdecl
// Signature: void __cdecl support_trisock_cpp_createNetworkAddr_FUN_00578e60(SNetworkAddr *dest_addr,uint32_t *ip_address_ptr,uint16_t port)

#include "nocturne.h"

void __cdecl support_trisock_cpp_createNetworkAddr_FUN_00578e60(SNetworkAddr *dest_addr,uint32_t *ip_address_ptr,uint16_t port)

{
  dest_addr->ip_address = (uint)ip_address_ptr;
  dest_addr->port = port;
  return;
}
