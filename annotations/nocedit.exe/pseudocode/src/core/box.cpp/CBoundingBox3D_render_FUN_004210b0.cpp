// Name: core_box.cpp_CBoundingBox3D_render_FUN_004210b0
// Address: 004210b0
// Address Range: [[004210b0, 0042154b]]
// Convention: __cdecl
// Signature: void __cdecl core_box_cpp_CBoundingBox3D_render_FUN_004210b0(CBoundingBox3D *this_ptr)

#include "nocturne.h"

void __cdecl core_box_cpp_CBoundingBox3D_render_FUN_004210b0(CBoundingBox3D *this_ptr)

{
  CDemonRenderer *pCVar1;
  void *pvVar2;
  uint corner_index;
  CVector3i *pCVar3;
  CVector3i local_b0 [8];
  SMRGLHeaderPrimitive local_50;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  int local_28;
  int local_24;
  int local_20;
  CVector3f local_1c;
  int local_10;
  int local_c;
  int local_8;
  
  corner_index = 0;
  pCVar3 = local_b0;
  do {
    core_box_cpp_CBoundingBox3D_getCorner_FUN_004202b0(this_ptr,&local_1c,corner_index);
    corner_index = corner_index + 1;
    pCVar3->x = (int)ROUND(local_1c.x * 256.0f);
    pCVar3->y = (int)ROUND(local_1c.y * 256.0f);
    pCVar3->z = (int)ROUND(local_1c.z * 256.0f);
    pCVar3 = pCVar3 + 1;
  } while ((int)corner_index < 8);
  core_set_cpp_CDemonSet_rotateVerticies_FUN_0056e7c0(g_CDemonSetPtr,8,local_b0);
  local_50.base.count = 4;
  engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0048c9f0(g_CDemonRendererPtr2,1);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr2,0);
  local_28 = (int)ROUND((this_ptr->min).x * 256.0f);
  local_24 = (int)ROUND((this_ptr->min).y * 256.0f);
  local_20 = (int)ROUND((this_ptr->min).z * 256.0f);
  local_10 = (int)ROUND((this_ptr->max).x * 256.0f);
  local_c = (int)ROUND((this_ptr->max).y * 256.0f);
  local_8 = (int)ROUND((this_ptr->max).z * 256.0f);
  pvVar2 = (void *)engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2)
  ;
  pCVar1 = g_CDemonRendererPtr2;
  if (pvVar2 == (void *)0x0) {
    g_CurrentTextureData = pvVar2;
    g_CurrentTextureOpacityData = pvVar2;
    g_CDemonRendererPtr2->vertex_buffer_ptr->r = 0x7fff;
    pCVar1->vertex_buffer_ptr->g = 0;
    pCVar1->vertex_buffer_ptr->b = 0;
    pCVar1->vertex_buffer_ptr[1].r = 0;
    pCVar1->vertex_buffer_ptr[1].g = 0x7fff;
    pCVar1->vertex_buffer_ptr[1].b = 0;
    pCVar1->vertex_buffer_ptr[2].r = 0;
    pCVar1->vertex_buffer_ptr[2].g = 0;
    pCVar1->vertex_buffer_ptr[2].b = 0x7fff;
    pCVar1->vertex_buffer_ptr[3].r = 0x7fff;
    pCVar1->vertex_buffer_ptr[3].g = 0x7fff;
    pCVar1->vertex_buffer_ptr[3].b = 0;
    pCVar1->vertex_buffer_ptr[4].r = 0;
    pCVar1->vertex_buffer_ptr[4].g = 0x7fff;
    pCVar1->vertex_buffer_ptr[4].b = 0x7fff;
    pCVar1->vertex_buffer_ptr[5].r = 0x7fff;
    pCVar1->vertex_buffer_ptr[5].g = 0;
    pCVar1->vertex_buffer_ptr[5].b = 0x7fff;
    pCVar1->vertex_buffer_ptr[6].r = 0x7fff;
    pCVar1->vertex_buffer_ptr[6].g = 0x7fff;
    pCVar1->vertex_buffer_ptr[6].b = 0x7fff;
    pCVar1->vertex_buffer_ptr[7].r = 0;
    pCVar1->vertex_buffer_ptr[7].g = 0;
    pCVar1->vertex_buffer_ptr[7].b = 0;
  }
  local_50.surface_normal.A = -1;
  local_50.surface_normal.B = 0;
  local_50.surface_normal.C = 0;
  local_38 = 0;
  local_34 = 4;
  local_30 = 6;
  local_50.surface_normal.D = -local_28;
  local_2c = 2;
  engine_drender_cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
            (g_CDemonRendererPtr2,&local_50,0x2c4);
  local_50.surface_normal.A = 1;
  local_50.surface_normal.D = local_10;
  local_50.surface_normal.B = 0;
  local_34 = 3;
  local_38 = 1;
  local_50.surface_normal.C = 0;
  local_30 = 7;
  local_2c = 5;
  engine_drender_cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
            (g_CDemonRendererPtr2,&local_50,0x2c4);
  local_50.surface_normal.A = 0;
  local_50.surface_normal.B = -1;
  local_50.surface_normal.C = 0;
  local_38 = 0;
  local_34 = 1;
  local_50.surface_normal.D = -local_24;
  local_30 = 5;
  local_2c = 4;
  engine_drender_cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
            (g_CDemonRendererPtr2,&local_50,0x2c4);
  local_50.surface_normal.A = 0;
  local_50.surface_normal.B = 1;
  local_50.surface_normal.C = 0;
  local_38 = 2;
  local_34 = 6;
  local_50.surface_normal.D = local_c;
  local_30 = 7;
  local_2c = 3;
  engine_drender_cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
            (g_CDemonRendererPtr2,&local_50,0x2c4);
  local_50.surface_normal.A = 0;
  local_50.surface_normal.B = 0;
  local_50.surface_normal.C = -1;
  local_38 = 0;
  local_2c = 1;
  local_34 = 2;
  local_30 = 3;
  local_50.surface_normal.D = -local_20;
  engine_drender_cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
            (g_CDemonRendererPtr2,&local_50,0x2c4);
  local_50.surface_normal.A = 0;
  local_50.surface_normal.B = 0;
  local_38 = 4;
  local_34 = 5;
  local_50.surface_normal.D = local_8;
  local_50.surface_normal.C = 1;
  local_30 = 7;
  local_2c = 6;
  engine_drender_cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
            (g_CDemonRendererPtr2,&local_50,0x2c4);
  return;
}
