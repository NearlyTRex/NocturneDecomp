// Name: engine_mini3d.cpp_getBehindClipFlag_FUN_005136e0
// Address: 005136e0
// Address Range: [[005136e0, 00513720]]
// Convention: __cdecl
// Signature: int __cdecl engine_mini3d_cpp_getBehindClipFlag_FUN_005136e0(CVector3f *point)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_mini3d_cpp_getBehindClipFlag_FUN_005136e0(CVector3f *point)

{
  float fVar1;
  uint3 uVar2;
  
  fVar1 = (point->z - *(float *)(_DAT_01d2257c + 0x2c)) * *(float *)(_DAT_01d2257c + 0x20) +
          (point->y - *(float *)(_DAT_01d2257c + 0x28)) * *(float *)(_DAT_01d2257c + 0x14) +
          (point->x - *(float *)(_DAT_01d2257c + 0x24)) * *(float *)(_DAT_01d2257c + 8);
  uVar2 = (uint3)(CONCAT22((short)((uint)_DAT_01d2257c >> 0x10),
                           (ushort)(0.0 < fVar1) << 8 | (ushort)NAN(fVar1) << 10 |
                           (ushort)(fVar1 == 0.0) << 0xe) >> 8);
  if (0.0 >= fVar1) {
    return CONCAT31(uVar2,0x10);
  }
  return (uint)uVar2 << 8;
}
