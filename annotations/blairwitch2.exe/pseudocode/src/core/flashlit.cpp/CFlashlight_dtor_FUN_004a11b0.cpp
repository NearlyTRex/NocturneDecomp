// Name: core_flashlit.cpp_CFlashlight_dtor_FUN_004a11b0
// Address: 004a11b0
// Address Range: [[004a11b0, 004a11fd]]
// Convention: __cdecl
// Signature: CFlashlight * __cdecl core_flashlit_cpp_CFlashlight_dtor_FUN_004a11b0(CFlashlight *this_ptr,uint flags)

#include "nocturne.h"

CFlashlight * __cdecl core_flashlit_cpp_CFlashlight_dtor_FUN_004a11b0(CFlashlight *this_ptr,uint flags)

{
  CWeapon *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CFlashlightTypeInfo);
    FUN_005b7fce(ptr);
    return this_ptr;
  }
  pCVar1 = core_weapon_cpp_CWeapon_dtor_FUN_00589ae0((CWeapon *)this_ptr,1);
  if ((flags & 2) == 0) {
    return (CFlashlight *)pCVar1;
  }
  FUN_005b7fdc(pCVar1);
  return (CFlashlight *)pCVar1;
}
