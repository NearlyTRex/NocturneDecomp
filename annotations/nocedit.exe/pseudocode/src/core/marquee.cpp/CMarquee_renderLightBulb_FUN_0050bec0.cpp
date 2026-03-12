// Name: core_marquee.cpp_CMarquee_renderLightBulb_FUN_0050bec0
// Address: 0050bec0
// Address Range: [[0050bec0, 0050c046]]
// Convention: __cdecl
// Signature: void __cdecl core_marquee_cpp_CMarquee_renderLightBulb_FUN_0050bec0(CMarquee *this_ptr,CVector3f *position)

#include "nocturne.h"

void __cdecl core_marquee_cpp_CMarquee_renderLightBulb_FUN_0050bec0(CMarquee *this_ptr,CVector3f *position)

{
  int *piVar2;
  int iVar2;
  int iVar3;
  SRenderVertex *pSVar5;
  SRenderVertex *pSVar3;
  SRenderVertex *pSVar6;
  SRenderVertex *pSVar4;
  byte bVar5;
  SMRGLHeaderPrimitive local_44;
  CVector3i local_1c;
  int *piVar1;
  CDemonRenderer *this_ptr_00;
  
  bVar5 = 0;
  local_1c.x = (int)ROUND(position->x * 256.0f);
  local_1c.y = (int)ROUND(position->y * 256.0f);
  local_1c.z = (int)ROUND(position->z * 256.0f);
  wincore_windll_cpp_transformPoint_FUN_005b5a25
            (&g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex,&local_1c);
  this_ptr_00 = g_CDemonRendererPtr2;
  pSVar5 = g_CDemonRendererPtr2->vertex_buffer_ptr;
  pSVar6 = g_CDemonRendererPtr2->vertex_buffer_ptr + 1;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    (pSVar6->projected_vertex).transformed_x = (pSVar5->projected_vertex).transformed_x;
    pSVar5 = (SRenderVertex *)((int)pSVar5 + ((uint)bVar5 * -2 + 1) * 4);
    pSVar6 = (SRenderVertex *)((int)pSVar6 + ((uint)bVar5 * -2 + 1) * 4);
  }
  pSVar5 = this_ptr_00->vertex_buffer_ptr;
  pSVar6 = this_ptr_00->vertex_buffer_ptr + 2;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    (pSVar6->projected_vertex).transformed_x = (pSVar5->projected_vertex).transformed_x;
    pSVar5 = (SRenderVertex *)((int)pSVar5 + ((uint)bVar5 * -2 + 1) * 4);
    pSVar6 = (SRenderVertex *)((int)pSVar6 + ((uint)bVar5 * -2 + 1) * 4);
  }
  pSVar3 = this_ptr_00->vertex_buffer_ptr;
  pSVar4 = this_ptr_00->vertex_buffer_ptr + 3;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    pSVar4 = (SRenderVertex *)((int)pSVar4 + (uint)bVar5 * -8 + 4);
    pSVar3 = (SRenderVertex *)((int)pSVar3 + (uint)bVar5 * -8 + 4);
    (pSVar4->projected_vertex).transformed_x = (pSVar3->projected_vertex).transformed_x;
    pSVar3 = pSVar3;
    pSVar4 = pSVar4;
  }
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
  this_ptr_00->vertex_buffer_ptr->u = 0x80000;
  this_ptr_00->vertex_buffer_ptr->v = 0xf80000;
  this_ptr_00->vertex_buffer_ptr[1].u = 0xf80000;
  this_ptr_00->vertex_buffer_ptr[1].v = 0xf80000;
  this_ptr_00->vertex_buffer_ptr[2].u = 0xf80000;
  this_ptr_00->vertex_buffer_ptr[2].v = 0x80000;
  this_ptr_00->vertex_buffer_ptr[3].u = 0x80000;
  this_ptr_00->vertex_buffer_ptr[3].v = 0x80000;
  local_44.base.count = 4;
  local_44.surface_normal.D = 0;
  local_44.surface_normal.C = 0;
  local_44.surface_normal.B = 0;
  local_44.surface_normal.A = 0;
  engine_drender_cpp_CDemonRenderer_renderPerspective_FUN_0048ae10(this_ptr_00,&local_44,99);
  return;
}
