// Name: engine_mini3d.cpp_computeVertexFog_FUN_004f5370
// Address: 004f5370
// Address Range: [[004f5370, 004f53c9]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_computeVertexFog_FUN_004f5370(float *vertex)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_computeVertexFog_FUN_004f5370(float *vertex)

{
  float fStack_4;
  
  if (g_INT_01d09868 != 0) {
    fStack_4 = (vertex[2] - g_FLOAT_01d0990c) * g_FLOAT_01d12158;
    if (fStack_4 < 0.0) {
      fStack_4 = 0.0;
    }
    else if (0x3f800000 < (int)fStack_4) {
      fStack_4 = 1.0;
    }
    vertex[0xd] = fStack_4;
    return;
  }
  vertex[0xd] = 0.0;
  return;
}
