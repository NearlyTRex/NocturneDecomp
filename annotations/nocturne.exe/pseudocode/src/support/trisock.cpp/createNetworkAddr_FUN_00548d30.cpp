// Name: support_trisock.cpp_createNetworkAddr_FUN_00548d30
// Address: 00548d30
// Address Range: [[00548d30, 00548d44]]
// Convention: __cdecl
// Signature: SNetworkAddr * __cdecl support_trisock_cpp_createNetworkAddr_FUN_00548d30(SNetworkAddr *dest_addr,uint32_t *ip_address_ptr,uint16_t port)

#include "nocturne.h"

SNetworkAddr * __cdecl support_trisock_cpp_createNetworkAddr_FUN_00548d30(SNetworkAddr *dest_addr,uint32_t *ip_address_ptr,uint16_t port)

{
  dest_addr->ip_address = *ip_address_ptr;
  dest_addr->port = port;
  return dest_addr;
}
