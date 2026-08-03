// Name: core_manpuz.cpp_CMansionPuzzleCircle_renderReflector_FUN_004cabf0
// Address: 004cabf0
// Address Range: [[004cabf0, 004cac8a]]
// Convention: __cdecl
// Signature: void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_renderReflector_FUN_004cabf0(CMansionPuzzleCircle *this_ptr,int reflector_index)

#include "nocturne.h"

void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_renderReflector_FUN_004cabf0(CMansionPuzzleCircle *this_ptr,int reflector_index)

{
  CKeyFramedModel *pCVar1;
  int render_flags;
  
  if ((g_CDemonMission_PTR_005baf90->is_in_editor == 0) &&
     (this_ptr->reflectors[reflector_index].interp_factor <= 0.0)) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
            (DAT_005ae704,&this_ptr->reflectors[reflector_index].rotation,
             &this_ptr->reflectors[reflector_index].position);
  render_flags = -1;
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
                     (&this_ptr->reflector_model);
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
            (&this_ptr->reflector_model,
             (float)(pCVar1->frame_count + -1) * this_ptr->reflectors[reflector_index].interp_factor
             ,render_flags);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0();
  return;
}
