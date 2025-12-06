// Name: shape_edittool.cpp_CEditorTools_draw3DAxisLabelsAt_FUN_004a1e90
// Address: 004a1e90
// Address Range: [[004a1e90, 004a1f2c]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_CEditorTools_draw3DAxisLabelsAt_FUN_004a1e90(CEditorTools * this_ptr, int param2, CQuaternion4f * world_position, CQuaternion4f * label_offset, void * param5)

#include "nocturne.h"

void __cdecl
shape_edittool_cpp_CEditorTools_draw3DAxisLabelsAt_FUN_004a1e90
          (CEditorTools *this_ptr,int param2,CQuaternion4f *world_position,
          CQuaternion4f *label_offset,void *param5)

{
  BADSPACEBASE *in_ESP;
  float *in_stack_00000018;
  
  engine_3d_c_processCameraRelativePoint_FUN_004037e0((CQuaternion4f *)&stack0xffffffd8);
  engine_matrix_c_matrixPushAndTransform_FUN_0050cee0
            ((ushort)(int)ROUND(*in_stack_00000018 * 10430.38f),
             (ushort)(int)ROUND(in_stack_00000018[2] * 10430.38f),
             (ushort)(int)ROUND(in_stack_00000018[1] * 10430.38f),0,0,0);
  shape_edittool_cpp_CEditorTools_draw3DAxisLabels_FUN_004a1ca0
            ((CEditorTools *)world_position,(float)label_offset,(int)param5);
  engine_matrix_c_pop_FUN_0050d720();
  return;
}
