// Name: unkafter_minecar.cpp_FUN_0051104e
// Address: 0051104e
// Address Range: [[0051104e, 005110d9]]
// Convention: unknown
// Signature: undefined4 unkafter_minecar_cpp_FUN_0051104e(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint unkafter_minecar_cpp_FUN_0051104e(void)

{
  uint uVar1;
  
  uVar1 = engine_mini3d_cpp_FUN_00514cf0(_DAT_01d2ad74);
  _DAT_01d2ad74 = 0;
  if (_DAT_01d227dc == 0) {
    if (_DAT_01d25f2c == 0) {
      return uVar1;
    }
  }
  else {
    uVar1 = FUN_005c09f0(_DAT_01d227dc);
    _DAT_01d227dc = 0;
    _DAT_01d227e0 = 0;
    _DAT_01d227e4 = 0;
    if (_DAT_01d25f2c == 0) {
      return uVar1;
    }
  }
  FUN_005c09f0(_DAT_01d25f2c);
  uVar1 = FUN_005c09f0(_DAT_01d25f30);
  _DAT_01d25f2c = 0;
  _DAT_01d25f30 = 0;
  return uVar1;
}
