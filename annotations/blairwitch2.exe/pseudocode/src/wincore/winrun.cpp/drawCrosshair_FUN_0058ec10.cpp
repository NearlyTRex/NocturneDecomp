// Name: wincore_winrun.cpp_drawCrosshair_FUN_0058ec10
// Address: 0058ec10
// Address Range: [[0058ec10, 0058ecfe]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_drawCrosshair_FUN_0058ec10(void)

#include "nocturne.h"

void __cdecl wincore_winrun_cpp_drawCrosshair_FUN_0058ec10(void)

{
  int x;
  int y;
  int iVar1;
  
  x = g_MouseX;
  g_CrosshairBrightness = g_CrosshairBrightness + g_BrightnessDirection;
  if (g_CrosshairBrightness < 0x100) {
    if (g_CrosshairBrightness < 0) {
      g_BrightnessDirection = 8;
      g_CrosshairBrightness = 0;
    }
  }
  else {
    g_BrightnessDirection = -8;
    g_CrosshairBrightness = 0xff;
  }
  iVar1 = -5;
  g_INT_01c35e60 = 1;
  do {
    y = g_MouseY + iVar1;
    if ((((g_INT_01c35e48 < x) && (g_INT_01c35e4c < y)) && (x < g_ClipRight)) &&
       (y < g_INT_01c35e54)) {
      engine_2d_c_plotPixel_FUN_00401130(x,y);
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 6);
  iVar1 = x + -5;
  do {
    while (((g_INT_01c35e48 < iVar1 && (g_INT_01c35e4c < g_MouseY)) &&
           ((iVar1 < g_ClipRight && (g_MouseY < g_INT_01c35e54))))) {
      engine_2d_c_plotPixel_FUN_00401130(iVar1,g_MouseY);
      iVar1 = iVar1 + 1;
      if (iVar1 == x + 6) {
        return;
      }
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != x + 6);
  return;
}
