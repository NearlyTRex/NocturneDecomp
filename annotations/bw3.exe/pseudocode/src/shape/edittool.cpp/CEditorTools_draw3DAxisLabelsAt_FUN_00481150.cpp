// Name: shape_edittool.cpp_CEditorTools_draw3DAxisLabelsAt_FUN_00481150
// Address: 00481150
// Address Range: [[00481150, 004811f3]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_draw3DAxisLabelsAt_FUN_00481150(CEditorTools *this_ptr,float scale_factor,int text_color,CVector3f *world_position,UOrientationVector *orientation)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_edittool_cpp_CEditorTools_draw3DAxisLabelsAt_FUN_00481150(CEditorTools *this_ptr,float scale_factor,int text_color,CVector3f *world_position,UOrientationVector *orientation)

{
  SMRGLPoint SStack_28;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  
  SStack_28.point.x = (int)ROUND(world_position->x * _DAT_005deffc);
  SStack_28.point.y = (int)ROUND(world_position->y * _DAT_005deffc);
  SStack_28.point.z = (int)ROUND(world_position->z * _DAT_005deffc);
  engine_3d_c_processCameraRelativePoint_FUN_004037e0(&SStack_28);
  iStack_18 = (int)ROUND((orientation->vec).x * _DAT_005df00c);
  iStack_14 = (int)ROUND((orientation->vec).z * _DAT_005df00c);
  iStack_10 = (int)ROUND((orientation->vec).y * _DAT_005df00c);
  engine_matrix_c_matrixPushAndTransform_FUN_004e56b0(iStack_18,iStack_14,iStack_10,0,0,0);
  shape_edittool_cpp_CEditorTools_draw3DAxisLabels_FUN_00480f00(this_ptr,scale_factor,text_color);
  SStack_28.point.y = 0x4811ed;
  engine_matrix_c_pop_FUN_004e5ef0();
  return;
}
