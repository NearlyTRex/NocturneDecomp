// Name: engine_mini3d.cpp_FUN_004ec81e
// Address: 004ec81e
// Address Range: [[004ec81e, 004ec8a9]]
// Convention: unknown
// Signature: undefined4 engine_mini3d_cpp_FUN_004ec81e(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint engine_mini3d_cpp_FUN_004ec81e(void)

{
  uint uVar1;
  
  uVar1 = engine_mini3d_cpp_FUN_004f04c0(_DAT_01d7f4f4);
  _DAT_01d7f4f4 = 0;
  if (_DAT_01d76f5c == 0) {
    if (_DAT_01d7a6ac == 0) {
      return uVar1;
    }
  }
  else {
    uVar1 = FUN_005a3770(_DAT_01d76f5c);
    _DAT_01d76f5c = 0;
    _DAT_01d76f60 = 0;
    _DAT_01d76f64 = 0;
    if (_DAT_01d7a6ac == 0) {
      return uVar1;
    }
  }
  FUN_005a3770(_DAT_01d7a6ac);
  uVar1 = FUN_005a3770(_DAT_01d7a6b0);
  _DAT_01d7a6ac = 0;
  _DAT_01d7a6b0 = 0;
  return uVar1;
}
