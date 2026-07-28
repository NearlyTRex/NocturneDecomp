// Name: core_marquee.cpp_CMarquee_renderLightBulb_FUN_004cc440
// Address: 004cc440
// Address Range: [[004cc440, 004cc5c6]]
// Convention: __cdecl
// Signature: void __cdecl core_marquee_cpp_CMarquee_renderLightBulb_FUN_004cc440(CMarquee *this_ptr,CVector3f *position)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_marquee_cpp_CMarquee_renderLightBulb_FUN_004cc440(CMarquee *this_ptr,CVector3f *position)

{
  int *piVar1;
  CDemonRenderer *this_ptr_00;
  int iVar2;
  SRenderVertex *pSVar3;
  SRenderVertex *pSVar4;
  byte bVar5;
  SMRGLHeaderPrimitive local_44;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  CVector3i local_1c;
  
  bVar5 = 0;
  local_1c.x = (int)ROUND(position->x * _DAT_005a02b0);
  local_1c.y = (int)ROUND(position->y * _DAT_005a02b0);
  local_1c.z = (int)ROUND(position->z * _DAT_005a02b0);
  engine_special_cpp_transformPoint_FUN_00530a25
            (&DAT_005ae704->vertex_buffer_ptr->projected_vertex,&local_1c);
  this_ptr_00 = DAT_005ae704;
  pSVar3 = DAT_005ae704->vertex_buffer_ptr;
  pSVar4 = DAT_005ae704->vertex_buffer_ptr + 1;
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
  local_44.base.count = 4;
  local_44.surface_normal.D.i = 0;
  local_44.surface_normal.C.i = 0;
  local_44.surface_normal.B.i = 0;
  local_44.surface_normal.A.i = 0;
  local_2c = 0;
  local_20 = 3;
  local_28 = 1;
  local_24 = 2;
  engine_drender_cpp_CDemonRenderer_renderTexturedDirect_FUN_0045f3c0(this_ptr_00,&local_44,99);
  return;
}
