// Name: core_dmodel.cpp_CKeyFramedModel_applyBias_FUN_0047c370
// Address: 0047c370
// MANUAL RECONSTRUCTION
// Address Range: [[0047c370, 0047c46e]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_CKeyFramedModel_applyBias_FUN_0047c370(CKeyFramedModel *this_ptr,CVector3f *bias_offset)

#include "nocturne.h"

void __cdecl core_dmodel_cpp_CKeyFramedModel_applyBias_FUN_0047c370(CKeyFramedModel *this_ptr,CVector3f *bias_offset)

{
  int iVar2;
  double dVar4;
  double dVar5;
  double dVar6;

  dVar4 = floor
                    ((double)(bias_offset->x * (float)256 + (float)0.5));
  dVar5 = floor
                    ((double)(bias_offset->y * (float)256 + (float)0.5));
  dVar6 = floor
                    ((double)(bias_offset->z * (float)256 + (float)0.5));
  for (iVar2 = 0; iVar2 < this_ptr->frame_count * this_ptr->vertex_count; iVar2 = iVar2 + 1) {
    this_ptr->vertex_list[iVar2].x = this_ptr->vertex_list[iVar2].x + (int)ROUND(ROUND(dVar4));
    this_ptr->vertex_list[iVar2].y = this_ptr->vertex_list[iVar2].y + (int)ROUND(ROUND(dVar5));
    this_ptr->vertex_list[iVar2].z = this_ptr->vertex_list[iVar2].z + (int)ROUND(ROUND(dVar6));
  }
  core_dmodel_cpp_CKeyFramedModel_calculateFrameBounds_FUN_00478010(this_ptr);
  return;
}
