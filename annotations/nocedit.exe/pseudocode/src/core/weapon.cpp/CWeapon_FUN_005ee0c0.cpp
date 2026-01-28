// Name: core_weapon.cpp_CWeapon_FUN_005ee0c0
// Address: 005ee0c0
// Address Range: [[005ee0c0, 005ee10d]]
// Convention: __cdecl
// Signature: int * __cdecl core_weapon_cpp_CWeapon_FUN_005ee0c0(CWeapon *this_ptr)

#include "nocturne.h"

int * __cdecl core_weapon_cpp_CWeapon_FUN_005ee0c0(CWeapon *this_ptr)

{
  CVector3f *pCVar1;
  CKeyFramedModel *pCVar2;
  float *in_stack_00000008;
  
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(&this_ptr->model);
  pCVar1 = pCVar2->frame_bounds;
  *in_stack_00000008 = pCVar1->x;
  in_stack_00000008[1] = pCVar1->y;
  in_stack_00000008[2] = pCVar1->z;
  in_stack_00000008[3] = pCVar1[1].x;
  in_stack_00000008[4] = pCVar1[1].y;
  in_stack_00000008[5] = pCVar1[1].z;
  return (int *)in_stack_00000008;
}
