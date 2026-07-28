// Name: shape_edittool.cpp_CEditorTools_drawCenteredWireframeCube_FUN_00473650
// Address: 00473650
// Address Range: [[00473650, 004736b9]]
// Convention: unknown
// Signature: void shape_edittool_cpp_CEditorTools_drawCenteredWireframeCube_FUN_00473650(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void shape_edittool_cpp_CEditorTools_drawCenteredWireframeCube_FUN_00473650(void)

{
  CEditorTools *in_stack_00000004;
  float *in_stack_00000008;
  int in_stack_0000000c;
  CVector3f local_1c;
  CVector3f local_10;
  
  local_10.x = *in_stack_00000008 * 3.0517585321376802e-05._4_4_;
  local_10.y = in_stack_00000008[1] * 3.0517585321376802e-05._4_4_;
  local_10.z = in_stack_00000008[2] * 3.0517585321376802e-05._4_4_;
  local_1c.x = -*in_stack_00000008 * 3.0517585321376802e-05._4_4_;
  local_1c.y = -in_stack_00000008[1] * 3.0517585321376802e-05._4_4_;
  local_1c.z = -in_stack_00000008[2] * 3.0517585321376802e-05._4_4_;
  shape_edittool_cpp_CEditorTools_draw3DWireframeCube_FUN_00473190
            (in_stack_00000004,&local_1c,&local_10,in_stack_0000000c);
  return;
}
