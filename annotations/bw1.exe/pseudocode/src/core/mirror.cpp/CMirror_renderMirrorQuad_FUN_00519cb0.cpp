// Name: core_mirror.cpp_CMirror_renderMirrorQuad_FUN_00519cb0
// Address: 00519cb0
// Address Range: [[00519cb0, 00519e39]]
// Convention: __cdecl
// Signature: int __cdecl core_mirror_cpp_CMirror_renderMirrorQuad_FUN_00519cb0(CMirror *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_mirror_cpp_CMirror_renderMirrorQuad_FUN_00519cb0(CMirror *this_ptr)

{
  int iVar1;
  SMRGLHeaderPrimitive SStack_64;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  CVector3i CStack_3c;
  CVector3i CStack_30;
  CVector3i CStack_24;
  CVector3i CStack_18;
  
  CStack_24.x = (int)ROUND((this_ptr->reflection).corner1.x * _DAT_00603ce0);
  CStack_24.y = (int)ROUND((this_ptr->reflection).corner1.y * _DAT_00603ce0);
  CStack_24.z = (int)ROUND((this_ptr->reflection).corner1.z * _DAT_00603ce0);
  engine_special_cpp_FUN_0058043c(&DAT_00612560->vertex_buffer_ptr->projected_vertex,&CStack_24);
  CStack_30.x = (int)ROUND((this_ptr->reflection).corner2.x * _DAT_00603ce0);
  CStack_30.y = (int)ROUND((this_ptr->reflection).corner2.y * _DAT_00603ce0);
  CStack_30.z = (int)ROUND((this_ptr->reflection).corner2.z * _DAT_00603ce0);
  engine_special_cpp_FUN_0058043c(&DAT_00612560->vertex_buffer_ptr[1].projected_vertex,&CStack_30);
  CStack_3c.x = (int)ROUND((this_ptr->reflection).corner3.x * _DAT_00603ce0);
  CStack_3c.y = (int)ROUND((this_ptr->reflection).corner3.y * _DAT_00603ce0);
  CStack_3c.z = (int)ROUND((this_ptr->reflection).corner3.z * _DAT_00603ce0);
  engine_special_cpp_FUN_0058043c(&DAT_00612560->vertex_buffer_ptr[2].projected_vertex,&CStack_3c);
  CStack_18.x = (int)ROUND((this_ptr->reflection).corner4.x * _DAT_00603ce0);
  CStack_18.y = (int)ROUND((this_ptr->reflection).corner4.y * _DAT_00603ce0);
  CStack_18.z = (int)ROUND((this_ptr->reflection).corner4.z * _DAT_00603ce0);
  engine_special_cpp_FUN_0058043c(&DAT_00612560->vertex_buffer_ptr[3].projected_vertex,&CStack_18);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00483d80(DAT_00612560,1);
  SStack_64.base.count = 4;
  SStack_64.surface_normal.D.i = 0;
  SStack_64.surface_normal.C.i = 0;
  SStack_64.surface_normal.B.i = 0;
  SStack_64.surface_normal.A.i = 0;
  uStack_4c = 0;
  uStack_48 = 1;
  uStack_44 = 2;
  uStack_40 = 3;
  iVar1 = engine_drender_cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_00481eb0
                    (DAT_00612560,&SStack_64);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00483d80(DAT_00612560,1);
  return iVar1;
}
