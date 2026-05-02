// Name: core_dmodel.cpp_CKeyFramedModel_scale_FUN_0047c4d0
// Address: 0047c4d0
// MANUAL RECONSTRUCTION
// Address Range: [[0047c4d0, 0047c5e4]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_CKeyFramedModel_scale_FUN_0047c4d0(CKeyFramedModel *this_ptr,CVector3f *scale_factors)

#include "nocturne.h"

void __cdecl core_dmodel_cpp_CKeyFramedModel_scale_FUN_0047c4d0(CKeyFramedModel *this_ptr,CVector3f *scale_factors)

{
  int iVar1;
  int iVar2;
  double dVar3;
  double dVar1;
  
  iVar1 = 0;
  for (iVar2 = 0; iVar2 < this_ptr->frame_count * this_ptr->vertex_count; iVar2 = iVar2 + 1) {
    dVar3 = floor
                      ((double)((float)*(int *)((int)&this_ptr->vertex_list->x + iVar1) *
                                scale_factors->x + (float)0.5));
    *(int *)((int)&this_ptr->vertex_list->x + iVar1) = (int)ROUND(ROUND(dVar3));
    dVar1 = floor
                      ((double)((float)*(int *)((int)&this_ptr->vertex_list->y + iVar1) *
                                scale_factors->y + (float)0.5));
    *(int *)((int)&this_ptr->vertex_list->y + iVar1) = (int)ROUND(ROUND(dVar1));
    dVar1 = floor
                      ((double)((float)*(int *)((int)&this_ptr->vertex_list->z + iVar1) *
                                scale_factors->z + (float)0.5));
    *(int *)((int)&this_ptr->vertex_list->z + iVar1) = (int)ROUND(ROUND(dVar1));
    iVar1 = iVar1 + 0xc;
  }
  core_dmodel_cpp_CKeyFramedModel_calculateFrameBounds_FUN_00478010(this_ptr);
  return;
}
