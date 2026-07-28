// Name: support_trisock.cpp_formatIPAddress_FUN_00548bb0
// Address: 00548bb0
// Address Range: [[00548bb0, 00548be0]]
// Convention: __cdecl
// Signature: void __cdecl support_trisock_cpp_formatIPAddress_FUN_00548bb0(char *output_buffer,uchar *ip_bytes)

#include "nocturne.h"

void __cdecl support_trisock_cpp_formatIPAddress_FUN_00548bb0(char *output_buffer,uchar *ip_bytes)

{
  _sprintf(ip_bytes,"%d.%d.%d.%d",*output_buffer,output_buffer[1],output_buffer[2],
             output_buffer[3]);
  return;
}
