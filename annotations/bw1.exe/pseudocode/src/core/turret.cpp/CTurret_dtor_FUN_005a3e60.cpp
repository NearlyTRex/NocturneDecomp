// Name: core_turret.cpp_CTurret_dtor_FUN_005a3e60
// Address: 005a3e60
// Address Range: [[005a3e60, 005a3ead]]
// Convention: __cdecl
// Signature: CTurret * __cdecl core_turret_cpp_CTurret_dtor_FUN_005a3e60(CTurret *this_ptr,uint flags)

#include "nocturne.h"

CTurret * __cdecl core_turret_cpp_CTurret_dtor_FUN_005a3e60(CTurret *this_ptr,uint flags)

{
  CTurret *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CTurretTypeInfo);
    FUN_005c0336(ptr);
    return this_ptr;
  }
  pCVar1 = (CTurret *)core_weapon_cpp_CWeapon_dtor_FUN_005ad5d0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005c0344(pCVar1);
  return pCVar1;
}
