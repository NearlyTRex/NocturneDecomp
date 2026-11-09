// Name: support_trisock.cpp_parseIPAddress_FUN_0059c4d0
// Address: 0059c4d0
// Address Range: [[0059c4d0, 0059c51a]]
// Convention: __cdecl
// Signature: uint * __cdecl support_trisock_cpp_parseIPAddress_FUN_0059c4d0(uint *result_ptr,char *dotted_decimal_string)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * __cdecl support_trisock_cpp_parseIPAddress_FUN_0059c4d0(uint *result_ptr,char *dotted_decimal_string)

{
  int iVar1;
  uint in_stack_00000010;
  
  iVar1 = support_trisock_cpp_parseIPComponents_FUN_0059c5d0(result_ptr,dotted_decimal_string);
  if (iVar1 != 0) {
    return result_ptr;
  }
  _DAT_01d1d400 = "..\\support\\trisock.cpp";
  _DAT_01d1d404 = 0x57;
  core_main_c_FUN_005030e0("Invalid dotted decimal string: %s",in_stack_00000010);
  return result_ptr;
}
