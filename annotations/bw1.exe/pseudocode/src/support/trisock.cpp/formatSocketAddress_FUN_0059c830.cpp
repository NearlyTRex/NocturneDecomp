// Name: support_trisock.cpp_formatSocketAddress_FUN_0059c830
// Address: 0059c830
// Address Range: [[0059c830, 0059c87b]]
// Convention: __cdecl
// Signature: void __cdecl support_trisock_cpp_formatSocketAddress_FUN_0059c830(SNetworkAddr *network_addr,char *output_buffer)

#include "nocturne.h"

void __cdecl support_trisock_cpp_formatSocketAddress_FUN_0059c830(SNetworkAddr *network_addr,char *output_buffer)

{
  char *buffer;
  
  support_trisock_cpp_formatIPAddress_FUN_0059c590((uchar *)network_addr,output_buffer);
  do {
    buffer = output_buffer;
    if (*output_buffer == '\0') goto LAB_0059c870;
    if (*output_buffer == '\0') break;
    buffer = output_buffer + 1;
    if (*buffer == '\0') goto LAB_0059c870;
    output_buffer = output_buffer + 2;
  } while (*buffer != '\0');
  buffer = (char *)0x0;
LAB_0059c870:
  _sprintf(buffer,&DAT_005f8368);
  return;
}
