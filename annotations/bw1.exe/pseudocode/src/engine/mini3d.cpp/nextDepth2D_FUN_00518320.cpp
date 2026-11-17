// Name: engine_mini3d.cpp_nextDepth2D_FUN_00518320
// Address: 00518320
// Address Range: [[00518320, 00518352]]
// Convention: __cdecl
// Signature: float __cdecl engine_mini3d_cpp_nextDepth2D_FUN_00518320(void)

#include "nocturne.h"

float __cdecl engine_mini3d_cpp_nextDepth2D_FUN_00518320(void)

{
  g_FLOAT_01d25f34 = g_FLOAT_01d25f34 + -0.01f;
  if (g_FLOAT_01d2253c <= g_FLOAT_01d25f34) {
    return g_FLOAT_01d25f34;
  }
  g_FLOAT_01d25f34 = g_FLOAT_01d2253c;
  return g_FLOAT_01d2253c;
}
