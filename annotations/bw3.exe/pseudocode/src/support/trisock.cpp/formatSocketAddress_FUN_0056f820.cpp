// Name: support_trisock.cpp_formatSocketAddress_FUN_0056f820
// Address: 0056f820
// Address Range: [[0056f820, 0056f86b]]
// Convention: __cdecl
// Signature: void __cdecl support_trisock_cpp_formatSocketAddress_FUN_0056f820(SNetworkAddr *network_addr,char *output_buffer)

#include "nocturne.h"

void __cdecl support_trisock_cpp_formatSocketAddress_FUN_0056f820(SNetworkAddr *network_addr,char *output_buffer)

{
  char *buffer;
  
  support_trisock_cpp_formatIPAddress_FUN_0056f580((uchar *)network_addr,output_buffer);
  do {
    buffer = output_buffer;
    if (*output_buffer == '\0') goto LAB_0056f860;
    if (*output_buffer == '\0') break;
    buffer = output_buffer + 1;
    if (*buffer == '\0') goto LAB_0056f860;
    output_buffer = output_buffer + 2;
  } while (*buffer != '\0');
  buffer = (char *)0x0;
LAB_0056f860:
  _sprintf(buffer,&DAT_005d68d7);
  return;
}
