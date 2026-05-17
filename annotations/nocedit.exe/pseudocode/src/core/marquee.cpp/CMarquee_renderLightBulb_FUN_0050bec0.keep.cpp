// Name: core_marquee.cpp_CMarquee_renderLightBulb_FUN_0050bec0
// Address: 0050bec0
// MANUAL RECONSTRUCTION
// Address Range: [[0050bec0, 0050c046] [03fc2f9c, 03fc30af]]
// Convention: __cdecl
// Signature: void __cdecl core_marquee_cpp_CMarquee_renderLightBulb_FUN_0050bec0(CMarquee *this_ptr,CVector3f *position)

#include "nocturne.h"

void __cdecl core_marquee_cpp_CMarquee_renderLightBulb_FUN_0050bec0(CMarquee *this_ptr,CVector3f *position)

{
  int *piVar2;
  SRenderVertex *pSVar5;
  SMRGLPrimitiveQuadIndex local_44;
  CVector3i local_1c;
  int *piVar1;
  CDemonRenderer *this_ptr_00;
  
  local_1c.x = (int)ROUND(position->x * 256.0f);
  local_1c.y = (int)ROUND(position->y * 256.0f);
  local_1c.z = (int)ROUND(position->z * 256.0f);
  wincore_windll_cpp_transformPoint_FUN_005b5a25
            (&g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex,&local_1c);
  this_ptr_00 = g_CDemonRendererPtr2;
  pSVar5 = g_CDemonRendererPtr2->vertex_buffer_ptr;
  pSVar5[1] = *pSVar5;
  pSVar5[2] = *pSVar5;
  pSVar5[3] = *pSVar5;
  (this_ptr_00->vertex_buffer_ptr->projected_vertex).transformed_x =
       (this_ptr_00->vertex_buffer_ptr->projected_vertex).transformed_x + 0x80;
  piVar1 = &(this_ptr_00->vertex_buffer_ptr->projected_vertex).transformed_y;
  *piVar1 = *piVar1 + 0x80;
  this_ptr_00->vertex_buffer_ptr[1].projected_vertex.transformed_x =
       this_ptr_00->vertex_buffer_ptr[1].projected_vertex.transformed_x + -0x80;
  piVar2 = &this_ptr_00->vertex_buffer_ptr[1].projected_vertex.transformed_y;
  *piVar2 = *piVar2 + 0x80;
  this_ptr_00->vertex_buffer_ptr[2].projected_vertex.transformed_x =
       this_ptr_00->vertex_buffer_ptr[2].projected_vertex.transformed_x + -0x80;
  piVar2 = &this_ptr_00->vertex_buffer_ptr[2].projected_vertex.transformed_y;
  *piVar2 = *piVar2 + -0x80;
  this_ptr_00->vertex_buffer_ptr[3].projected_vertex.transformed_x =
       this_ptr_00->vertex_buffer_ptr[3].projected_vertex.transformed_x + 0x80;
  piVar2 = &this_ptr_00->vertex_buffer_ptr[3].projected_vertex.transformed_y;
  *piVar2 = *piVar2 + -0x80;
  (this_ptr_00->vertex_buffer_ptr->projected_vertex).screen_x = -0x80000000;
  this_ptr_00->vertex_buffer_ptr[1].projected_vertex.screen_x = -0x80000000;
  this_ptr_00->vertex_buffer_ptr[2].projected_vertex.screen_x = -0x80000000;
  this_ptr_00->vertex_buffer_ptr[3].projected_vertex.screen_x = -0x80000000;
  // UV coordinates in 16.16 fixed-point texel space: 8 and 248 (a 1-texel
  // inset from each edge of a 256x256 texture).
  this_ptr_00->vertex_buffer_ptr->u = 8 << 16;
  this_ptr_00->vertex_buffer_ptr->v = 248 << 16;
  this_ptr_00->vertex_buffer_ptr[1].u = 248 << 16;
  this_ptr_00->vertex_buffer_ptr[1].v = 248 << 16;
  this_ptr_00->vertex_buffer_ptr[2].u = 248 << 16;
  this_ptr_00->vertex_buffer_ptr[2].v = 8 << 16;
  this_ptr_00->vertex_buffer_ptr[3].u = 8 << 16;
  this_ptr_00->vertex_buffer_ptr[3].v = 8 << 16;
  local_44.base.base.count = 4;
  local_44.base.surface_normal.D.i = 0;
  local_44.base.surface_normal.C.i = 0;
  local_44.base.surface_normal.B.i = 0;
  local_44.base.surface_normal.A.i = 0;
  local_44.vertices[0] = 0;
  local_44.vertices[3] = 3;
  local_44.vertices[1] = 1;
  local_44.vertices[2] = 2;
  engine_drender_cpp_CDemonRenderer_renderTexturedDirect_FUN_0048ae10(this_ptr_00,&local_44.base,99);
  return;
}
