// Name: core_manpuz.cpp_FUN_004e6820
// Address: 004e6820
// Address Range: [[004e6820, 004e68bd]]
// Convention: __cdecl
// Signature: void __cdecl core_manpuz_cpp_FUN_004e6820(CMansionPuzzleCircle *this_ptr,int reflector_index)

#include "nocturne.h"

void __cdecl core_manpuz_cpp_FUN_004e6820(CMansionPuzzleCircle *this_ptr,int reflector_index)

{
  CKeyFramedModel *pCVar1;
  int render_flags;
  
  if ((*(int *)(0x01D182F0 + 0x1008) == 0) &&
     (this_ptr->reflectors[reflector_index].interp_factor <= 0.0)) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
            (DAT_0060b280,&this_ptr->reflectors[reflector_index].rotation,
             &this_ptr->reflectors[reflector_index].position);
  render_flags = -1;
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20
                     (&this_ptr->reflector_model);
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0
            (&this_ptr->reflector_model,
             (float)(pCVar1->frame_count + -1) * this_ptr->reflectors[reflector_index].interp_factor
             ,render_flags);
  engine_drender_cpp_pop_FUN_0046b4a0();
  return;
}
