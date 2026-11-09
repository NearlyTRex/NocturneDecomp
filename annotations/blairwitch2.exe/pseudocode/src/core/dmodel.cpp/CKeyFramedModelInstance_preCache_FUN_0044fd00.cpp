// Name: core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00
// Address: 0044fd00
// Address Range: [[0044fd00, 0044fd1a]]
// Convention: __cdecl
// Signature: CKeyFramedModel * __cdecl core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00(CKeyFramedModelInstance *this_ptr)

#include "nocturne.h"

CKeyFramedModel * __cdecl core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00(CKeyFramedModelInstance *this_ptr)

{
  CKeyFramedModel *pCVar1;
  
  pCVar1 = (CKeyFramedModel *)core_dmodel_cpp_loadModel_FUN_0044fba0(&this_ptr->field_0x78);
  *(CKeyFramedModel **)&this_ptr->field_0x178 = pCVar1;
  return pCVar1;
}
