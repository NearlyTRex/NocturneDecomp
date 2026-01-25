// Name: core_manpuz.cpp_CMansionPuzzleCircle_FUN_00509bf0
// Address: 00509bf0
// Address Range: [[00509bf0, 00509c4f]]
// Convention: __cdecl
// Signature: void core_manpuz.cpp_CMansionPuzzleCircle_FUN_00509bf0(CMansionPuzzleCircle * this_ptr)

#include "nocturne.h"

void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_FUN_00509bf0(CMansionPuzzleCircle *this_ptr)

{
  char *pcVar1;
  int in_stack_00000008;
  
  pcVar1 = this_ptr->field6_0x5f4 + in_stack_00000008 * 100 + -4;
  if (*(int *)pcVar1 == 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr2,(CVector3i *)(pcVar1 + 0x18),(CVector3i *)(pcVar1 + 0xc));
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
            ((CKeyFramedModelInstance *)this_ptr->field1_0x158,0.0,-1);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  return;
}
