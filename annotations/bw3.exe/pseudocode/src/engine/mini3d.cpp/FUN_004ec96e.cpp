// Name: engine_mini3d.cpp_FUN_004ec96e
// Address: 004ec96e
// Address Range: [[004ec96e, 004ec984]]
// Convention: unknown
// Signature: undefined4 engine_mini3d_cpp_FUN_004ec96e(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint engine_mini3d_cpp_FUN_004ec96e(void)

{
  uint extraout_EAX;
  uint uVar1;
  
  if (_DAT_01c6cee8 == 0) {
    engine_special_cpp_clearZBufferNative_FUN_00560dd4();
    return extraout_EAX;
  }
  if (_DAT_01c6cee8 == 0) {
    return 0;
  }
  uVar1 = (*_DAT_02cf6050)();
  return uVar1;
}
