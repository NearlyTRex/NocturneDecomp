// Name: core_dmodel.cpp_CKeyFramedModel_scale_FUN_0047c4d0
// Address: 0047c4d0
// Address Range: [[0047c4d0, 0047c5e4]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_CKeyFramedModel_scale_FUN_0047c4d0(CKeyFramedModel *this_ptr,CVector3f *scale_factors)

#include "nocturne.h"

void __cdecl core_dmodel_cpp_CKeyFramedModel_scale_FUN_0047c4d0(CKeyFramedModel *this_ptr,CVector3f *scale_factors)

{
  int iVar1;
  int extraout_EBX;
  int extraout_EBX_00;
  int extraout_EBX_01;
  int iVar2;
  double dVar3;
  
  iVar1 = 0;
  for (iVar2 = 0; iVar2 < this_ptr->frame_count * this_ptr->vertex_count; iVar2 = iVar2 + 1) {
    dVar3 = floor
                      ((double)((float)*(int *)(iVar1 + (int)this_ptr->vertex_list) *
                                scale_factors->x + (float)0.5));
    dVar3 = round(dVar3);
    *(int *)((int)this_ptr->vertex_list + extraout_EBX) = (int)ROUND(dVar3);
    dVar3 = floor
                      ((double)((float)*(int *)(extraout_EBX + 4 + (int)this_ptr->vertex_list) *
                                scale_factors->y + (float)0.5));
    dVar3 = round(dVar3);
    *(int *)((int)this_ptr->vertex_list + extraout_EBX_00 + 4) = (int)ROUND(dVar3);
    dVar3 = floor
                      ((double)((float)*(int *)(extraout_EBX_00 + 8 + (int)this_ptr->vertex_list) *
                                scale_factors->z + (float)0.5));
    dVar3 = round(dVar3);
    iVar1 = extraout_EBX_01 + 0xc;
    *(int *)((int)this_ptr->vertex_list + extraout_EBX_01 + 8) = (int)ROUND(dVar3);
  }
  core_dmodel_cpp_CKeyFramedModel_calculateFrameBounds_FUN_00478010(this_ptr);
  return;
}
