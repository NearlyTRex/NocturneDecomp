// Name: wincore_winrun.cpp_drawCrosshair_FUN_005b2650
// Address: 005b2650
// Address Range: [[005b2650, 005b273e]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_drawCrosshair_FUN_005b2650(void)

#include "nocturne.h"

void __cdecl wincore_winrun_cpp_drawCrosshair_FUN_005b2650(void)

{
  int x;
  int y;
  int iVar1;
  
  x = g_INT_01c4353c;
  g_INT_02c9a628 = g_INT_02c9a628 + g_INT_006260d8;
  if (g_INT_02c9a628 < 0x100) {
    if (g_INT_02c9a628 < 0) {
      g_INT_006260d8 = 8;
      g_INT_02c9a628 = 0;
    }
  }
  else {
    g_INT_006260d8 = -8;
    g_INT_02c9a628 = 0xff;
  }
  iVar1 = -5;
  g_INT_01c4f020 = 1;
  do {
    y = g_INT_01c43540 + iVar1;
    if ((((g_INT_01c4f008 < x) && (g_INT_01c4f00c < y)) && (x < g_INT_01c4f010)) &&
       (y < g_INT_01c4f014)) {
      engine_2d_c_plotPixel_FUN_00401130(x,y);
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 6);
  iVar1 = x + -5;
  do {
    while (((g_INT_01c4f008 < iVar1 && (g_INT_01c4f00c < g_INT_01c43540)) &&
           ((iVar1 < g_INT_01c4f010 && (g_INT_01c43540 < g_INT_01c4f014))))) {
      engine_2d_c_plotPixel_FUN_00401130(iVar1,g_INT_01c43540);
      iVar1 = iVar1 + 1;
      if (iVar1 == x + 6) {
        return;
      }
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != x + 6);
  return;
}
