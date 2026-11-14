// Name: support_trisock.cpp_formatSocketAddress_FUN_00578f50
// Address: 00578f50
// Address Range: [[00578f50, 00578f9b]]
// Convention: __cdecl
// Signature: void __cdecl support_trisock_cpp_formatSocketAddress_FUN_00578f50(SNetworkAddr *network_addr,char *output_buffer)

#include "nocturne.h"

void __cdecl support_trisock_cpp_formatSocketAddress_FUN_00578f50(SNetworkAddr *network_addr,char *output_buffer)

{
  char *buffer;
  
  support_trisock_cpp_formatIPAddress_FUN_00578cb0((uchar *)network_addr,output_buffer);
  do {
    buffer = output_buffer;
    if (*output_buffer == '\0') goto LAB_00578f90;
    if (*output_buffer == '\0') break;
    buffer = output_buffer + 1;
    if (*buffer == '\0') goto LAB_00578f90;
    output_buffer = output_buffer + 2;
  } while (*buffer != '\0');
  buffer = (char *)0x0;
LAB_00578f90:
  _sprintf(buffer,&DAT_005ed04e);
  return;
}
