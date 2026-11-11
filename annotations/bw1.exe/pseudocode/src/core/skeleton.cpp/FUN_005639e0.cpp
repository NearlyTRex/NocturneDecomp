// Name: core_skeleton.cpp_FUN_005639e0
// Address: 005639e0
// Address Range: [[005639e0, 00563b69]]
// Convention: unknown
// Signature: void core_skeleton_cpp_FUN_005639e0(CDeformableModel *param_1,int param_2,int param_3,int param_4,int param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_skeleton_cpp_FUN_005639e0(CDeformableModel *param_1,int param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  SVert *pSVar2;
  SInputFace *pSVar3;
  int *piVar4;
  
  if ((param_2 < 0) || (param_1->num_lods <= param_2)) {
    _DAT_01d1d400 = "..\\core\\skeleton.cpp";
    _DAT_01d1d404 = 0x2a3;
    core_main_c_FUN_005030e0("CDeformableModel::allocLOD - invalid lod number %d",param_2);
  }
  FUN_005c0336(param_1->vertex_data_ptr[param_2]);
  FUN_005c0336(param_1->tri_data_ptr[param_2]);
  FUN_005c0336(param_1->index_data_ptr[param_2]);
  FUN_005c0336(param_1->cap_index_ptr[param_2]);
  param_1->vertex_count[param_2] = param_3;
  param_1->tri_count[param_2] = param_4;
  param_1->cap_tri_count[param_2] = param_5;
  uVar1 = operator_new_array
                    (param_1->vertex_count[param_2] * 0x34,param_1->vertex_count[param_2],
                     &g_SVertTypeInfo);
  pSVar2 = (SVert *)FUN_005c267a(uVar1);
  param_1->vertex_data_ptr[param_2] = pSVar2;
  pSVar3 = (SInputFace *)
           operator_new_array
                     ((param_1->tri_count[param_2] + param_1->cap_tri_count[param_2]) * 0x12);
  param_1->tri_data_ptr[param_2] = pSVar3;
  piVar4 = (int *)operator_new_array
                            ((param_1->tri_count[param_2] + param_1->cap_tri_count[param_2]) * 4);
  param_1->index_data_ptr[param_2] = piVar4;
  if (param_1->cap_tri_count[param_2] < 1) {
    param_1->cap_index_ptr[param_2] = (int *)0x0;
  }
  else {
    piVar4 = (int *)operator_new_array
                              (param_1->cap_tri_count[param_2] * 4);
    param_1->cap_index_ptr[param_2] = piVar4;
  }
  if ((((param_1->vertex_data_ptr[param_2] != (SVert *)0x0) &&
       (param_1->tri_data_ptr[param_2] != (SInputFace *)0x0)) &&
      (param_1->index_data_ptr[param_2] != (int *)0x0)) &&
     ((param_1->cap_tri_count[param_2] < 1 || (param_1->cap_index_ptr[param_2] != (int *)0x0)))) {
    return;
  }
  core_skeleton_cpp_CDeformableModel_free_FUN_005637d0(param_1);
  _DAT_01d1d400 = "..\\core\\skeleton.cpp";
  _DAT_01d1d404 = 0x2c7;
  core_main_c_FUN_005030e0
            ("Out of hunk in CDeformableModel::allocMemory.  vertexCount=%d, triCount=%d, capTriCount=%d",param_1->vertex_count,param_1->tri_count,
             param_1->cap_tri_count);
  return;
}
