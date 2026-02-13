// Name: core_hero.cpp_CHero_canLookAt_FUN_004f37d0
// Address: 004f37d0
// Address Range: [[004f37d0, 004f388b]]
// Convention: __cdecl
// Signature: int __cdecl core_hero_cpp_CHero_canLookAt_FUN_004f37d0(CHero *this_ptr)

#include "nocturne.h"

int __cdecl core_hero_cpp_CHero_canLookAt_FUN_004f37d0(CHero *this_ptr)

{
  int iVar1;
  
  iVar1 = (*(((this_ptr->base).base.vtable._uc)->_uc).getDeathState)(&this_ptr->base);
  if (iVar1 < 2) {
    if (iVar1 == 1) {
      return 1;
    }
    if (((((((this_ptr->player_control).action_states[0] != 0) ||
           ((this_ptr->player_control).action_states[1] != 0)) ||
          ((this_ptr->player_control).action_states[3] != 0)) ||
         (((this_ptr->player_control).action_states[4] != 0 ||
          ((this_ptr->player_control).action_states[5] != 0)))) ||
        (((this_ptr->player_control).action_states[6] != 0 ||
         (((this_ptr->player_control).action_states[7] != 0 ||
          ((float)0.10000000000000001 < ABS((this_ptr->player_control).strafe_speed))))))) ||
       (((float)0.10000000000000001 < ABS((this_ptr->player_control).turn_speed) ||
        (((float)0.10000000000000001 < ABS((this_ptr->player_control).look_up_down_speed) ||
         ((this_ptr->base).is_on_ground == 0)))))) {
      return 1;
    }
  }
  return 0;
}
