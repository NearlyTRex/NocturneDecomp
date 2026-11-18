// Name: engine_mini3d.cpp_setFog_FUN_005123b0
// Address: 005123b0
// Address Range: [[005123b0, 0051249d]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_setFog_FUN_005123b0(int red,int green,int blue,float fog_near,float fog_far)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_setFog_FUN_005123b0(int red,int green,int blue,float fog_near,float fog_far)

{
  g_FLOAT_01d22564 = (float)red * 0.003921569f;
  g_FLOAT_01d22568 = (float)green * 0.003921569f;
  g_FLOAT_01d2256c = (float)blue * 0.003921569f;
  g_FLOAT_01d22570 = fog_near;
  g_FLOAT_01d22574 = fog_far;
  if (g_INT_0061b4a0 == 0x20) {
    g_SolidColorMode =
         blue << (g_BlueBitPosition.bytes[0] & 0x1f) |
         red << (g_RedBitPosition.bytes[0] & 0x1f) | green << (g_GreenBitPosition.bytes[0] & 0x1f);
  }
  else {
    g_SolidColorMode = red << 0x10 | green << 8 | blue;
  }
  if ((g_PTR_02c8349c != (byte *)0x0) && (g_INT_01c50948 != 0)) {
    (*(code *)g_PTR_02c8349c)(g_FLOAT_01d22564,g_FLOAT_01d22568,g_FLOAT_01d2256c,fog_near,fog_far);
  }
  g_FLOAT_01d2adb8 = 1.0 / (g_FLOAT_01d22574 - g_FLOAT_01d22570);
  return;
}
