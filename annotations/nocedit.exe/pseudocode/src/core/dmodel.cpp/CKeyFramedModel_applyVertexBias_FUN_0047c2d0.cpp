// Name: core_dmodel.cpp_CKeyFramedModel_applyVertexBias_FUN_0047c2d0
// Address: 0047c2d0
// Address Range: [[0047c2d0, 0047c36b]]
// Convention: __cdecl
// Signature: void core_dmodel.cpp_CKeyFramedModel_applyVertexBias_FUN_0047c2d0(CKeyFramedModel * this_ptr, int frame_index)

#include "nocturne.h"

void __cdecl
core_dmodel_cpp_CKeyFramedModel_applyVertexBias_FUN_0047c2d0
          (CKeyFramedModel *this_ptr,int frame_index)

{
  CVector3f *pCVar1;
  int iVar2;
  int iVar3;
  float10 in_ST0;
  double dVar4;
  int in_stack_0000000c;
  
  core_dmodel_cpp_CKeyFramedModel_calculateFrameBounds_FUN_00478010(this_ptr);
  pCVar1 = this_ptr->frame_bounds;
  crt_math_c_floor_FUN_005feb90((double)in_ST0);
  dVar4 = crt_math_c_round_FUN_005fe6b0(-(double)CONCAT44 /* combine 2-byte values */(pCVar1,in_stack_0000000c * 3));
  iVar3 = 0;
  for (iVar2 = 0; iVar2 < this_ptr->frame_count * this_ptr->vertex_count; iVar2 = iVar2 + 1) {
    *(int *)(iVar3 + 4 + (int)this_ptr->vertex_list) =
         *(int *)(iVar3 + 4 + (int)this_ptr->vertex_list) + (int)ROUND(dVar4);
    iVar3 = iVar3 + 0xc;
  }
  core_dmodel_cpp_CKeyFramedModel_calculateFrameBounds_FUN_00478010(this_ptr);
  return;
}
