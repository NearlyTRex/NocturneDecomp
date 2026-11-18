// Name: engine_mini3d.cpp_transformVertexOrtho_FUN_004f4730
// Address: 004f4730
// Address Range: [[004f4730, 004f47db]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_transformVertexOrtho_FUN_004f4730(CVector3f *point,float *out)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_transformVertexOrtho_FUN_004f4730(CVector3f *point,float *out)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  engine_mini3d_cpp_updateTransform_FUN_004f3740();
  fVar1 = point->y - *(float *)(g_PTR_01d09918 + 0x28);
  fVar2 = fVar1 * g_FLOAT_01d167bc;
  fVar5 = point->x - *(float *)(g_PTR_01d09918 + 0x24);
  fVar6 = fVar5 * g_FLOAT_01d167b0;
  fVar5 = fVar5 * g_FLOAT_01d167ac;
  fVar1 = fVar1 * g_FLOAT_01d167c0;
  fVar3 = point->z - *(float *)(g_PTR_01d09918 + 0x2c);
  fVar4 = fVar3 * g_FLOAT_01d167cc;
  out[2] = 1.0;
  fVar3 = fVar3 * g_FLOAT_01d167d0;
  out[4] = 0.0;
  fVar4 = fVar4 + fVar5 + fVar2;
  fVar3 = fVar1 + fVar6 + fVar3;
  *out = fVar4;
  fVar1 = g_FLOAT_01d098c8;
  fVar4 = fVar4 * g_FLOAT_01d098c8;
  out[1] = fVar3;
  out[3] = 1.0;
  fVar1 = g_FLOAT_01d09888 + fVar3 * fVar1;
  out[5] = g_FLOAT_01d09884 + fVar4;
  out[6] = fVar1;
  return;
}
