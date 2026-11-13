// Name: engine_mini3d.cpp_projectVertex_FUN_004efd80
// Address: 004efd80
// Address Range: [[004efd80, 004efe1e]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_projectVertex_FUN_004efd80(float *vertex)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_projectVertex_FUN_004efd80(float *vertex)

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
    fVar1 = *vertex * _DAT_01d76c5c;
    fVar2 = vertex[1] * _DAT_01d76c60;
    vertex[3] = 1.0 / vertex[2];
    fVar2 = _DAT_01d76c68 + fVar2 * vertex[3];
    vertex[5] = _DAT_01d76c64 + fVar1 * vertex[3];
    vertex[6] = fVar2;
    return;
  }
  *(byte *)(vertex + 4) = *(byte *)(vertex + 4) | 0x10;
  return;
}
