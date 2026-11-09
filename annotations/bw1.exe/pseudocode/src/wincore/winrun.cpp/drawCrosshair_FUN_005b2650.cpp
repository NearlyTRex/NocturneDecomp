// Name: wincore_winrun.cpp_drawCrosshair_FUN_005b2650
// Address: 005b2650
// Address Range: [[005b2650, 005b273e]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_drawCrosshair_FUN_005b2650(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl wincore_winrun_cpp_drawCrosshair_FUN_005b2650(void)

{
  int x;
  int y;
  int iVar1;
  
  x = _DAT_01c4353c;
  _DAT_02c9a628 = _DAT_02c9a628 + _DAT_006260d8;
  if (_DAT_02c9a628 < 0x100) {
    if (_DAT_02c9a628 < 0) {
      _DAT_006260d8 = 8;
      _DAT_02c9a628 = 0;
    }
  }
  else {
    _DAT_006260d8 = -8;
    _DAT_02c9a628 = 0xff;
  }
  iVar1 = -5;
  _DAT_01c4f020 = 1;
  do {
    y = _DAT_01c43540 + iVar1;
    if ((((_DAT_01c4f008 < x) && (_DAT_01c4f00c < y)) && (x < _DAT_01c4f010)) && (y < _DAT_01c4f014)
       ) {
      engine_2d_c_plotPixel_FUN_00401130(x,y);
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 6);
  iVar1 = x + -5;
  do {
    while (((_DAT_01c4f008 < iVar1 && (_DAT_01c4f00c < _DAT_01c43540)) &&
           ((iVar1 < _DAT_01c4f010 && (_DAT_01c43540 < _DAT_01c4f014))))) {
      engine_2d_c_plotPixel_FUN_00401130(iVar1,_DAT_01c43540);
      iVar1 = iVar1 + 1;
      if (iVar1 == x + 6) {
        return;
      }
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != x + 6);
  return;
}
