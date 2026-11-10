// Name: core_mirror.cpp_CMirror_renderMirrorQuadDepth_FUN_00519e40
// Address: 00519e40
// Address Range: [[00519e40, 00519fe3]]
// Convention: __cdecl
// Signature: void __cdecl core_mirror_cpp_CMirror_renderMirrorQuadDepth_FUN_00519e40(CMirror *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_mirror_cpp_CMirror_renderMirrorQuadDepth_FUN_00519e40(CMirror *this_ptr)

{
  int iVar1;
  int iVar2;
  SMRGLPrimitivePoly aSStack_88 [4];
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_64;
  uint local_58;
  uint local_4c;
  CVector3i local_40;
  CVector3i local_34;
  CVector3i local_28;
  CVector3i local_1c;
  
  local_34.x = (int)ROUND((this_ptr->reflection).corner1.x * _DAT_00603ce0);
  local_34.y = (int)ROUND((this_ptr->reflection).corner1.y * _DAT_00603ce0);
  local_34.z = (int)ROUND((this_ptr->reflection).corner1.z * _DAT_00603ce0);
  engine_special_cpp_FUN_0058043c((SProjectedVertex *)DAT_00612560->vertex_buffer_ptr,&local_34);
  local_40.x = (int)ROUND((this_ptr->reflection).corner2.x * _DAT_00603ce0);
  local_40.y = (int)ROUND((this_ptr->reflection).corner2.y * _DAT_00603ce0);
  local_40.z = (int)ROUND((this_ptr->reflection).corner2.z * _DAT_00603ce0);
  engine_special_cpp_FUN_0058043c
            ((SProjectedVertex *)(DAT_00612560->vertex_buffer_ptr + 0x30),&local_40);
  local_1c.x = (int)ROUND((this_ptr->reflection).corner3.x * _DAT_00603ce0);
  local_1c.y = (int)ROUND((this_ptr->reflection).corner3.y * _DAT_00603ce0);
  local_1c.z = (int)ROUND((this_ptr->reflection).corner3.z * _DAT_00603ce0);
  engine_special_cpp_FUN_0058043c
            ((SProjectedVertex *)(DAT_00612560->vertex_buffer_ptr + 0x60),&local_1c);
  local_28.x = (int)ROUND((this_ptr->reflection).corner4.x * _DAT_00603ce0);
  local_28.y = (int)ROUND((this_ptr->reflection).corner4.y * _DAT_00603ce0);
  local_28.z = (int)ROUND((this_ptr->reflection).corner4.z * _DAT_00603ce0);
  engine_special_cpp_FUN_0058043c
            ((SProjectedVertex *)(DAT_00612560->vertex_buffer_ptr + 0x90),&local_28);
  iVar1 = 0;
  do {
    *(int *)(DAT_00612560->vertex_buffer_ptr + iVar1) =
         *(int *)(DAT_00612560->vertex_buffer_ptr + iVar1) << 4;
    *(int *)(DAT_00612560->vertex_buffer_ptr + iVar1 + 4) =
         *(int *)(DAT_00612560->vertex_buffer_ptr + iVar1 + 4) << 4;
    *(int *)(DAT_00612560->vertex_buffer_ptr + iVar1 + 8) =
         *(int *)(DAT_00612560->vertex_buffer_ptr + iVar1 + 8) << 4;
    iVar2 = iVar1 + 0x30;
    *(uint *)(DAT_00612560->vertex_buffer_ptr + iVar1 + 0xc) =
         *(uint *)(DAT_00612560->vertex_buffer_ptr + iVar1 + 0xc) >> 4;
    iVar1 = iVar2;
  } while (iVar2 != 0xc0);
  local_84 = 4;
  local_74 = 0;
  local_78 = 0;
  local_7c = 0;
  local_58 = 2;
  local_80 = 0;
  local_70 = 0;
  local_4c = 3;
  local_64 = 1;
  engine_drender_cpp_CDemonRenderer_renderZPrepassPoly_FUN_00481cb0(DAT_00612560,aSStack_88);
  return;
}
