// Name: engine_mini3d.cpp_projectVertex_FUN_005145b0
// Address: 005145b0
// Address Range: [[005145b0, 0051464e]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_projectVertex_FUN_005145b0(float *vertex)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_projectVertex_FUN_005145b0(float *vertex)

{
  float fVar1;
  float fVar2;
  
  vertex[4] = 0.0;
  if (vertex[2] < *vertex) {
    *(byte *)(vertex + 4) = *(byte *)(vertex + 4) | 1;
  }
  if (*vertex < -vertex[2]) {
    *(byte *)(vertex + 4) = *(byte *)(vertex + 4) | 2;
  }
  if (vertex[2] < vertex[1]) {
    *(byte *)(vertex + 4) = *(byte *)(vertex + 4) | 4;
  }
  if (vertex[1] < -vertex[2]) {
    *(byte *)(vertex + 4) = *(byte *)(vertex + 4) | 8;
  }
  if (0.0 < vertex[2]) {
    if (vertex[4] != 0.0) {
      return;
    }
    fVar1 = *vertex * g_FLOAT_01d224dc;
    fVar2 = vertex[1] * g_FLOAT_01d224e0;
    vertex[3] = 1.0 / vertex[2];
    fVar2 = g_FLOAT_01d224e8 + fVar2 * vertex[3];
    vertex[5] = g_FLOAT_01d224e4 + fVar1 * vertex[3];
    vertex[6] = fVar2;
    return;
  }
  *(byte *)(vertex + 4) = *(byte *)(vertex + 4) | 0x10;
  return;
}
