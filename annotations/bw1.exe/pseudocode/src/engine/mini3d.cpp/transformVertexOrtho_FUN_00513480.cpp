// Name: engine_mini3d.cpp_transformVertexOrtho_FUN_00513480
// Address: 00513480
// Address Range: [[00513480, 0051352b]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_transformVertexOrtho_FUN_00513480(CVector3f *point,float *out)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_transformVertexOrtho_FUN_00513480(CVector3f *point,float *out)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  engine_mini3d_cpp_updateTransform_FUN_005124f0();
  fVar1 = point->y - *(float *)(_DAT_01d2257c + 0x28);
  fVar2 = fVar1 * _DAT_01d2adcc;
  fVar5 = point->x - *(float *)(_DAT_01d2257c + 0x24);
  fVar6 = fVar5 * _DAT_01d2adc0;
  fVar5 = fVar5 * _DAT_01d2adbc;
  fVar1 = fVar1 * _DAT_01d2add0;
  fVar3 = point->z - *(float *)(_DAT_01d2257c + 0x2c);
  fVar4 = fVar3 * _DAT_01d2addc;
  out[2] = 1.0;
  fVar3 = fVar3 * _DAT_01d2ade0;
  out[4] = 0.0;
  fVar4 = fVar4 + fVar5 + fVar2;
  fVar3 = fVar1 + fVar6 + fVar3;
  *out = fVar4;
  fVar1 = _DAT_01d22528;
  fVar4 = fVar4 * _DAT_01d22528;
  out[1] = fVar3;
  out[3] = 1.0;
  fVar1 = _DAT_01d224e8 + fVar3 * fVar1;
  out[5] = _DAT_01d224e4 + fVar4;
  out[6] = fVar1;
  return;
}
