// Name: engine_mini3d.cpp_setFrameTranslation_FUN_004eceb0
// Address: 004eceb0
// Address Range: [[004eceb0, 004eceeb]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_setFrameTranslation_FUN_004eceb0(CVector3f *position)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_setFrameTranslation_FUN_004eceb0(CVector3f *position)

{
  float fVar1;
  float fVar2;
  byte *puVar3;
  
  puVar3 = g_PTR_01d76cfc;
  fVar1 = g_FLOAT_01d76c94;
  *(float *)(g_PTR_01d76cfc + 0x24) = g_FLOAT_01d76c90 - position->x;
  fVar2 = g_FLOAT_01d76c98;
  *(float *)(puVar3 + 0x28) = fVar1 - position->y;
  *(float *)(puVar3 + 0x2c) = fVar2 - position->z;
  g_INT_01d7977c = 1;
  return;
}
