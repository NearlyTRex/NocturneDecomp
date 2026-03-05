// Name: core_gabriela.cpp_CGabriella_canFireWeapon_FUN_004d5f70
// Address: 004d5f70
// Address Range: [[004d5f70, 004d5fd2]]
// Convention: __cdecl
// Signature: int __cdecl core_gabriela_cpp_CGabriella_canFireWeapon_FUN_004d5f70(CGabriella *this_ptr)

#include "nocturne.h"

int __cdecl core_gabriela_cpp_CGabriella_canFireWeapon_FUN_004d5f70(CGabriella *this_ptr)

{
  CWeapon *this_ptr_00;
  int iVar1;
  
  if (((((this_ptr->weapon_state_flags & 2) != 0) && (1.0 <= this_ptr->draw_blend)) &&
      (1.0 <= this_ptr->aim_weight)) &&
     ((this_ptr->fire_cooldown_timer <= 0.0 &&
      (this_ptr_00 = (this_ptr->base).inventory.selected_weapon,
      iVar1 = (*(((this_ptr_00->base).vtable._uw)->_uw).isReadyToFire)(this_ptr_00), iVar1 != 0))))
  {
    return 1;
  }
  return 0;
}
