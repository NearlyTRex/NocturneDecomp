// Name: core_manpuz.cpp_FUN_00504fe0
// Address: 00504fe0
// Address Range: [[00504fe0, 00505050]]
// Convention: unknown
// Signature: void core_manpuz_cpp_FUN_00504fe0(int param_1,int param_2)

#include "nocturne.h"

void core_manpuz_cpp_FUN_00504fe0(int param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x5f0 + param_2 * 100);
  if (*piVar1 == 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
            (DAT_00612560,(CVector3f *)(piVar1 + 6),(CVector3f *)(piVar1 + 3));
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0
            ((CKeyFramedModelInstance *)(param_1 + 0x158),0.0,-1);
  engine_matrix_c_pop_FUN_004839a0();
  return;
}
