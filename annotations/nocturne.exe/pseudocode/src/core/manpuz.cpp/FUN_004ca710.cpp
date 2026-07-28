// Name: core_manpuz.cpp_FUN_004ca710
// Address: 004ca710
// Address Range: [[004ca710, 004ca780]]
// Convention: unknown
// Signature: void core_manpuz_cpp_FUN_004ca710(int param_1,int param_2)

#include "nocturne.h"

void core_manpuz_cpp_FUN_004ca710(int param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x5e8 + param_2 * 100);
  if (*piVar1 == 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
            (DAT_005ae704,(CVector3f *)(piVar1 + 6),(CVector3f *)(piVar1 + 3));
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
            ((CKeyFramedModelInstance *)(param_1 + 0x150),0.0,-1);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0();
  return;
}
