// Name: core_cross.cpp_CCross_dtor_FUN_005a6b30
// Address: 005a6b30
// Address Range: [[005a6b30, 005a6b87]]
// Convention: __cdecl
// Signature: CCross * __cdecl core_cross_cpp_CCross_dtor_FUN_005a6b30(CCross *this_ptr,uint flags)

#include "nocturne.h"

CCross * __cdecl core_cross_cpp_CCross_dtor_FUN_005a6b30(CCross *this_ptr,uint flags)

{
  CCross *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CCrossTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  (this_ptr->base).base.base.vtable._ub = &g_CCrossVTable._ub;
  ptr = (CCross *)core_weapon_cpp_CWeapon_dtor_FUN_00589ae0((CWeapon *)this_ptr,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
