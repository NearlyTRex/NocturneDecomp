// Name: core_flintlck.cpp_CFlintlock_dtor_FUN_004af630
// Address: 004af630
// Address Range: [[004af630, 004af67d]]
// Convention: __cdecl
// Signature: CFlintlock * __cdecl core_flintlck_cpp_CFlintlock_dtor_FUN_004af630(CFlintlock *this_ptr,uint flags)

#include "nocturne.h"

CFlintlock * __cdecl core_flintlck_cpp_CFlintlock_dtor_FUN_004af630(CFlintlock *this_ptr,uint flags)

{
  CWeapon *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CFlintlockTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  ptr = core_weapon_cpp_CWeapon_dtor_FUN_0057aed0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return (CFlintlock *)ptr;
  }
  debugFreeChecked(ptr);
  return (CFlintlock *)ptr;
}
