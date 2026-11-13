// Name: engine_mini3d.cpp_getClipFlags_FUN_00513600
// Address: 00513600
// Address Range: [[00513600, 005136df]]
// Convention: __cdecl
// Signature: int __cdecl engine_mini3d_cpp_getClipFlags_FUN_00513600(CVector3f *point)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_mini3d_cpp_getClipFlags_FUN_00513600(CVector3f *point)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  byte bVar6;
  
  fVar1 = point->y - _DAT_01d2257c[10];
  fVar3 = point->x - _DAT_01d2257c[9];
  fVar5 = point->z - _DAT_01d2257c[0xb];
  fVar4 = fVar5 * _DAT_01d2257c[6] + fVar3 * *_DAT_01d2257c + fVar1 * _DAT_01d2257c[3];
  fVar2 = fVar5 * _DAT_01d2257c[7] + fVar1 * _DAT_01d2257c[4] + fVar3 * _DAT_01d2257c[1];
  fVar1 = fVar5 * _DAT_01d2257c[8] + fVar1 * _DAT_01d2257c[5] + fVar3 * _DAT_01d2257c[2];
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
  if (fVar1 <= _DAT_01d2253c) {
    bVar6 = bVar6 | 0x10;
  }
  if (fVar1 < _DAT_01d22574 == 0) {
    bVar6 = bVar6 | 0x20;
  }
  return CONCAT31((int3)(CONCAT22((short)((uint)_DAT_01d2257c >> 0x10),
                                  (ushort)(fVar1 < _DAT_01d22574) << 8 |
                                  (ushort)(NAN(fVar1) || NAN(_DAT_01d22574)) << 10 |
                                  (ushort)(fVar1 == _DAT_01d22574) << 0xe) >> 8),bVar6);
}
