// Name: support_trisock.cpp_createNetworkAddr_FUN_005e1940
// Address: 005e1940
// Address Range: [[005e1940, 005e1954]]
// Convention: __cdecl
// Signature: void support_trisock.cpp_createNetworkAddr_FUN_005e1940(SNetworkAddr * dest_addr, uint32_t * ip_address_ptr, uint16_t port)

#include "nocturne.h"

void __cdecl
support_trisock_cpp_createNetworkAddr_FUN_005e1940
          (SNetworkAddr *dest_addr,uint32_t *ip_address_ptr,uint16_t port)

{
  dest_addr->ip_address = *ip_address_ptr;
  dest_addr->port = port;
  return;
}
