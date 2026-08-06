// Name: support_trisock.cpp_parseIPAddress_FUN_00548af0
// Address: 00548af0
// Address Range: [[00548af0, 00548b3a]]
// Convention: __cdecl
// Signature: uint * __cdecl support_trisock_cpp_parseIPAddress_FUN_00548af0(uint *result_ptr,char *dotted_decimal_string)

#include "nocturne.h"

uint * __cdecl support_trisock_cpp_parseIPAddress_FUN_00548af0(uint *result_ptr,char *dotted_decimal_string)

{
  int iVar1;
  
  iVar1 = support_trisock_cpp_parseIPComponents_FUN_00548bf0(result_ptr,dotted_decimal_string);
  if (iVar1 != 0) {
    return result_ptr;
  }
  g_CurrentFilename = "..\\support\\trisock.cpp";
  g_CurrentLineNumber = 54;
  core_main_c_displayErrorAndQuit_FUN_004c8440("Invalid dotted decimal string: %s");
  return result_ptr;
}
