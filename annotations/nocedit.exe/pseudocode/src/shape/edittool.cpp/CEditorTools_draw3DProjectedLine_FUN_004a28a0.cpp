// Name: shape_edittool.cpp_CEditorTools_draw3DProjectedLine_FUN_004a28a0
// Address: 004a28a0
// Address Range: [[004a28a0, 004a2912]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_CEditorTools_draw3DProjectedLine_FUN_004a28a0(CEditorTools * this_ptr, CQuaternion4f * world_point, int line_length)

#include "nocturne.h"

void __cdecl
shape_edittool_cpp_CEditorTools_draw3DProjectedLine_FUN_004a28a0
          (CEditorTools *this_ptr,CQuaternion4f *world_point,int line_length)

{
  SProjectedVertex local_40 [2];
  CVector3i local_10;
  
  local_10.x = (int)ROUND(world_point->w * 256.0f);
  local_10.y = (int)ROUND(world_point->x * 256.0f);
  local_10.z = (int)ROUND(world_point->y * 256.0f);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c(local_40,&local_10);
  if ((local_40[0].screen_x & 0x80000000U) != 0) {
    return;
  }
  shape_edittool_cpp_CEditorTools_drawPixelLine_FUN_004a2660
            (this_ptr,local_40[0].screen_x >> 0x10,local_40[0].screen_y >> 0x10,line_length);
  return;
}
