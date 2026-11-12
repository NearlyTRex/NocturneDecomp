// Name: engine_special.cpp_FUN_005820e0
// Address: 005820e0
// Address Range: [[005820e0, 0058211d]]
// Convention: unknown
// Signature: undefined4 engine_special_cpp_FUN_005820e0(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint engine_special_cpp_FUN_005820e0(uint param_1,uint param_2)

{
  uint uVar1;
  
  if (_DAT_01c50948 == 0) {
    return 0;
  }
  uVar1 = (*_DAT_02c833b4)(param_1,DAT_0061b4a8,_DAT_01c50930,param_2,_DAT_01c50934);
  return uVar1;
}
