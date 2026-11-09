// Name: engine_special.cpp_FUN_00565a2c
// Address: 00565a2c
// Address Range: [[00565a2c, 00565a65]]
// Convention: unknown
// Signature: undefined4 engine_special_cpp_FUN_00565a2c(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint engine_special_cpp_FUN_00565a2c(uint param_1,uint param_2)

{
  uint uVar1;
  
  if ((_DAT_01c6cee8 != 0) && (_DAT_02cf6018 != (code *)0x0)) {
    uVar1 = (*_DAT_02cf6018)(param_1,DAT_005fba28,param_2);
    return uVar1;
  }
  return 0;
}
