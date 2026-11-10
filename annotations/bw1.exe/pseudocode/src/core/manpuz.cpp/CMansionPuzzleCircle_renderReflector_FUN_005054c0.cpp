// Name: core_manpuz.cpp_CMansionPuzzleCircle_renderReflector_FUN_005054c0
// Address: 005054c0
// Address Range: [[005054c0, 0050555d]]
// Convention: __cdecl
// Signature: void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_renderReflector_FUN_005054c0(CMansionPuzzleCircle *this_ptr,int reflector_index)

#include "nocturne.h"

void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_renderReflector_FUN_005054c0(CMansionPuzzleCircle *this_ptr,int reflector_index)

{
  CKeyFramedModel *pCVar1;
  int render_flags;
  
  if ((*(int *)(0x01D2C900 + 0x1008) == 0) &&
     (this_ptr->reflectors[reflector_index].interp_factor <= 0.0)) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
            (DAT_00612560,&this_ptr->reflectors[reflector_index].rotation,
             &this_ptr->reflectors[reflector_index].position);
  render_flags = -1;
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900
                     (&this_ptr->reflector_model);
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0
            (&this_ptr->reflector_model,
             (float)(pCVar1->frame_count + -1) * this_ptr->reflectors[reflector_index].interp_factor
             ,render_flags);
  engine_matrix_c_pop_FUN_004839a0();
  return;
}
