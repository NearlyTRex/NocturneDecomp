// Name: engine_2d.c_setSolidColor_FUN_004033f0
// Address: 004033f0
// Address Range: [[004033f0, 00403472]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_setSolidColor_FUN_004033f0(int red_component,int green_component,int blue_component)

#include "nocturne.h"

void __cdecl engine_2d_c_setSolidColor_FUN_004033f0(int red_component,int green_component,int blue_component)

{
  g_INT_01c51d24 = green_component;
  g_INT_01c51d28 = blue_component;
  g_INT_01c51d20 = red_component;
  g_ULONG_01c51d1c = red_component << 0x10 | green_component << 8 | blue_component;
  if ((g_INT_0061b4a0 != 0x10) && (g_INT_0061b4a0 == 0x20)) {
    g_ULONG_01c51d1c =
         blue_component << (g_BIT_INTEGER32_01c4e9ec.bytes[0] & 0x1f) |
         red_component << (g_BIT_INTEGER32_01c4e9d4.bytes[0] & 0x1f) |
         green_component << (g_BIT_INTEGER32_01c4e9e0.bytes[0] & 0x1f);
  }
  if (g_INT_01c50948 == 0) {
    return;
  }
  engine_special_cpp_setFogColor_FUN_005828e0(red_component,green_component,blue_component);
  return;
}
