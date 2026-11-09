// Name: support_trisock.cpp_parseIPAddress_FUN_00578bf0
// Address: 00578bf0
// Address Range: [[00578bf0, 00578c3a]]
// Convention: __cdecl
// Signature: uint * __cdecl support_trisock_cpp_parseIPAddress_FUN_00578bf0(uint *result_ptr,char *dotted_decimal_string)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * __cdecl support_trisock_cpp_parseIPAddress_FUN_00578bf0(uint *result_ptr,char *dotted_decimal_string)

{
  int iVar1;
  uint in_stack_00000010;
  
  iVar1 = support_trisock_cpp_parseIPComponents_FUN_00578cf0(result_ptr,dotted_decimal_string);
  if (iVar1 != 0) {
    return result_ptr;
  }
  _DAT_01d046a0 = "..\\support\\trisock.cpp";
  _DAT_01d046a4 = 0x55;
  core_main_c_FUN_004e4500("Invalid dotted decimal string: %s",in_stack_00000010);
  return result_ptr;
}
