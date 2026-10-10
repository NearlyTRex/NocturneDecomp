// Name: support_trisock.cpp_formatSocketAddress_FUN_005e1a30
// Address: 005e1a30
// Address Range: [[005e1a30, 005e1a7b]]
// Convention: __cdecl
// Signature: void __cdecl support_trisock_cpp_formatSocketAddress_FUN_005e1a30(SNetworkAddr *network_addr,char *output_buffer)

#include "nocturne.h"

void __cdecl support_trisock_cpp_formatSocketAddress_FUN_005e1a30(SNetworkAddr *network_addr,char *output_buffer)

{
  char *buffer;
  
  support_trisock_cpp_formatIPAddress_FUN_005e17c0((uchar *)network_addr,output_buffer);
  do {
    buffer = output_buffer;
    if (*output_buffer == '\0') goto LAB_005e1a70;
    if (*output_buffer == '\0') break;
    buffer = output_buffer + 1;
    if (*buffer == '\0') goto LAB_005e1a70;
    output_buffer = output_buffer + 2;
  } while (*buffer != '\0');
  buffer = (char *)0x0;
LAB_005e1a70:
  _sprintf(buffer,":%d",(uint)network_addr->port);
  return;
}
