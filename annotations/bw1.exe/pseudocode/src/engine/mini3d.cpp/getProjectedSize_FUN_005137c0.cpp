// Name: engine_mini3d.cpp_getProjectedSize_FUN_005137c0
// Address: 005137c0
// Address Range: [[005137c0, 0051384e]]
// Convention: __cdecl
// Signature: float __cdecl engine_mini3d_cpp_getProjectedSize_FUN_005137c0(float size,CVector3f *point)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl engine_mini3d_cpp_getProjectedSize_FUN_005137c0(float size,CVector3f *point)

{
  float fVar1;
  
  if (point == (CVector3f *)0x0) {
    fVar1 = (-*(float *)(_DAT_01d2257c + 0x24) * *(float *)(_DAT_01d2257c + 8) -
            *(float *)(_DAT_01d2257c + 0x28) * *(float *)(_DAT_01d2257c + 0x14)) -
            *(float *)(_DAT_01d2257c + 0x2c) * *(float *)(_DAT_01d2257c + 0x20);
  }
  else {
    fVar1 = (point->z - *(float *)(_DAT_01d2257c + 0x2c)) * *(float *)(_DAT_01d2257c + 0x20) +
            (point->x - *(float *)(_DAT_01d2257c + 0x24)) * *(float *)(_DAT_01d2257c + 8) +
            (point->y - *(float *)(_DAT_01d2257c + 0x28)) * *(float *)(_DAT_01d2257c + 0x14);
  }
  if ((int)fVar1 < 0x3f800000) {
    return _DAT_01d224d8 - _DAT_01d224d0;
  }
  return (size / fVar1) * _DAT_005e8e7f * _DAT_01d22528;
}
