// Name: core_fire.cpp_CExplosion_render_FUN_004c3b10
// Address: 004c3b10
// MANUAL RECONSTRUCTION
// Address Range: [[004c3b10, 004c3e90]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CExplosion_render_FUN_004c3b10(CExplosion *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CExplosion_render_FUN_004c3b10(CExplosion *this_ptr)

{
  float fVar1;
  SMRGLPrimitiveQuadIndex local_8c;
  CVector3i local_64;
  CVector3f local_58;
  CVector3i local_4c;
  CVector3i local_40;
  float local_34;
  float local_30;
  float local_2c;
  CVector3i local_28;
  int local_1c;
  float local_18;
  int local_14;
  int local_10;
  int local_c;
  CDemonRenderer *this_ptr_00;
  
  if (ABS(this_ptr->lifetime) == 0.0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
            (g_CDemonRendererPtr2,
             g_FireEffectExplosionTextures +
             (int)ROUND(ROUND((1.0 - this_ptr->lifetime) * (float)27)) * 2);
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr2,&this_ptr->position);
  engine_drender_cpp_CDemonRenderer_getCameraRotationAsRadians_FUN_0048c800
            (g_CDemonRendererPtr2,&local_58.x);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr2,&local_58,(CVector3f *)0x0);
  local_10 = (int)ROUND(ROUND(this_ptr->scale * (float)148 * (float)0.00390625));
  local_14 = (int)ROUND(ROUND(-this_ptr->scale * 108.0f * (float)0.00390625));
  if (this_ptr->flip_flag != 0) {
    local_10 = -local_10;
    local_14 = -local_14;
  }
  fVar1 = this_ptr->scale * 143.0f * (float)0.00390625;
  local_28.x = (int)ROUND((float)local_14 * 256.0f);
  local_28.y = (int)ROUND(fVar1 * 256.0f);
  local_28.z = (int)ROUND(256.0f * 0.0);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex,&local_28);
  local_4c.x = (int)ROUND((float)local_10 * 256.0f);
  local_4c.y = (int)ROUND(fVar1 * 256.0f);
  local_4c.z = (int)ROUND(256.0f * 0.0);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr[1].projected_vertex,&local_4c);
  fVar1 = -this_ptr->scale * (float)113 * (float)0.00390625;
  local_40.x = (int)ROUND((float)local_10 * 256.0f);
  local_40.y = (int)ROUND(fVar1 * 256.0f);
  local_40.z = (int)ROUND(256.0f * 0.0);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr[2].projected_vertex,&local_40);
  local_64.x = (int)ROUND((float)local_14 * 256.0f);
  local_64.y = (int)ROUND(fVar1 * 256.0f);
  local_64.z = (int)ROUND(256.0f * 0.0);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr[3].projected_vertex,&local_64);
  this_ptr_00 = g_CDemonRendererPtr2;
  g_CDemonRendererPtr2->vertex_buffer_ptr->u = 0x2 << 16;
  this_ptr_00->vertex_buffer_ptr->v = 0x2 << 16;
  this_ptr_00->vertex_buffer_ptr[1].u = 0xfe << 16;
  this_ptr_00->vertex_buffer_ptr[1].v = 0x2 << 16;
  this_ptr_00->vertex_buffer_ptr[2].u = 0xfe << 16;
  this_ptr_00->vertex_buffer_ptr[2].v = 0xfe << 16;
  this_ptr_00->vertex_buffer_ptr[3].u = 0x2 << 16;
  this_ptr_00->vertex_buffer_ptr[3].v = 0xfe << 16;
  this_ptr_00->vertex_buffer_ptr->a = 0x8000;
  this_ptr_00->vertex_buffer_ptr[1].a = 0x8000;
  this_ptr_00->vertex_buffer_ptr[2].a = 0x8000;
  this_ptr_00->vertex_buffer_ptr[3].a = 0x8000;
  local_8c.base.base.count = 4;
  local_8c.base.surface_normal.D.i = 0;
  local_8c.base.surface_normal.C.i = 0;
  local_8c.base.surface_normal.B.i = 0;
  local_8c.base.surface_normal.A.i = 0;
  local_8c.vertices[0] = 0;
  local_8c.vertices[3] = 3;
  local_8c.vertices[1] = 1;
  local_8c.vertices[2] = 2;
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(this_ptr_00,1);
  engine_drender_cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
            (g_CDemonRendererPtr2,&local_8c.base,0x123);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr2,0);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0048c640(g_CDemonRendererPtr2);
  return;
}
