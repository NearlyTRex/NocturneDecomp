// Name: engine_mini3d.cpp_computeVertexFog_FUN_005140c0
// Address: 005140c0
// Address Range: [[005140c0, 00514119]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_computeVertexFog_FUN_005140c0(float *vertex)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_computeVertexFog_FUN_005140c0(float *vertex)

{
  float fStack_4;
  
  if (_DAT_01d224c8 != 0) {
    fStack_4 = (vertex[2] - _DAT_01d22570) * _DAT_01d2adb8;
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
