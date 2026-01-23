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
  int iVar1;
  int iVar2;
  CKeyFramedModel *model_ptr;
  double dVar3;
  
  core_dmodel_cpp_CKeyFramedModel_calculateFrameBounds_FUN_00478010(this_ptr);
  dVar3 = crt_math_c_floor_FUN_005feb90
                    ((double)(this_ptr->frame_bounds[frame_index * 2].y * (float)256 +
                             (float)0.5));
  dVar3 = crt_math_c_round_FUN_005fe6b0(-dVar3);
  iVar2 = 0;
  for (iVar1 = 0; iVar1 < model_ptr->frame_count * model_ptr->vertex_count; iVar1 = iVar1 + 1) {
    *(int *)(iVar2 + 4 + (int)model_ptr->vertex_list) =
         *(int *)(iVar2 + 4 + (int)model_ptr->vertex_list) + (int)ROUND(dVar3);
    iVar2 = iVar2 + 0xc;
  }
  core_dmodel_cpp_CKeyFramedModel_calculateFrameBounds_FUN_00478010(model_ptr);
  return;
}
