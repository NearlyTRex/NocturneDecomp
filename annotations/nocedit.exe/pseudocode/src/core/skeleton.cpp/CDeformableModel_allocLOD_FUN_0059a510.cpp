// Name: core_skeleton.cpp_CDeformableModel_allocLOD_FUN_0059a510
// Address: 0059a510
// Address Range: [[0059a510, 0059a731]]
// Convention: __cdecl
// Signature: void core_skeleton.cpp_CDeformableModel_allocLOD_FUN_0059a510(CDeformableModel * this_ptr, int lod_index, int vertex_count, int tri_count, int cap_tri_count)

#include "nocturne.h"

void __cdecl
core_skeleton_cpp_CDeformableModel_allocLOD_FUN_0059a510
          (CDeformableModel *this_ptr,int lod_index,int vertex_count,int tri_count,int cap_tri_count
          )

{
  void *pvVar1;
  SVert *pSVar2;
  SInputFace *pSVar3;
  int *piVar4;
  int *piStack0000001c;
  int in_stack_00000024;
  int in_stack_00000028;
  int in_stack_0000002c;
  
  if ((lod_index < 0) || (this_ptr->num_lods <= lod_index)) {
    g_CurrentFilename = "..\\core\\skeleton.cpp";
    g_CurrentLineNumber = 0x28a;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDeformableModel::allocLOD - invalid lod number %d",lod_index);
  }
  g_CurrentDebugFilename = "..\\core\\skeleton.cpp";
  g_CurrentDebugLine = 0x28f;
  pvVar1 = crt_memory_c_freeSingleInstance_FUN_005fe632
                     (this_ptr->vertex_data_ptr[lod_index],&g_SVertTypeInfo);
  crt_memory_c_free_FUN_005fe659(pvVar1);
  g_CurrentDebugLine = 0x290;
  g_CurrentDebugFilename = "..\\core\\skeleton.cpp";
  crt_memory_c_free_FUN_005fe659(this_ptr->tri_data_ptr[lod_index]);
  g_CurrentDebugFilename = "..\\core\\skeleton.cpp";
  g_CurrentDebugLine = 0x291;
  crt_memory_c_free_FUN_005fe659(this_ptr->index_data_ptr[lod_index]);
  g_CurrentDebugFilename = "..\\core\\skeleton.cpp";
  g_CurrentDebugLine = 0x292;
  crt_memory_c_free_FUN_005fe659(this_ptr->cap_index_ptr[lod_index]);
  this_ptr->vertex_count[lod_index] = in_stack_00000024;
  this_ptr->tri_count[lod_index] = in_stack_00000028;
  this_ptr->cap_tri_count[lod_index] = in_stack_0000002c;
  pvVar1 = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                     (this_ptr->vertex_count[lod_index] * 0x34 + 4,"..\\core\\skeleton.cpp",
                      0x29c);
  pSVar2 = crt_memory_c_constructTypedObjectArray_FUN_00601272
                     (pvVar1,0x662ed0,(WatcomTypeInfo *)lod_index);
  this_ptr->vertex_data_ptr[lod_index] = pSVar2;
  pSVar3 = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                     ((this_ptr->cap_tri_count[lod_index] + this_ptr->tri_count[lod_index]) * 0x12,
                      "..\\core\\skeleton.cpp",0x29d);
  this_ptr->tri_data_ptr[lod_index] = pSVar3;
  piVar4 = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                     ((this_ptr->tri_count[lod_index] + this_ptr->cap_tri_count[lod_index]) * 4,
                      "..\\core\\skeleton.cpp",0x29e);
  this_ptr->index_data_ptr[lod_index] = piVar4;
  if (this_ptr->cap_tri_count[lod_index] < 1) {
    this_ptr->cap_index_ptr[lod_index] = (int *)0x0;
  }
  else {
    piVar4 = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                       (this_ptr->cap_tri_count[lod_index] * 4,"..\\core\\skeleton.cpp",0x2a0);
    this_ptr->cap_index_ptr[lod_index] = piVar4;
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
  piStack0000001c = this_ptr->cap_tri_count;
  g_CurrentLineNumber = 0x2ae;
  core_main_c_displayErrorAndQuit_FUN_00506f10("Out of hunk in CDeformableModel::allocMemory.  vertexCount=%d, triCount=%d, capTriCount=%d");
  return;
}
