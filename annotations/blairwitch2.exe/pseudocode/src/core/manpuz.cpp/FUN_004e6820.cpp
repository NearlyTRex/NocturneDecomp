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
     (*(float *)&this_ptr->reflectors[reflector_index].field_0x18 <= 0.0)) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
            (DAT_0060b280,(CVector3f *)&this_ptr->reflectors[reflector_index].field_0x28,
             (CVector3f *)&this_ptr->reflectors[reflector_index].field_0x1c);
  render_flags = -1;
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20
                     (&this_ptr->reflector_model);
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0
            (&this_ptr->reflector_model,
             (float)(pCVar1->frame_count + -1) *
             *(float *)&this_ptr->reflectors[reflector_index].field_0x18,render_flags);
  engine_matrix_c_pop_FUN_0046b4a0();
  return;
}
