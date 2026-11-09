// Name: engine_special.cpp_FUN_00582bb0
// Address: 00582bb0
// Address Range: [[00582bb0, 00582bca]]
// Convention: unknown
// Signature: undefined4 engine_special_cpp_FUN_00582bb0(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint engine_special_cpp_FUN_00582bb0(uint param_1)

{
  uint uVar1;
  
  if (_DAT_02c83424 == (code *)0x0) {
    return 0;
  }
  uVar1 = (*_DAT_02c83424)(param_1);
  return uVar1;
}
