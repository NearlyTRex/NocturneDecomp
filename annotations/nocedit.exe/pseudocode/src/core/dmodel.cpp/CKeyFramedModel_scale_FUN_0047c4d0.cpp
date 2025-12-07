// Name: core_dmodel.cpp_CKeyFramedModel_scale_FUN_0047c4d0
// Address: 0047c4d0
// Address Range: [[0047c4d0, 0047c5e4]]
// Convention: __cdecl
// Signature: void core_dmodel.cpp_CKeyFramedModel_scale_FUN_0047c4d0(CKeyFramedModel * this_ptr, CVector3f * scale_factors)

#include "nocturne.h"

void __cdecl
core_dmodel_cpp_CKeyFramedModel_scale_FUN_0047c4d0
          (CKeyFramedModel *this_ptr,CVector3f *scale_factors)

{
  int iVar1;
  CVector3i **ppCVar2;
  int iVar3;
  int iVar4;
  float10 in_ST0;
  double dVar5;
  double dVar6;
  
  iVar3 = 0;
  for (iVar4 = 0; iVar1 = this_ptr->vertex_count, iVar4 < this_ptr->frame_count * iVar1;
      iVar4 = iVar4 + 1) {
    dVar5 = crt_math_c_floor_FUN_005feb90((double)in_ST0);
    dVar6 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(iVar1,scale_factors));
    ppCVar2 = this_ptr->vertex_list;
    *(int *)((int)ppCVar2 + iVar3) = (int)ROUND(dVar6);
    dVar5 = crt_math_c_floor_FUN_005feb90(dVar5);
    dVar6 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(ppCVar2,scale_factors));
    iVar1 = (int)this_ptr->vertex_list + iVar3;
    *(int *)(iVar1 + 4) = (int)ROUND(dVar6);
    dVar5 = crt_math_c_floor_FUN_005feb90(dVar5);
    in_ST0 = (float10)dVar5;
    dVar5 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(iVar1,scale_factors));
    *(int *)((int)this_ptr->vertex_list + iVar3 + 8) = (int)ROUND(dVar5);
    iVar3 = iVar3 + 0xc;
  }
  core_dmodel_cpp_CKeyFramedModel_calculateFrameBounds_FUN_00478010(this_ptr);
  return;
}
