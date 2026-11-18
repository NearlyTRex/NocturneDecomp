// Name: engine_mini3d.cpp_nextDepth2D_FUN_004f93d0
// Address: 004f93d0
// Address Range: [[004f93d0, 004f9402]]
// Convention: __cdecl
// Signature: float __cdecl engine_mini3d_cpp_nextDepth2D_FUN_004f93d0(void)

#include "nocturne.h"

float __cdecl engine_mini3d_cpp_nextDepth2D_FUN_004f93d0(void)

{
  g_FLOAT_01d0d2d4 = g_FLOAT_01d0d2d4 + -0.01f;
  if (g_FLOAT_01d098dc <= g_FLOAT_01d0d2d4) {
    return g_FLOAT_01d0d2d4;
  }
  g_FLOAT_01d0d2d4 = g_FLOAT_01d098dc;
  return g_FLOAT_01d098dc;
}
