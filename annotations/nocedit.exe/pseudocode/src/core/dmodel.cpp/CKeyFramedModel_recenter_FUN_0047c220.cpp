// Name: core_dmodel.cpp_CKeyFramedModel_recenter_FUN_0047c220
// Address: 0047c220
// Address Range: [[0047c220, 0047c2c1]]
// Convention: __cdecl
// Signature: void core_dmodel.cpp_CKeyFramedModel_recenter_FUN_0047c220(CKeyFramedModel * this_ptr, int frame_index)

#include "nocturne.h"

void __cdecl
core_dmodel_cpp_CKeyFramedModel_recenter_FUN_0047c220(CKeyFramedModel *this_ptr,int frame_index)

{
  CVector3f *pCVar1;
  CVector3f local_10;
  
  core_dmodel_cpp_CKeyFramedModel_calculateFrameBounds_FUN_00478010(this_ptr);
  pCVar1 = this_ptr->frame_bounds + frame_index * 2;
  local_10.x = -((pCVar1->x + pCVar1[1].x) * 0.5f);
  local_10.y = -((pCVar1->y + pCVar1[1].y) * 0.5f);
  local_10.z = -((pCVar1->z + pCVar1[1].z) * 0.5f);
  core_dmodel_cpp_CKeyFramedModel_applyBias_FUN_0047c370(this_ptr,&local_10);
  return;
}
