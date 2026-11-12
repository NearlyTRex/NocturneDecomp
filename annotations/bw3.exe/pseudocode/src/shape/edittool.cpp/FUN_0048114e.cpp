// Name: shape_edittool.cpp_FUN_0048114e
// Address: 0048114e
// Address Range: [[0048114e, 004811f3]]
// Convention: unknown
// Signature: void shape_edittool_cpp_FUN_0048114e(CEditorTools *param_1,float param_2,int param_3,float *param_4,float *param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void shape_edittool_cpp_FUN_0048114e(CEditorTools *param_1,float param_2,int param_3,float *param_4,float *param_5)

{
  SMRGLPoint SStack_28;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  
  SStack_28.point.x = (int)ROUND(*param_4 * _DAT_005deffc);
  SStack_28.point.y = (int)ROUND(param_4[1] * _DAT_005deffc);
  SStack_28.point.z = (int)ROUND(param_4[2] * _DAT_005deffc);
  engine_3d_c_processCameraRelativePoint_FUN_004037e0(&SStack_28);
  iStack_18 = (int)ROUND(*param_5 * _DAT_005df00c);
  iStack_14 = (int)ROUND(param_5[2] * _DAT_005df00c);
  iStack_10 = (int)ROUND(param_5[1] * _DAT_005df00c);
  engine_matrix_c_matrixPushAndTransform_FUN_004e56b0(iStack_18,iStack_14,iStack_10,0,0,0);
  shape_edittool_cpp_FUN_00480f00(param_1,param_2,param_3);
  SStack_28.point.y = 0x4811ed;
  engine_matrix_c_pop_FUN_004e5ef0();
  return;
}
