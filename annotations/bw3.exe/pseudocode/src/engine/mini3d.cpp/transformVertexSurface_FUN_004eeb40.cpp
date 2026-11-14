// Name: engine_mini3d.cpp_transformVertexSurface_FUN_004eeb40
// Address: 004eeb40
// Address Range: [[004eeb40, 004eec48]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_transformVertexSurface_FUN_004eeb40(CVector3f *point,float *out)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_transformVertexSurface_FUN_004eeb40(CVector3f *point,float *out)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  
  pfVar7 = _DAT_01d76cfc;
  fVar4 = point->y - _DAT_01d76cfc[10];
  fVar5 = point->x - _DAT_01d76cfc[9];
  fVar6 = point->z - _DAT_01d76cfc[0xb];
  *out = fVar6 * _DAT_01d76cfc[6] + fVar5 * *_DAT_01d76cfc + fVar4 * _DAT_01d76cfc[3];
  out[1] = fVar6 * pfVar7[7] + fVar4 * pfVar7[4] + fVar5 * pfVar7[1];
  fVar1 = pfVar7[2];
  fVar2 = pfVar7[5];
  fVar3 = pfVar7[8];
  out[4] = 0.0;
  out[2] = fVar6 * fVar3 + fVar4 * fVar2 + fVar5 * fVar1;
  if (out[2] < *out) {
    *(byte *)(out + 4) = *(byte *)(out + 4) | 1;
  }
  if (*out < -out[2]) {
    *(byte *)(out + 4) = *(byte *)(out + 4) | 2;
  }
  if (out[2] < out[1]) {
    *(byte *)(out + 4) = *(byte *)(out + 4) | 4;
  }
  if (out[1] < -out[2]) {
    *(byte *)(out + 4) = *(byte *)(out + 4) | 8;
  }
  if (0.0 < out[2]) {
    if (out[4] != 0.0) {
      return;
    }
    fVar1 = *out * _DAT_01d76c5c;
    fVar2 = out[1] * _DAT_01d76c60;
    out[3] = 1.0 / out[2];
    fVar2 = _DAT_01d76c68 + fVar2 * out[3];
    out[5] = _DAT_01d76c64 + fVar1 * out[3];
    out[6] = fVar2;
    return;
  }
  *(byte *)(out + 4) = *(byte *)(out + 4) | 0x10;
  return;
}
