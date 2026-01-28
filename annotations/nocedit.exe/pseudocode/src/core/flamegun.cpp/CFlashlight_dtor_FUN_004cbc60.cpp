// Name: core_flamegun.cpp_CFlashlight_dtor_FUN_004cbc60
// Address: 004cbc60
// Address Range: [[004cbc60, 004cbcad]]
// Convention: __cdecl
// Signature: CFlashlight * __cdecl core_flamegun_cpp_CFlashlight_dtor_FUN_004cbc60(CFlashlight *this_ptr,uint d1,uint d2)

#include "nocturne.h"

CFlashlight * __cdecl
core_flamegun_cpp_CFlashlight_dtor_FUN_004cbc60(CFlashlight *this_ptr,uint d1,uint d2)

{
  CWeapon *ptr;
  void *ptr_00;
  uint unaff_EBX;
  uint unaff_retaddr;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CFlashlightTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  ptr = core_weapon_cpp_CWeapon_dtor_FUN_005edf80(&this_ptr->base,1,unaff_EBX,unaff_retaddr);
  if ((d1 & 2) == 0) {
    return (CFlashlight *)ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return (CFlashlight *)ptr;
}
