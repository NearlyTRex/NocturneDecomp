// Name: engine_mini3d.cpp_getViewDepth_FUN_00513900
// Address: 00513900
// Address Range: [[00513900, 00513933]]
// Convention: __cdecl
// Signature: float __cdecl engine_mini3d_cpp_getViewDepth_FUN_00513900(CVector3f *point)

#include "nocturne.h"

float __cdecl engine_mini3d_cpp_getViewDepth_FUN_00513900(CVector3f *point)

{
  return (point->z - *(float *)(g_PTR_01d2257c + 0x2c)) * *(float *)(g_PTR_01d2257c + 0x20) +
         (point->x - *(float *)(g_PTR_01d2257c + 0x24)) * *(float *)(g_PTR_01d2257c + 8) +
         (point->y - *(float *)(g_PTR_01d2257c + 0x28)) * *(float *)(g_PTR_01d2257c + 0x14);
}
