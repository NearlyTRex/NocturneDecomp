// Name: core_marquee.cpp_CMarquee_renderLightBulb_FUN_00506c90
// Address: 00506c90
// Address Range: [[00506c90, 00506e16]]
// Convention: __cdecl
// Signature: void __cdecl core_marquee_cpp_CMarquee_renderLightBulb_FUN_00506c90(CMarquee *this_ptr,CVector3f *position)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_marquee_cpp_CMarquee_renderLightBulb_FUN_00506c90(CMarquee *this_ptr,CVector3f *position)

{
  CDemonRenderer *this_ptr_00;
  int iVar1;
  SRenderVertex *pSVar2;
  SRenderVertex *pSVar3;
  byte bVar4;
  SMRGLHeaderPrimitive SStack_44;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  CVector3i CStack_1c;
  
  bVar4 = 0;
  CStack_1c.x = (int)ROUND(position->x * _DAT_006036b0);
  CStack_1c.y = (int)ROUND(position->y * _DAT_006036b0);
  CStack_1c.z = (int)ROUND(position->z * _DAT_006036b0);
  engine_special_cpp_FUN_0058043c((SProjectedVertex *)DAT_00612560->vertex_buffer_ptr,&CStack_1c);
  this_ptr_00 = DAT_00612560;
  pSVar2 = DAT_00612560->vertex_buffer_ptr;
  pSVar3 = DAT_00612560->vertex_buffer_ptr + 0x30;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(uint *)pSVar3 = *(uint *)pSVar2;
    pSVar2 = pSVar2 + ((uint)bVar4 * -2 + 1) * 4;
    pSVar3 = pSVar3 + ((uint)bVar4 * -2 + 1) * 4;
  }
  pSVar2 = this_ptr_00->vertex_buffer_ptr;
  pSVar3 = this_ptr_00->vertex_buffer_ptr + 0x60;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(uint *)pSVar3 = *(uint *)pSVar2;
    pSVar2 = pSVar2 + ((uint)bVar4 * -2 + 1) * 4;
    pSVar3 = pSVar3 + ((uint)bVar4 * -2 + 1) * 4;
  }
  pSVar2 = this_ptr_00->vertex_buffer_ptr;
  pSVar3 = this_ptr_00->vertex_buffer_ptr + 0x90;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(uint *)pSVar3 = *(uint *)pSVar2;
    pSVar2 = pSVar2 + ((uint)bVar4 * -2 + 1) * 4;
    pSVar3 = pSVar3 + ((uint)bVar4 * -2 + 1) * 4;
  }
  *(int *)this_ptr_00->vertex_buffer_ptr = *(int *)this_ptr_00->vertex_buffer_ptr + 0x80;
  *(int *)(this_ptr_00->vertex_buffer_ptr + 4) = *(int *)(this_ptr_00->vertex_buffer_ptr + 4) + 0x80
  ;
  *(int *)(this_ptr_00->vertex_buffer_ptr + 0x30) =
       *(int *)(this_ptr_00->vertex_buffer_ptr + 0x30) + -0x80;
  *(int *)(this_ptr_00->vertex_buffer_ptr + 0x34) =
       *(int *)(this_ptr_00->vertex_buffer_ptr + 0x34) + 0x80;
  *(int *)(this_ptr_00->vertex_buffer_ptr + 0x60) =
       *(int *)(this_ptr_00->vertex_buffer_ptr + 0x60) + -0x80;
  *(int *)(this_ptr_00->vertex_buffer_ptr + 100) =
       *(int *)(this_ptr_00->vertex_buffer_ptr + 100) + -0x80;
  *(int *)(this_ptr_00->vertex_buffer_ptr + 0x90) =
       *(int *)(this_ptr_00->vertex_buffer_ptr + 0x90) + 0x80;
  *(int *)(this_ptr_00->vertex_buffer_ptr + 0x94) =
       *(int *)(this_ptr_00->vertex_buffer_ptr + 0x94) + -0x80;
  *(uint *)(this_ptr_00->vertex_buffer_ptr + 0x10) = 0x80000000;
  *(uint *)(this_ptr_00->vertex_buffer_ptr + 0x40) = 0x80000000;
  *(uint *)(this_ptr_00->vertex_buffer_ptr + 0x70) = 0x80000000;
  *(uint *)(this_ptr_00->vertex_buffer_ptr + 0xa0) = 0x80000000;
  *(uint *)(this_ptr_00->vertex_buffer_ptr + 0x18) = 0x80000;
  *(uint *)(this_ptr_00->vertex_buffer_ptr + 0x1c) = 0xf80000;
  *(uint *)(this_ptr_00->vertex_buffer_ptr + 0x48) = 0xf80000;
  *(uint *)(this_ptr_00->vertex_buffer_ptr + 0x4c) = 0xf80000;
  *(uint *)(this_ptr_00->vertex_buffer_ptr + 0x78) = 0xf80000;
  *(uint *)(this_ptr_00->vertex_buffer_ptr + 0x7c) = 0x80000;
  *(uint *)(this_ptr_00->vertex_buffer_ptr + 0xa8) = 0x80000;
  *(uint *)(this_ptr_00->vertex_buffer_ptr + 0xac) = 0x80000;
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
