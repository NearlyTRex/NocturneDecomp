// Name: support_trisock.cpp_formatIPAddress_FUN_00578cb0
// Address: 00578cb0
// Address Range: [[00578cb0, 00578ce0]]
// Convention: __cdecl
// Signature: void __cdecl support_trisock_cpp_formatIPAddress_FUN_00578cb0(uchar *ip_bytes,char *output_buffer)

#include "nocturne.h"

void __cdecl support_trisock_cpp_formatIPAddress_FUN_00578cb0(uchar *ip_bytes,char *output_buffer)

{
  FUN_005b7790
            (output_buffer,"%d.%d.%d.%d",*ip_bytes,ip_bytes[1],ip_bytes[2],ip_bytes[3]);
  return;
}
