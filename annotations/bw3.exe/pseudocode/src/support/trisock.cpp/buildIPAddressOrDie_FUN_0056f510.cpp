// Name: support_trisock.cpp_buildIPAddressOrDie_FUN_0056f510
// Address: 0056f510
// Address Range: [[0056f510, 0056f574]]
// Convention: __cdecl
// Signature: uint8_t * __cdecl support_trisock_cpp_buildIPAddressOrDie_FUN_0056f510(uchar *dest_ip,int octet1,int octet2,int octet3,int octet4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint8_t * __cdecl support_trisock_cpp_buildIPAddressOrDie_FUN_0056f510(uchar *dest_ip,int octet1,int octet2,int octet3,int octet4)

{
  int iVar1;
  uint in_stack_00000024;
  
  iVar1 = support_trisock_cpp_buildIPAddress_FUN_0056f630(dest_ip,octet1,octet2,octet3,octet4);
  if (iVar1 != 0) {
    return dest_ip;
  }
  _DAT_01d71de0 = "..\\support\\trisock.cpp";
  _DAT_01d71de4 = 0x62;
  core_main_c_FUN_004e4330("Invalid IP values: %d, %d, %d, %d",octet1,octet2,in_stack_00000024);
  return dest_ip;
}
