// Name: core_marquee.cpp_FUN_0050bec0
// Address: 0050bec0
// Address Range: [[0050bec0, 0050c046]]
// Convention: __cdecl
// Signature: void __cdecl core_marquee_cpp_FUN_0050bec0(void)

#include "nocturne.h"

void __cdecl core_marquee_cpp_FUN_0050bec0(void)

{
  int *piVar1;
  CDemonRenderer *this_ptr;
  int iVar2;
  SRenderVertex *pSVar3;
  SRenderVertex *pSVar4;
  byte bVar5;
  float *in_stack_00000008;
  SMRGLHeaderPrimitive local_44;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  CVector3i local_1c;
  
  bVar5 = 0;
  local_1c.x = (int)ROUND(*in_stack_00000008 * 256.0f);
  local_1c.y = (int)ROUND(in_stack_00000008[1] * 256.0f);
  local_1c.z = (int)ROUND(in_stack_00000008[2] * 256.0f);
  wincore_windll_cpp_transformPoint_FUN_005b5a25
            (&g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex,&local_1c);
  this_ptr = g_CDemonRendererPtr2;
  pSVar3 = g_CDemonRendererPtr2->vertex_buffer_ptr;
  pSVar4 = g_CDemonRendererPtr2->vertex_buffer_ptr + 1;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    (pSVar4->projected_vertex).transformed_x = (pSVar3->projected_vertex).transformed_x;
    pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar5 * -2 + 1) * 4);
    pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar5 * -2 + 1) * 4);
  }
  pSVar3 = this_ptr->vertex_buffer_ptr;
  pSVar4 = this_ptr->vertex_buffer_ptr + 2;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    (pSVar4->projected_vertex).transformed_x = (pSVar3->projected_vertex).transformed_x;
    pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar5 * -2 + 1) * 4);
    pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar5 * -2 + 1) * 4);
  }
  pSVar3 = this_ptr->vertex_buffer_ptr;
  pSVar4 = this_ptr->vertex_buffer_ptr + 3;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    (pSVar4->projected_vertex).transformed_x = (pSVar3->projected_vertex).transformed_x;
    pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar5 * -2 + 1) * 4);
    pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar5 * -2 + 1) * 4);
  }
  (this_ptr->vertex_buffer_ptr->projected_vertex).transformed_x =
       (this_ptr->vertex_buffer_ptr->projected_vertex).transformed_x + 0x80;
  piVar1 = &(this_ptr->vertex_buffer_ptr->projected_vertex).transformed_y;
  *piVar1 = *piVar1 + 0x80;
  this_ptr->vertex_buffer_ptr[1].projected_vertex.transformed_x =
       this_ptr->vertex_buffer_ptr[1].projected_vertex.transformed_x + -0x80;
  piVar1 = &this_ptr->vertex_buffer_ptr[1].projected_vertex.transformed_y;
  *piVar1 = *piVar1 + 0x80;
  this_ptr->vertex_buffer_ptr[2].projected_vertex.transformed_x =
       this_ptr->vertex_buffer_ptr[2].projected_vertex.transformed_x + -0x80;
  piVar1 = &this_ptr->vertex_buffer_ptr[2].projected_vertex.transformed_y;
  *piVar1 = *piVar1 + -0x80;
  this_ptr->vertex_buffer_ptr[3].projected_vertex.transformed_x =
       this_ptr->vertex_buffer_ptr[3].projected_vertex.transformed_x + 0x80;
  piVar1 = &this_ptr->vertex_buffer_ptr[3].projected_vertex.transformed_y;
  *piVar1 = *piVar1 + -0x80;
  (this_ptr->vertex_buffer_ptr->projected_vertex).screen_x = -0x80000000;
  this_ptr->vertex_buffer_ptr[1].projected_vertex.screen_x = -0x80000000;
  this_ptr->vertex_buffer_ptr[2].projected_vertex.screen_x = -0x80000000;
  this_ptr->vertex_buffer_ptr[3].projected_vertex.screen_x = -0x80000000;
  this_ptr->vertex_buffer_ptr->u = 7.34684e-40;
  this_ptr->vertex_buffer_ptr->v = 2.2775203e-38;
  this_ptr->vertex_buffer_ptr[1].u = 2.2775203e-38;
  this_ptr->vertex_buffer_ptr[1].v = 2.2775203e-38;
  this_ptr->vertex_buffer_ptr[2].u = 2.2775203e-38;
  this_ptr->vertex_buffer_ptr[2].v = 7.34684e-40;
  this_ptr->vertex_buffer_ptr[3].u = 7.34684e-40;
  this_ptr->vertex_buffer_ptr[3].v = 7.34684e-40;
  local_44.base.count = 4;
  local_44.surface_normal.D = 0;
  local_44.surface_normal.C = 0;
  local_44.surface_normal.B = 0;
  local_44.surface_normal.A = 0;
  local_2c = 0;
  local_20 = 3;
  local_28 = 1;
  local_24 = 2;
  engine_drender_cpp_CDemonRenderer_renderPerspective_FUN_0048ae10(this_ptr,&local_44,99);
  return;
}
