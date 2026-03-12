// Name: shape_edittool.cpp_CEditorTools_draw3DAxisLabelsAt_FUN_004a1e90
// Address: 004a1e90
// Address Range: [[004a1e90, 004a1f2c]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_draw3DAxisLabelsAt_FUN_004a1e90(CEditorTools *this_ptr,float scale_factor,int text_color,CVector3f *world_position,UOrientationVector *orientation)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CEditorTools_draw3DAxisLabelsAt_FUN_004a1e90(CEditorTools *this_ptr,float scale_factor,int text_color,CVector3f *world_position,UOrientationVector *orientation)

{
  CQuaternion4f CStack_28;
  int local_18;
  int local_14;
  int local_10;
  
  CStack_28.x = (float)(int)ROUND(world_position->x * 256.0f);
  CStack_28.y = (float)(int)ROUND(world_position->y * 256.0f);
  CStack_28.z = (float)(int)ROUND(world_position->z * 256.0f);
  engine_3d_c_processCameraRelativePoint_FUN_004037e0(&CStack_28);
  engine_matrix_c_matrixPushAndTransform_FUN_0050cee0
            ((int)ROUND((orientation->vec).x * 10430.38f),
             (int)ROUND((orientation->vec).z * 10430.38f),
             (int)ROUND((orientation->vec).y * 10430.38f),0,0,0);
  shape_edittool_cpp_CEditorTools_draw3DAxisLabels_FUN_004a1ca0(this_ptr,scale_factor,text_color);
  engine_matrix_c_pop_FUN_0050d720();
  return;
}
