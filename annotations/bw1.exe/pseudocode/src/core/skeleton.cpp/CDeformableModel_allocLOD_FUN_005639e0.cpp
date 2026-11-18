// Name: core_skeleton.cpp_CDeformableModel_allocLOD_FUN_005639e0
// Address: 005639e0
// Address Range: [[005639e0, 00563b69]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModel_allocLOD_FUN_005639e0(CDeformableModel *this_ptr,int lod_index,int vertex_count,int tri_count,int cap_tri_count)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModel_allocLOD_FUN_005639e0(CDeformableModel *this_ptr,int lod_index,int vertex_count,int tri_count,int cap_tri_count)

{
  void *array_memory;
  SVert *pSVar1;
  SInputFace *pSVar2;
  int *piVar3;
  int element_count;
  WatcomTypeInfo *type_info;
  
  if ((lod_index < 0) || (this_ptr->num_lods <= lod_index)) {
    g_CHAR_PTR_01d1d400 = "..\\core\\skeleton.cpp";
    g_INT_01d1d404 = 0x2a3;
    core_main_c_displayErrorAndQuit_FUN_005030e0("CDeformableModel::allocLOD - invalid lod number %d");
  }
  free(this_ptr->vertex_data_ptr[lod_index]);
  free(this_ptr->tri_data_ptr[lod_index]);
  free(this_ptr->index_data_ptr[lod_index]);
  free(this_ptr->cap_index_ptr[lod_index]);
  type_info = &g_SVertTypeInfo;
  this_ptr->vertex_count[lod_index] = vertex_count;
  element_count = this_ptr->vertex_count[lod_index];
  this_ptr->tri_count[lod_index] = tri_count;
  this_ptr->cap_tri_count[lod_index] = cap_tri_count;
  array_memory = operator_new_array(element_count * 0x34);
  pSVar1 = (SVert *)__vec_new(array_memory,element_count,type_info);
  this_ptr->vertex_data_ptr[lod_index] = pSVar1;
  pSVar2 = operator_new_array
                     ((this_ptr->tri_count[lod_index] + this_ptr->cap_tri_count[lod_index]) * 0x12);
  this_ptr->tri_data_ptr[lod_index] = pSVar2;
  piVar3 = operator_new_array
                     ((this_ptr->tri_count[lod_index] + this_ptr->cap_tri_count[lod_index]) * 4);
  this_ptr->index_data_ptr[lod_index] = piVar3;
  if (this_ptr->cap_tri_count[lod_index] < 1) {
    this_ptr->cap_index_ptr[lod_index] = (int *)0x0;
  }
  else {
    piVar3 = operator_new_array(this_ptr->cap_tri_count[lod_index] * 4);
    this_ptr->cap_index_ptr[lod_index] = piVar3;
  }
  if ((((this_ptr->vertex_data_ptr[lod_index] != (SVert *)0x0) &&
       (this_ptr->tri_data_ptr[lod_index] != (SInputFace *)0x0)) &&
      (this_ptr->index_data_ptr[lod_index] != (int *)0x0)) &&
     ((this_ptr->cap_tri_count[lod_index] < 1 || (this_ptr->cap_index_ptr[lod_index] != (int *)0x0))
     )) {
    return;
  }
  core_skeleton_cpp_CDeformableModel_free_FUN_005637d0(this_ptr);
  g_CHAR_PTR_01d1d400 = "..\\core\\skeleton.cpp";
  g_INT_01d1d404 = 0x2c7;
  core_main_c_displayErrorAndQuit_FUN_005030e0("Out of hunk in CDeformableModel::allocMemory.  vertexCount=%d, triCount=%d, capTriCount=%d");
  return;
}
