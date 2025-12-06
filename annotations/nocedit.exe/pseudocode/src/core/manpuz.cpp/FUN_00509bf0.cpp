// Name: core_manpuz.cpp_FUN_00509bf0
// Address: 00509bf0
// Address Range: [[00509bf0, 00509c4f]]
// Convention: unknown
// Signature: undefined core_manpuz.cpp_FUN_00509bf0()

#include "nocturne.h"

/* Signature: byte actors_other_manpuz.cpp_FUN_00509bf0(uint param_1, uint
   param_2) */

void core_manpuz_cpp_FUN_00509bf0(void)

{
  int *piVar1;
  int in_stack_00000004;
  int in_stack_00000008;
  
  piVar1 = (int *)(in_stack_00000004 + 0x5f0 + in_stack_00000008 * 100);
  if (*piVar1 == 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr,(CVector3i *)(piVar1 + 6),(CVector3i *)(piVar1 + 3));
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
            ((CKeyFramedModelInstance *)(in_stack_00000008 + 0x158),0.0,-1);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  return;
}
