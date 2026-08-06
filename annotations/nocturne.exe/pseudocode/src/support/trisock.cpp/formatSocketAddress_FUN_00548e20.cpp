// Name: support_trisock.cpp_formatSocketAddress_FUN_00548e20
// Address: 00548e20
// Address Range: [[00548e20, 00548e6b]]
// Convention: __cdecl
// Signature: void __cdecl support_trisock_cpp_formatSocketAddress_FUN_00548e20(char *output_buffer,SNetworkAddr *network_addr)

#include "nocturne.h"

void __cdecl support_trisock_cpp_formatSocketAddress_FUN_00548e20(char *output_buffer,SNetworkAddr *network_addr)

{
  char cVar1;
  SNetworkAddr *buffer;
  
  support_trisock_cpp_formatIPAddress_FUN_00548bb0(output_buffer,(uchar *)network_addr);
  do {
    cVar1 = (char)network_addr->ip_address;
    buffer = network_addr;
    if (cVar1 == '\0') goto LAB_00548e60;
    if (cVar1 == '\0') break;
    buffer = (SNetworkAddr *)((int)&network_addr->ip_address + 1);
    cVar1 = (char)buffer->ip_address;
    if (cVar1 == '\0') goto LAB_00548e60;
    network_addr = (SNetworkAddr *)((int)&network_addr->ip_address + 2);
  } while (cVar1 != '\0');
  buffer = (SNetworkAddr *)0x0;
LAB_00548e60:
  _sprintf((char *)buffer,":%d",(uint)*(ushort *)(output_buffer + 4))
  ;
  return;
}
