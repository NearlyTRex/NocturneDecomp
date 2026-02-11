// Name: core_ladder.cpp_CLadder_getBoundingBox_FUN_005028c0
// Address: 005028c0
// Address Range: [[005028c0, 005029bb]]
// Convention: __cdecl
// Signature: CBoundingBox3D * __cdecl core_ladder_cpp_CLadder_getBoundingBox_FUN_005028c0(CLadder *this_ptr,CBoundingBox3D *out_box)

#include "nocturne.h"

CBoundingBox3D * __cdecl
core_ladder_cpp_CLadder_getBoundingBox_FUN_005028c0(CLadder *this_ptr,CBoundingBox3D *out_box)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  CKeyFramedModel *pCVar7;
  
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
  pCVar7 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(&this_ptr->model);
  (out_box->min).x = (pCVar7->bounds_min).x;
  (out_box->min).y = (pCVar7->bounds_min).y;
  (out_box->min).z = (pCVar7->bounds_min).z;
  (out_box->max).x = (pCVar7->bounds_max).x;
  (out_box->max).y = (pCVar7->bounds_max).y;
  (out_box->max).z = (pCVar7->bounds_max).z;
  return out_box;
}
