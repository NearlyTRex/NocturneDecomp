// Name: core_flashlit.cpp_CFlashlight_dtor_FUN_004cbc60
// Address: 004cbc60
// Address Range: [[004cbc60, 004cbcad]]
// Convention: __cdecl
// Signature: CFlashlight * __cdecl core_flashlit_cpp_CFlashlight_dtor_FUN_004cbc60(CFlashlight *this_ptr,uint flags)

#include "nocturne.h"

CFlashlight * __cdecl
core_flashlit_cpp_CFlashlight_dtor_FUN_004cbc60(CFlashlight *this_ptr,uint flags)

{
  CWeapon *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CFlashlightTypeInfo);
    shape_memdbg_cpp_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  ptr = core_weapon_cpp_CWeapon_dtor_FUN_005edf80(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return (CFlashlight *)ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return (CFlashlight *)ptr;
}
