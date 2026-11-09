// Name: wincore_winrun.cpp_drawCrosshair_FUN_0058ec10
// Address: 0058ec10
// Address Range: [[0058ec10, 0058ecfe]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_drawCrosshair_FUN_0058ec10(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl wincore_winrun_cpp_drawCrosshair_FUN_0058ec10(void)

{
  int x;
  int y;
  int iVar1;
  
  x = _DAT_01c2a37c;
  _DAT_02662de8 = _DAT_02662de8 + _DAT_0061e980;
  if (_DAT_02662de8 < 0x100) {
    if (_DAT_02662de8 < 0) {
      _DAT_0061e980 = 8;
      _DAT_02662de8 = 0;
    }
  }
  else {
    _DAT_0061e980 = -8;
    _DAT_02662de8 = 0xff;
  }
  iVar1 = -5;
  _DAT_01c35e60 = 1;
  do {
    y = _DAT_01c2a380 + iVar1;
    if ((((_DAT_01c35e48 < x) && (_DAT_01c35e4c < y)) && (x < _DAT_01c35e50)) && (y < _DAT_01c35e54)
       ) {
      engine_2d_c_plotPixel_FUN_00401130(x,y);
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 6);
  iVar1 = x + -5;
  do {
    while (((_DAT_01c35e48 < iVar1 && (_DAT_01c35e4c < _DAT_01c2a380)) &&
           ((iVar1 < _DAT_01c35e50 && (_DAT_01c2a380 < _DAT_01c35e54))))) {
      engine_2d_c_plotPixel_FUN_00401130(iVar1,_DAT_01c2a380);
      iVar1 = iVar1 + 1;
      if (iVar1 == x + 6) {
        return;
      }
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != x + 6);
  return;
}
