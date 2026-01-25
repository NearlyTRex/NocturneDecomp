// Name: core_door.cpp_CDoor_renderBackground_FUN_004809e0
// Address: 004809e0
// Address Range: [[004809e0, 00480a4d]]
// Convention: __cdecl
// Signature: void core_door.cpp_CDoor_renderBackground_FUN_004809e0(CDoor * this_ptr, int layer_flag)

#include "nocturne.h"

void __cdecl core_door_cpp_CDoor_renderBackground_FUN_004809e0(CDoor *this_ptr,int layer_flag)

{
  CBoundingBox3D *this_ptr_00;
  int iVar1;
  
  if ((layer_flag != 0) && (1 < this_ptr->one_shot)) {
    this_ptr->one_shot = 3;
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(&this_ptr->base_actor);
    this_ptr_00 = (*((this_ptr->base_actor).vtable._ub)->getBoundingBox)
                            (&this_ptr->base_actor,(CBoundingBox3D *)&stack0xffffffe4);
    iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_00);
    if (iVar1 != 0) {
      core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
                (&this_ptr->model,0.0,-1);
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&this_ptr->base_actor);
    return;
  }
  return;
}
