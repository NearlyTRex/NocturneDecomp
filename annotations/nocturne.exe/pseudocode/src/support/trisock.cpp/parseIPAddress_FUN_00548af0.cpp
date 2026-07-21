// Name: support_trisock.cpp_parseIPAddress_FUN_00548af0
// Address: 00548af0
// Address Range: [[00548af0, 00548b3a]]
// Convention: __cdecl
// Signature: undefined4 __cdecl support_trisock_cpp_parseIPAddress_FUN_00548af0(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl support_trisock_cpp_parseIPAddress_FUN_00548af0(uint param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = support_trisock_cpp_parseIPComponents_FUN_00548bf0(param_1,param_2);
  if (iVar1 != 0) {
    return param_1;
  }
  _DAT_01cc4800 = "?..\\support\\trisock.cpp" + 1;
  _DAT_01cc4804 = 0x36;
  FUN_004c8440("Invalid dotted decimal string: %s",param_2);
  return param_1;
}
