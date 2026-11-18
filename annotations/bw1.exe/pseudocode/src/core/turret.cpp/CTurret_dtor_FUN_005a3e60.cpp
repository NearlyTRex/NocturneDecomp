// Name: core_turret.cpp_CTurret_dtor_FUN_005a3e60
// Address: 005a3e60
// Address Range: [[005a3e60, 005a3ead]]
// Convention: __cdecl
// Signature: CTurret * __cdecl core_turret_cpp_CTurret_dtor_FUN_005a3e60(CTurret *this_ptr,uint flags)

#include "nocturne.h"

CTurret * __cdecl core_turret_cpp_CTurret_dtor_FUN_005a3e60(CTurret *this_ptr,uint flags)

{
  CTurret *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CTurretTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  ptr = (CTurret *)core_weapon_cpp_CWeapon_dtor_FUN_005ad5d0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
