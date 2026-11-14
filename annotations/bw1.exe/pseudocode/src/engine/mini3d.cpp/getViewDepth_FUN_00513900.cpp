// Name: engine_mini3d.cpp_getViewDepth_FUN_00513900
// Address: 00513900
// Address Range: [[00513900, 00513933]]
// Convention: __cdecl
// Signature: float __cdecl engine_mini3d_cpp_getViewDepth_FUN_00513900(CVector3f *point)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl engine_mini3d_cpp_getViewDepth_FUN_00513900(CVector3f *point)

{
  return (point->z - *(float *)(_DAT_01d2257c + 0x2c)) * *(float *)(_DAT_01d2257c + 0x20) +
         (point->x - *(float *)(_DAT_01d2257c + 0x24)) * *(float *)(_DAT_01d2257c + 8) +
         (point->y - *(float *)(_DAT_01d2257c + 0x28)) * *(float *)(_DAT_01d2257c + 0x14);
}
