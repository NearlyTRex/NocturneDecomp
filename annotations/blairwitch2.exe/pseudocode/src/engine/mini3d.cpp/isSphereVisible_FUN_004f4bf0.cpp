// Name: engine_mini3d.cpp_isSphereVisible_FUN_004f4bf0
// Address: 004f4bf0
// Address Range: [[004f4bf0, 004f4d01]]
// Convention: __cdecl
// Signature: int __cdecl engine_mini3d_cpp_isSphereVisible_FUN_004f4bf0(CVector3f *center,float radius)

#include "nocturne.h"

int __cdecl engine_mini3d_cpp_isSphereVisible_FUN_004f4bf0(CVector3f *center,float radius)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = center->x - *(float *)(g_PTR_01d09918 + 0x24);
  fVar4 = center->y - *(float *)(g_PTR_01d09918 + 0x28);
  fVar3 = center->z - *(float *)(g_PTR_01d09918 + 0x2c);
  fVar6 = radius * 1.333f * g_FLOAT_01d098c8;
  fVar2 = fVar3 * *(float *)(g_PTR_01d09918 + 0x20) +
          fVar4 * *(float *)(g_PTR_01d09918 + 0x14) + fVar1 * *(float *)(g_PTR_01d09918 + 8);
  if ((((0.0 <= fVar2 + fVar6) && (fVar2 - fVar6 <= g_FLOAT_01d09910)) &&
      (fVar5 = fVar3 * *(float *)(g_PTR_01d09918 + 0x18) +
               fVar1 * *(float *)g_PTR_01d09918 + fVar4 * *(float *)(g_PTR_01d09918 + 0xc),
      fVar5 - fVar6 <= fVar2)) &&
     (((-fVar2 <= fVar5 + fVar6 &&
       (fVar1 = fVar3 * *(float *)(g_PTR_01d09918 + 0x1c) +
                fVar4 * *(float *)(g_PTR_01d09918 + 0x10) + fVar1 * *(float *)(g_PTR_01d09918 + 4),
       fVar1 - fVar6 <= fVar2)) && (-fVar2 <= fVar1 + fVar6)))) {
    return 1;
  }
  return 0;
}
