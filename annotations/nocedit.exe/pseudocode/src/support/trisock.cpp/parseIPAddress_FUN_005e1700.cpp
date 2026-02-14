// Name: support_trisock.cpp_parseIPAddress_FUN_005e1700
// Address: 005e1700
// Address Range: [[005e1700, 005e174a]]
// Convention: __cdecl
// Signature: uint __cdecl support_trisock_cpp_parseIPAddress_FUN_005e1700(uint *result_ptr,char *dotted_decimal_string)

#include "nocturne.h"

uint __cdecl support_trisock_cpp_parseIPAddress_FUN_005e1700(uint *result_ptr,char *dotted_decimal_string)

{
  int iVar1;
  
  iVar1 = support_trisock_cpp_parseIPComponents_FUN_005e1800(result_ptr,dotted_decimal_string);
  if (iVar1 != 0) {
    return (uint)result_ptr;
  }
  g_CurrentFilename = "..\\support\\trisock.cpp";
  g_CurrentLineNumber = 0x36;
  core_main_c_displayErrorAndQuit_FUN_00506f10
            ("Invalid dotted decimal string: %s",dotted_decimal_string);
  return (uint)result_ptr;
}
