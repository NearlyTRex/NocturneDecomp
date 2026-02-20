// Name: core_manpuz.cpp_CMansionPuzzleCircle_FUN_0050a1f0
// Address: 0050a1f0
// Address Range: [[0050a1f0, 0050a281]]
// Convention: __cdecl
// Signature: void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_FUN_0050a1f0(CMansionPuzzleCircle *this_ptr)

#include "nocturne.h"

void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_FUN_0050a1f0(CMansionPuzzleCircle *this_ptr)

{
  CKeyFramedModel *pCVar1;
  int in_stack_00000008;
  int render_flags;
  
  if ((g_CDemonMissionPtr->is_in_editor == 0) &&
     (this_ptr->reflectors[in_stack_00000008].interp_factor <= 0.0)) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr2,(CVector3i *)&this_ptr->reflectors[in_stack_00000008].rotation,
             (CVector3i *)&this_ptr->reflectors[in_stack_00000008].position);
  render_flags = -1;
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                     (&this_ptr->reflector_model);
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
            (&this_ptr->reflector_model,
             (float)(pCVar1->frame_count + -1) *
             this_ptr->reflectors[in_stack_00000008].interp_factor,render_flags);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  return;
}
