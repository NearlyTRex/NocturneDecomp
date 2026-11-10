// Name: core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0
// Address: 004688e0
// Address Range: [[004688e0, 004688fa]]
// Convention: __cdecl
// Signature: CKeyFramedModel * __cdecl core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_004688e0(CKeyFramedModelInstance *this_ptr)

#include "nocturne.h"

CKeyFramedModel * __cdecl core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_004688e0(CKeyFramedModelInstance *this_ptr)

{
  CKeyFramedModel *pCVar1;
  
  pCVar1 = (CKeyFramedModel *)core_dmodel_cpp_loadModel_FUN_00468780(this_ptr->model_name);
  this_ptr->model_ptr = pCVar1;
  return pCVar1;
}
