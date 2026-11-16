// Name: core_elephant.cpp_CElephantGun_dtor_FUN_00487930
// Address: 00487930
// Address Range: [[00487930, 0048797d]]
// Convention: __cdecl
// Signature: CElephantGun * __cdecl core_elephant_cpp_CElephantGun_dtor_FUN_00487930(CElephantGun *this_ptr,uint flags)

#include "nocturne.h"

CElephantGun * __cdecl core_elephant_cpp_CElephantGun_dtor_FUN_00487930(CElephantGun *this_ptr,uint flags)

{
  CElephantGun *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CElephantGunTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  ptr = (CElephantGun *)core_weapon_cpp_CWeapon_dtor_FUN_0057aed0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
