// Name: support_trisock.cpp_FUN_00548b40
// Address: 00548b40
// Address Range: [[00548b40, 00548ba4]]
// Convention: unknown
// Signature: undefined4 support_trisock_cpp_FUN_00548b40(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

#include "nocturne.h"

uint support_trisock_cpp_FUN_00548b40(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  int iVar1;
  
  iVar1 = support_trisock_cpp_buildIPAddress_FUN_00548c60(param_1,param_2,param_3,param_4,param_5);
  if (iVar1 != 0) {
    return param_1;
  }
  PTR_01cc4800 = "..\\support\\trisock.cpp";
  INT_01cc4804 = 0x41;
  core_main_c_FUN_004c8440("Invalid IP values: %d, %d, %d, %d",param_2,param_3,param_4,param_5);
  return param_1;
}
