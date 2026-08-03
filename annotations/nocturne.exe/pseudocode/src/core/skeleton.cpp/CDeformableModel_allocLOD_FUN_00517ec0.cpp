// Name: core_skeleton.cpp_CDeformableModel_allocLOD_FUN_00517ec0
// Address: 00517ec0
// Address Range: [[00517ec0, 0051805a]]
// Convention: unknown
// Signature: void core_skeleton_cpp_CDeformableModel_allocLOD_FUN_00517ec0(CDeformableModel *param_1,int param_2,int param_3,int param_4,int param_5)

#include "nocturne.h"

void core_skeleton_cpp_CDeformableModel_allocLOD_FUN_00517ec0(CDeformableModel *param_1,int param_2,int param_3,int param_4,int param_5)

{
  void *pvVar1;
  SVert *pSVar2;
  SInputFace *pSVar3;
  int *piVar4;
  int element_count;
  WatcomTypeInfo *type_info;
  
  if ((param_2 < 0) || (param_1->num_lods <= param_2)) {
    g_CHAR_PTR_01cc4800 = "..\\core\\skeleton.cpp";
    g_INT_01cc4804 = 0x28a;
    core_main_c_FUN_004c8440("CDeformableModel::allocLOD - invalid lod number %d",param_2);
  }
  pvVar1 = __vec_delete
                     (param_1->vertex_data_ptr[param_2],&g_SVertTypeInfo_005a1ee0);
  shape_memdbg_cpp_free_FUN_00564486(pvVar1);
  shape_memdbg_cpp_free_FUN_00564486(param_1->tri_data_ptr[param_2]);
  shape_memdbg_cpp_free_FUN_00564486(param_1->index_data_ptr[param_2]);
  shape_memdbg_cpp_free_FUN_00564486(param_1->cap_index_ptr[param_2]);
  type_info = &g_SVertTypeInfo_005a1ee0;
  param_1->vertex_count[param_2] = param_3;
  element_count = param_1->vertex_count[param_2];
  param_1->tri_count[param_2] = param_4;
  param_1->cap_tri_count[param_2] = param_5;
  pvVar1 = shape_memdbg_cpp_malloc_FUN_00564c18(element_count * 0x34 + 4);
  pSVar2 = (SVert *)__vec_new(pvVar1,element_count,type_info);
  param_1->vertex_data_ptr[param_2] = pSVar2;
  pSVar3 = shape_memdbg_cpp_malloc_FUN_00564c18
                     ((param_1->tri_count[param_2] + param_1->cap_tri_count[param_2]) * 0x12);
  param_1->tri_data_ptr[param_2] = pSVar3;
  piVar4 = shape_memdbg_cpp_malloc_FUN_00564c18
                     ((param_1->tri_count[param_2] + param_1->cap_tri_count[param_2]) * 4);
  param_1->index_data_ptr[param_2] = piVar4;
  if (param_1->cap_tri_count[param_2] < 1) {
    param_1->cap_index_ptr[param_2] = (int *)0x0;
  }
  else {
    piVar4 = shape_memdbg_cpp_malloc_FUN_00564c18(param_1->cap_tri_count[param_2] * 4);
    param_1->cap_index_ptr[param_2] = piVar4;
  }
  if ((((param_1->vertex_data_ptr[param_2] != (SVert *)0x0) &&
       (param_1->tri_data_ptr[param_2] != (SInputFace *)0x0)) &&
      (param_1->index_data_ptr[param_2] != (int *)0x0)) &&
     ((param_1->cap_tri_count[param_2] < 1 || (param_1->cap_index_ptr[param_2] != (int *)0x0)))) {
    return;
  }
  core_skeleton_cpp_CDeformableModel_free_FUN_00517cc0(param_1);
  g_CHAR_PTR_01cc4800 = "..\\core\\skeleton.cpp";
  g_INT_01cc4804 = 0x2ae;
  core_main_c_FUN_004c8440
            ("Out of hunk in CDeformableModel::allocMemory.  vertexCount=%d, triCount=%d, capTriCount=%d",param_1->vertex_count,param_1->tri_count,
             param_1->cap_tri_count);
  return;
}
