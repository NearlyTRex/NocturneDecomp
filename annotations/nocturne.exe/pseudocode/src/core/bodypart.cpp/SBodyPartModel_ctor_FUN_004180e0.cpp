// Name: core_bodypart.cpp_SBodyPartModel_ctor_FUN_004180e0
// Address: 004180e0
// Address Range: [[004180e0, 004180f3]]
// Convention: unknown
// Signature: char * core_bodypart_cpp_SBodyPartModel_ctor_FUN_004180e0(int param_1)

#include "nocturne.h"

char * core_bodypart_cpp_SBodyPartModel_ctor_FUN_004180e0(int param_1)

{
  CKeyFramedModelInstance *pCVar1;
  
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00454490
                     ((CKeyFramedModelInstance *)(param_1 + 0x18));
  return pCVar1[-1].model_name + 0xec;
}
