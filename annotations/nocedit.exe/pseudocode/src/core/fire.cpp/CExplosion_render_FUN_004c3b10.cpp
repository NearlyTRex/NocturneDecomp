// Name: core_fire.cpp_CExplosion_render_FUN_004c3b10
// Address: 004c3b10
// Address Range: [[004c3b10, 004c3e82]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CExplosion_render_FUN_004c3b10(CExplosion *this_ptr)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl core_fire_cpp_CExplosion_render_FUN_004c3b10(CExplosion *this_ptr)

{
  CDemonRenderer *this_ptr_00;
  SMRGLHeaderPrimitive local_8c;
  uint local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  CVector3i local_64;
  CVector3i local_58;
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
  
  if (ABS(this_ptr->lifetime) == 0.0) {
    return;
  }
  local_1c = (int)ROUND(ROUND((1.0 - this_ptr->lifetime) * (float)27));
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
            (g_CDemonRendererPtr2,g_FireEffectExplosionTextures + local_1c * 2);
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr2,&this_ptr->position);
  engine_drender_cpp_CDemonRenderer_getCameraRotationAsRadians_FUN_0048c800
            (g_CDemonRendererPtr2,(float *)&local_58);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr2,&local_58,(CVector3i *)0x0);
  local_10 = (int)ROUND(ROUND(this_ptr->scale * (float)148 * (float)0.00390625));
  local_14 = (int)ROUND(ROUND(-this_ptr->scale * 108.0f * (float)0.00390625));
  if (this_ptr->flip_flag != 0) {
    local_10 = -local_10;
    local_14 = -local_14;
  }
  local_c = local_14;
  local_34 = (float)local_14;
  local_30 = this_ptr->scale * 143.0f * (float)0.00390625;
  local_2c = 0.0;
  local_28.x = (int)ROUND(local_34 * 256.0f);
  local_28.y = (int)ROUND(local_30 * 256.0f);
  local_28.z = (int)ROUND(256.0f * 0.0);
  local_18 = local_34;
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex,&local_28);
  local_c = local_10;
  local_34 = (float)local_10;
  local_4c.x = (int)ROUND(local_34 * 256.0f);
  local_4c.y = (int)ROUND(local_30 * 256.0f);
  local_4c.z = (int)ROUND(local_2c * 256.0f);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr[1].projected_vertex,&local_4c);
  local_30 = -this_ptr->scale * (float)113 * (float)0.00390625;
  local_40.x = (int)ROUND(local_34 * 256.0f);
  local_40.y = (int)ROUND(local_30 * 256.0f);
  local_40.z = (int)ROUND(local_2c * 256.0f);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr[2].projected_vertex,&local_40);
  local_34 = local_18;
  local_64.x = (int)ROUND(local_18 * 256.0f);
  local_64.y = (int)ROUND(local_30 * 256.0f);
  local_64.z = (int)ROUND(local_2c * 256.0f);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr[3].projected_vertex,&local_64);
  this_ptr_00 = g_CDemonRendererPtr2;
  g_CDemonRendererPtr2->vertex_buffer_ptr->u = 0x20000;
  this_ptr_00->vertex_buffer_ptr->v = 0x20000;
  this_ptr_00->vertex_buffer_ptr[1].u = 0xfe0000;
  this_ptr_00->vertex_buffer_ptr[1].v = 0x20000;
  this_ptr_00->vertex_buffer_ptr[2].u = 0xfe0000;
  this_ptr_00->vertex_buffer_ptr[2].v = 0xfe0000;
  this_ptr_00->vertex_buffer_ptr[3].u = 0x20000;
  this_ptr_00->vertex_buffer_ptr[3].v = 0xfe0000;
  this_ptr_00->vertex_buffer_ptr->fog = 0x8000;
  this_ptr_00->vertex_buffer_ptr[1].fog = 0x8000;
  this_ptr_00->vertex_buffer_ptr[2].fog = 0x8000;
  this_ptr_00->vertex_buffer_ptr[3].fog = 0x8000;
  local_8c.base.count = 4;
  local_8c.surface_normal.D = 0;
  local_8c.surface_normal.C = 0;
  local_8c.surface_normal.B = 0;
  local_8c.surface_normal.A = 0;
  local_74 = 0;
  local_68 = 3;
  local_70 = 1;
  local_6c = 2;
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(this_ptr_00,1);
  engine_drender_cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
            (g_CDemonRendererPtr2,&local_8c,0x123);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr2,0);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  return;
}
