// Name: support_trisock.cpp_formatIPAddress_FUN_005e17c0
// Address: 005e17c0
// Address Range: [[005e17c0, 005e17f0]]
// Convention: __cdecl
// Signature: void __cdecl support_trisock_cpp_formatIPAddress_FUN_005e17c0(uchar *ip_bytes,char *output_buffer)

#include "nocturne.h"

void __cdecl support_trisock_cpp_formatIPAddress_FUN_005e17c0(uchar *ip_bytes,char *output_buffer)

{
  _sprintf(output_buffer,"%d.%d.%d.%d",(uint)*ip_bytes,(uint)ip_bytes[1],(uint)ip_bytes[2],
             (uint)ip_bytes[3]);
  return;
}
