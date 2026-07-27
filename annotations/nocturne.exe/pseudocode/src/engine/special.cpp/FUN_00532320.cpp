// Name: engine_special.cpp_FUN_00532320
// Address: 00532320
// Address Range: [[00532320, 0053233c]]
// Convention: unknown
// Signature: undefined4 engine_special_cpp_FUN_00532320(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint engine_special_cpp_FUN_00532320(void)

{
  uint uVar1;
  
  if (_DAT_01c02594 == 0) {
    return 0;
  }
  DAT_005b7624 = _DAT_02dc9e20;
  uVar1 = (*_DAT_02dc9d98)();
  return uVar1;
}
