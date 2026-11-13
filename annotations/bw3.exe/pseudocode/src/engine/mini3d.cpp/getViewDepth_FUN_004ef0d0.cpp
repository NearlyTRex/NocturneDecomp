// Name: engine_mini3d.cpp_getViewDepth_FUN_004ef0d0
// Address: 004ef0d0
// Address Range: [[004ef0d0, 004ef103]]
// Convention: __cdecl
// Signature: float __cdecl engine_mini3d_cpp_getViewDepth_FUN_004ef0d0(CVector3f *point)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl engine_mini3d_cpp_getViewDepth_FUN_004ef0d0(CVector3f *point)

{
  return (point->z - *(float *)(_DAT_01d76cfc + 0x2c)) * *(float *)(_DAT_01d76cfc + 0x20) +
         (point->x - *(float *)(_DAT_01d76cfc + 0x24)) * *(float *)(_DAT_01d76cfc + 8) +
         (point->y - *(float *)(_DAT_01d76cfc + 0x28)) * *(float *)(_DAT_01d76cfc + 0x14);
}
