// Name: support_trisock.cpp_formatIPAddress_FUN_0056f580
// Address: 0056f580
// Address Range: [[0056f580, 0056f5b0]]
// Convention: __cdecl
// Signature: void __cdecl support_trisock_cpp_formatIPAddress_FUN_0056f580(uchar *ip_bytes,char *output_buffer)

#include "nocturne.h"

void __cdecl support_trisock_cpp_formatIPAddress_FUN_0056f580(uchar *ip_bytes,char *output_buffer)

{
  FUN_005a28c0
            (output_buffer,"%d.%d.%d.%d",*ip_bytes,ip_bytes[1],ip_bytes[2],ip_bytes[3]);
  return;
}
