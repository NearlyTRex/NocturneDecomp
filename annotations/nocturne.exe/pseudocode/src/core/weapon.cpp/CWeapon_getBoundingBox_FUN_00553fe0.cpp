// Name: core_weapon.cpp_CWeapon_getBoundingBox_FUN_00553fe0
// Address: 00553fe0
// Address Range: [[00553fe0, 0055402d]]
// Convention: __cdecl
// Signature: CBoundingBox3D * __cdecl core_weapon_cpp_CWeapon_getBoundingBox_FUN_00553fe0(CWeapon *this_ptr,CBoundingBox3D *out_box)

#include "nocturne.h"

CBoundingBox3D * __cdecl core_weapon_cpp_CWeapon_getBoundingBox_FUN_00553fe0(CWeapon *this_ptr,CBoundingBox3D *out_box)

{
  CBoundingBox3D *pCVar1;
  CKeyFramedModel *pCVar2;
  
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(&this_ptr->model);
  pCVar1 = pCVar2->frame_bounds;
  (out_box->min).x = (pCVar1->min).x;
  (out_box->min).y = (pCVar1->min).y;
  (out_box->min).z = (pCVar1->min).z;
  (out_box->max).x = (pCVar1->max).x;
  (out_box->max).y = (pCVar1->max).y;
  (out_box->max).z = (pCVar1->max).z;
  return out_box;
}
