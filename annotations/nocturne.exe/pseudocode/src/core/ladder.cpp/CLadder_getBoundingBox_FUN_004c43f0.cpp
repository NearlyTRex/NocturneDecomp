// Name: core_ladder.cpp_CLadder_getBoundingBox_FUN_004c43f0
// Address: 004c43f0
// Address Range: [[004c43f0, 004c44eb]]
// Convention: __cdecl
// Signature: CBoundingBox3D * __cdecl core_ladder_cpp_CLadder_getBoundingBox_FUN_004c43f0(CLadder *this_ptr,CBoundingBox3D *out_box)

#include "nocturne.h"

CBoundingBox3D * __cdecl core_ladder_cpp_CLadder_getBoundingBox_FUN_004c43f0(CLadder *this_ptr,CBoundingBox3D *out_box)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  CKeyFramedModel *pCVar7;
  
  pCVar7 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(&this_ptr->model);
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
  pCVar7 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(&this_ptr->model);
  (out_box->min).x = (pCVar7->bounds).min.x;
  (out_box->min).y = (pCVar7->bounds).min.y;
  (out_box->min).z = (pCVar7->bounds).min.z;
  (out_box->max).x = (pCVar7->bounds).max.x;
  (out_box->max).y = (pCVar7->bounds).max.y;
  (out_box->max).z = (pCVar7->bounds).max.z;
  return out_box;
}
