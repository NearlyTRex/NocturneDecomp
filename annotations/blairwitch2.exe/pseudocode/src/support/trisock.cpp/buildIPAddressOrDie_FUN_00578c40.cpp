// Name: support_trisock.cpp_buildIPAddressOrDie_FUN_00578c40
// Address: 00578c40
// Address Range: [[00578c40, 00578ca4]]
// Convention: __cdecl
// Signature: uint8_t * __cdecl support_trisock_cpp_buildIPAddressOrDie_FUN_00578c40(uchar *dest_ip,int octet1,int octet2,int octet3,int octet4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint8_t * __cdecl support_trisock_cpp_buildIPAddressOrDie_FUN_00578c40(uchar *dest_ip,int octet1,int octet2,int octet3,int octet4)

{
  int iVar1;
  uint in_stack_00000024;
  
  iVar1 = support_trisock_cpp_buildIPAddress_FUN_00578d60(dest_ip,octet1,octet2,octet3,octet4);
  if (iVar1 != 0) {
    return dest_ip;
  }
  _DAT_01d046a0 = "..\\support\\trisock.cpp";
  _DAT_01d046a4 = 0x60;
  core_main_c_FUN_004e4500("Invalid IP values: %d, %d, %d, %d",octet1,octet2,in_stack_00000024);
  return dest_ip;
}
