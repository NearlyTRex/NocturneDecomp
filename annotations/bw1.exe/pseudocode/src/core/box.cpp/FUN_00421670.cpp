// Name: core_box.cpp_FUN_00421670
// Address: 00421670
// Address Range: [[00421670, 00421aed]]
// Convention: __cdecl
// Signature: void __cdecl core_box_cpp_FUN_00421670(CBoundingBox3D *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_box_cpp_FUN_00421670(CBoundingBox3D *this_ptr)

{
  CDemonRenderer *pCVar1;
  int iVar2;
  byte bVar3;
  float afStackY_1020 [978];
  CVector3i local_cc [8];
  SMRGLHeaderPrimitive local_6c;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  int local_44;
  int local_40;
  int local_3c;
  float local_38;
  float afStack_34 [2];
  int local_2c;
  int local_28;
  UIntegerFloat local_24;
  float local_20;
  float local_1c [2];
  int *local_14;
  
  bVar3 = 0;
  local_14 = &local_cc[0].x;
  iVar2 = 0;
  do {
    core_box_cpp_FUN_00420570(this_ptr,iVar2);
    local_20 = local_38;
    local_1c[(uint)bVar3 * -2] = afStack_34[(uint)bVar3 * -2];
    local_1c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
         afStack_34[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
    *local_14 = (int)ROUND(local_20 * _DAT_005fce08);
    local_14[1] = (int)ROUND(local_1c[0] * _DAT_005fce08);
    local_14[2] = (int)ROUND(local_1c[1] * _DAT_005fce08);
    local_14 = local_14 + 3;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 8);
  core_set_cpp_CDemonSet_rotateVerticies_FUN_00553140(g_CDemonSetPtr,8,local_cc);
  local_6c.base.count = 4;
  engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_00483d70(DAT_00612560,1);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00483d80(DAT_00612560,0);
  local_44 = (int)ROUND((this_ptr->min).x * _DAT_005fce08);
  local_40 = (int)ROUND((this_ptr->min).y * _DAT_005fce08);
  local_3c = (int)ROUND((this_ptr->min).z * _DAT_005fce08);
  local_2c = (int)ROUND((this_ptr->max).x * _DAT_005fce08);
  local_28 = (int)ROUND((this_ptr->max).y * _DAT_005fce08);
  local_24.i = (int)ROUND((this_ptr->max).z * _DAT_005fce08);
  iVar2 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_00483e60(DAT_00612560);
  pCVar1 = DAT_00612560;
  if (iVar2 == 0) {
    _DAT_01c50930 = iVar2;
    _DAT_01c50934 = iVar2;
    *(uint *)(DAT_00612560->vertex_buffer_ptr + 0x20) = 0x7fff;
    *(uint *)(pCVar1->vertex_buffer_ptr + 0x24) = 0;
    *(uint *)(pCVar1->vertex_buffer_ptr + 0x28) = 0;
    *(uint *)(pCVar1->vertex_buffer_ptr + 0x50) = 0;
    *(uint *)(pCVar1->vertex_buffer_ptr + 0x54) = 0x7fff;
    *(uint *)(pCVar1->vertex_buffer_ptr + 0x58) = 0;
    *(uint *)(pCVar1->vertex_buffer_ptr + 0x80) = 0;
    *(uint *)(pCVar1->vertex_buffer_ptr + 0x84) = 0;
    *(uint *)(pCVar1->vertex_buffer_ptr + 0x88) = 0x7fff;
    *(uint *)(pCVar1->vertex_buffer_ptr + 0xb0) = 0x7fff;
    *(uint *)(pCVar1->vertex_buffer_ptr + 0xb4) = 0x7fff;
    *(uint *)(pCVar1->vertex_buffer_ptr + 0xb8) = 0;
    *(uint *)(pCVar1->vertex_buffer_ptr + 0xe0) = 0;
    *(uint *)(pCVar1->vertex_buffer_ptr + 0xe4) = 0x7fff;
    *(uint *)(pCVar1->vertex_buffer_ptr + 0xe8) = 0x7fff;
    *(uint *)(pCVar1->vertex_buffer_ptr + 0x110) = 0x7fff;
    *(uint *)(pCVar1->vertex_buffer_ptr + 0x114) = 0;
    *(uint *)(pCVar1->vertex_buffer_ptr + 0x118) = 0x7fff;
    *(uint *)(pCVar1->vertex_buffer_ptr + 0x140) = 0x7fff;
    *(uint *)(pCVar1->vertex_buffer_ptr + 0x144) = 0x7fff;
    *(uint *)(pCVar1->vertex_buffer_ptr + 0x148) = 0x7fff;
    *(uint *)(pCVar1->vertex_buffer_ptr + 0x170) = 0;
    *(uint *)(pCVar1->vertex_buffer_ptr + 0x174) = 0;
    *(uint *)(pCVar1->vertex_buffer_ptr + 0x178) = 0;
  }
  local_6c.surface_normal.A.i = -1;
  local_6c.surface_normal.B.i = 0;
  local_6c.surface_normal.C.i = 0;
  local_54 = 0;
  local_50 = 4;
  local_4c = 6;
  local_6c.surface_normal.D.i = -local_44;
  local_48 = 2;
  engine_drender_cpp_CDemonRenderer_renderTexturedDirect_FUN_00482170(DAT_00612560,&local_6c,0x2c4);
  local_6c.surface_normal.A.i = 1;
  local_6c.surface_normal.B.i = 0;
  local_6c.surface_normal.C.i = 0;
  local_54 = 1;
  local_6c.surface_normal.D.i = local_2c;
  local_50 = 3;
  local_4c = 7;
  local_48 = 5;
  engine_drender_cpp_CDemonRenderer_renderTexturedDirect_FUN_00482170(DAT_00612560,&local_6c,0x2c4);
  local_6c.surface_normal.A.i = 0;
  local_6c.surface_normal.B.i = -1;
  local_6c.surface_normal.C.i = 0;
  local_54 = 0;
  local_50 = 1;
  local_4c = 5;
  local_48 = 4;
  local_6c.surface_normal.D.i = -local_40;
  engine_drender_cpp_CDemonRenderer_renderTexturedDirect_FUN_00482170(DAT_00612560,&local_6c,0x2c4);
  local_6c.surface_normal.A.i = 0;
  local_6c.surface_normal.B.i = 1;
  local_6c.surface_normal.C.i = 0;
  local_6c.surface_normal.D.i = local_28;
  local_50 = 6;
  local_48 = 3;
  local_4c = 7;
  local_54 = 2;
  engine_drender_cpp_CDemonRenderer_renderTexturedDirect_FUN_00482170(DAT_00612560,&local_6c,0x2c4);
  local_6c.surface_normal.A.i = 0;
  local_6c.surface_normal.B.i = 0;
  local_6c.surface_normal.C.i = -1;
  local_54 = 0;
  local_4c = 3;
  local_50 = 2;
  local_6c.surface_normal.D.i = -local_3c;
  local_48 = 1;
  engine_drender_cpp_CDemonRenderer_renderTexturedDirect_FUN_00482170(DAT_00612560,&local_6c,0x2c4);
  local_6c.surface_normal.A.i = 0;
  local_6c.surface_normal.B.i = 0;
  local_6c.surface_normal.C.i = 1;
  local_6c.surface_normal.D = local_24;
  local_50 = 5;
  local_54 = 4;
  local_4c = 7;
  local_48 = 6;
  engine_drender_cpp_CDemonRenderer_renderTexturedDirect_FUN_00482170(DAT_00612560,&local_6c,0x2c4);
  return;
}
