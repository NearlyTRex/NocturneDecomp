// Name: core_manpuz.cpp_CMansionPuzzleCircle_renderPanel_FUN_00509bf0
// Address: 00509bf0
// Address Range: [[00509bf0, 00509c54]]
// Convention: __cdecl
// Signature: void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_renderPanel_FUN_00509bf0(CMansionPuzzleCircle *this_ptr,int panel_index)

#include "nocturne.h"

void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_renderPanel_FUN_00509bf0(CMansionPuzzleCircle *this_ptr,int panel_index)

{
  SPanel *pSVar1;
  
  pSVar1 = this_ptr->panels + panel_index;
  if (pSVar1->exists == 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr2,&pSVar1->rotation,&pSVar1->local_position);
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
            (&this_ptr->panel_model,0.0,-1);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0048c640(g_CDemonRendererPtr2);
  return;
}
