// Name: engine_2d.c_setSolidColor_FUN_004033a0
// Address: 004033a0
// Address Range: [[004033a0, 00403422]]
// Convention: __cdecl
// Signature: void engine_2d.c_setSolidColor_FUN_004033a0(int red_component, int green_component, int blue_component)

#include "nocturne.h"

void __cdecl
engine_2d_c_setSolidColor_FUN_004033a0(int red_component,int green_component,int blue_component)

{
  g_SolidGreenComponent = green_component;
  g_SolidBlueComponent = blue_component;
  g_SolidRedComponent = red_component;
  g_SolidColorMode = red_component << 0x10 | green_component << 8 | blue_component;
  if ((g_BitsPerPixel != 0x10) && (g_BitsPerPixel == 0x20)) {
    g_SolidColorMode =
         blue_component << ((byte)g_BlueBitPosition & 0x1f) |
         red_component << ((byte)g_RedBitPosition & 0x1f) |
         green_component << ((byte)g_GreenBitPosition & 0x1f);
  }
  if (g_UseExternalRenderer == 0) {
    return;
  }
  wincore_windll_cpp_setFogColor_FUN_005b7b80(red_component,green_component,blue_component);
  return;
}
