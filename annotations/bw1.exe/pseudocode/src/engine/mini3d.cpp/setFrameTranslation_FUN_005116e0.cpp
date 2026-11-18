// Name: engine_mini3d.cpp_setFrameTranslation_FUN_005116e0
// Address: 005116e0
// Address Range: [[005116e0, 0051171b]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_setFrameTranslation_FUN_005116e0(CVector3f *position)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_setFrameTranslation_FUN_005116e0(CVector3f *position)

{
  float fVar1;
  float fVar2;
  byte *puVar3;
  
  puVar3 = g_PTR_01d2257c;
  fVar1 = g_FLOAT_01d22514;
  *(float *)(g_PTR_01d2257c + 0x24) = g_FLOAT_01d22510 - position->x;
  fVar2 = g_FLOAT_01d22518;
  *(float *)(puVar3 + 0x28) = fVar1 - position->y;
  *(float *)(puVar3 + 0x2c) = fVar2 - position->z;
  g_INT_01d24ffc = 1;
  return;
}
