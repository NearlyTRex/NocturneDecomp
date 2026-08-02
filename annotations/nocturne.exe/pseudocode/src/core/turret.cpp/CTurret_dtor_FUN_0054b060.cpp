// Name: core_turret.cpp_CTurret_dtor_FUN_0054b060
// Address: 0054b060
// Address Range: [[0054b060, 0054b0ad]]
// Convention: __cdecl
// Signature: CTurret * __cdecl core_turret_cpp_CTurret_dtor_FUN_0054b060(CTurret *this_ptr,uint flags)

#include "nocturne.h"

CTurret * __cdecl core_turret_cpp_CTurret_dtor_FUN_0054b060(CTurret *this_ptr,uint flags)

{
  CTurret *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CTurretTypeInfo_005a38b0);
    shape_memdbg_cpp_free_FUN_00564486(ptr);
    return this_ptr;
  }
  pCVar1 = (CTurret *)core_weapon_cpp_CWeapon_dtor_FUN_00553ea0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_00564494(pCVar1);
  return pCVar1;
}
