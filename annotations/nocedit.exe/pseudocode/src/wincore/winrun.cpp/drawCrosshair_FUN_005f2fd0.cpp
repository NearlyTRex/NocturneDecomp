// Name: wincore_winrun.cpp_drawCrosshair_FUN_005f2fd0
// Address: 005f2fd0
// Address Range: [[005f2fd0, 005f30be]]
// Convention: __cdecl
// Signature: void wincore_winrun.cpp_drawCrosshair_FUN_005f2fd0(void)

#include "nocturne.h"

void __cdecl wincore_winrun_cpp_drawCrosshair_FUN_005f2fd0(void)

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
  g_ActiveRenderColor = 1;
  do {
    y = g_MouseY + iVar1;
    if ((((g_ClipLeft < x) && (g_ClipTop < y)) && (x < g_ClipRight)) && (y < g_ClipBottom)) {
      engine_2d_c_plotPixel_FUN_00401140(x,y);
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 6);
  iVar1 = x + -5;
  do {
    while (((g_ClipLeft < iVar1 && (g_ClipTop < g_MouseY)) &&
           ((iVar1 < g_ClipRight && (g_MouseY < g_ClipBottom))))) {
      engine_2d_c_plotPixel_FUN_00401140(iVar1,g_MouseY);
      iVar1 = iVar1 + 1;
      if (iVar1 == x + 6) {
        return;
      }
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != x + 6);
  return;
}
