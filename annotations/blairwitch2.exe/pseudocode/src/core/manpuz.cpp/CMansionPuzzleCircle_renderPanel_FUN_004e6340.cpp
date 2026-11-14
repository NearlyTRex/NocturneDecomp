// Name: core_manpuz.cpp_CMansionPuzzleCircle_renderPanel_FUN_004e6340
// Address: 004e6340
// Address Range: [[004e6340, 004e63b0]]
// Convention: __cdecl
// Signature: void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_renderPanel_FUN_004e6340(CMansionPuzzleCircle *this_ptr,int panel_index)

#include "nocturne.h"

void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_renderPanel_FUN_004e6340(CMansionPuzzleCircle *this_ptr,int panel_index)

{
  SPanel *pSVar1;
  
  pSVar1 = this_ptr->panels + panel_index;
  if (pSVar1->exists == 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
            (DAT_0060b280,&pSVar1->rotation,&pSVar1->local_position);
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0
            (&this_ptr->panel_model,0.0,-1);
  engine_drender_cpp_pop_FUN_0046b4a0();
  return;
}
