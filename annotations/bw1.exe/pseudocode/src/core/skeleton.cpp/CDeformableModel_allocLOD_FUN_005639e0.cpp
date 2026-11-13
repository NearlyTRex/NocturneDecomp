// Name: core_skeleton.cpp_CDeformableModel_allocLOD_FUN_005639e0
// Address: 005639e0
// Address Range: [[005639e0, 00563b69]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModel_allocLOD_FUN_005639e0(CDeformableModel *this_ptr,int lod_index,int vertex_count,int tri_count,int cap_tri_count)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_skeleton_cpp_CDeformableModel_allocLOD_FUN_005639e0(CDeformableModel *this_ptr,int lod_index,int vertex_count,int tri_count,int cap_tri_count)

{
  uint uVar1;
  SVert *pSVar2;
  SInputFace *pSVar3;
  int *piVar4;
  
  if ((lod_index < 0) || (this_ptr->num_lods <= lod_index)) {
    _DAT_01d1d400 = "..\\core\\skeleton.cpp";
    _DAT_01d1d404 = 0x2a3;
    core_main_c_FUN_005030e0("CDeformableModel::allocLOD - invalid lod number %d",lod_index);
  }
  FUN_005c0336(this_ptr->vertex_data_ptr[lod_index]);
  FUN_005c0336(this_ptr->tri_data_ptr[lod_index]);
  FUN_005c0336(this_ptr->index_data_ptr[lod_index]);
  FUN_005c0336(this_ptr->cap_index_ptr[lod_index]);
  this_ptr->vertex_count[lod_index] = vertex_count;
  this_ptr->tri_count[lod_index] = tri_count;
  this_ptr->cap_tri_count[lod_index] = cap_tri_count;
  uVar1 = operator_new_array
                    (this_ptr->vertex_count[lod_index] * 0x34,this_ptr->vertex_count[lod_index],
                     &g_SVertTypeInfo);
  pSVar2 = (SVert *)FUN_005c267a(uVar1);
  this_ptr->vertex_data_ptr[lod_index] = pSVar2;
  pSVar3 = (SInputFace *)
           operator_new_array
                     ((this_ptr->tri_count[lod_index] + this_ptr->cap_tri_count[lod_index]) * 0x12);
  this_ptr->tri_data_ptr[lod_index] = pSVar3;
  piVar4 = (int *)operator_new_array
                            ((this_ptr->tri_count[lod_index] + this_ptr->cap_tri_count[lod_index]) *
                             4);
  this_ptr->index_data_ptr[lod_index] = piVar4;
  if (this_ptr->cap_tri_count[lod_index] < 1) {
    this_ptr->cap_index_ptr[lod_index] = (int *)0x0;
  }
  else {
    piVar4 = (int *)operator_new_array
                              (this_ptr->cap_tri_count[lod_index] * 4);
    this_ptr->cap_index_ptr[lod_index] = piVar4;
  }
  if ((((this_ptr->vertex_data_ptr[lod_index] != (SVert *)0x0) &&
       (this_ptr->tri_data_ptr[lod_index] != (SInputFace *)0x0)) &&
      (this_ptr->index_data_ptr[lod_index] != (int *)0x0)) &&
     ((this_ptr->cap_tri_count[lod_index] < 1 || (this_ptr->cap_index_ptr[lod_index] != (int *)0x0))
     )) {
    return;
  }
  core_skeleton_cpp_CDeformableModel_free_FUN_005637d0(this_ptr);
  _DAT_01d1d400 = "..\\core\\skeleton.cpp";
  _DAT_01d1d404 = 0x2c7;
  core_main_c_FUN_005030e0
            ("Out of hunk in CDeformableModel::allocMemory.  vertexCount=%d, triCount=%d, capTriCount=%d",this_ptr->vertex_count,this_ptr->tri_count,
             this_ptr->cap_tri_count);
  return;
}
