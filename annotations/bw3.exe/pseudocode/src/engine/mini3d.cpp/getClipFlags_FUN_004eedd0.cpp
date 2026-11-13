// Name: engine_mini3d.cpp_getClipFlags_FUN_004eedd0
// Address: 004eedd0
// Address Range: [[004eedd0, 004eeeaf]]
// Convention: __cdecl
// Signature: int __cdecl engine_mini3d_cpp_getClipFlags_FUN_004eedd0(CVector3f *point)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_mini3d_cpp_getClipFlags_FUN_004eedd0(CVector3f *point)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  byte bVar6;
  
  fVar1 = point->y - _DAT_01d76cfc[10];
  fVar3 = point->x - _DAT_01d76cfc[9];
  fVar5 = point->z - _DAT_01d76cfc[0xb];
  fVar4 = fVar5 * _DAT_01d76cfc[6] + fVar3 * *_DAT_01d76cfc + fVar1 * _DAT_01d76cfc[3];
  fVar2 = fVar5 * _DAT_01d76cfc[7] + fVar1 * _DAT_01d76cfc[4] + fVar3 * _DAT_01d76cfc[1];
  fVar1 = fVar5 * _DAT_01d76cfc[8] + fVar1 * _DAT_01d76cfc[5] + fVar3 * _DAT_01d76cfc[2];
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
  if (fVar1 <= _DAT_01d76cbc) {
    bVar6 = bVar6 | 0x10;
  }
  if (fVar1 < _DAT_01d76cf4 == 0) {
    bVar6 = bVar6 | 0x20;
  }
  return CONCAT31((int3)(CONCAT22((short)((uint)_DAT_01d76cfc >> 0x10),
                                  (ushort)(fVar1 < _DAT_01d76cf4) << 8 |
                                  (ushort)(NAN(fVar1) || NAN(_DAT_01d76cf4)) << 10 |
                                  (ushort)(fVar1 == _DAT_01d76cf4) << 0xe) >> 8),bVar6);
}
