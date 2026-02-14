// Name: core_pendulum.cpp_CPendulum_renderOpaque_FUN_0054a2f0
// Address: 0054a2f0
// Address Range: [[0054a2f0, 0054a355]]
// Convention: __cdecl
// Signature: int __cdecl core_pendulum_cpp_CPendulum_renderOpaque_FUN_0054a2f0(CPendulum *this_ptr)

#include "nocturne.h"

int __cdecl core_pendulum_cpp_CPendulum_renderOpaque_FUN_0054a2f0(CPendulum *this_ptr)

{
  CBoundingBox3D *this_ptr_00;
  int iVar1;
  CBoundingBox3D CStack_20;
  
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(&this_ptr->base);
  this_ptr_00 = (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&CStack_20);
  iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_00);
  if (iVar1 == 0) {
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&this_ptr->base);
    return 0;
  }
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20(&this_ptr->model,0.0,-1);
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&this_ptr->base);
  return iVar1;
}
