// Name: engine_mini3d.cpp_getClipFlags_FUN_004eedd0
// Address: 004eedd0
// Address Range: [[004eedd0, 004eeeaf]]
// Convention: __cdecl
// Signature: int __cdecl engine_mini3d_cpp_getClipFlags_FUN_004eedd0(CVector3f *point)

#include "nocturne.h"

int __cdecl engine_mini3d_cpp_getClipFlags_FUN_004eedd0(CVector3f *point)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  byte bVar6;
  
  fVar1 = point->y - *(float *)(g_PTR_01d76cfc + 0x28);
  fVar3 = point->x - *(float *)(g_PTR_01d76cfc + 0x24);
  fVar5 = point->z - *(float *)(g_PTR_01d76cfc + 0x2c);
  fVar4 = fVar5 * *(float *)(g_PTR_01d76cfc + 0x18) +
          fVar3 * *(float *)g_PTR_01d76cfc + fVar1 * *(float *)(g_PTR_01d76cfc + 0xc);
  fVar2 = fVar5 * *(float *)(g_PTR_01d76cfc + 0x1c) +
          fVar1 * *(float *)(g_PTR_01d76cfc + 0x10) + fVar3 * *(float *)(g_PTR_01d76cfc + 4);
  fVar1 = fVar5 * *(float *)(g_PTR_01d76cfc + 0x20) +
          fVar1 * *(float *)(g_PTR_01d76cfc + 0x14) + fVar3 * *(float *)(g_PTR_01d76cfc + 8);
  bVar6 = fVar1 < fVar4;
  if (fVar4 < -fVar1) {
    bVar6 = bVar6 | 2;
  }
  if (fVar1 < fVar2) {
    bVar6 = bVar6 | 4;
  }
  if (fVar2 < -fVar1) {
    bVar6 = bVar6 | 8;
  }
  if (fVar1 <= g_FLOAT_01d76cbc) {
    bVar6 = bVar6 | 0x10;
  }
  if (fVar1 < g_FLOAT_01d76cf4 == 0) {
    bVar6 = bVar6 | 0x20;
  }
  return CONCAT31((int3)(CONCAT22((short)((uint)g_PTR_01d76cfc >> 0x10),
                                  (ushort)(fVar1 < g_FLOAT_01d76cf4) << 8 |
                                  (ushort)(NAN(fVar1) || NAN(g_FLOAT_01d76cf4)) << 10 |
                                  (ushort)(fVar1 == g_FLOAT_01d76cf4) << 0xe) >> 8),bVar6);
}
