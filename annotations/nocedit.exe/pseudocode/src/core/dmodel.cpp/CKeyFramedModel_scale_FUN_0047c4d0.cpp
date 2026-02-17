// Name: core_dmodel.cpp_CKeyFramedModel_scale_FUN_0047c4d0
// Address: 0047c4d0
// Address Range: [[0047c4d0, 0047c5e4]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_CKeyFramedModel_scale_FUN_0047c4d0(CKeyFramedModel *this_ptr,CVector3f *scale_factors)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl core_dmodel_cpp_CKeyFramedModel_scale_FUN_0047c4d0(CKeyFramedModel *this_ptr,CVector3f *scale_factors)

{
  int iVar1;
  int iVar2;
  double dVar3;
  
  iVar1 = 0;
  for (iVar2 = 0; iVar2 < this_ptr->frame_count * this_ptr->vertex_count; iVar2 = iVar2 + 1) {
    dVar3 = floor
                      ((double)((float)*(int *)(iVar1 + (int)this_ptr->vertex_list) *
                                scale_factors->x + (float)0.5));
    *(int *)((int)this_ptr->vertex_list + iVar1) = (int)ROUND(ROUND(dVar3));
    dVar3 = floor
                      ((double)((float)*(int *)(iVar1 + 4 + (int)this_ptr->vertex_list) *
                                scale_factors->y + (float)0.5));
    *(int *)((int)this_ptr->vertex_list + iVar1 + 4) = (int)ROUND(ROUND(dVar3));
    dVar3 = floor
                      ((double)((float)*(int *)(iVar1 + 8 + (int)this_ptr->vertex_list) *
                                scale_factors->z + (float)0.5));
    *(int *)((int)this_ptr->vertex_list + iVar1 + 8) = (int)ROUND(ROUND(dVar3));
    iVar1 = iVar1 + 0xc;
  }
  core_dmodel_cpp_CKeyFramedModel_calculateFrameBounds_FUN_00478010(this_ptr);
  return;
}
