// Name: engine_mini3d.cpp_setFog_FUN_004edb80
// Address: 004edb80
// Address Range: [[004edb80, 004edc6d]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_setFog_FUN_004edb80(int red,int green,int blue,float fog_near,float fog_far)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_setFog_FUN_004edb80(int red,int green,int blue,float fog_near,float fog_far)

{
  g_FLOAT_01d76ce4 = (float)red * 0.003921569f;
  g_FLOAT_01d76ce8 = (float)green * 0.003921569f;
  g_FLOAT_01d76cec = (float)blue * 0.003921569f;
  g_FLOAT_01d76cf0 = fog_near;
  g_FLOAT_01d76cf4 = fog_far;
  if (g_INT_005fba20 == 0x20) {
    g_SolidColorMode =
         blue << (g_BIT_INTEGER32_01c6af8c.bytes[0] & 0x1f) |
         red << (g_BIT_INTEGER32_01c6af74.bytes[0] & 0x1f) |
         green << (g_BIT_INTEGER32_01c6af80.bytes[0] & 0x1f);
  }
  else {
    g_SolidColorMode = red << 0x10 | green << 8 | blue;
  }
  if ((g_PTR_02cf60f8 != (byte *)0x0) && (g_INT_01c6cee8 != 0)) {
    (*(code *)g_PTR_02cf60f8)(g_FLOAT_01d76ce4,g_FLOAT_01d76ce8,g_FLOAT_01d76cec,fog_near,fog_far);
  }
  g_FLOAT_01d7f538 = 1.0 / (g_FLOAT_01d76cf4 - g_FLOAT_01d76cf0);
  return;
}
