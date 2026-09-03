// Name: core_manpuz.cpp_CMansionPuzzleCircle_FUN_004ca710
// Address: 004ca710
// Address Range: [[004ca710, 004ca780]]
// Convention: __cdecl
// Signature: void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_FUN_004ca710(CMansionPuzzleCircle *this_ptr,int panel_index)

#include "nocturne.h"

void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_FUN_004ca710(CMansionPuzzleCircle *this_ptr,int panel_index)

{
  SPanel *pSVar1;
  
  pSVar1 = this_ptr->panels + panel_index;
  if (pSVar1->exists == 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
            (g_CDemonRenderer_PTR_005ae704,&pSVar1->rotation,&pSVar1->local_position);
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
            (&this_ptr->panel_model,0.0,-1);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0(g_CDemonRenderer_PTR_005ae704);
  return;
}
