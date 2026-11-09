// Name: support_trisock.cpp_formatIPAddress_FUN_0059c590
// Address: 0059c590
// Address Range: [[0059c590, 0059c5c0]]
// Convention: __cdecl
// Signature: void __cdecl support_trisock_cpp_formatIPAddress_FUN_0059c590(uchar *ip_bytes,char *output_buffer)

#include "nocturne.h"

void __cdecl support_trisock_cpp_formatIPAddress_FUN_0059c590(uchar *ip_bytes,char *output_buffer)

{
  FUN_005bfb40
            (output_buffer,"%d.%d.%d.%d",*ip_bytes,ip_bytes[1],ip_bytes[2],ip_bytes[3]);
  return;
}
