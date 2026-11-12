// Name: engine_mini3d.cpp_FUN_004f240e
// Address: 004f240e
// Address Range: [[004f240e, 004f2424]]
// Convention: unknown
// Signature: undefined4 engine_mini3d_cpp_FUN_004f240e(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint engine_mini3d_cpp_FUN_004f240e(void)

{
  uint extraout_EAX;
  uint uVar1;
  
  if (_DAT_01c37788 == 0) {
    engine_special_cpp_clearZBufferNative_FUN_0055b254();
    return extraout_EAX;
  }
  if (_DAT_01c37788 == 0) {
    return 0;
  }
  uVar1 = (*_DAT_0264bc24)();
  return uVar1;
}
