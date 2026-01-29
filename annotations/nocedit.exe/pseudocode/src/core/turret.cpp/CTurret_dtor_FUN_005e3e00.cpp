// Name: core_turret.cpp_CTurret_dtor_FUN_005e3e00
// Address: 005e3e00
// Address Range: [[005e3e00, 005e3e4d]]
// Convention: __cdecl
// Signature: CTurret * __cdecl core_turret_cpp_CTurret_dtor_FUN_005e3e00(CTurret *this_ptr,uint d1,uint d2)

#include "nocturne.h"

CTurret * __cdecl core_turret_cpp_CTurret_dtor_FUN_005e3e00(CTurret *this_ptr,uint d1,uint d2)

{
  CTurret *ptr;
  void *ptr_00;
  uint unaff_EBX;
  uint unaff_retaddr;
  
  if ((d1 & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CTurretTypeInfo);
    shape_memdbg_cpp_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  ptr = (CTurret *)
        core_weapon_cpp_CWeapon_dtor_FUN_005edf80(&this_ptr->base,1,unaff_EBX,unaff_retaddr);
  if ((d1 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}
