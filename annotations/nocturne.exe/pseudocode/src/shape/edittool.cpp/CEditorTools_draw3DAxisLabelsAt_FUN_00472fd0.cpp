// Name: shape_edittool.cpp_CEditorTools_draw3DAxisLabelsAt_FUN_00472fd0
// Address: 00472fd0
// Address Range: [[00472fd0, 00473073]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_draw3DAxisLabelsAt_FUN_00472fd0(CEditorTools *this_ptr,float scale_factor,int text_color,CVector3f *world_position,UOrientationVector *orientation)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CEditorTools_draw3DAxisLabelsAt_FUN_00472fd0(CEditorTools *this_ptr,float scale_factor,int text_color,CVector3f *world_position,UOrientationVector *orientation)

{
  SMRGLPoint SStack_28;
  int local_18;
  int local_14;
  int local_10;
  
  SStack_28.point.x = (int)ROUND(world_position->x * 256.0f);
  SStack_28.point.y = (int)ROUND(world_position->y * 256.0f);
  SStack_28.point.z = (int)ROUND(world_position->z * 256.0f);
  engine_3d_c_processCameraRelativePoint_FUN_004044d0(&SStack_28);
  local_18 = (int)ROUND((orientation->vec).x * 10430.38f);
  local_14 = (int)ROUND((orientation->vec).z * 10430.38f);
  local_10 = (int)ROUND((orientation->vec).y * 10430.38f);
  engine_matrix_c_matrixPushAndTransform_FUN_004cd380(local_18,local_14,local_10,0,0,0);
  shape_edittool_cpp_CEditorTools_draw3DAxisLabels_FUN_00472de0(this_ptr,scale_factor,text_color);
  engine_matrix_c_pop_FUN_004cdbc0();
  return;
}
