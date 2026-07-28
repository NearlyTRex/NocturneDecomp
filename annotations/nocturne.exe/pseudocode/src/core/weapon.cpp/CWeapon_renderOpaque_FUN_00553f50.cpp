// Name: core_weapon.cpp_CWeapon_renderOpaque_FUN_00553f50
// Address: 00553f50
// Address Range: [[00553f50, 00553fdb]]
// Convention: __cdecl
// Signature: int __cdecl core_weapon_cpp_CWeapon_renderOpaque_FUN_00553f50(CWeapon *this_ptr)

#include "nocturne.h"

int __cdecl core_weapon_cpp_CWeapon_renderOpaque_FUN_00553f50(CWeapon *this_ptr)

{
  CDemonRenderer *this_ptr_00;
  CBoundingBox3D *this_ptr_01;
  int iVar1;
  int iVar2;
  CBoundingBox3D local_20;
  
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20(&this_ptr->base);
  this_ptr_01 = (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&local_20);
  iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(this_ptr_01);
  if (iVar1 != 0) {
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
              (&this_ptr->model,0.0,-1);
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(&this_ptr->base);
  this_ptr_00 = DAT_005ae704;
  this_ptr->is_rendered = 0;
  iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(this_ptr_00);
  if ((iVar2 == 0) && (iVar1 != 0)) {
    this_ptr->is_rendered = 1;
    return iVar1;
  }
  return iVar1;
}
