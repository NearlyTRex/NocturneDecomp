// Name: engine_mini3d.cpp_setLightVector_FUN_004f4e70
// Address: 004f4e70
// Address Range: [[004f4e70, 004f4ef2]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_setLightVector_FUN_004f4e70(CVector3f *direction,float intensity)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_setLightVector_FUN_004f4e70(CVector3f *direction,float intensity)

{
  float fVar1;
  byte *puVar2;
  byte *puVar3;
  uint uStack_14;
  uint uStack_10;
  uint uStack_c;
  
  engine_mini3d_cpp_updateTransform_FUN_004f3740();
  puVar2 = g_PTR_01d09918;
  fVar1 = intensity /
          SQRT(direction->z * direction->z +
               direction->x * direction->x + direction->y * direction->y);
  *(float *)(g_PTR_01d09918 + 0x30) = direction->x * fVar1;
  *(float *)(puVar2 + 0x34) = direction->y * fVar1;
  puVar3 = g_PTR_0264bc7c;
  *(float *)(puVar2 + 0x38) = fVar1 * direction->z;
  if ((puVar3 != (byte *)0x0) && (g_INT_01c37788 != 0)) {
    uStack_14 = *(uint *)(puVar2 + 0x30);
    uStack_10 = *(uint *)(puVar2 + 0x34);
    uStack_c = *(uint *)(puVar2 + 0x38);
    (*(code *)g_PTR_0264bc7c)(&uStack_14,intensity);
    return;
  }
  return;
}
