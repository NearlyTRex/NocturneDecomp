// Name: core_ladder.cpp_CLadder_FUN_005028c0
// Address: 005028c0
// Address Range: [[005028c0, 005029bb]]
// Convention: __cdecl
// Signature: float * core_ladder.cpp_CLadder_FUN_005028c0(CLadder * this_ptr)

#include "nocturne.h"

float * __cdecl core_ladder_cpp_CLadder_FUN_005028c0(CLadder *this_ptr)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  CKeyFramedModel *pCVar7;
  float *in_stack_00000008;
  
  pCVar7 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                     ((CKeyFramedModelInstance *)&this_ptr->model);
  if (pCVar7->poly_count < 1) {
    fVar5 = (float)0.5;
    fVar1 = (this_ptr->ladder_size).z;
    fVar2 = (this_ptr->ladder_size).x;
    fVar3 = (this_ptr->ladder_size).y;
    fVar6 = (float)0.10000000000000001;
    fVar4 = (this_ptr->ladder_size).z;
    *in_stack_00000008 = -(this_ptr->ladder_size).x * fVar5;
    in_stack_00000008[1] = -0.1;
    in_stack_00000008[2] = -fVar1 * fVar5;
    in_stack_00000008[3] = fVar2 * fVar5;
    in_stack_00000008[4] = fVar3 + fVar6;
    in_stack_00000008[5] = fVar5 * fVar4;
    return in_stack_00000008;
  }
  pCVar7 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                     ((CKeyFramedModelInstance *)&this_ptr->model);
  *in_stack_00000008 = (pCVar7->bounds_min).x;
  in_stack_00000008[1] = (pCVar7->bounds_min).y;
  in_stack_00000008[2] = (pCVar7->bounds_min).z;
  in_stack_00000008[3] = (pCVar7->bounds_max).x;
  in_stack_00000008[4] = (pCVar7->bounds_max).y;
  in_stack_00000008[5] = (pCVar7->bounds_max).z;
  return in_stack_00000008;
}
