// Name: engine_mini3d.cpp_getViewDepth_FUN_004f4bb0
// Address: 004f4bb0
// Address Range: [[004f4bb0, 004f4be3]]
// Convention: __cdecl
// Signature: float __cdecl engine_mini3d_cpp_getViewDepth_FUN_004f4bb0(CVector3f *point)

#include "nocturne.h"

float __cdecl engine_mini3d_cpp_getViewDepth_FUN_004f4bb0(CVector3f *point)

{
  return (point->z - *(float *)(g_PTR_01d09918 + 0x2c)) * *(float *)(g_PTR_01d09918 + 0x20) +
         (point->x - *(float *)(g_PTR_01d09918 + 0x24)) * *(float *)(g_PTR_01d09918 + 8) +
         (point->y - *(float *)(g_PTR_01d09918 + 0x28)) * *(float *)(g_PTR_01d09918 + 0x14);
}
