// Name: shape_edittool.cpp_FUN_004985b0
// Address: 004985b0
// Address Range: [[004985b0, 00498653]]
// Convention: unknown
// Signature: void shape_edittool_cpp_FUN_004985b0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void shape_edittool_cpp_FUN_004985b0(void)

{
  CEditorTools *in_stack_00000004;
  float in_stack_00000008;
  int in_stack_0000000c;
  float *in_stack_00000010;
  float *in_stack_00000014;
  SMRGLPoint SStack_28;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  
  SStack_28.point.x = (int)ROUND(*in_stack_00000010 * _DAT_005ff7ec);
  SStack_28.point.y = (int)ROUND(in_stack_00000010[1] * _DAT_005ff7ec);
  SStack_28.point.z = (int)ROUND(in_stack_00000010[2] * _DAT_005ff7ec);
  engine_3d_c_processCameraRelativePoint_FUN_004037e0(&SStack_28);
  iStack_18 = (int)ROUND(*in_stack_00000014 * _DAT_005ff7fc);
  iStack_14 = (int)ROUND(in_stack_00000014[2] * _DAT_005ff7fc);
  iStack_10 = (int)ROUND(in_stack_00000014[1] * _DAT_005ff7fc);
  engine_matrix_c_matrixPushAndTransform_FUN_00507c70(iStack_18,iStack_14,iStack_10,0,0,0);
  shape_edittool_cpp_FUN_00498360(in_stack_00000004,in_stack_00000008,in_stack_0000000c);
  SStack_28.point.y = 0x49864d;
  engine_matrix_c_pop_FUN_005084b0();
  return;
}
