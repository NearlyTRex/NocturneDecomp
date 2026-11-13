// Name: engine_mini3d.cpp_kill_FUN_004ec820
// Address: 004ec820
// Address Range: [[004ec820, 004ec8a9]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_kill_FUN_004ec820(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_kill_FUN_004ec820(void)

{
  engine_mini3d_cpp_free32_FUN_004f04c0(_DAT_01d7f4f4);
  _DAT_01d7f4f4 = (void *)0x0;
  if (_DAT_01d76f5c == 0) {
    if (_DAT_01d7a6ac == 0) {
      return;
    }
  }
  else {
    FUN_005a3770(_DAT_01d76f5c);
    _DAT_01d76f5c = 0;
    _DAT_01d76f60 = 0;
    _DAT_01d76f64 = 0;
    if (_DAT_01d7a6ac == 0) {
      return;
    }
  }
  FUN_005a3770(_DAT_01d7a6ac);
  FUN_005a3770(_DAT_01d7a6b0);
  _DAT_01d7a6ac = 0;
  _DAT_01d7a6b0 = 0;
  return;
}
