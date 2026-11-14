// Name: shape_edittool.cpp_CEditorTools_draw3DProjectedLine_FUN_004991d0
// Address: 004991d0
// Address Range: [[004991d0, 00499242]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_draw3DProjectedLine_FUN_004991d0(CEditorTools *this_ptr,CVector3f *world_point,int line_length)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_edittool_cpp_CEditorTools_draw3DProjectedLine_FUN_004991d0(CEditorTools *this_ptr,CVector3f *world_point,int line_length)

{
  SProjectedVertex aSStack_40 [2];
  CVector3i CStack_10;
  
  CStack_10.x = (int)ROUND(world_point->x * _DAT_005ff7ec);
  CStack_10.y = (int)ROUND(world_point->y * _DAT_005ff7ec);
  CStack_10.z = (int)ROUND(world_point->z * _DAT_005ff7ec);
  engine_special_cpp_transformAndProjectPoint_FUN_00580173(aSStack_40,&CStack_10);
  if ((aSStack_40[0].screen_x & 0x80000000U) != 0) {
    return;
  }
  shape_edittool_cpp_CEditorTools_drawPixelLine_FUN_00498f10
            (this_ptr,aSStack_40[0].screen_x >> 0x10,aSStack_40[0].screen_y >> 0x10,line_length);
  return;
}
