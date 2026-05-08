// Name: support_trisock.cpp_formatSocketAddress_FUN_005e1a30
// Address: 005e1a30
// MANUAL RECONSTRUCTION
// Address Range: [[005e1a30, 005e1a7b]]
// Convention: __cdecl
// Signature: void __cdecl support_trisock_cpp_formatSocketAddress_FUN_005e1a30(char *output_buffer,SNetworkAddr *network_addr)

#include "nocturne.h"

void __cdecl support_trisock_cpp_formatSocketAddress_FUN_005e1a30(char *output_buffer,SNetworkAddr *network_addr)

{
  support_trisock_cpp_formatIPAddress_FUN_005e17c0(output_buffer,(uchar *)network_addr);
  _sprintf(output_buffer + strlen(output_buffer),":%d",(uint)network_addr->port);
  return;
}
