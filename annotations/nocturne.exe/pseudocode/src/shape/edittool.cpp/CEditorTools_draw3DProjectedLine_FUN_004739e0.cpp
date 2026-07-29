// Name: shape_edittool.cpp_CEditorTools_draw3DProjectedLine_FUN_004739e0
// Address: 004739e0
// Address Range: [[004739e0, 00473a52]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_draw3DProjectedLine_FUN_004739e0(CEditorTools *this_ptr,CVector3f *world_point,int line_length)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_edittool_cpp_CEditorTools_draw3DProjectedLine_FUN_004739e0(CEditorTools *this_ptr,CVector3f *world_point,int line_length)

{
  SProjectedVertex local_40 [2];
  CVector3i local_10;
  
  local_10.x = (int)ROUND(world_point->x * _DAT_0059ca4c);
  local_10.y = (int)ROUND(world_point->y * _DAT_0059ca4c);
  local_10.z = (int)ROUND(world_point->z * _DAT_0059ca4c);
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c(local_40,&local_10);
  if ((local_40[0].screen_x & 0x80000000U) != 0) {
    return;
  }
  shape_edittool_cpp_CEditorTools_drawPixelLine_FUN_004737a0
            (this_ptr,local_40[0].screen_x >> 0x10,local_40[0].screen_y >> 0x10,line_length);
  return;
}
