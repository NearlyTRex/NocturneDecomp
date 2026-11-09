// Name: support_trisock.cpp_buildIPAddressOrDie_FUN_00578c40
// Address: 00578c40
// Address Range: [[00578c40, 00578ca4]]
// Convention: __cdecl
// Signature: undefined4 __cdecl support_trisock_cpp_buildIPAddressOrDie_FUN_00578c40(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl support_trisock_cpp_buildIPAddressOrDie_FUN_00578c40(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  int iVar1;
  
  iVar1 = support_trisock_cpp_buildIPAddress_FUN_00578d60(param_1,param_2,param_3,param_4,param_5);
  if (iVar1 != 0) {
    return param_1;
  }
  _DAT_01d046a0 = "..\\support\\trisock.cpp";
  _DAT_01d046a4 = 0x60;
  core_main_c_FUN_004e4500("Invalid IP values: %d, %d, %d, %d",param_2,param_3,param_4,param_5);
  return param_1;
}
