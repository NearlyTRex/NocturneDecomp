// Name: shape_edittool.cpp_CEditorTools_draw3DAxisLabelsAt_FUN_00472fd0
// Address: 00472fd0
// Address Range: [[00472fd0, 00473073]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_draw3DAxisLabelsAt_FUN_00472fd0(CEditorTools *this_ptr,float scale_factor,int text_color,CVector3f *world_position,UOrientationVector *orientation)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_edittool_cpp_CEditorTools_draw3DAxisLabelsAt_FUN_00472fd0(CEditorTools *this_ptr,float scale_factor,int text_color,CVector3f *world_position,UOrientationVector *orientation)

{
  CQuaternion4f CStack_28;
  int local_18;
  int local_14;
  int local_10;
  
  CStack_28.x = (float)(int)ROUND(world_position->x * _DAT_0059ca4c);
  CStack_28.y = (float)(int)ROUND(world_position->y * _DAT_0059ca4c);
  CStack_28.z = (float)(int)ROUND(world_position->z * _DAT_0059ca4c);
  engine_3d_c_processCameraRelativePoint_FUN_004044d0(&CStack_28);
  local_18 = (int)ROUND((orientation->vec).x * _DAT_0059ca5c);
  local_14 = (int)ROUND((orientation->vec).z * _DAT_0059ca5c);
  local_10 = (int)ROUND((orientation->vec).y * _DAT_0059ca5c);
  engine_matrix_c_matrixPushAndTransform_FUN_004cd380(local_18,local_14,local_10,0,0,0);
  shape_edittool_cpp_CEditorTools_draw3DAxisLabels_FUN_00472de0(this_ptr,scale_factor,text_color);
  engine_matrix_c_pop_FUN_004cdbc0();
  return;
}
