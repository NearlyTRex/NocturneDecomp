// Name: core_gabriela.cpp_CGabriella_canFireWeapon_FUN_004b0e80
// Address: 004b0e80
// Address Range: [[004b0e80, 004b0ee3]]
// Convention: __cdecl
// Signature: int __cdecl core_gabriela_cpp_CGabriella_canFireWeapon_FUN_004b0e80(CGabriella *this_ptr)

#include "nocturne.h"

int __cdecl core_gabriela_cpp_CGabriella_canFireWeapon_FUN_004b0e80(CGabriella *this_ptr)

{
  int iVar1;
  
  if (((((this_ptr->weapon_state_flags & 2) != 0) && (1.0 <= this_ptr->draw_blend)) &&
      (1.0 <= this_ptr->aim_weight)) &&
     ((this_ptr->fire_cooldown_timer <= 0.0 &&
      (iVar1 = (**(code **)(*(int *)(*(int *)(&this_ptr->field_0x2498c +
                                             *(int *)&this_ptr->field_0x247e4 * 4) + 0x2b0) + 0xf0))
                         (*(int *)(&this_ptr->field_0x2498c + *(int *)&this_ptr->field_0x247e4 * 4))
      , iVar1 != 0)))) {
    return 1;
  }
  return 0;
}
