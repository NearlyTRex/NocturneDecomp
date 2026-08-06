// Name: core_shotgun.cpp_CShotgun_dtor_FUN_00516960
// Address: 00516960
// Address Range: [[00516960, 005169ad]]
// Convention: __cdecl
// Signature: CShotgun * __cdecl core_shotgun_cpp_CShotgun_dtor_FUN_00516960(CShotgun *this_ptr,uint flags)

#include "nocturne.h"

CShotgun * __cdecl core_shotgun_cpp_CShotgun_dtor_FUN_00516960(CShotgun *this_ptr,uint flags)

{
  CShotgun *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CShotgunTypeInfo_005a1bf0);
    shape_memdbg_cpp_free_FUN_00564486(ptr_00);
    return this_ptr;
  }
  ptr = (CShotgun *)core_weapon_cpp_CWeapon_dtor_FUN_00553ea0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  operator_delete(ptr);
  return ptr;
}
