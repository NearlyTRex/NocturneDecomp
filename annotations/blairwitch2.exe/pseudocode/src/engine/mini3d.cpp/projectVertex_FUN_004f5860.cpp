// Name: engine_mini3d.cpp_projectVertex_FUN_004f5860
// Address: 004f5860
// Address Range: [[004f5860, 004f58fe]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_projectVertex_FUN_004f5860(float *vertex)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_projectVertex_FUN_004f5860(float *vertex)

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
    fVar1 = *vertex * g_FLOAT_01d0987c;
    fVar2 = vertex[1] * g_FLOAT_01d09880;
    vertex[3] = 1.0 / vertex[2];
    fVar2 = g_FLOAT_01d09888 + fVar2 * vertex[3];
    vertex[5] = g_FLOAT_01d09884 + fVar1 * vertex[3];
    vertex[6] = fVar2;
    return;
  }
  *(byte *)(vertex + 4) = *(byte *)(vertex + 4) | 0x10;
  return;
}
