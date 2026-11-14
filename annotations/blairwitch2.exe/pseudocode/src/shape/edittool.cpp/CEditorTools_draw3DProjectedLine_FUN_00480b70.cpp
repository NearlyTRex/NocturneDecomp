// Name: shape_edittool.cpp_CEditorTools_draw3DProjectedLine_FUN_00480b70
// Address: 00480b70
// Address Range: [[00480b70, 00480be2]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_draw3DProjectedLine_FUN_00480b70(CEditorTools *this_ptr,CVector3f *world_point,int line_length)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_edittool_cpp_CEditorTools_draw3DProjectedLine_FUN_00480b70(CEditorTools *this_ptr,CVector3f *world_point,int line_length)

{
  SProjectedVertex aSStack_40 [2];
  CVector3i CStack_10;
  
  CStack_10.x = (int)ROUND(world_point->x * _DAT_005f5cec);
  CStack_10.y = (int)ROUND(world_point->y * _DAT_005f5cec);
  CStack_10.z = (int)ROUND(world_point->z * _DAT_005f5cec);
  engine_special_cpp_transformAndProjectPoint_FUN_0055d723(aSStack_40,&CStack_10);
  if ((aSStack_40[0].screen_x & 0x80000000U) != 0) {
    return;
  }
  shape_edittool_cpp_CEditorTools_drawPixelLine_FUN_004808b0
            (this_ptr,aSStack_40[0].screen_x >> 0x10,aSStack_40[0].screen_y >> 0x10,line_length);
  return;
}
