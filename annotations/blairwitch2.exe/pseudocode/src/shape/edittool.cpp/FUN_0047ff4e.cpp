// Name: shape_edittool.cpp_FUN_0047ff4e
// Address: 0047ff4e
// Address Range: [[0047ff4e, 0047fff3]]
// Convention: unknown
// Signature: void shape_edittool_cpp_FUN_0047ff4e(undefined4 param_1,undefined4 param_2,undefined4 param_3,float *param_4,float *param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void shape_edittool_cpp_FUN_0047ff4e(uint param_1,uint param_2,uint param_3,float *param_4,float *param_5)

{
  SMRGLPoint SStack_28;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  
  SStack_28.point.x = (int)ROUND(*param_4 * _DAT_005f5cec);
  SStack_28.point.y = (int)ROUND(param_4[1] * _DAT_005f5cec);
  SStack_28.point.z = (int)ROUND(param_4[2] * _DAT_005f5cec);
  engine_3d_c_processCameraRelativePoint_FUN_00403830(&SStack_28);
  iStack_18 = (int)ROUND(*param_5 * _DAT_005f5cfc);
  iStack_14 = (int)ROUND(param_5[2] * _DAT_005f5cfc);
  iStack_10 = (int)ROUND(param_5[1] * _DAT_005f5cfc);
  engine_matrix_c_matrixPushAndTransform_FUN_004e8fd0(iStack_18,iStack_14,iStack_10,0,0,0);
  shape_edittool_cpp_FUN_0047fd00(param_1,param_2,param_3);
  engine_matrix_c_pop_FUN_004e9810();
  return;
}
