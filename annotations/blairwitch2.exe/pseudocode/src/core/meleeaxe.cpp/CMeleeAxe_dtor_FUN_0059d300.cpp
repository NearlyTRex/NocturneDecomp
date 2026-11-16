// Name: core_meleeaxe.cpp_CMeleeAxe_dtor_FUN_0059d300
// Address: 0059d300
// Address Range: [[0059d300, 0059d34d]]
// Convention: __cdecl
// Signature: CMeleeAxe * __cdecl core_meleeaxe_cpp_CMeleeAxe_dtor_FUN_0059d300(CMeleeAxe *this_ptr,uint flags)

#include "nocturne.h"

CMeleeAxe * __cdecl core_meleeaxe_cpp_CMeleeAxe_dtor_FUN_0059d300(CMeleeAxe *this_ptr,uint flags)

{
  CWeapon *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CMeleeAxeTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  ptr = core_weapon_cpp_CWeapon_dtor_FUN_00589ae0((CWeapon *)this_ptr,1);
  if ((flags & 2) == 0) {
    return (CMeleeAxe *)ptr;
  }
  debugFreeChecked(ptr);
  return (CMeleeAxe *)ptr;
}
