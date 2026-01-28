// Name: support_trisock.cpp_formatSocketAddress_FUN_005e1a30
// Address: 005e1a30
// Address Range: [[005e1a30, 005e1a7b]]
// Convention: __cdecl
// Signature: void __cdecl support_trisock_cpp_formatSocketAddress_FUN_005e1a30(char *output_buffer,SNetworkAddr *network_addr)

#include "nocturne.h"

void __cdecl
support_trisock_cpp_formatSocketAddress_FUN_005e1a30(char *output_buffer,SNetworkAddr *network_addr)

{
  char cVar1;
  SNetworkAddr *buffer;
  
  support_trisock_cpp_formatIPAddress_FUN_005e17c0(output_buffer,(uchar *)network_addr);
  do {
    cVar1 = (char)network_addr->ip_address;
    buffer = network_addr;
    if (cVar1 == '\0') goto LAB_005e1a70;
    if (cVar1 == '\0') break;
    buffer = (SNetworkAddr *)((int)&network_addr->ip_address + 1);
    cVar1 = (char)buffer->ip_address;
    if (cVar1 == '\0') goto LAB_005e1a70;
    network_addr = (SNetworkAddr *)((int)&network_addr->ip_address + 2);
  } while (cVar1 != '\0');
  buffer = (SNetworkAddr *)0x0;
LAB_005e1a70:
  crt_stdio_c_sprintf_FUN_005fdbd0((char *)buffer,":%d",(uint)*(ushort *)(output_buffer + 4))
  ;
  return;
}
