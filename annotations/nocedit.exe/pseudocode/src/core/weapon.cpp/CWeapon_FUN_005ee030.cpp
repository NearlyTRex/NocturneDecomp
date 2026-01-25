// Name: core_weapon.cpp_CWeapon_FUN_005ee030
// Address: 005ee030
// Address Range: [[005ee030, 005ee0b7]]
// Convention: __cdecl
// Signature: int core_weapon.cpp_CWeapon_FUN_005ee030(CWeapon * this_ptr)

#include "nocturne.h"

int __cdecl core_weapon_cpp_CWeapon_FUN_005ee030(CWeapon *this_ptr)

{
  CDemonRenderer *this_ptr_00;
  CBoundingBox3D *this_ptr_01;
  int iVar1;
  int iVar2;
  
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(&this_ptr->base_actor);
  this_ptr_01 = (*((this_ptr->base_actor).vtable._ub)->getBoundingBox)
                          (&this_ptr->base_actor,(CBoundingBox3D *)&stack0xffffffe0);
  iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_01);
  if (iVar1 != 0) {
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
              (&this_ptr->model,0.0,-1);
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&this_ptr->base_actor);
  this_ptr_00 = g_CDemonRendererPtr2;
  this_ptr->field13_0x574 = 0;
  iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(this_ptr_00);
  if ((iVar2 == 0) && (iVar1 != 0)) {
    this_ptr->field13_0x574 = 1;
    return iVar1;
  }
  return iVar1;
}
