// Name: shape_edittool.cpp_CEditorTools_draw3DProjectedLine_FUN_004739e0
// Address: 004739e0
// Address Range: [[004739e0, 00473a52]]
// Convention: unknown
// Signature: void shape_edittool_cpp_CEditorTools_draw3DProjectedLine_FUN_004739e0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void shape_edittool_cpp_CEditorTools_draw3DProjectedLine_FUN_004739e0(void)

{
  CEditorTools *in_stack_00000004;
  float *in_stack_00000008;
  int in_stack_0000000c;
  SProjectedVertex local_40 [2];
  CVector3i local_10;
  
  local_10.x = (int)ROUND(*in_stack_00000008 * _DAT_0059ca4c);
  local_10.y = (int)ROUND(in_stack_00000008[1] * _DAT_0059ca4c);
  local_10.z = (int)ROUND(in_stack_00000008[2] * _DAT_0059ca4c);
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c(local_40,&local_10);
  if ((local_40[0].screen_x & 0x80000000U) != 0) {
    return;
  }
  shape_edittool_cpp_CEditorTools_drawPixelLine_FUN_004737a0
            (in_stack_00000004,local_40[0].screen_x >> 0x10,local_40[0].screen_y >> 0x10,
             in_stack_0000000c);
  return;
}
