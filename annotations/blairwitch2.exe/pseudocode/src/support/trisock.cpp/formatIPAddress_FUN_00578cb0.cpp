// Name: support_trisock.cpp_formatIPAddress_FUN_00578cb0
// Address: 00578cb0
// Address Range: [[00578cb0, 00578ce0]]
// Convention: __cdecl
// Signature: void __cdecl support_trisock_cpp_formatIPAddress_FUN_00578cb0(uchar *ip_bytes,char *output_buffer)

#include "nocturne.h"

void __cdecl support_trisock_cpp_formatIPAddress_FUN_00578cb0(uchar *ip_bytes,char *output_buffer)

{
  _sprintf(output_buffer,"%d.%d.%d.%d");
  return;
}
