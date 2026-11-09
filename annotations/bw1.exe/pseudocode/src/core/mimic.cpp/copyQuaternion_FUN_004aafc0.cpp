// Name: core_mimic.cpp_copyQuaternion_FUN_004aafc0
// Address: 004aafc0
// Address Range: [[004aafc0, 004aafde]]
// Convention: __cdecl
// Signature: void __cdecl core_mimic_cpp_copyQuaternion_FUN_004aafc0(undefined4 *param_1,undefined4 *param_2)

#include "nocturne.h"

void __cdecl core_mimic_cpp_copyQuaternion_FUN_004aafc0(uint *param_1,uint *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  return;
}
