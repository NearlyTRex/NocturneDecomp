// Name: core_skeleton.cpp_CDeformableModel_allocLOD_FUN_00517ec0
// Address: 00517ec0
// Address Range: [[00517ec0, 0051805a]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModel_allocLOD_FUN_00517ec0(CDeformableModel *this_ptr,int lod_index,int vertex_count,int tri_count,int cap_tri_count)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModel_allocLOD_FUN_00517ec0(CDeformableModel *this_ptr,int lod_index,int vertex_count,int tri_count,int cap_tri_count)

{
  void *pvVar1;
  SVert *pSVar2;
  SInputFace *pSVar3;
  int *piVar4;
  int element_count;
  WatcomTypeInfo *type_info;
  
  if ((lod_index < 0) || (this_ptr->num_lods <= lod_index)) {
    g_CHAR_PTR_01cc4800 = "..\\core\\skeleton.cpp";
    g_INT_01cc4804 = 0x28a;
    core_main_c_FUN_004c8440("CDeformableModel::allocLOD - invalid lod number %d",lod_index);
  }
  pvVar1 = __vec_delete
                     (this_ptr->vertex_data_ptr[lod_index],&g_SVertTypeInfo_005a1ee0);
  shape_memdbg_cpp_free_FUN_00564486(pvVar1);
  shape_memdbg_cpp_free_FUN_00564486(this_ptr->tri_data_ptr[lod_index]);
  shape_memdbg_cpp_free_FUN_00564486(this_ptr->index_data_ptr[lod_index]);
  shape_memdbg_cpp_free_FUN_00564486(this_ptr->cap_index_ptr[lod_index]);
  type_info = &g_SVertTypeInfo_005a1ee0;
  this_ptr->vertex_count[lod_index] = vertex_count;
  element_count = this_ptr->vertex_count[lod_index];
  this_ptr->tri_count[lod_index] = tri_count;
  this_ptr->cap_tri_count[lod_index] = cap_tri_count;
  pvVar1 = shape_memdbg_cpp_malloc_FUN_00564c18(element_count * 0x34 + 4);
  pSVar2 = (SVert *)__vec_new(pvVar1,element_count,type_info);
  this_ptr->vertex_data_ptr[lod_index] = pSVar2;
  pSVar3 = shape_memdbg_cpp_malloc_FUN_00564c18
                     ((this_ptr->tri_count[lod_index] + this_ptr->cap_tri_count[lod_index]) * 0x12);
  this_ptr->tri_data_ptr[lod_index] = pSVar3;
  piVar4 = shape_memdbg_cpp_malloc_FUN_00564c18
                     ((this_ptr->tri_count[lod_index] + this_ptr->cap_tri_count[lod_index]) * 4);
  this_ptr->index_data_ptr[lod_index] = piVar4;
  if (this_ptr->cap_tri_count[lod_index] < 1) {
    this_ptr->cap_index_ptr[lod_index] = (int *)0x0;
  }
  else {
    piVar4 = shape_memdbg_cpp_malloc_FUN_00564c18(this_ptr->cap_tri_count[lod_index] * 4);
    this_ptr->cap_index_ptr[lod_index] = piVar4;
  }
  if ((((this_ptr->vertex_data_ptr[lod_index] != (SVert *)0x0) &&
       (this_ptr->tri_data_ptr[lod_index] != (SInputFace *)0x0)) &&
      (this_ptr->index_data_ptr[lod_index] != (int *)0x0)) &&
     ((this_ptr->cap_tri_count[lod_index] < 1 || (this_ptr->cap_index_ptr[lod_index] != (int *)0x0))
     )) {
    return;
  }
  core_skeleton_cpp_CDeformableModel_free_FUN_00517cc0(this_ptr);
  g_CHAR_PTR_01cc4800 = "..\\core\\skeleton.cpp";
  g_INT_01cc4804 = 0x2ae;
  core_main_c_FUN_004c8440
            ("Out of hunk in CDeformableModel::allocMemory.  vertexCount=%d, triCount=%d, capTriCount=%d",this_ptr->vertex_count,this_ptr->tri_count,
             this_ptr->cap_tri_count);
  return;
}
