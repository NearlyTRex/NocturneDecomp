// Name: core_turret.cpp_CTurret_dtor_FUN_00580210
// Address: 00580210
// Address Range: [[00580210, 0058025d]]
// Convention: __cdecl
// Signature: CTurret * __cdecl core_turret_cpp_CTurret_dtor_FUN_00580210(CTurret *this_ptr,uint flags)

#include "nocturne.h"

CTurret * __cdecl core_turret_cpp_CTurret_dtor_FUN_00580210(CTurret *this_ptr,uint flags)

{
  CTurret *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CTurretTypeInfo);
    FUN_005b7fce(ptr);
    return this_ptr;
  }
  pCVar1 = (CTurret *)core_weapon_cpp_CWeapon_dtor_FUN_00589ae0((CWeapon *)this_ptr,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005b7fdc(pCVar1);
  return pCVar1;
}
