// Name: engine_mini3d.cpp_kill_FUN_00511050
// Address: 00511050
// Address Range: [[00511050, 005110d9]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_kill_FUN_00511050(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_kill_FUN_00511050(void)

{
  engine_mini3d_cpp_free32_FUN_00514cf0(_DAT_01d2ad74);
  _DAT_01d2ad74 = (void *)0x0;
  if (_DAT_01d227dc == 0) {
    if (_DAT_01d25f2c == 0) {
      return;
    }
  }
  else {
    FUN_005c09f0(_DAT_01d227dc);
    _DAT_01d227dc = 0;
    _DAT_01d227e0 = 0;
    _DAT_01d227e4 = 0;
    if (_DAT_01d25f2c == 0) {
      return;
    }
  }
  FUN_005c09f0(_DAT_01d25f2c);
  FUN_005c09f0(_DAT_01d25f30);
  _DAT_01d25f2c = 0;
  _DAT_01d25f30 = 0;
  return;
}
