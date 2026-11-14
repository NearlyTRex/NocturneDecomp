// Name: core_skeleton.cpp_CDeformableModel_allocLOD_FUN_00548580
// Address: 00548580
// Address Range: [[00548580, 00548709]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModel_allocLOD_FUN_00548580(CDeformableModel *this_ptr,int lod_index,int vertex_count,int tri_count,int cap_tri_count)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_skeleton_cpp_CDeformableModel_allocLOD_FUN_00548580(CDeformableModel *this_ptr,int lod_index,int vertex_count,int tri_count,int cap_tri_count)

{
  uint uVar1;
  SVert *pSVar2;
  SInputFace *pSVar3;
  int *piVar4;
  
  if ((lod_index < 0) || (this_ptr->num_lods <= lod_index)) {
    _DAT_01d71de0 = "..\\core\\skeleton.cpp";
    _DAT_01d71de4 = 0x29a;
    core_main_c_FUN_004e4330("CDeformableModel::allocLOD - invalid lod number %d",lod_index);
  }
  FUN_005a30b6(this_ptr->vertex_data_ptr[lod_index]);
  FUN_005a30b6(this_ptr->tri_data_ptr[lod_index]);
  FUN_005a30b6(this_ptr->index_data_ptr[lod_index]);
  FUN_005a30b6(this_ptr->cap_index_ptr[lod_index]);
  this_ptr->vertex_count[lod_index] = vertex_count;
  this_ptr->tri_count[lod_index] = tri_count;
  this_ptr->cap_tri_count[lod_index] = cap_tri_count;
  uVar1 = operator_new_array
                    (this_ptr->vertex_count[lod_index] * 0x34,this_ptr->vertex_count[lod_index],
                     &g_SVertTypeInfo);
  pSVar2 = (SVert *)FUN_005a556a(uVar1);
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
  core_skeleton_cpp_CDeformableModel_free_FUN_00548370(this_ptr);
  _DAT_01d71de0 = "..\\core\\skeleton.cpp";
  _DAT_01d71de4 = 0x2be;
  core_main_c_FUN_004e4330
            ("Out of hunk in CDeformableModel::allocMemory.  vertexCount=%d, triCount=%d, capTriCount=%d",this_ptr->vertex_count,this_ptr->tri_count,
             this_ptr->cap_tri_count);
  return;
}
