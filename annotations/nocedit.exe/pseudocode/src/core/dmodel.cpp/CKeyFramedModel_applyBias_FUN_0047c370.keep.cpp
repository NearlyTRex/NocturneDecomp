// Name: core_dmodel.cpp_CKeyFramedModel_applyBias_FUN_0047c370
// Address: 0047c370
// MANUAL RECONSTRUCTION
// Address Range: [[0047c370, 0047c46e]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_CKeyFramedModel_applyBias_FUN_0047c370(CKeyFramedModel *this_ptr,CVector3f *bias_offset)

#include "nocturne.h"

void __cdecl core_dmodel_cpp_CKeyFramedModel_applyBias_FUN_0047c370(CKeyFramedModel *this_ptr,CVector3f *bias_offset)

{
  int *piVar2;
  int iVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  int *piVar1;
  
  dVar4 = floor
                    ((double)(bias_offset->x * (float)256 + (float)0.5));
  dVar5 = floor
                    ((double)(bias_offset->y * (float)256 + (float)0.5));
  dVar6 = floor
                    ((double)(bias_offset->z * (float)256 + (float)0.5));
  iVar3 = 0;
  for (iVar2 = 0; iVar2 < this_ptr->frame_count * this_ptr->vertex_count; iVar2 = iVar2 + 1) {
    piVar1 = (int *)((int)&this_ptr->vertex_list->x + iVar3);
    *piVar1 = *piVar1 + (int)ROUND(ROUND(dVar4));
    piVar2 = (int *)((int)&this_ptr->vertex_list->y + iVar3);
    *piVar2 = *piVar2 + (int)ROUND(ROUND(dVar5));
    *(int *)((int)&this_ptr->vertex_list->z + iVar3) =
         *(int *)((int)&this_ptr->vertex_list->z + iVar3) + (int)ROUND(ROUND(dVar6));
    iVar3 = iVar3 + 0xc;
  }
  core_dmodel_cpp_CKeyFramedModel_calculateFrameBounds_FUN_00478010(this_ptr);
  return;
}
