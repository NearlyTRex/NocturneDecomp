// Name: core_dmodel.cpp_CKeyFramedModel_applyVertexBias_FUN_0047c2d0
// Address: 0047c2d0
// MANUAL RECONSTRUCTION
// Address Range: [[0047c2d0, 0047c36b]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_CKeyFramedModel_applyVertexBias_FUN_0047c2d0(CKeyFramedModel *this_ptr,int frame_index)

#include "nocturne.h"

void __cdecl core_dmodel_cpp_CKeyFramedModel_applyVertexBias_FUN_0047c2d0(CKeyFramedModel *this_ptr,int frame_index)

{
  int iVar1;
  double dVar3;

  core_dmodel_cpp_CKeyFramedModel_calculateFrameBounds_FUN_00478010(this_ptr);
  dVar3 = floor
                    ((double)(this_ptr->frame_bounds[frame_index].min.y * (float)256 +
                             (float)0.5));
  for (iVar1 = 0; iVar1 < this_ptr->frame_count * this_ptr->vertex_count; iVar1 = iVar1 + 1) {
    this_ptr->vertex_list[iVar1].y =
         this_ptr->vertex_list[iVar1].y + (int)ROUND(ROUND(-dVar3));
  }
  core_dmodel_cpp_CKeyFramedModel_calculateFrameBounds_FUN_00478010(this_ptr);
  return;
}
