// Name: core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
// Address: 00454530
// Address Range: [[00454530, 00454576]]
// Convention: __cdecl
// Signature: undefined4 __cdecl core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(int param_1)

#include "nocturne.h"

uint __cdecl core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(int param_1)

{
  if (*(int *)(param_1 + 0x178) != 0) {
    return *(uint *)(param_1 + 0x178);
  }
  PTR_01cc4800 = "..\\core\\dmodel.cpp";
  INT_01cc4804 = 0x52d;
  core_main_c_FUN_004c8440("Tried to do something with model %s, but modelPtr not set.  (CKeyFramedModelInstance::preCache not called.",param_1 + 0x78);
  return *(uint *)(param_1 + 0x178);
}
