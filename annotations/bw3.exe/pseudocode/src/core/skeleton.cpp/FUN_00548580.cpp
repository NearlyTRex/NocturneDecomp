// Name: core_skeleton.cpp_FUN_00548580
// Address: 00548580
// Address Range: [[00548580, 00548709]]
// Convention: unknown
// Signature: void core_skeleton_cpp_FUN_00548580(CDeformableModel *param_1,int param_2,int param_3,int param_4,int param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_skeleton_cpp_FUN_00548580(CDeformableModel *param_1,int param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  SVert *pSVar2;
  SInputFace *pSVar3;
  int *piVar4;
  
  if ((param_2 < 0) || (param_1->num_lods <= param_2)) {
    _DAT_01d71de0 = "..\\core\\skeleton.cpp";
    _DAT_01d71de4 = 0x29a;
    core_main_c_FUN_004e4330("CDeformableModel::allocLOD - invalid lod number %d",param_2);
  }
  FUN_005a30b6(param_1->vertex_data_ptr[param_2]);
  FUN_005a30b6(param_1->tri_data_ptr[param_2]);
  FUN_005a30b6(param_1->index_data_ptr[param_2]);
  FUN_005a30b6(param_1->cap_index_ptr[param_2]);
  param_1->vertex_count[param_2] = param_3;
  param_1->tri_count[param_2] = param_4;
  param_1->cap_tri_count[param_2] = param_5;
  uVar1 = operator_new_array
                    (param_1->vertex_count[param_2] * 0x34,param_1->vertex_count[param_2],
                     &g_SVertTypeInfo);
  pSVar2 = (SVert *)FUN_005a556a(uVar1);
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
  core_skeleton_cpp_CDeformableModel_free_FUN_00548370(param_1);
  _DAT_01d71de0 = "..\\core\\skeleton.cpp";
  _DAT_01d71de4 = 0x2be;
  core_main_c_FUN_004e4330
            ("Out of hunk in CDeformableModel::allocMemory.  vertexCount=%d, triCount=%d, capTriCount=%d",param_1->vertex_count,param_1->tri_count,
             param_1->cap_tri_count);
  return;
}
