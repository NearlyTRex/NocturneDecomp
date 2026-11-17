// Name: engine_mini3d.cpp_transformVertexSurface_FUN_00513370
// Address: 00513370
// Address Range: [[00513370, 00513478]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_transformVertexSurface_FUN_00513370(CVector3f *point,float *out)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_transformVertexSurface_FUN_00513370(CVector3f *point,float *out)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  byte *puVar7;
  
  puVar7 = g_PTR_01d2257c;
  fVar4 = point->y - *(float *)(g_PTR_01d2257c + 0x28);
  fVar5 = point->x - *(float *)(g_PTR_01d2257c + 0x24);
  fVar6 = point->z - *(float *)(g_PTR_01d2257c + 0x2c);
  *out = fVar6 * *(float *)(g_PTR_01d2257c + 0x18) +
         fVar5 * *(float *)g_PTR_01d2257c + fVar4 * *(float *)(g_PTR_01d2257c + 0xc);
  out[1] = fVar6 * *(float *)(puVar7 + 0x1c) +
           fVar4 * *(float *)(puVar7 + 0x10) + fVar5 * *(float *)(puVar7 + 4);
  fVar1 = *(float *)(puVar7 + 8);
  fVar2 = *(float *)(puVar7 + 0x14);
  fVar3 = *(float *)(puVar7 + 0x20);
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
    fVar1 = *out * g_FLOAT_01d224dc;
    fVar2 = out[1] * g_FLOAT_01d224e0;
    out[3] = 1.0 / out[2];
    fVar2 = g_FLOAT_01d224e8 + fVar2 * out[3];
    out[5] = g_FLOAT_01d224e4 + fVar1 * out[3];
    out[6] = fVar2;
    return;
  }
  *(byte *)(out + 4) = *(byte *)(out + 4) | 0x10;
  return;
}
