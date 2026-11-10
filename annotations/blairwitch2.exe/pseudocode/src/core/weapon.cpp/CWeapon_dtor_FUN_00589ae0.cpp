// Name: core_weapon.cpp_CWeapon_dtor_FUN_00589ae0
// Address: 00589ae0
// Address Range: [[00589ae0, 00589b4e]]
// Convention: __cdecl
// Signature: CWeapon * __cdecl core_weapon_cpp_CWeapon_dtor_FUN_00589ae0(CWeapon *this_ptr,uint flags)

#include "nocturne.h"

CWeapon * __cdecl core_weapon_cpp_CWeapon_dtor_FUN_00589ae0(CWeapon *this_ptr,uint flags)

{
  CBox *pCVar1;
  CWeapon *pCVar2;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CWeaponTypeInfo);
    FUN_005b7fce(ptr);
    return this_ptr;
  }
  (this_ptr->base).vtable._ub = &g_CWeaponVTable._ub;
  pCVar1 = core_box_cpp_CBox_dtor_FUN_005b1c70(&this_ptr->physics_box,0);
  pCVar2 = (CWeapon *)
           core_actor_cpp_CDemonActor_dtor_FUN_00408930
                     ((CDemonActor *)&pCVar1[-2].linear_velocity_local,1);
  if ((flags & 2) == 0) {
    return pCVar2;
  }
  FUN_005b7fdc(pCVar2);
  return pCVar2;
}
