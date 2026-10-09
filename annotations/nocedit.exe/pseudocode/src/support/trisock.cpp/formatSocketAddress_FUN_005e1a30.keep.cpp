// Name: support_trisock.cpp_formatSocketAddress_FUN_005e1a30
// Address: 005e1a30
// MANUAL RECONSTRUCTION
// Address Range: [[005e1a30, 005e1a7b]]
// Convention: __cdecl
// Signature: void __cdecl support_trisock_cpp_formatSocketAddress_FUN_005e1a30(SNetworkAddr *network_addr,char *output_buffer)

#include "nocturne.h"

void __cdecl support_trisock_cpp_formatSocketAddress_FUN_005e1a30(SNetworkAddr *network_addr,char *output_buffer)

{
  support_trisock_cpp_formatIPAddress_FUN_005e17c0((uchar *)network_addr,output_buffer);
  _sprintf(output_buffer + strlen(output_buffer),":%d",(uint)network_addr->port);
  return;
}
