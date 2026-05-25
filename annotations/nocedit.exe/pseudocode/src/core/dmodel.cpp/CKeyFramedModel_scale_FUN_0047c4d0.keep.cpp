// Name: core_dmodel.cpp_CKeyFramedModel_scale_FUN_0047c4d0
// Address: 0047c4d0
// MANUAL RECONSTRUCTION
// Address Range: [[0047c4d0, 0047c5e4]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_CKeyFramedModel_scale_FUN_0047c4d0(CKeyFramedModel *this_ptr,CVector3f *scale_factors)

#include "nocturne.h"

void __cdecl core_dmodel_cpp_CKeyFramedModel_scale_FUN_0047c4d0(CKeyFramedModel *this_ptr,CVector3f *scale_factors)

{
  int iVar2;
  double dVar3;
  double dVar1;

  for (iVar2 = 0; iVar2 < this_ptr->frame_count * this_ptr->vertex_count; iVar2 = iVar2 + 1) {
    dVar3 = floor
                      ((double)((float)this_ptr->vertex_list[iVar2].x *
                                scale_factors->x + (float)0.5));
    this_ptr->vertex_list[iVar2].x = (int)ROUND(ROUND(dVar3));
    dVar1 = floor
                      ((double)((float)this_ptr->vertex_list[iVar2].y *
                                scale_factors->y + (float)0.5));
    this_ptr->vertex_list[iVar2].y = (int)ROUND(ROUND(dVar1));
    dVar1 = floor
                      ((double)((float)this_ptr->vertex_list[iVar2].z *
                                scale_factors->z + (float)0.5));
    this_ptr->vertex_list[iVar2].z = (int)ROUND(ROUND(dVar1));
  }
  core_dmodel_cpp_CKeyFramedModel_calculateFrameBounds_FUN_00478010(this_ptr);
  return;
}
