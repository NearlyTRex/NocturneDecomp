// Name: engine_2d.c_setSolidColor_FUN_004033f0
// Address: 004033f0
// Address Range: [[004033f0, 00403472]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_setSolidColor_FUN_004033f0(int red_component,int green_component,int blue_component)

#include "nocturne.h"

void __cdecl engine_2d_c_setSolidColor_FUN_004033f0(int red_component,int green_component,int blue_component)

{
  g_SolidGreenComponent = green_component;
  g_SolidBlueComponent = blue_component;
  g_SolidRedComponent = red_component;
  g_SolidColorMode = red_component << 0x10 | green_component << 8 | blue_component;
  if ((g_INT_005fba20 != 0x10) && (g_INT_005fba20 == 0x20)) {
    g_SolidColorMode =
         blue_component << (g_BIT_INTEGER32_01c6af8c.bytes[0] & 0x1f) |
         red_component << (g_BIT_INTEGER32_01c6af74.bytes[0] & 0x1f) |
         green_component << (g_BIT_INTEGER32_01c6af80.bytes[0] & 0x1f);
  }
  if (g_INT_01c6cee8 == 0) {
    return;
  }
  engine_special_cpp_setFogColor_FUN_005661b0(red_component,green_component,blue_component);
  return;
}
