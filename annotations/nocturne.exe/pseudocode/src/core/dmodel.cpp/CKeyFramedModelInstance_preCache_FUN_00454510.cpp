// Name: core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510
// Address: 00454510
// Address Range: [[00454510, 0045452a]]
// Convention: __cdecl
// Signature: CKeyFramedModel * __cdecl core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00454510(CKeyFramedModelInstance *this_ptr)

#include "nocturne.h"

CKeyFramedModel * __cdecl core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00454510(CKeyFramedModelInstance *this_ptr)

{
  CKeyFramedModel *pCVar1;
  
  pCVar1 = core_dmodel_cpp_loadModel_FUN_004543b0(this_ptr->model_name);
  this_ptr->model_ptr = pCVar1;
  return pCVar1;
}
