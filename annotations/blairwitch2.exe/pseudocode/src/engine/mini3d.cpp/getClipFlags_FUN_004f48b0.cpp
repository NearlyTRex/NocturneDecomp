// Name: engine_mini3d.cpp_getClipFlags_FUN_004f48b0
// Address: 004f48b0
// Address Range: [[004f48b0, 004f498f]]
// Convention: __cdecl
// Signature: int __cdecl engine_mini3d_cpp_getClipFlags_FUN_004f48b0(CVector3f *point)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_mini3d_cpp_getClipFlags_FUN_004f48b0(CVector3f *point)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  byte bVar6;
  
  fVar1 = point->y - _DAT_01d09918[10];
  fVar3 = point->x - _DAT_01d09918[9];
  fVar5 = point->z - _DAT_01d09918[0xb];
  fVar4 = fVar5 * _DAT_01d09918[6] + fVar3 * *_DAT_01d09918 + fVar1 * _DAT_01d09918[3];
  fVar2 = fVar5 * _DAT_01d09918[7] + fVar1 * _DAT_01d09918[4] + fVar3 * _DAT_01d09918[1];
  fVar1 = fVar5 * _DAT_01d09918[8] + fVar1 * _DAT_01d09918[5] + fVar3 * _DAT_01d09918[2];
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
  if (fVar1 <= _DAT_01d098dc) {
    bVar6 = bVar6 | 0x10;
  }
  if (fVar1 < _DAT_01d09910 == 0) {
    bVar6 = bVar6 | 0x20;
  }
  return CONCAT31((int3)(CONCAT22((short)((uint)_DAT_01d09918 >> 0x10),
                                  (ushort)(fVar1 < _DAT_01d09910) << 8 |
                                  (ushort)(NAN(fVar1) || NAN(_DAT_01d09910)) << 10 |
                                  (ushort)(fVar1 == _DAT_01d09910) << 0xe) >> 8),bVar6);
}
