// Name: support_trisock.cpp_buildIPAddressOrDie_FUN_0059c520
// Address: 0059c520
// Address Range: [[0059c520, 0059c584]]
// Convention: __cdecl
// Signature: undefined4 __cdecl support_trisock_cpp_buildIPAddressOrDie_FUN_0059c520(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl support_trisock_cpp_buildIPAddressOrDie_FUN_0059c520(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  int iVar1;
  
  iVar1 = support_trisock_cpp_buildIPAddress_FUN_0059c640(param_1,param_2,param_3,param_4,param_5);
  if (iVar1 != 0) {
    return param_1;
  }
  _DAT_01d1d400 = "..\\support\\trisock.cpp";
  _DAT_01d1d404 = 0x62;
  core_main_c_FUN_005030e0("Invalid IP values: %d, %d, %d, %d",param_2,param_3,param_4,param_5);
  return param_1;
}
