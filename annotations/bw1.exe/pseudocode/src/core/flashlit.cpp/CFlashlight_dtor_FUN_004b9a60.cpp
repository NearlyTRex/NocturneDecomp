// Name: core_flashlit.cpp_CFlashlight_dtor_FUN_004b9a60
// Address: 004b9a60
// Address Range: [[004b9a60, 004b9aad]]
// Convention: __cdecl
// Signature: CFlashlight * __cdecl core_flashlit_cpp_CFlashlight_dtor_FUN_004b9a60(CFlashlight *this_ptr,uint flags)

#include "nocturne.h"

CFlashlight * __cdecl core_flashlit_cpp_CFlashlight_dtor_FUN_004b9a60(CFlashlight *this_ptr,uint flags)

{
  CWeapon *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CFlashlightTypeInfo);
    FUN_005c0336(ptr);
    return this_ptr;
  }
  pCVar1 = core_weapon_cpp_CWeapon_dtor_FUN_005ad5d0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return (CFlashlight *)pCVar1;
  }
  FUN_005c0344(pCVar1);
  return (CFlashlight *)pCVar1;
}
