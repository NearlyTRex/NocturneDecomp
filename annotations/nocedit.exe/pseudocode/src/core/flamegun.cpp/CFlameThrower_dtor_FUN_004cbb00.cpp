// Name: core_flamegun.cpp_CFlameThrower_dtor_FUN_004cbb00
// Address: 004cbb00
// Address Range: [[004cbb00, 004cbb4d]]
// Convention: __cdecl
// Signature: CFlameThrower * core_flamegun.cpp_CFlameThrower_dtor_FUN_004cbb00(CFlameThrower * this_ptr, uint d1, uint d2)

#include "nocturne.h"

CFlameThrower * __cdecl
core_flamegun_cpp_CFlameThrower_dtor_FUN_004cbb00(CFlameThrower *this_ptr,uint d1,uint d2)

{
  CFlameThrower *ptr;
  void *ptr_00;
  uint unaff_EBX;
  uint unaff_retaddr;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CFlameThrowerTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  ptr = (CFlameThrower *)
        core_weapon_cpp_CWeapon_dtor_FUN_005edf80(&this_ptr->base,1,unaff_EBX,unaff_retaddr);
  if ((d1 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}
