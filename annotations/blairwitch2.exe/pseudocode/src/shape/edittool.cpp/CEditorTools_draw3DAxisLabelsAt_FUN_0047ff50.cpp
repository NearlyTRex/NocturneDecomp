// Name: shape_edittool.cpp_CEditorTools_draw3DAxisLabelsAt_FUN_0047ff50
// Address: 0047ff50
// Address Range: [[0047ff50, 0047fff3]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_draw3DAxisLabelsAt_FUN_0047ff50(CEditorTools *this_ptr,float scale_factor,int text_color,CVector3f *world_position,UOrientationVector *orientation)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CEditorTools_draw3DAxisLabelsAt_FUN_0047ff50(CEditorTools *this_ptr,float scale_factor,int text_color,CVector3f *world_position,UOrientationVector *orientation)

{
  SMRGLPoint SStack_28;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  
  SStack_28.point.x = (int)ROUND(world_position->x * 256.0f);
  SStack_28.point.y = (int)ROUND(world_position->y * 256.0f);
  SStack_28.point.z = (int)ROUND(world_position->z * 256.0f);
  engine_3d_c_processCameraRelativePoint_FUN_00403830(&SStack_28);
  iStack_18 = (int)ROUND((orientation->vec).x * 10430.38f);
  iStack_14 = (int)ROUND((orientation->vec).z * 10430.38f);
  iStack_10 = (int)ROUND((orientation->vec).y * 10430.38f);
  engine_matrix_c_matrixPushAndTransform_FUN_004e8fd0(iStack_18,iStack_14,iStack_10,0,0,0);
  shape_edittool_cpp_CEditorTools_draw3DAxisLabels_FUN_0047fd00(this_ptr,scale_factor,text_color);
  SStack_28.point.y = 0x47ffed;
  engine_matrix_c_pop_FUN_004e9810();
  return;
}
