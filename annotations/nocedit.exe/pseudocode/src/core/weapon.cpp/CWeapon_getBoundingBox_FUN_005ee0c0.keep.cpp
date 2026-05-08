// Name: core_weapon.cpp_CWeapon_getBoundingBox_FUN_005ee0c0
// Address: 005ee0c0
// MANUAL RECONSTRUCTION
// Address Range: [[005ee0c0, 005ee10d]]
// Convention: __cdecl
// Signature: CBoundingBox3D * __cdecl core_weapon_cpp_CWeapon_getBoundingBox_FUN_005ee0c0(CWeapon *this_ptr,CBoundingBox3D *out_box)

#include "nocturne.h"

CBoundingBox3D * __cdecl core_weapon_cpp_CWeapon_getBoundingBox_FUN_005ee0c0(CWeapon *this_ptr,CBoundingBox3D *out_box)

{
  CBoundingBox3D *pCVar1;
  CKeyFramedModel *pCVar2;
  
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(&this_ptr->model);
  pCVar1 = pCVar2->frame_bounds;
  *out_box = *pCVar1;
  return out_box;
}
