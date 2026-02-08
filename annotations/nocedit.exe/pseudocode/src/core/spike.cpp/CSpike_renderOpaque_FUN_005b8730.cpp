// Name: core_spike.cpp_CSpike_renderOpaque_FUN_005b8730
// Address: 005b8730
// Address Range: [[005b8730, 005b8795]]
// Convention: __cdecl
// Signature: int __cdecl core_spike_cpp_CSpike_renderOpaque_FUN_005b8730(CSpike *this_ptr)

#include "nocturne.h"

int __cdecl core_spike_cpp_CSpike_renderOpaque_FUN_005b8730(CSpike *this_ptr)

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
