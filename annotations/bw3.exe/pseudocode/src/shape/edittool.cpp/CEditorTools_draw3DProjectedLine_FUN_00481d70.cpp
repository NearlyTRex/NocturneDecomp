// Name: shape_edittool.cpp_CEditorTools_draw3DProjectedLine_FUN_00481d70
// Address: 00481d70
// Address Range: [[00481d70, 00481de2]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_draw3DProjectedLine_FUN_00481d70(CEditorTools *this_ptr,CVector3f *world_point,int line_length)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CEditorTools_draw3DProjectedLine_FUN_00481d70(CEditorTools *this_ptr,CVector3f *world_point,int line_length)

{
  SProjectedVertex aSStack_40 [2];
  CVector3i CStack_10;
  
  CStack_10.x = (int)ROUND(world_point->x * 256.0f);
  CStack_10.y = (int)ROUND(world_point->y * 256.0f);
  CStack_10.z = (int)ROUND(world_point->z * 256.0f);
  engine_special_cpp_transformAndProjectPoint_FUN_005632a3(aSStack_40,&CStack_10);
  if ((aSStack_40[0].screen_x & 0x80000000U) != 0) {
    return;
  }
  shape_edittool_cpp_CEditorTools_drawPixelLine_FUN_00481ab0
            (this_ptr,aSStack_40[0].screen_x >> 0x10,aSStack_40[0].screen_y >> 0x10,line_length);
  return;
}
