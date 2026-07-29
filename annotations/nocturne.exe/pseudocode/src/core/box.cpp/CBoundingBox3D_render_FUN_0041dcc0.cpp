// Name: core_box.cpp_CBoundingBox3D_render_FUN_0041dcc0
// Address: 0041dcc0
// Address Range: [[0041dcc0, 0041e15b]]
// Convention: __cdecl
// Signature: void __cdecl core_box_cpp_CBoundingBox3D_render_FUN_0041dcc0(CBoundingBox3D *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_box_cpp_CBoundingBox3D_render_FUN_0041dcc0(CBoundingBox3D *this_ptr)

{
  CDemonRenderer *pCVar1;
  int iVar2;
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
  UIntegerFloat local_8;
  
  corner_index = 0;
  pCVar3 = local_b0;
  do {
    core_box_cpp_CBoundingBox3D_getCorner_FUN_0041cc70(this_ptr,&local_1c,corner_index);
    corner_index = corner_index + 1;
    pCVar3->x = (int)ROUND(local_1c.x * _DAT_0059aa80);
    pCVar3->y = (int)ROUND(local_1c.y * _DAT_0059aa80);
    pCVar3->z = (int)ROUND(local_1c.z * _DAT_0059aa80);
    pCVar3 = pCVar3 + 1;
  } while ((int)corner_index < 8);
  core_set_cpp_CDemonSet_rotateVerticies_FUN_0050c200(0x01E57284,8,local_b0);
  local_50.base.count = 4;
  engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_00460fa0(DAT_005ae704,1);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00460fb0(DAT_005ae704,0);
  local_28 = (int)ROUND((this_ptr->min).x * _DAT_0059aa80);
  local_24 = (int)ROUND((this_ptr->min).y * _DAT_0059aa80);
  local_20 = (int)ROUND((this_ptr->min).z * _DAT_0059aa80);
  local_10 = (int)ROUND((this_ptr->max).x * _DAT_0059aa80);
  local_c = (int)ROUND((this_ptr->max).y * _DAT_0059aa80);
  local_8.i = (int)ROUND((this_ptr->max).z * _DAT_0059aa80);
  iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(DAT_005ae704);
  pCVar1 = DAT_005ae704;
  if (iVar2 == 0) {
    _DAT_01c02580 = iVar2;
    _DAT_01c02584 = iVar2;
    DAT_005ae704->vertex_buffer_ptr->r = 0x7fff;
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
  local_50.surface_normal.A.i = -1;
  local_50.surface_normal.B.i = 0;
  local_50.surface_normal.C.i = 0;
  local_38 = 0;
  local_34 = 4;
  local_30 = 6;
  local_50.surface_normal.D.i = -local_28;
  local_2c = 2;
  engine_drender_cpp_CDemonRenderer_renderTexturedDirect_FUN_0045f3c0(DAT_005ae704,&local_50,0x2c4);
  local_50.surface_normal.A.i = 1;
  local_50.surface_normal.D.i = local_10;
  local_50.surface_normal.B.i = 0;
  local_34 = 3;
  local_38 = 1;
  local_50.surface_normal.C.i = 0;
  local_30 = 7;
  local_2c = 5;
  engine_drender_cpp_CDemonRenderer_renderTexturedDirect_FUN_0045f3c0(DAT_005ae704,&local_50,0x2c4);
  local_50.surface_normal.A.i = 0;
  local_50.surface_normal.B.i = -1;
  local_50.surface_normal.C.i = 0;
  local_38 = 0;
  local_34 = 1;
  local_50.surface_normal.D.i = -local_24;
  local_30 = 5;
  local_2c = 4;
  engine_drender_cpp_CDemonRenderer_renderTexturedDirect_FUN_0045f3c0(DAT_005ae704,&local_50,0x2c4);
  local_50.surface_normal.A.i = 0;
  local_50.surface_normal.B.i = 1;
  local_50.surface_normal.C.i = 0;
  local_38 = 2;
  local_34 = 6;
  local_50.surface_normal.D.i = local_c;
  local_30 = 7;
  local_2c = 3;
  engine_drender_cpp_CDemonRenderer_renderTexturedDirect_FUN_0045f3c0(DAT_005ae704,&local_50,0x2c4);
  local_50.surface_normal.A.i = 0;
  local_50.surface_normal.B.i = 0;
  local_50.surface_normal.C.i = -1;
  local_38 = 0;
  local_2c = 1;
  local_34 = 2;
  local_30 = 3;
  local_50.surface_normal.D.i = -local_20;
  engine_drender_cpp_CDemonRenderer_renderTexturedDirect_FUN_0045f3c0(DAT_005ae704,&local_50,0x2c4);
  local_50.surface_normal.A.i = 0;
  local_50.surface_normal.B.i = 0;
  local_38 = 4;
  local_34 = 5;
  local_50.surface_normal.D = local_8;
  local_50.surface_normal.C.i = 1;
  local_30 = 7;
  local_2c = 6;
  engine_drender_cpp_CDemonRenderer_renderTexturedDirect_FUN_0045f3c0(DAT_005ae704,&local_50,0x2c4);
  return;
}
