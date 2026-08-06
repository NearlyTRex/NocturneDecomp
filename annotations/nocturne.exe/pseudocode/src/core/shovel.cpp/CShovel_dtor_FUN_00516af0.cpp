// Name: core_shovel.cpp_CShovel_dtor_FUN_00516af0
// Address: 00516af0
// Address Range: [[00516af0, 00516b3d]]
// Convention: __cdecl
// Signature: CShovel * __cdecl core_shovel_cpp_CShovel_dtor_FUN_00516af0(CShovel *this_ptr,uint flags)

#include "nocturne.h"

CShovel * __cdecl core_shovel_cpp_CShovel_dtor_FUN_00516af0(CShovel *this_ptr,uint flags)

{
  CWeapon *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CShovelTypeInfo_005a1d30);
    shape_memdbg_cpp_free_FUN_00564486(ptr_00);
    return this_ptr;
  }
  ptr = core_weapon_cpp_CWeapon_dtor_FUN_00553ea0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return (CShovel *)ptr;
  }
  operator_delete(ptr);
  return (CShovel *)ptr;
}
