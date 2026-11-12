// Name: support_trisock.cpp_buildIPAddressOrDie_FUN_0059c520
// Address: 0059c520
// Address Range: [[0059c520, 0059c584]]
// Convention: __cdecl
// Signature: uint8_t * __cdecl support_trisock_cpp_buildIPAddressOrDie_FUN_0059c520(uchar *dest_ip,int octet1,int octet2,int octet3,int octet4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint8_t * __cdecl support_trisock_cpp_buildIPAddressOrDie_FUN_0059c520(uchar *dest_ip,int octet1,int octet2,int octet3,int octet4)

{
  int iVar1;
  uint in_stack_00000024;
  
  iVar1 = support_trisock_cpp_buildIPAddress_FUN_0059c640(dest_ip,octet1,octet2,octet3,octet4);
  if (iVar1 != 0) {
    return dest_ip;
  }
  _DAT_01d1d400 = "..\\support\\trisock.cpp";
  _DAT_01d1d404 = 0x62;
  core_main_c_FUN_005030e0("Invalid IP values: %d, %d, %d, %d",octet1,octet2,in_stack_00000024);
  return dest_ip;
}
