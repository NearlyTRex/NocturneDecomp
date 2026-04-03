// Name: core_box.cpp_CBoundingBox3D_render_FUN_004210b0
// Address: 004210b0
// Address Range: [[004210b0, 0042154b]]
// Convention: __cdecl
// Signature: void __cdecl core_box_cpp_CBoundingBox3D_render_FUN_004210b0(CBoundingBox3D *this_ptr)

#include "nocturne.h"

void __cdecl core_box_cpp_CBoundingBox3D_render_FUN_004210b0(CBoundingBox3D *this_ptr)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  void *pvVar2;
  uint corner_index;
  CVector3i *pCVar3;
  CVector3i local_b0 [8];
  SMRGLPrimitiveQuadIndex local_50;
  int local_28;
  int local_24;
  int local_20;
  CVector3f local_1c;
  int local_10;
  int local_c;
  int local_8;
  CDemonRenderer *pCVar1;
  
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
  local_50.base.base.count = 4;
  engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0048c9f0(g_CDemonRendererPtr2,1);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr2,0);
  fVar1 = (this_ptr->min).x * 256.0f;
  fVar2 = (this_ptr->min).y * 256.0f;
  fVar3 = (this_ptr->min).z * 256.0f;
  fVar4 = (this_ptr->max).x * 256.0f;
  fVar5 = (this_ptr->max).y * 256.0f;
  fVar6 = (this_ptr->max).z * 256.0f;
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
  local_50.base.surface_normal.A = -1;
  local_50.base.surface_normal.B = 0;
  local_50.base.surface_normal.C = 0;
  local_50.vertices[0] = 0;
  local_50.vertices[1] = 4;
  local_50.vertices[2] = 6;
  local_50.base.surface_normal.D = -(int)ROUND(fVar1);
  local_50.vertices[3] = 2;
  engine_drender_cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
            (g_CDemonRendererPtr2,&local_50.base,0x2c4);
  local_50.base.surface_normal.A = 1;
  local_50.base.surface_normal.B = 0;
  local_50.vertices[1] = 3;
  local_50.vertices[0] = 1;
  local_50.base.surface_normal.C = 0;
  local_50.vertices[2] = 7;
  local_50.vertices[3] = 5;
  local_50.base.surface_normal.D = (int)ROUND(fVar4);
  engine_drender_cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
            (g_CDemonRendererPtr2,&local_50.base,0x2c4);
  local_50.base.surface_normal.A = 0;
  local_50.base.surface_normal.B = -1;
  local_50.base.surface_normal.C = 0;
  local_50.vertices[0] = 0;
  local_50.vertices[1] = 1;
  local_50.base.surface_normal.D = -(int)ROUND(fVar2);
  local_50.vertices[2] = 5;
  local_50.vertices[3] = 4;
  engine_drender_cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
            (g_CDemonRendererPtr2,&local_50.base,0x2c4);
  local_50.base.surface_normal.A = 0;
  local_50.base.surface_normal.B = 1;
  local_50.base.surface_normal.C = 0;
  local_50.vertices[0] = 2;
  local_50.vertices[1] = 6;
  local_50.vertices[2] = 7;
  local_50.vertices[3] = 3;
  local_50.base.surface_normal.D = (int)ROUND(fVar5);
  engine_drender_cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
            (g_CDemonRendererPtr2,&local_50.base,0x2c4);
  local_50.base.surface_normal.A = 0;
  local_50.base.surface_normal.B = 0;
  local_50.base.surface_normal.C = -1;
  local_50.vertices[0] = 0;
  local_50.vertices[3] = 1;
  local_50.vertices[1] = 2;
  local_50.vertices[2] = 3;
  local_50.base.surface_normal.D = -(int)ROUND(fVar3);
  engine_drender_cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
            (g_CDemonRendererPtr2,&local_50.base,0x2c4);
  local_50.base.surface_normal.A = 0;
  local_50.base.surface_normal.B = 0;
  local_50.vertices[0] = 4;
  local_50.vertices[1] = 5;
  local_50.base.surface_normal.C = 1;
  local_50.vertices[2] = 7;
  local_50.vertices[3] = 6;
  local_50.base.surface_normal.D = (int)ROUND(fVar6);
  engine_drender_cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
            (g_CDemonRendererPtr2,&local_50.base,0x2c4);
  return;
}
