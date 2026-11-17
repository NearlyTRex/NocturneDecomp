// Name: engine_mini3d.cpp_setFog_FUN_004f3600
// Address: 004f3600
// Address Range: [[004f3600, 004f36ed]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_setFog_FUN_004f3600(int red,int green,int blue,float fog_near,float fog_far)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_setFog_FUN_004f3600(int red,int green,int blue,float fog_near,float fog_far)

{
  g_FLOAT_01d09900 = (float)red * 0.003921569f;
  g_FLOAT_01d09904 = (float)green * 0.003921569f;
  g_FLOAT_01d09908 = (float)blue * 0.003921569f;
  g_FLOAT_01d0990c = fog_near;
  g_FLOAT_01d09910 = fog_far;
  if (g_INT_006141c0 == 0x20) {
    g_SolidColorMode =
         blue << (g_BlueBitPosition.bytes[0] & 0x1f) |
         red << (g_RedBitPosition.bytes[0] & 0x1f) | green << (g_GreenBitPosition.bytes[0] & 0x1f);
  }
  else {
    g_SolidColorMode = red << 0x10 | green << 8 | blue;
  }
  if ((g_APIDLL_enableCulling != (byte *)0x0) && (g_INT_01c37788 != 0)) {
    (*(code *)g_APIDLL_enableCulling)
              (g_FLOAT_01d09900,g_FLOAT_01d09904,g_FLOAT_01d09908,fog_near,fog_far);
  }
  g_FLOAT_01d12158 = 1.0 / (g_FLOAT_01d09910 - g_FLOAT_01d0990c);
  return;
}
