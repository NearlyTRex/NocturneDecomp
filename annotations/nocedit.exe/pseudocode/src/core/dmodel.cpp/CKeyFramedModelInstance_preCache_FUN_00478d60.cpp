// Name: core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
// Address: 00478d60
// Address Range: [[00478d60, 00478d7a]]
// Convention: __cdecl
// Signature: CKeyFramedModel * __cdecl core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(CKeyFramedModelInstance *this_ptr)

#include "nocturne.h"

CKeyFramedModel * __cdecl core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(CKeyFramedModelInstance *this_ptr)

{
  CKeyFramedModel *pCVar1;
  
  pCVar1 = core_dmodel_cpp_loadModel_FUN_00478c00(this_ptr->model_name);
  this_ptr->model_ptr = pCVar1;
  return pCVar1;
}
