// Name: core_skeleton.cpp_CDeformableModel_allocLOD_FUN_0059a510
// Address: 0059a510
// MANUAL RECONSTRUCTION
// Address Range: [[0059a510, 0059a731]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModel_allocLOD_FUN_0059a510(CDeformableModel *this_ptr,int lod_index,int vertex_count,int tri_count,int cap_tri_count)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModel_allocLOD_FUN_0059a510(CDeformableModel *this_ptr,int lod_index,int vertex_count,int tri_count,int cap_tri_count)

{
  void *ptr;
  void *array_memory;
  SVert *pSVar1;
  SInputFace *pSVar2;
  int *piVar3;
  int element_count;
  WatcomTypeInfo *type_info;

  if ((lod_index < 0) || (this_ptr->num_lods <= lod_index)) {
    g_CurrentFilename = "..\\core\\skeleton.cpp";
    g_CurrentLineNumber = 650;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDeformableModel::allocLOD - invalid lod number %d",lod_index);
  }
  g_CurrentDebugFilename = "..\\core\\skeleton.cpp";
  g_CurrentDebugLine = 0x28f;
  ptr = __vec_delete(this_ptr->vertex_data_ptr[lod_index],&g_SVertTypeInfo);
  shape_memdbg_cpp_free_FUN_005fe659(ptr);
  g_CurrentDebugLine = 0x290;
  g_CurrentDebugFilename = "..\\core\\skeleton.cpp";
  shape_memdbg_cpp_free_FUN_005fe659(this_ptr->tri_data_ptr[lod_index]);
  g_CurrentDebugFilename = "..\\core\\skeleton.cpp";
  g_CurrentDebugLine = 0x291;
  shape_memdbg_cpp_free_FUN_005fe659(this_ptr->index_data_ptr[lod_index]);
  g_CurrentDebugFilename = "..\\core\\skeleton.cpp";
  g_CurrentDebugLine = 0x292;
  shape_memdbg_cpp_free_FUN_005fe659(this_ptr->cap_index_ptr[lod_index]);
  this_ptr->vertex_count[lod_index] = vertex_count;
  this_ptr->tri_count[lod_index] = tri_count;
  this_ptr->cap_tri_count[lod_index] = cap_tri_count;
  type_info = &g_SVertTypeInfo;
  element_count = this_ptr->vertex_count[lod_index];
  array_memory = shape_memdbg_cpp_debugAllocTracked2_FUN_0050f1f0
                           (element_count * 0x34 + 4,"..\\core\\skeleton.cpp",668);
  pSVar1 = (SVert *)__vec_new(array_memory,element_count,type_info);
  this_ptr->vertex_data_ptr[lod_index] = pSVar1;
  pSVar2 = (SInputFace *)shape_memdbg_cpp_debugAllocTracked2_FUN_0050f1f0
                     ((this_ptr->cap_tri_count[lod_index] + this_ptr->tri_count[lod_index]) * sizeof(SInputFace),
                      "..\\core\\skeleton.cpp",669);
  this_ptr->tri_data_ptr[lod_index] = pSVar2;
  piVar3 = (int *)shape_memdbg_cpp_debugAllocTracked2_FUN_0050f1f0
                     ((this_ptr->tri_count[lod_index] + this_ptr->cap_tri_count[lod_index]) * 4,
                      "..\\core\\skeleton.cpp",670);
  this_ptr->index_data_ptr[lod_index] = piVar3;
  if (this_ptr->cap_tri_count[lod_index] < 1) {
    this_ptr->cap_index_ptr[lod_index] = (int *)0x0;
  }
  else {
    piVar3 = (int *)shape_memdbg_cpp_debugAllocTracked2_FUN_0050f1f0
                       (this_ptr->cap_tri_count[lod_index] * 4,"..\\core\\skeleton.cpp",672);
    this_ptr->cap_index_ptr[lod_index] = piVar3;
  }
  if ((((this_ptr->vertex_data_ptr[lod_index] != (SVert *)0x0) &&
       (this_ptr->tri_data_ptr[lod_index] != (SInputFace *)0x0)) &&
      (this_ptr->index_data_ptr[lod_index] != (int *)0x0)) &&
     ((this_ptr->cap_tri_count[lod_index] < 1 || (this_ptr->cap_index_ptr[lod_index] != (int *)0x0))
     )) {
    return;
  }
  core_skeleton_cpp_CDeformableModel_free_FUN_0059a2b0(this_ptr);
  g_CurrentFilename = "..\\core\\skeleton.cpp";
  g_CurrentLineNumber = 686;
  core_main_c_displayErrorAndQuit_FUN_00506f10
            ("Out of hunk in CDeformableModel::allocMemory.  vertexCount=%d, triCount=%d, capTriCount=%d",(int)(intptr_t)this_ptr->vertex_count,(int)(intptr_t)this_ptr->tri_count,
             (int)(intptr_t)this_ptr->cap_tri_count);
  return;
}
