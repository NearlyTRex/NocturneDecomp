// Name: core_weapon.cpp_CWeapon_getMuzzlePoint_FUN_00554590
// Address: 00554590
// Address Range: [[00554590, 005545fd]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_weapon_cpp_CWeapon_getMuzzlePoint_FUN_00554590(CWeapon *this_ptr,CVector3f *out_point)

#include "nocturne.h"

CVector3f * __cdecl core_weapon_cpp_CWeapon_getMuzzlePoint_FUN_00554590(CWeapon *this_ptr,CVector3f *out_point)

{
  float fVar1;
  float fVar2;
  CKeyFramedModel *pCVar3;
  
  pCVar3 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(&this_ptr->model);
  fVar1 = (pCVar3->bounds).max.y;
  fVar2 = (pCVar3->bounds).max.z;
  out_point->x = 0.0;
  out_point->y = fVar1;
  out_point->z = fVar2;
  return out_point;
}
