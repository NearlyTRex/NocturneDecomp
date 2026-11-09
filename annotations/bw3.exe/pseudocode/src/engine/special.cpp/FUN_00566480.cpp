// Name: engine_special.cpp_FUN_00566480
// Address: 00566480
// Address Range: [[00566480, 0056649a]]
// Convention: unknown
// Signature: undefined4 engine_special_cpp_FUN_00566480(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint engine_special_cpp_FUN_00566480(uint param_1)

{
  uint uVar1;
  
  if (_DAT_02cf6080 == (code *)0x0) {
    return 0;
  }
  uVar1 = (*_DAT_02cf6080)(param_1);
  return uVar1;
}
