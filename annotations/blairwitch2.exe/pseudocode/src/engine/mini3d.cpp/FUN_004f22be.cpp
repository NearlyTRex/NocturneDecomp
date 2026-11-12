// Name: engine_mini3d.cpp_FUN_004f22be
// Address: 004f22be
// Address Range: [[004f22be, 004f2349]]
// Convention: unknown
// Signature: undefined4 engine_mini3d_cpp_FUN_004f22be(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint engine_mini3d_cpp_FUN_004f22be(void)

{
  uint uVar1;
  
  uVar1 = engine_mini3d_cpp_FUN_004f5f70(_DAT_01d12114);
  _DAT_01d12114 = 0;
  if (_DAT_01d09b78 == 0) {
    if (_DAT_01d0d2cc == 0) {
      return uVar1;
    }
  }
  else {
    uVar1 = FUN_005b86a0(_DAT_01d09b78);
    _DAT_01d09b78 = 0;
    _DAT_01d09b7c = 0;
    _DAT_01d09b80 = 0;
    if (_DAT_01d0d2cc == 0) {
      return uVar1;
    }
  }
  FUN_005b86a0(_DAT_01d0d2cc);
  uVar1 = FUN_005b86a0(_DAT_01d0d2d0);
  _DAT_01d0d2cc = 0;
  _DAT_01d0d2d0 = 0;
  return uVar1;
}
