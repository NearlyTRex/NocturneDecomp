// Name: core_fire.cpp_CTrail_render_FUN_004b3d20
// Address: 004b3d20
// Address Range: [[004b3d20, 004b3fff]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CTrail_render_FUN_004b3d20(CTrail *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CTrail_render_FUN_004b3d20(CTrail *this_ptr)

{
  byte bVar1;
  uint auStackY_102c [997];
  CVector3f *translation;
  SMRGLHeaderPrimitive local_84;
  uint local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  CVector3i local_5c;
  float local_50;
  float local_4c;
  float local_48;
  CVector3f local_44;
  CVector3f local_38;
  CVector3i local_2c;
  CVector3i local_20;
  CVector3i local_14;
  
  bVar1 = 0;
  if (this_ptr->lifetime <= 0.0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00484f00
            (g_CDemonRenderer_PTR_00612560,this_ptr->texture_ptr);
  local_84.base.count = 4;
  local_84.surface_normal.D.i = 0;
  local_84.surface_normal.C.i = 0;
  local_84.surface_normal.B.i = 0;
  local_84.surface_normal.A.i = 0;
  local_6c = 0;
  local_60 = 3;
  local_68 = 1;
  local_64 = 2;
  engine_drender_cpp_CDemonRenderer_setRenderAlphaNormalized_FUN_00483df0
            (g_CDemonRenderer_PTR_00612560,this_ptr->current_alpha);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(g_CDemonRenderer_PTR_00612560,1);
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
            (g_CDemonRenderer_PTR_00612560,&this_ptr->position);
  engine_drender_cpp_CDemonRenderer_getCameraRotationRadians_FUN_00483b70
            (g_CDemonRenderer_PTR_00612560,&local_44);
  translation = (CVector3f *)0x0;
  local_38.x = local_44.x;
  *(uint *)((int)&local_38 + (uint)bVar1 * -8 + 4) =
       *(uint *)((int)&local_44 + (uint)bVar1 * -8 + 4);
  *(uint *)((int)&local_38 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8) =
       *(uint *)((int)&local_44 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
            (g_CDemonRenderer_PTR_00612560,&local_38,translation);
  local_48 = 0.0;
  local_50 = this_ptr->size * this_ptr->current_alpha;
  local_2c.x = (int)ROUND(local_50 * 256.0f);
  local_2c.y = (int)ROUND(local_50 * 256.0f);
  local_2c.z = (int)ROUND(256.0f * 0.0);
  local_4c = local_50;
  engine_special_cpp_transformAndProjectPoint_FUN_00580173
            (&g_CDemonRenderer_PTR_00612560->vertex_buffer_ptr->projected_vertex,&local_2c);
  local_50 = -local_50;
  local_20.x = (int)ROUND(local_50 * 256.0f);
  local_20.y = (int)ROUND(local_4c * 256.0f);
  local_20.z = (int)ROUND(local_48 * 256.0f);
  engine_special_cpp_transformAndProjectPoint_FUN_00580173
            (&g_CDemonRenderer_PTR_00612560->vertex_buffer_ptr[1].projected_vertex,&local_20);
  local_4c = -local_4c;
  local_14.x = (int)ROUND(local_50 * 256.0f);
  local_14.y = (int)ROUND(local_4c * 256.0f);
  local_14.z = (int)ROUND(local_48 * 256.0f);
  engine_special_cpp_transformAndProjectPoint_FUN_00580173
            (&g_CDemonRenderer_PTR_00612560->vertex_buffer_ptr[2].projected_vertex,&local_14);
  local_50 = -local_50;
  local_5c.x = (int)ROUND(local_50 * 256.0f);
  local_5c.y = (int)ROUND(local_4c * 256.0f);
  local_5c.z = (int)ROUND(local_48 * 256.0f);
  engine_special_cpp_transformAndProjectPoint_FUN_00580173
            (&g_CDemonRenderer_PTR_00612560->vertex_buffer_ptr[3].projected_vertex,&local_5c);
  g_SRenderVertex_ARRAY_00629014[0].u = 0x80000;
  g_SRenderVertex_ARRAY_00629014[0].v = 0xf80000;
  g_SRenderVertex_ARRAY_00629014[1].u = 0xf80000;
  g_SRenderVertex_ARRAY_00629014[1].v = 0xf80000;
  g_SRenderVertex_ARRAY_00629014[2].u = 0xf80000;
  g_SRenderVertex_ARRAY_00629014[2].v = 0x80000;
  g_SRenderVertex_ARRAY_00629014[3].u = 0x80000;
  g_SRenderVertex_ARRAY_00629014[3].v = 0x80000;
  g_SRenderVertex_ARRAY_00629014[0].r = 0xffff;
  g_SRenderVertex_ARRAY_00629014[0].g = 0xffff;
  g_SRenderVertex_ARRAY_00629014[0].b = 0xffff;
  g_SRenderVertex_ARRAY_00629014[1].r = 0xffff;
  g_SRenderVertex_ARRAY_00629014[1].g = 0xffff;
  g_SRenderVertex_ARRAY_00629014[1].b = 0xffff;
  g_SRenderVertex_ARRAY_00629014[2].r = 0xffff;
  g_SRenderVertex_ARRAY_00629014[2].g = 0xffff;
  g_SRenderVertex_ARRAY_00629014[2].b = 0xffff;
  g_SRenderVertex_ARRAY_00629014[3].r = 0xffff;
  g_SRenderVertex_ARRAY_00629014[3].g = 0xffff;
  g_SRenderVertex_ARRAY_00629014[3].b = 0xffff;
  engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_00483050
            (g_CDemonRenderer_PTR_00612560,&local_84);
  engine_drender_cpp_pop_FUN_004839a0();
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(g_CDemonRenderer_PTR_00612560,0);
  return;
}
