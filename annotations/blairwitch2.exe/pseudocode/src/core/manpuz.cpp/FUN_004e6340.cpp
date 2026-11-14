// Name: core_manpuz.cpp_FUN_004e6340
// Address: 004e6340
// Address Range: [[004e6340, 004e63b0]]
// Convention: unknown
// Signature: void core_manpuz_cpp_FUN_004e6340(int param_1,int param_2)

#include "nocturne.h"

void core_manpuz_cpp_FUN_004e6340(int param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x74c + param_2 * 100);
  if (*piVar1 == 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
            (DAT_0060b280,(CVector3f *)(piVar1 + 6),(CVector3f *)(piVar1 + 3));
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0
            ((CKeyFramedModelInstance *)(param_1 + 0x2b4),0.0,-1);
  engine_drender_cpp_pop_FUN_0046b4a0();
  return;
}
