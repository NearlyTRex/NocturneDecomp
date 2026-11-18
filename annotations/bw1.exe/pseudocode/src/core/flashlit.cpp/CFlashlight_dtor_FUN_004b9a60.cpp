// Name: core_flashlit.cpp_CFlashlight_dtor_FUN_004b9a60
// Address: 004b9a60
// Address Range: [[004b9a60, 004b9aad]]
// Convention: __cdecl
// Signature: CFlashlight * __cdecl core_flashlit_cpp_CFlashlight_dtor_FUN_004b9a60(CFlashlight *this_ptr,uint flags)

#include "nocturne.h"

CFlashlight * __cdecl core_flashlit_cpp_CFlashlight_dtor_FUN_004b9a60(CFlashlight *this_ptr,uint flags)

{
  CWeapon *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CFlashlightTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  ptr = core_weapon_cpp_CWeapon_dtor_FUN_005ad5d0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return (CFlashlight *)ptr;
  }
  debugFreeChecked(ptr);
  return (CFlashlight *)ptr;
}
