// Name: core_manpuz.cpp_CMansionPuzzleCircle_FUN_00509bf0
// Address: 00509bf0
// Address Range: [[00509bf0, 00509c4f]]
// Convention: __cdecl
// Signature: void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_FUN_00509bf0(CMansionPuzzleCircle *this_ptr)

#include "nocturne.h"

void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_FUN_00509bf0(CMansionPuzzleCircle *this_ptr)

{
  SPanel *pSVar1;
  int in_stack_00000008;
  
  pSVar1 = this_ptr->panels + in_stack_00000008;
  if (pSVar1->exists == 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr2,(CVector3i *)&pSVar1->rotation,
             (CVector3i *)&pSVar1->local_position);
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
            (&this_ptr->panel_model,0.0,-1);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  return;
}
