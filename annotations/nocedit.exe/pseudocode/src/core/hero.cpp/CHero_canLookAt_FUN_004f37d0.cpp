// Name: core_hero.cpp_CHero_canLookAt_FUN_004f37d0
// Address: 004f37d0
// Address Range: [[004f37d0, 004f388b]]
// Convention: __cdecl
// Signature: int __cdecl core_hero_cpp_CHero_canLookAt_FUN_004f37d0(CHero *this_ptr)

#include "nocturne.h"

int __cdecl core_hero_cpp_CHero_canLookAt_FUN_004f37d0(CHero *this_ptr)

{
  EDeathState EVar1;
  
  EVar1 = (*(((this_ptr->base).base.vtable._uc)->_uc).getDeathState)(&this_ptr->base);
  if ((int)EVar1 < 2) {
    if (EVar1 == DEATH_STATE_DYING) {
      return 1;
    }
    if (((((((this_ptr->player_control).action_bindings.walk_key != 0) ||
           ((this_ptr->player_control).action_bindings.backup_key != 0)) ||
          ((this_ptr->player_control).action_bindings.fire_key != 0)) ||
         (((this_ptr->player_control).action_bindings.use_item_key != 0 ||
          ((this_ptr->player_control).action_bindings.light_key != 0)))) ||
        (((this_ptr->player_control).action_bindings.draw_key != 0 ||
         (((this_ptr->player_control).action_bindings.jump_key != 0 ||
          ((float)0.10000000000000001 < ABS((this_ptr->player_control).strafe_speed))))))) ||
       (((float)0.10000000000000001 < ABS((this_ptr->player_control).turn_speed) ||
        (((float)0.10000000000000001 < ABS((this_ptr->player_control).look_up_down_speed) ||
         ((this_ptr->base).is_on_ground == 0)))))) {
      return 1;
    }
  }
  return 0;
}
