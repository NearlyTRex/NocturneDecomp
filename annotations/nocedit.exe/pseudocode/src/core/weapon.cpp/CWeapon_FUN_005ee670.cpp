// Name: core_weapon.cpp_CWeapon_FUN_005ee670
// Address: 005ee670
// Address Range: [[005ee670, 005ee6dd]]
// Convention: __cdecl
// Signature: int * __cdecl core_weapon_cpp_CWeapon_FUN_005ee670(CWeapon *this_ptr)

#include "nocturne.h"

int * __cdecl core_weapon_cpp_CWeapon_FUN_005ee670(CWeapon *this_ptr)

{
  float fVar1;
  float fVar2;
  CKeyFramedModel *pCVar3;
  int *in_stack_00000008;
  
  pCVar3 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(&this_ptr->model);
  fVar1 = (pCVar3->bounds_max).y;
  fVar2 = (pCVar3->bounds_max).z;
  *in_stack_00000008 = 0;
  in_stack_00000008[1] = (int)fVar1;
  in_stack_00000008[2] = (int)fVar2;
  return in_stack_00000008;
}
