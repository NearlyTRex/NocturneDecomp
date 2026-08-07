// Name: wincore_winrun.cpp_FUN_00558c40
// Address: 00558c40
// Address Range: [[00558c40, 00558d4f]]
// Convention: unknown
// Signature: void wincore_winrun_cpp_FUN_00558c40(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wincore_winrun_cpp_FUN_00558c40(void)

{
  int x;
  int y;
  int iVar1;
  
  x = _DAT_01bd1d8c;
  _DAT_02de0858 = _DAT_02de0858 + INT_005c1654;
  if (_DAT_02de0858 < 0x100) {
    if (_DAT_02de0858 < 0) {
      INT_005c1654 = 8;
      _DAT_02de0858 = 0;
    }
  }
  else {
    INT_005c1654 = -8;
    _DAT_02de0858 = 0xff;
  }
  g_ActiveRenderColor =
       (int)g_ColorCubeLookup
            [((int)((_DAT_02de0858 + (_DAT_02de0858 >> 0x1f) * -8) -
                   (uint)((_DAT_02de0858 >> 0x1f) << 2 < 0)) >> 3) * 0x20];
  iVar1 = -5;
  do {
    y = _DAT_01bd1d90 + iVar1;
    if ((((g_ClipLeft < x) && (g_ClipTop < y)) && (x < g_ClipRight)) && (y < g_ClipBottom)) {
      engine_2d_c_plotPixel_FUN_00401530(x,y);
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 6);
  iVar1 = x + -5;
  do {
    while (((g_ClipLeft < iVar1 && (g_ClipTop < _DAT_01bd1d90)) &&
           ((iVar1 < g_ClipRight && (_DAT_01bd1d90 < g_ClipBottom))))) {
      engine_2d_c_plotPixel_FUN_00401530(iVar1,_DAT_01bd1d90);
      iVar1 = iVar1 + 1;
      if (iVar1 == x + 6) {
        return;
      }
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != x + 6);
  return;
}
