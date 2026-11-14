// Name: core_box.cpp_CBoundingBox3D_render_FUN_0041e9b0
// Address: 0041e9b0
// Address Range: [[0041e9b0, 0041ee2d]]
// Convention: __cdecl
// Signature: void __cdecl core_box_cpp_CBoundingBox3D_render_FUN_0041e9b0(CBoundingBox3D *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_box_cpp_CBoundingBox3D_render_FUN_0041e9b0(CBoundingBox3D *this_ptr)

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
    core_box_cpp_FUN_0041d8b0(this_ptr,iVar2);
    local_20 = local_38;
    local_1c[(uint)bVar3 * -2] = afStack_34[(uint)bVar3 * -2];
    local_1c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
         afStack_34[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
    *local_14 = (int)ROUND(local_20 * _DAT_005dc948);
    local_14[1] = (int)ROUND(local_1c[0] * _DAT_005dc948);
    local_14[2] = (int)ROUND(local_1c[1] * _DAT_005dc948);
    local_14 = local_14 + 3;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 8);
  core_set_cpp_CDemonSet_rotateVerticies_FUN_00538ad0(g_CDemonSetPtr,8,local_cc);
  local_6c.base.count = 4;
  engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0046d450(DAT_005f2afc,1);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0046d460(DAT_005f2afc,0);
  local_44 = (int)ROUND((this_ptr->min).x * _DAT_005dc948);
  local_40 = (int)ROUND((this_ptr->min).y * _DAT_005dc948);
  local_3c = (int)ROUND((this_ptr->min).z * _DAT_005dc948);
  local_2c = (int)ROUND((this_ptr->max).x * _DAT_005dc948);
  local_28 = (int)ROUND((this_ptr->max).y * _DAT_005dc948);
  local_24.i = (int)ROUND((this_ptr->max).z * _DAT_005dc948);
  iVar2 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046d540(DAT_005f2afc);
  pCVar1 = DAT_005f2afc;
  if (iVar2 == 0) {
    _DAT_01c6ced0 = iVar2;
    _DAT_01c6ced4 = iVar2;
    DAT_005f2afc->vertex_buffer_ptr->r = 0x7fff;
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
  local_6c.surface_normal.A.i = -1;
  local_6c.surface_normal.B.i = 0;
  local_6c.surface_normal.C.i = 0;
  local_54 = 0;
  local_50 = 4;
  local_4c = 6;
  local_6c.surface_normal.D.i = -local_44;
  local_48 = 2;
  engine_drender_cpp_CDemonRenderer_renderTexturedDirect_FUN_0046b850(DAT_005f2afc,&local_6c,0x2c4);
  local_6c.surface_normal.A.i = 1;
  local_6c.surface_normal.B.i = 0;
  local_6c.surface_normal.C.i = 0;
  local_54 = 1;
  local_6c.surface_normal.D.i = local_2c;
  local_50 = 3;
  local_4c = 7;
  local_48 = 5;
  engine_drender_cpp_CDemonRenderer_renderTexturedDirect_FUN_0046b850(DAT_005f2afc,&local_6c,0x2c4);
  local_6c.surface_normal.A.i = 0;
  local_6c.surface_normal.B.i = -1;
  local_6c.surface_normal.C.i = 0;
  local_54 = 0;
  local_50 = 1;
  local_4c = 5;
  local_48 = 4;
  local_6c.surface_normal.D.i = -local_40;
  engine_drender_cpp_CDemonRenderer_renderTexturedDirect_FUN_0046b850(DAT_005f2afc,&local_6c,0x2c4);
  local_6c.surface_normal.A.i = 0;
  local_6c.surface_normal.B.i = 1;
  local_6c.surface_normal.C.i = 0;
  local_6c.surface_normal.D.i = local_28;
  local_50 = 6;
  local_48 = 3;
  local_4c = 7;
  local_54 = 2;
  engine_drender_cpp_CDemonRenderer_renderTexturedDirect_FUN_0046b850(DAT_005f2afc,&local_6c,0x2c4);
  local_6c.surface_normal.A.i = 0;
  local_6c.surface_normal.B.i = 0;
  local_6c.surface_normal.C.i = -1;
  local_54 = 0;
  local_4c = 3;
  local_50 = 2;
  local_6c.surface_normal.D.i = -local_3c;
  local_48 = 1;
  engine_drender_cpp_CDemonRenderer_renderTexturedDirect_FUN_0046b850(DAT_005f2afc,&local_6c,0x2c4);
  local_6c.surface_normal.A.i = 0;
  local_6c.surface_normal.B.i = 0;
  local_6c.surface_normal.C.i = 1;
  local_6c.surface_normal.D = local_24;
  local_50 = 5;
  local_54 = 4;
  local_4c = 7;
  local_48 = 6;
  engine_drender_cpp_CDemonRenderer_renderTexturedDirect_FUN_0046b850(DAT_005f2afc,&local_6c,0x2c4);
  return;
}
