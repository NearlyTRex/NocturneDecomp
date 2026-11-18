// Name: core_shotgun.cpp_CShotgun_dtor_FUN_00562360
// Address: 00562360
// Address Range: [[00562360, 005623ad]]
// Convention: __cdecl
// Signature: CShotgun * __cdecl core_shotgun_cpp_CShotgun_dtor_FUN_00562360(CShotgun *this_ptr,uint flags)

#include "nocturne.h"

CShotgun * __cdecl core_shotgun_cpp_CShotgun_dtor_FUN_00562360(CShotgun *this_ptr,uint flags)

{
  CShotgun *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CShotgunTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  ptr = (CShotgun *)core_weapon_cpp_CWeapon_dtor_FUN_005ad5d0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
