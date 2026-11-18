// Name: engine_mini3d.cpp_getProjectedSize_FUN_004f4a70
// Address: 004f4a70
// Address Range: [[004f4a70, 004f4afe]]
// Convention: __cdecl
// Signature: float __cdecl engine_mini3d_cpp_getProjectedSize_FUN_004f4a70(float size,CVector3f *point)

#include "nocturne.h"

float __cdecl engine_mini3d_cpp_getProjectedSize_FUN_004f4a70(float size,CVector3f *point)

{
  float fVar1;
  
  if (point == (CVector3f *)0x0) {
    fVar1 = (-*(float *)(g_PTR_01d09918 + 0x24) * *(float *)(g_PTR_01d09918 + 8) -
            *(float *)(g_PTR_01d09918 + 0x28) * *(float *)(g_PTR_01d09918 + 0x14)) -
            *(float *)(g_PTR_01d09918 + 0x2c) * *(float *)(g_PTR_01d09918 + 0x20);
  }
  else {
    fVar1 = (point->z - *(float *)(g_PTR_01d09918 + 0x2c)) * *(float *)(g_PTR_01d09918 + 0x20) +
            (point->x - *(float *)(g_PTR_01d09918 + 0x24)) * *(float *)(g_PTR_01d09918 + 8) +
            (point->y - *(float *)(g_PTR_01d09918 + 0x28)) * *(float *)(g_PTR_01d09918 + 0x14);
  }
  if ((int)fVar1 < 0x3f800000) {
    return g_FLOAT_01d09878 - g_FLOAT_01d09870;
  }
  return (size / fVar1) * 240.0f * g_FLOAT_01d098c8;
}
