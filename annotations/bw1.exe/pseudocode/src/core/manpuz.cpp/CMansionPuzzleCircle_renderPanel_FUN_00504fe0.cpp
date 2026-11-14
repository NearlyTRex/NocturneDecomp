// Name: core_manpuz.cpp_CMansionPuzzleCircle_renderPanel_FUN_00504fe0
// Address: 00504fe0
// Address Range: [[00504fe0, 00505050]]
// Convention: __cdecl
// Signature: void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_renderPanel_FUN_00504fe0(CMansionPuzzleCircle *this_ptr,int panel_index)

#include "nocturne.h"

void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_renderPanel_FUN_00504fe0(CMansionPuzzleCircle *this_ptr,int panel_index)

{
  SPanel *pSVar1;
  
  pSVar1 = this_ptr->panels + panel_index;
  if (pSVar1->exists == 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
            (DAT_00612560,&pSVar1->rotation,&pSVar1->local_position);
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0
            (&this_ptr->panel_model,0.0,-1);
  engine_drender_cpp_pop_FUN_004839a0();
  return;
}
