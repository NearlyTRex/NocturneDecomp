// Name: core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510
// Address: 00454510
// Address Range: [[00454510, 0045452a]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00454510(int param_1)

#include "nocturne.h"

void __cdecl core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00454510(int param_1)

{
  uint uVar1;
  
  uVar1 = core_dmodel_cpp_loadModel_FUN_004543b0(param_1 + 0x78);
  *(uint *)(param_1 + 0x178) = uVar1;
  return;
}
