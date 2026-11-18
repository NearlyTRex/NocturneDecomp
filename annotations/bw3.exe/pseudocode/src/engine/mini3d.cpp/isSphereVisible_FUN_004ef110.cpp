// Name: engine_mini3d.cpp_isSphereVisible_FUN_004ef110
// Address: 004ef110
// Address Range: [[004ef110, 004ef221]]
// Convention: __cdecl
// Signature: int __cdecl engine_mini3d_cpp_isSphereVisible_FUN_004ef110(CVector3f *center,float radius)

#include "nocturne.h"

int __cdecl engine_mini3d_cpp_isSphereVisible_FUN_004ef110(CVector3f *center,float radius)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = center->x - *(float *)(g_PTR_01d76cfc + 0x24);
  fVar4 = center->y - *(float *)(g_PTR_01d76cfc + 0x28);
  fVar3 = center->z - *(float *)(g_PTR_01d76cfc + 0x2c);
  fVar6 = radius * 1.333f * g_FLOAT_01d76ca8;
  fVar2 = fVar3 * *(float *)(g_PTR_01d76cfc + 0x20) +
          fVar4 * *(float *)(g_PTR_01d76cfc + 0x14) + fVar1 * *(float *)(g_PTR_01d76cfc + 8);
  if ((((0.0 <= fVar2 + fVar6) && (fVar2 - fVar6 <= g_FLOAT_01d76cf4)) &&
      (fVar5 = fVar3 * *(float *)(g_PTR_01d76cfc + 0x18) +
               fVar1 * *(float *)g_PTR_01d76cfc + fVar4 * *(float *)(g_PTR_01d76cfc + 0xc),
      fVar5 - fVar6 <= fVar2)) &&
     (((-fVar2 <= fVar5 + fVar6 &&
       (fVar1 = fVar3 * *(float *)(g_PTR_01d76cfc + 0x1c) +
                fVar4 * *(float *)(g_PTR_01d76cfc + 0x10) + fVar1 * *(float *)(g_PTR_01d76cfc + 4),
       fVar1 - fVar6 <= fVar2)) && (-fVar2 <= fVar1 + fVar6)))) {
    return 1;
  }
  return 0;
}
