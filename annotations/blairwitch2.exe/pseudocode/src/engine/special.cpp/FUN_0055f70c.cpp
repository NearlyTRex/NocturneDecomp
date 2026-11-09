// Name: engine_special.cpp_FUN_0055f70c
// Address: 0055f70c
// Address Range: [[0055f70c, 0055f745]]
// Convention: unknown
// Signature: undefined4 engine_special_cpp_FUN_0055f70c(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint engine_special_cpp_FUN_0055f70c(uint param_1,uint param_2)

{
  uint uVar1;
  
  if ((_DAT_01c37788 != 0) && (_DAT_0264bbec != (code *)0x0)) {
    uVar1 = (*_DAT_0264bbec)(param_1,DAT_006141c8,param_2);
    return uVar1;
  }
  return 0;
}
