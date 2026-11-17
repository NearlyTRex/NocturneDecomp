// Name: engine_mini3d.cpp_nextDepth2D_FUN_004f3af0
// Address: 004f3af0
// Address Range: [[004f3af0, 004f3b22]]
// Convention: __cdecl
// Signature: float __cdecl engine_mini3d_cpp_nextDepth2D_FUN_004f3af0(void)

#include "nocturne.h"

float __cdecl engine_mini3d_cpp_nextDepth2D_FUN_004f3af0(void)

{
  g_FLOAT_01d7a6b4 = g_FLOAT_01d7a6b4 + -0.01f;
  if (g_FLOAT_01d76cbc <= g_FLOAT_01d7a6b4) {
    return g_FLOAT_01d7a6b4;
  }
  g_FLOAT_01d7a6b4 = g_FLOAT_01d76cbc;
  return g_FLOAT_01d76cbc;
}
