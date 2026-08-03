// Name: support_trisock.cpp_buildIPAddressOrDie_FUN_00548b40
// Address: 00548b40
// Address Range: [[00548b40, 00548ba4]]
// Convention: __cdecl
// Signature: uint8_t * __cdecl support_trisock_cpp_buildIPAddressOrDie_FUN_00548b40(uchar *dest_ip,int octet1,int octet2,int octet3,int octet4)

#include "nocturne.h"

uint8_t * __cdecl support_trisock_cpp_buildIPAddressOrDie_FUN_00548b40(uchar *dest_ip,int octet1,int octet2,int octet3,int octet4)

{
  int iVar1;
  uint in_stack_00000024;
  
  iVar1 = support_trisock_cpp_buildIPAddress_FUN_00548c60(dest_ip,octet1,octet2,octet3,octet4);
  if (iVar1 != 0) {
    return dest_ip;
  }
  g_CHAR_PTR_01cc4800 = "..\\support\\trisock.cpp";
  g_INT_01cc4804 = 0x41;
  core_main_c_FUN_004c8440("Invalid IP values: %d, %d, %d, %d",octet1,octet2,in_stack_00000024);
  return dest_ip;
}
