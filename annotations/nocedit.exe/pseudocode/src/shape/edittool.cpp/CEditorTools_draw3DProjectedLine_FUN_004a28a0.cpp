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
  BADSPACEBASE *in_ESP;
  int in_stack_00000010;
  uint local_2c;
  int iStack_28;
  CVector3i local_10;
  
  local_10.x = (int)ROUND(world_point->w * 256f);
  local_10.y = (int)ROUND(world_point->x * 256f);
  local_10.z = (int)ROUND(world_point->y * 256f);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            ((SProjectedVertex *)&stack0xffffffc0,&local_10);
  if ((local_2c & 0x80000000) != 0) {
    return;
  }
  shape_edittool_cpp_CEditorTools_drawPixelLine_FUN_004a2660
            ((CEditorTools *)world_point,(int)local_2c >> 0x10,iStack_28 >> 0x10,in_stack_00000010);
  return;
}
