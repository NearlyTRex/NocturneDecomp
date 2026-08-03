// Name: core_backgnd.cpp_CBackgroundActor_renderBackground_FUN_0040ff80
// Address: 0040ff80
// Address Range: [[0040ff80, 0040ffde]]
// Convention: __cdecl
// Signature: void __cdecl core_backgnd_cpp_CBackgroundActor_renderBackground_FUN_0040ff80(CBackgroundActor *this_ptr,int layer_flag)

#include "nocturne.h"

void __cdecl core_backgnd_cpp_CBackgroundActor_renderBackground_FUN_0040ff80(CBackgroundActor *this_ptr,int layer_flag)

{
  CBoundingBox3D *this_ptr_00;
  int iVar1;
  CBoundingBox3D local_1c;
  
  if (layer_flag == 0) {
    return;
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20(&this_ptr->base);
  this_ptr_00 = (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&local_1c);
  iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(this_ptr_00);
  if (iVar1 != 0) {
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
              (&this_ptr->model,0.0,-1);
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(&this_ptr->base);
  return;
}
