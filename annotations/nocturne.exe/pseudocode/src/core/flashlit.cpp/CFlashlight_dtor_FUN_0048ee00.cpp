// Name: core_flashlit.cpp_CFlashlight_dtor_FUN_0048ee00
// Address: 0048ee00
// Address Range: [[0048ee00, 0048ee4d]]
// Convention: __cdecl
// Signature: CFlashlight * __cdecl core_flashlit_cpp_CFlashlight_dtor_FUN_0048ee00(CFlashlight *this_ptr,uint flags)

#include "nocturne.h"

CFlashlight * __cdecl core_flashlit_cpp_CFlashlight_dtor_FUN_0048ee00(CFlashlight *this_ptr,uint flags)

{
  CWeapon *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CFlashlightTypeInfo_0059d9f0);
    shape_memdbg_cpp_free_FUN_00564486(ptr);
    return this_ptr;
  }
  pCVar1 = core_weapon_cpp_CWeapon_dtor_FUN_00553ea0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return (CFlashlight *)pCVar1;
  }
  FUN_00564494(pCVar1);
  return (CFlashlight *)pCVar1;
}
