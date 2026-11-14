// Name: core_marquee.cpp_CMarquee_renderLightBulb_FUN_00506c90
// Address: 00506c90
// Address Range: [[00506c90, 00506e16]]
// Convention: __cdecl
// Signature: void __cdecl core_marquee_cpp_CMarquee_renderLightBulb_FUN_00506c90(CMarquee *this_ptr,CVector3f *position)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_marquee_cpp_CMarquee_renderLightBulb_FUN_00506c90(CMarquee *this_ptr,CVector3f *position)

{
  int *piVar1;
  CDemonRenderer *this_ptr_00;
  int iVar2;
  SRenderVertex *pSVar3;
  SRenderVertex *pSVar4;
  byte bVar5;
  SMRGLHeaderPrimitive SStack_44;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  CVector3i CStack_1c;
  
  bVar5 = 0;
  CStack_1c.x = (int)ROUND(position->x * _DAT_006036b0);
  CStack_1c.y = (int)ROUND(position->y * _DAT_006036b0);
  CStack_1c.z = (int)ROUND(position->z * _DAT_006036b0);
  engine_special_cpp_FUN_0058043c(&DAT_00612560->vertex_buffer_ptr->projected_vertex,&CStack_1c);
  this_ptr_00 = DAT_00612560;
  pSVar3 = DAT_00612560->vertex_buffer_ptr;
  pSVar4 = DAT_00612560->vertex_buffer_ptr + 1;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    (pSVar4->projected_vertex).transformed_x = (pSVar3->projected_vertex).transformed_x;
    pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar5 * -2 + 1) * 4);
    pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar5 * -2 + 1) * 4);
  }
  pSVar3 = this_ptr_00->vertex_buffer_ptr;
  pSVar4 = this_ptr_00->vertex_buffer_ptr + 2;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    (pSVar4->projected_vertex).transformed_x = (pSVar3->projected_vertex).transformed_x;
    pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar5 * -2 + 1) * 4);
    pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar5 * -2 + 1) * 4);
  }
  pSVar3 = this_ptr_00->vertex_buffer_ptr;
  pSVar4 = this_ptr_00->vertex_buffer_ptr + 3;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    (pSVar4->projected_vertex).transformed_x = (pSVar3->projected_vertex).transformed_x;
    pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar5 * -2 + 1) * 4);
    pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar5 * -2 + 1) * 4);
  }
  (this_ptr_00->vertex_buffer_ptr->projected_vertex).transformed_x =
       (this_ptr_00->vertex_buffer_ptr->projected_vertex).transformed_x + 0x80;
  piVar1 = &(this_ptr_00->vertex_buffer_ptr->projected_vertex).transformed_y;
  *piVar1 = *piVar1 + 0x80;
  this_ptr_00->vertex_buffer_ptr[1].projected_vertex.transformed_x =
       this_ptr_00->vertex_buffer_ptr[1].projected_vertex.transformed_x + -0x80;
  piVar1 = &this_ptr_00->vertex_buffer_ptr[1].projected_vertex.transformed_y;
  *piVar1 = *piVar1 + 0x80;
  this_ptr_00->vertex_buffer_ptr[2].projected_vertex.transformed_x =
       this_ptr_00->vertex_buffer_ptr[2].projected_vertex.transformed_x + -0x80;
  piVar1 = &this_ptr_00->vertex_buffer_ptr[2].projected_vertex.transformed_y;
  *piVar1 = *piVar1 + -0x80;
  this_ptr_00->vertex_buffer_ptr[3].projected_vertex.transformed_x =
       this_ptr_00->vertex_buffer_ptr[3].projected_vertex.transformed_x + 0x80;
  piVar1 = &this_ptr_00->vertex_buffer_ptr[3].projected_vertex.transformed_y;
  *piVar1 = *piVar1 + -0x80;
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
  SStack_44.base.count = 4;
  SStack_44.surface_normal.D.i = 0;
  SStack_44.surface_normal.C.i = 0;
  SStack_44.surface_normal.B.i = 0;
  SStack_44.surface_normal.A.i = 0;
  uStack_2c = 0;
  uStack_20 = 3;
  uStack_28 = 1;
  uStack_24 = 2;
  engine_drender_cpp_CDemonRenderer_renderTexturedDirect_FUN_00482170(this_ptr_00,&SStack_44,99);
  return;
}
