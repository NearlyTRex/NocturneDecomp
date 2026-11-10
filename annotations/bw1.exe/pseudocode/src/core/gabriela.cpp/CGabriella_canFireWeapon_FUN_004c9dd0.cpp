// Name: core_gabriela.cpp_CGabriella_canFireWeapon_FUN_004c9dd0
// Address: 004c9dd0
// Address Range: [[004c9dd0, 004c9e32]]
// Convention: __cdecl
// Signature: int __cdecl core_gabriela_cpp_CGabriella_canFireWeapon_FUN_004c9dd0(CGabriella *this_ptr)

#include "nocturne.h"

int __cdecl core_gabriela_cpp_CGabriella_canFireWeapon_FUN_004c9dd0(CGabriella *this_ptr)

{
  int iVar1;
  
  if (((((this_ptr->weapon_state_flags & 2) != 0) && (1.0 <= this_ptr->draw_blend)) &&
      (1.0 <= this_ptr->aim_weight)) &&
     ((this_ptr->fire_cooldown_timer <= 0.0 &&
      (iVar1 = (**(code **)(*(int *)(*(int *)&this_ptr->field_0x1fe20 + 0x154) + 0xe8))
                         (*(int *)&this_ptr->field_0x1fe20), iVar1 != 0)))) {
    return 1;
  }
  return 0;
}
