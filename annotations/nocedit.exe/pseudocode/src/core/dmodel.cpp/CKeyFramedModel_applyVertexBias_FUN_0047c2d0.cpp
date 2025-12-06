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
  uint extraout_EAX;
  int extraout_ECX;
  int iVar1;
  uint extraout_EDX;
  int iVar2;
  float10 in_ST0;
  float10 fVar3;
  double dVar4;
  
  core_dmodel_cpp_CKeyFramedModel_calculateFrameBounds_FUN_00478010(this_ptr);
  crt_math_c_floor_FUN_005feb90((double)in_ST0);
  fVar3 = -(float10)(double)CONCAT44 /* combine 2-byte values */(extraout_EDX,extraout_EAX);
  dVar4 = crt_math_c_round_FUN_005fe6b0((double)(ulonglong)extraout_EAX);
  iVar2 = (int)((ulonglong)dVar4 >> 0x20);
  for (iVar1 = extraout_ECX; iVar1 < this_ptr->frame_count * this_ptr->vertex_count;
      iVar1 = iVar1 + 1) {
    *(int *)(iVar2 + 4 + (int)this_ptr->vertex_list) =
         *(int *)(iVar2 + 4 + (int)this_ptr->vertex_list) + (int)ROUND(fVar3);
    iVar2 = iVar2 + 0xc;
  }
  core_dmodel_cpp_CKeyFramedModel_calculateFrameBounds_FUN_00478010(this_ptr);
  return;
}
