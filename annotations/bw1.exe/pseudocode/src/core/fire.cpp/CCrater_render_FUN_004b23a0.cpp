// Name: core_fire.cpp_CCrater_render_FUN_004b23a0
// Address: 004b23a0
// Address Range: [[004b23a0, 004b25f4]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CCrater_render_FUN_004b23a0(CCrater *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CCrater_render_FUN_004b23a0(CCrater *this_ptr)

{
  SMRGLHeaderPrimitive local_60;
  uint local_48;
  uint local_44;
  uint local_40;
  CVector3i local_38;
  CVector3i local_2c;
  CVector3i local_20;
  CVector3i local_14;
  
  if (this_ptr->active == 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
            (g_CDemonRenderer_PTR_00612560,&this_ptr->center_position);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00484f00
            (g_CDemonRenderer_PTR_00612560,&g_SMRGLTextureBasic_0061ca94);
  local_38.x = (int)ROUND(this_ptr->corner_positions[0].x * 256.0f);
  local_38.y = (int)ROUND(this_ptr->corner_positions[0].y * 256.0f);
  local_38.z = (int)ROUND(this_ptr->corner_positions[0].z * 256.0f);
  engine_special_cpp_transformPoint_FUN_0058043c
            (&g_SRenderVertex_ARRAY_00629014[0].projected_vertex,&local_38);
  local_20.x = (int)ROUND(this_ptr->corner_positions[1].x * 256.0f);
  local_20.y = (int)ROUND(this_ptr->corner_positions[1].y * 256.0f);
  local_20.z = (int)ROUND(this_ptr->corner_positions[1].z * 256.0f);
  engine_special_cpp_transformPoint_FUN_0058043c
            (&g_SRenderVertex_ARRAY_00629014[1].projected_vertex,&local_20);
  local_2c.x = (int)ROUND(this_ptr->corner_positions[2].x * 256.0f);
  local_2c.y = (int)ROUND(this_ptr->corner_positions[2].y * 256.0f);
  local_2c.z = (int)ROUND(this_ptr->corner_positions[2].z * 256.0f);
  engine_special_cpp_transformPoint_FUN_0058043c
            (&g_SRenderVertex_ARRAY_00629014[2].projected_vertex,&local_2c);
  local_14.x = (int)ROUND(this_ptr->corner_positions[3].x * 256.0f);
  local_14.y = (int)ROUND(this_ptr->corner_positions[3].y * 256.0f);
  local_14.z = (int)ROUND(this_ptr->corner_positions[3].z * 256.0f);
  engine_special_cpp_transformPoint_FUN_0058043c
            (&g_SRenderVertex_ARRAY_00629014[3].projected_vertex,&local_14);
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
  g_SRenderVertex_ARRAY_00629014[0].u = 0x80000;
  g_SRenderVertex_ARRAY_00629014[0].v = 0xf80000;
  g_SRenderVertex_ARRAY_00629014[1].u = 0xf80000;
  g_SRenderVertex_ARRAY_00629014[1].v = 0xf80000;
  g_SRenderVertex_ARRAY_00629014[2].u = 0xf80000;
  g_SRenderVertex_ARRAY_00629014[2].v = 0x80000;
  g_SRenderVertex_ARRAY_00629014[3].u = 0x80000;
  g_SRenderVertex_ARRAY_00629014[3].v = 0x80000;
  local_60.surface_normal.B.i = 0xffff;
  local_60.surface_normal.A.i = 0;
  local_60.surface_normal.C.i = 0;
  local_60.base.count = 3;
  local_60.surface_normal.D.i = 0;
  local_48 = 0;
  local_44 = 1;
  local_40 = 2;
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0
            (g_CDemonRenderer_PTR_00612560,0xffff);
  engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_00483050
            (g_CDemonRenderer_PTR_00612560,&local_60);
  local_48 = 0;
  local_44 = 2;
  local_40 = 3;
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0
            (g_CDemonRenderer_PTR_00612560,0xffff);
  engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_00483050
            (g_CDemonRenderer_PTR_00612560,&local_60);
  return;
}
