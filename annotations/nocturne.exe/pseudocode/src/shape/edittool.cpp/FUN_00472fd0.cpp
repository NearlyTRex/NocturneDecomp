// Name: shape_edittool.cpp_FUN_00472fd0
// Address: 00472fd0
// Address Range: [[00472fd0, 00473073]]
// Convention: unknown
// Signature: void shape_edittool_cpp_FUN_00472fd0(CEditorTools *param_1,float param_2,int param_3,float *param_4,float *param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void shape_edittool_cpp_FUN_00472fd0(CEditorTools *param_1,float param_2,int param_3,float *param_4,float *param_5)

{
  CQuaternion4f CStack_28;
  int local_18;
  int local_14;
  int local_10;
  
  CStack_28.x = (float)(int)ROUND(*param_4 * _DAT_0059ca4c);
  CStack_28.y = (float)(int)ROUND(param_4[1] * _DAT_0059ca4c);
  CStack_28.z = (float)(int)ROUND(param_4[2] * _DAT_0059ca4c);
  engine_3d_c_processCameraRelativePoint_FUN_004044d0(&CStack_28);
  local_18 = (int)ROUND(*param_5 * _DAT_0059ca5c);
  local_14 = (int)ROUND(param_5[2] * _DAT_0059ca5c);
  local_10 = (int)ROUND(param_5[1] * _DAT_0059ca5c);
  engine_matrix_c_matrixPushAndTransform_FUN_004cd380(local_18,local_14,local_10,0,0,0);
  shape_edittool_cpp_CEditorTools_draw3DAxisLabels_FUN_00472de0(param_1,param_2,param_3);
  engine_matrix_c_pop_FUN_004cdbc0();
  return;
}
