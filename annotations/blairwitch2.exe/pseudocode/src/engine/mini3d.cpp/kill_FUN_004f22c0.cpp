// Name: engine_mini3d.cpp_kill_FUN_004f22c0
// Address: 004f22c0
// Address Range: [[004f22c0, 004f2349]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_kill_FUN_004f22c0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_kill_FUN_004f22c0(void)

{
  engine_mini3d_cpp_free32_FUN_004f5f70(_DAT_01d12114);
  _DAT_01d12114 = (void *)0x0;
  if (_DAT_01d09b78 == (void *)0x0) {
    if (_DAT_01d0d2cc == (void *)0x0) {
      return;
    }
  }
  else {
    debugFree(_DAT_01d09b78);
    _DAT_01d09b78 = (void *)0x0;
    _DAT_01d09b7c = 0;
    _DAT_01d09b80 = 0;
    if (_DAT_01d0d2cc == (void *)0x0) {
      return;
    }
  }
  debugFree(_DAT_01d0d2cc);
  debugFree(_DAT_01d0d2d0);
  _DAT_01d0d2cc = (void *)0x0;
  _DAT_01d0d2d0 = (void *)0x0;
  return;
}
