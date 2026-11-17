// Name: engine_mini3d.cpp_setFrameTranslation2_FUN_004f2a50
// Address: 004f2a50
// Address Range: [[004f2a50, 004f2a8b]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_setFrameTranslation2_FUN_004f2a50(CVector3f *position)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_setFrameTranslation2_FUN_004f2a50(CVector3f *position)

{
  float fVar1;
  float fVar2;
  byte *puVar3;
  
  puVar3 = g_PTR_01d09918;
  fVar1 = g_FLOAT_01d098b4;
  *(float *)(g_PTR_01d09918 + 0x24) = g_FLOAT_01d098b0 - position->x;
  fVar2 = g_FLOAT_01d098b8;
  *(float *)(puVar3 + 0x28) = fVar1 - position->y;
  *(float *)(puVar3 + 0x2c) = fVar2 - position->z;
  g_INT_01d0c398 = 1;
  return;
}
