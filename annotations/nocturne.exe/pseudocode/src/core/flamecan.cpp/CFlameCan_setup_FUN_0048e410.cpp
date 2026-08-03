// Name: core_flamecan.cpp_CFlameCan_setup_FUN_0048e410
// Address: 0048e410
// Address Range: [[0048e410, 0048e54c]]
// Convention: __cdecl
// Signature: void __cdecl core_flamecan_cpp_CFlameCan_setup_FUN_0048e410(CFlameCan *this_ptr)

#include "nocturne.h"

void __cdecl core_flamecan_cpp_CFlameCan_setup_FUN_0048e410(CFlameCan *this_ptr)

{
  CVector3f *pCVar1;
  float fVar2;
  float fVar3;
  CDemonActor_vtable *pCVar4;
  CBoundingBox3D local_38;
  float afStack_20 [6];
  
  core_actor_cpp_CDemonActor_setup_FUN_00409fc0(&this_ptr->base);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00454510(&this_ptr->model);
  pCVar4 = (this_ptr->base).vtable._ub;
  (this_ptr->flame).flame_state = 0;
  (*pCVar4->getBoundingBox)(&this_ptr->base,&local_38);
  (this_ptr->flame).base.location.position.x = (this_ptr->base).location.position.x;
  (this_ptr->flame).base.location.position.y = (this_ptr->base).location.position.y;
  (this_ptr->flame).base.location.position.z = (this_ptr->base).location.position.z;
  (this_ptr->flame).base.location.area_id = (this_ptr->base).location.area_id;
  (this_ptr->flame).base.location.position.y =
       (local_38.max.y - local_38.min.y) + (this_ptr->flame).base.location.position.y;
  pCVar1 = &(this_ptr->flame).flame_size;
  if (pCVar1 != (CVector3f *)afStack_20) {
    pCVar1->x = local_38.max.x - local_38.min.x;
    (this_ptr->flame).flame_size.y = local_38.max.y - local_38.min.y;
    (this_ptr->flame).flame_size.z = local_38.max.z - local_38.min.z;
  }
  fVar2 = (this_ptr->flame).flame_size.x;
  (this_ptr->flame).which_flame = 0;
  fVar2 = fVar2 * (float)2;
  fVar3 = (this_ptr->flame).flame_size.y;
  (this_ptr->flame).globe_scalar = 0.0;
  if (fVar3 < fVar2) {
    (this_ptr->flame).flame_size.y = fVar2;
  }
  this_ptr->is_visible = 0;
  (this_ptr->base).is_transparent = 1;
  return;
}
