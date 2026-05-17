// Name: support_trisock.cpp_buildSockaddrIn_FUN_005e19d0
// Address: 005e19d0
// MANUAL RECONSTRUCTION
// Address Range: [[005e19d0, 005e1a26] [00604f58, 00604f7a]]
// Convention: __stack_esi
// Signature: SOCKADDR_IN * __stack_esi support_trisock_cpp_buildSockaddrIn_FUN_005e19d0(SNetworkAddr *net_addr,SOCKADDR_IN *dest_buffer)

#include "nocturne.h"

SOCKADDR_IN * __stack_esi support_trisock_cpp_buildSockaddrIn_FUN_005e19d0(SNetworkAddr *net_addr,SOCKADDR_IN *dest_buffer)

{
  dest_buffer->sin_family = 2;
  dest_buffer->sin_port = htons(net_addr->port);
  dest_buffer->sin_addr = support_trisock_cpp_getIPAddress_FUN_005e1930(net_addr);
  memset(dest_buffer->padding_0x08, 0, 8);
  return dest_buffer;
}
