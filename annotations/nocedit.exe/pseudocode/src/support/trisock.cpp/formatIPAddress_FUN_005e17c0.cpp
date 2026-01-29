// Name: support_trisock.cpp_formatIPAddress_FUN_005e17c0
// Address: 005e17c0
// Address Range: [[005e17c0, 005e17f0]]
// Convention: __cdecl
// Signature: void __cdecl support_trisock_cpp_formatIPAddress_FUN_005e17c0(char *output_buffer,uchar *ip_bytes)

#include "nocturne.h"

void __cdecl support_trisock_cpp_formatIPAddress_FUN_005e17c0(char *output_buffer,uchar *ip_bytes)

{
  sprintf
            ((char *)ip_bytes,"%d.%d.%d.%d",(uint)(byte)*output_buffer,
             (uint)(byte)output_buffer[1],(uint)(byte)output_buffer[2],(uint)(byte)output_buffer[3])
  ;
  return;
}
