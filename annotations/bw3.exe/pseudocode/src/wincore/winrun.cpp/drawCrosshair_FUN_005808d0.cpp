// Name: wincore_winrun.cpp_drawCrosshair_FUN_005808d0
// Address: 005808d0
// Address Range: [[005808d0, 005809be]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_drawCrosshair_FUN_005808d0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl wincore_winrun_cpp_drawCrosshair_FUN_005808d0(void)

{
  int x;
  int y;
  int iVar1;
  
  x = _DAT_01c5fadc;
  _DAT_02d20338 = _DAT_02d20338 + _DAT_0060727c;
  if (_DAT_02d20338 < 0x100) {
    if (_DAT_02d20338 < 0) {
      _DAT_0060727c = 8;
      _DAT_02d20338 = 0;
    }
  }
  else {
    _DAT_0060727c = -8;
    _DAT_02d20338 = 0xff;
  }
  iVar1 = -5;
  _DAT_01c6b5c0 = 1;
  do {
    y = _DAT_01c5fae0 + iVar1;
    if ((((_DAT_01c6b5a8 < x) && (_DAT_01c6b5ac < y)) && (x < _DAT_01c6b5b0)) && (y < _DAT_01c6b5b4)
       ) {
      engine_2d_c_plotPixel_FUN_00401130(x,y);
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 6);
  iVar1 = x + -5;
  do {
    while (((_DAT_01c6b5a8 < iVar1 && (_DAT_01c6b5ac < _DAT_01c5fae0)) &&
           ((iVar1 < _DAT_01c6b5b0 && (_DAT_01c5fae0 < _DAT_01c6b5b4))))) {
      engine_2d_c_plotPixel_FUN_00401130(iVar1,_DAT_01c5fae0);
      iVar1 = iVar1 + 1;
      if (iVar1 == x + 6) {
        return;
      }
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != x + 6);
  return;
}
