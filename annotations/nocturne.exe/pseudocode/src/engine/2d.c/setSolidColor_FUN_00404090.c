// Name: engine_2d.c_setSolidColor_FUN_00404090
// Address: 00404090
// Address Range: [[00404090, 00404112]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_setSolidColor_FUN_00404090(int red_component,int green_component,int blue_component)

#include "nocturne.h"

void __cdecl engine_2d_c_setSolidColor_FUN_00404090(int red_component,int green_component,int blue_component)

{
  g_SolidGreenComponent = green_component;
  g_SolidBlueComponent = blue_component;
  g_SolidRedComponent = red_component;
  g_SolidColorMode = red_component << 0x10 | green_component << 8 | blue_component;
  if ((g_BitsPerPixel != 0x10) && (g_BitsPerPixel == 0x20)) {
    g_SolidColorMode =
         blue_component << (g_BlueBitPosition.bytes[0] & 0x1f) |
         red_component << (g_RedBitPosition.bytes[0] & 0x1f) |
         green_component << (g_GreenBitPosition.bytes[0] & 0x1f);
  }
  if (g_UseExternalRenderer == 0) {
    return;
  }
  engine_special_cpp_setFogColor_FUN_00532af0(red_component,green_component,blue_component);
  return;
}
