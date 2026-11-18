// Name: shape_edittool.cpp_CEditorTools_draw3DAxisLabelsAt_FUN_004985b0
// Address: 004985b0
// Address Range: [[004985b0, 00498653]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_draw3DAxisLabelsAt_FUN_004985b0(CEditorTools *this_ptr,float scale_factor,int text_color,CVector3f *world_position,UOrientationVector *orientation)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CEditorTools_draw3DAxisLabelsAt_FUN_004985b0(CEditorTools *this_ptr,float scale_factor,int text_color,CVector3f *world_position,UOrientationVector *orientation)

{
  SMRGLPoint SStack_28;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  
  SStack_28.point.x = (int)ROUND(world_position->x * 256.0f);
  SStack_28.point.y = (int)ROUND(world_position->y * 256.0f);
  SStack_28.point.z = (int)ROUND(world_position->z * 256.0f);
  engine_3d_c_processCameraRelativePoint_FUN_004037e0(&SStack_28);
  iStack_18 = (int)ROUND((orientation->vec).x * 10430.38f);
  iStack_14 = (int)ROUND((orientation->vec).z * 10430.38f);
  iStack_10 = (int)ROUND((orientation->vec).y * 10430.38f);
  engine_matrix_c_matrixPushAndTransform_FUN_00507c70(iStack_18,iStack_14,iStack_10,0,0,0);
  shape_edittool_cpp_CEditorTools_draw3DAxisLabels_FUN_00498360(this_ptr,scale_factor,text_color);
  SStack_28.point.y = 0x49864d;
  engine_matrix_c_pop_FUN_005084b0();
  return;
}
