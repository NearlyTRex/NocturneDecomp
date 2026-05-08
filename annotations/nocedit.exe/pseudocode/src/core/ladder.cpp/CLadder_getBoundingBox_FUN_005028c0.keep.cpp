// Name: core_ladder.cpp_CLadder_getBoundingBox_FUN_005028c0
// Address: 005028c0
// MANUAL RECONSTRUCTION
// Address Range: [[005028c0, 005029bb]]
// Convention: __cdecl
// Signature: CBoundingBox3D * __cdecl core_ladder_cpp_CLadder_getBoundingBox_FUN_005028c0(CLadder *this_ptr,CBoundingBox3D *out_box)

#include "nocturne.h"

CBoundingBox3D * __cdecl core_ladder_cpp_CLadder_getBoundingBox_FUN_005028c0(CLadder *this_ptr,CBoundingBox3D *out_box)

{
  CKeyFramedModel *pCVar7;
  CKeyFramedModel *pCVar1;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar1;
  float fVar2;
  float fVar3;
  
  pCVar7 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(&this_ptr->model);
  if (pCVar7->poly_count < 1) {
    fVar5 = (float)0.5;
    fVar1 = (this_ptr->ladder_size).z;
    fVar2 = (this_ptr->ladder_size).x;
    fVar3 = (this_ptr->ladder_size).y;
    fVar6 = (float)0.10000000000000001;
    fVar4 = (this_ptr->ladder_size).z;
    (out_box->min).x = -(this_ptr->ladder_size).x * fVar5;
    (out_box->min).y = -0.1;
    (out_box->min).z = -fVar1 * fVar5;
    (out_box->max).x = fVar2 * fVar5;
    (out_box->max).y = fVar3 + fVar6;
    (out_box->max).z = fVar5 * fVar4;
    return out_box;
  }
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(&this_ptr->model);
  out_box->min = pCVar1->bounds_min;
  out_box->max = pCVar1->bounds_max;
  return out_box;
}
