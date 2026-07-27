// Name: engine_special.cpp_restoreZBuffer_FUN_00532c90
// Address: 00532c90
// Address Range: [[00532c90, 00532cc7]]
// Convention: __cdecl
// Signature: undefined4 __cdecl engine_special_cpp_restoreZBuffer_FUN_00532c90(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl engine_special_cpp_restoreZBuffer_FUN_00532c90(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  uint uVar1;
  
  if (_DAT_01c02594 == 0) {
    return 0;
  }
  uVar1 = (*_DAT_02dc9dec)(param_1,param_2,param_3,param_4,param_5);
  return uVar1;
}
