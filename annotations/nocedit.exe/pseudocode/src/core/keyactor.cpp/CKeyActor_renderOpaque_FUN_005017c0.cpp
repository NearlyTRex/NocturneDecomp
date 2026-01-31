// Name: core_keyactor.cpp_CKeyActor_renderOpaque_FUN_005017c0
// Address: 005017c0
// Address Range: [[005017c0, 00501825]]
// Convention: __cdecl
// Signature: int __cdecl core_keyactor_cpp_CKeyActor_renderOpaque_FUN_005017c0(CKeyActor *this_ptr)

#include "nocturne.h"

int __cdecl core_keyactor_cpp_CKeyActor_renderOpaque_FUN_005017c0(CKeyActor *this_ptr)

{
  CBoundingBox3D *this_ptr_00;
  int iVar1;
  
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(&this_ptr->base);
  this_ptr_00 = (*((this_ptr->base).vtable._ub)->getBoundingBox)
                          (&this_ptr->base,(CBoundingBox3D *)&stack0xffffffe0);
  iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_00);
  if (iVar1 == 0) {
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&this_ptr->base);
    return 0;
  }
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20(&this_ptr->model,0.0,-1);
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&this_ptr->base);
  return iVar1;
}
