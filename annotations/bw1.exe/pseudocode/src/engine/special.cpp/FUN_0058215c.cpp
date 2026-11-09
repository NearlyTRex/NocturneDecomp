// Name: engine_special.cpp_FUN_0058215c
// Address: 0058215c
// Address Range: [[0058215c, 00582195]]
// Convention: unknown
// Signature: undefined4 engine_special_cpp_FUN_0058215c(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint engine_special_cpp_FUN_0058215c(uint param_1,uint param_2)

{
  uint uVar1;
  
  if ((_DAT_01c50948 != 0) && (_DAT_02c833bc != (code *)0x0)) {
    uVar1 = (*_DAT_02c833bc)(param_1,DAT_0061b4a8,param_2);
    return uVar1;
  }
  return 0;
}
