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
  CQuaternion4f CStack_28;
  int local_18;
  int local_14;
  int local_10;
  
  CStack_28.x = (float)(int)ROUND(label_offset->w * 256f);
  CStack_28.y = (float)(int)ROUND(label_offset->x * 256f);
  CStack_28.z = (float)(int)ROUND(label_offset->y * 256f);
  engine_3d_c_processCameraRelativePoint_FUN_004037e0(&CStack_28);
  local_18 = (int)ROUND(*(float *)param5 * 10430.38f);
  local_14 = (int)ROUND(*(float *)((int)param5 + 8) * 10430.38f);
  local_10 = (int)ROUND(*(float *)((int)param5 + 4) * 10430.38f);
  engine_matrix_c_matrixPushAndTransform_FUN_0050cee0
            ((ushort)local_18,(ushort)local_14,(ushort)local_10,0,0,0);
  shape_edittool_cpp_CEditorTools_draw3DAxisLabels_FUN_004a1ca0
            (this_ptr,(float)param2,(int)world_position);
  engine_matrix_c_pop_FUN_0050d720();
  return;
}
