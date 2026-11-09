// Name: engine_special.cpp_FUN_00560160
// Address: 00560160
// Address Range: [[00560160, 0056017a]]
// Convention: unknown
// Signature: undefined4 engine_special_cpp_FUN_00560160(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint engine_special_cpp_FUN_00560160(uint param_1)

{
  uint uVar1;
  
  if (_DAT_0264bc54 == (code *)0x0) {
    return 0;
  }
  uVar1 = (*_DAT_0264bc54)(param_1);
  return uVar1;
}
