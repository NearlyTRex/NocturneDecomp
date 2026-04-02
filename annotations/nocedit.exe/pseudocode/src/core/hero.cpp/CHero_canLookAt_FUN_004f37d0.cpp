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
    if (((((((this_ptr->player_input).action_state.walk != 0) ||
           ((this_ptr->player_input).action_state.backup != 0)) ||
          ((this_ptr->player_input).action_state.fire != 0)) ||
         (((this_ptr->player_input).action_state.use_item != 0 ||
          ((this_ptr->player_input).action_state.light != 0)))) ||
        (((this_ptr->player_input).action_state.draw != 0 ||
         (((this_ptr->player_input).action_state.jump != 0 ||
          ((float)0.10000000000000001 < ABS((this_ptr->player_input).strafe_speed))))))) ||
       (((float)0.10000000000000001 < ABS((this_ptr->player_input).turn_speed) ||
        (((float)0.10000000000000001 < ABS((this_ptr->player_input).look_up_down_speed) ||
         ((this_ptr->base).is_on_ground == 0)))))) {
      return 1;
    }
  }
  return 0;
}
