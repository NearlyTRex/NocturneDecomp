// Name: core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00462580
// Address: 00462580
// Address Range: [[00462580, 0046259a]]
// Convention: __cdecl
// Signature: CKeyFramedModel * __cdecl core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00462580(CKeyFramedModelInstance *this_ptr)

#include "nocturne.h"

CKeyFramedModel * __cdecl core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00462580(CKeyFramedModelInstance *this_ptr)

{
  CKeyFramedModel *pCVar1;
  
  pCVar1 = core_dmodel_cpp_loadModel_FUN_00462420(this_ptr->model_name);
  this_ptr->model_ptr = pCVar1;
  return pCVar1;
}
