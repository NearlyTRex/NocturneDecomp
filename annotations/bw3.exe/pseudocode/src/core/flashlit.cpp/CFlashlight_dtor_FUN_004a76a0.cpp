// Name: core_flashlit.cpp_CFlashlight_dtor_FUN_004a76a0
// Address: 004a76a0
// Address Range: [[004a76a0, 004a76ed]]
// Convention: __cdecl
// Signature: CFlashlight * __cdecl core_flashlit_cpp_CFlashlight_dtor_FUN_004a76a0(CFlashlight *this_ptr,uint flags)

#include "nocturne.h"

CFlashlight * __cdecl core_flashlit_cpp_CFlashlight_dtor_FUN_004a76a0(CFlashlight *this_ptr,uint flags)

{
  CWeapon *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CFlashlightTypeInfo);
    FUN_005a30b6(ptr);
    return this_ptr;
  }
  pCVar1 = core_weapon_cpp_CWeapon_dtor_FUN_0057aed0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return (CFlashlight *)pCVar1;
  }
  FUN_005a30c4(pCVar1);
  return (CFlashlight *)pCVar1;
}
