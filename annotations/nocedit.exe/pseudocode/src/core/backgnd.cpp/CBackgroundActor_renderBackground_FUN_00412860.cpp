// Name: core_backgnd.cpp_CBackgroundActor_renderBackground_FUN_00412860
// Address: 00412860
// Address Range: [[00412860, 004128c5]]
// Convention: __cdecl
// Signature: void __cdecl core_backgnd_cpp_CBackgroundActor_renderBackground_FUN_00412860(CBackgroundActor *this_ptr,int layer_flag)

#include "nocturne.h"

void __cdecl core_backgnd_cpp_CBackgroundActor_renderBackground_FUN_00412860(CBackgroundActor *this_ptr,int layer_flag)

{
  CBoundingBox3D *this_ptr_00;
  int iVar1;
  CBoundingBox3D CStack_1c;
  
  if ((g_CDemonMissionPtr->is_in_editor == 0) && (layer_flag != 0)) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(&this_ptr->base);
    this_ptr_00 = (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&CStack_1c);
    iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_00);
    if (iVar1 != 0) {
      core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
                (&this_ptr->model,0.0,-1);
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&this_ptr->base);
    return;
  }
  return;
}
