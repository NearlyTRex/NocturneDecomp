// Name: support_trisock.cpp_formatSocketAddress_FUN_00548e20
// Address: 00548e20
// Address Range: [[00548e20, 00548e6b]]
// Convention: __cdecl
// Signature: void __cdecl support_trisock_cpp_formatSocketAddress_FUN_00548e20(SNetworkAddr *network_addr,char *output_buffer)

#include "nocturne.h"

void __cdecl support_trisock_cpp_formatSocketAddress_FUN_00548e20(SNetworkAddr *network_addr,char *output_buffer)

{
  char *buffer;
  
  support_trisock_cpp_formatIPAddress_FUN_00548bb0((uchar *)network_addr,output_buffer);
  do {
    buffer = output_buffer;
    if (*output_buffer == '\0') goto LAB_00548e60;
    if (*output_buffer == '\0') break;
    buffer = output_buffer + 1;
    if (*buffer == '\0') goto LAB_00548e60;
    output_buffer = output_buffer + 2;
  } while (*buffer != '\0');
  buffer = (char *)0x0;
LAB_00548e60:
  _sprintf(buffer,":%d",(uint)network_addr->port);
  return;
}
