// Name: core_stranger.cpp_CStranger_FUN_005c66a0
// Address: 005c66a0
// Address Range: [[005c66a0, 005c6742]]
// Convention: __cdecl
// Signature: int __cdecl core_stranger_cpp_CStranger_FUN_005c66a0(CStranger *this_ptr)

#include "nocturne.h"

int __cdecl core_stranger_cpp_CStranger_FUN_005c66a0(CStranger *this_ptr)

{
  int iVar1;
  
  if ((((this_ptr->base).object_to_pick_up == (CDemonActor *)0x0) &&
      ((this_ptr->base).door_to_open == (CDemonActor *)0x0)) &&
     ((this_ptr->action_pending == 0 || (this_ptr->action_pending == 3)))) {
    iVar1 = core_hero_cpp_CHero_FUN_004f28d0(&this_ptr->base);
    if (iVar1 != 0) {
      if (*(CDemonActor **)(this_ptr->unk5 + 8) != (this_ptr->base).base.carry_hands[0].carry_actor)
      {
        (*(((this_ptr->base).base.base.vtable._uc)->_uc).cfunc21)();
      }
      if (*(CDemonActor **)(this_ptr->unk5 + 8) != (this_ptr->base).base.carry_hands[1].carry_actor)
      {
        (*(((this_ptr->base).base.base.vtable._uc)->_uc).cfunc21)();
      }
      this_ptr->unk6[0x98] = '\0';
      this_ptr->unk6[0x99] = '\0';
      this_ptr->unk6[0x9a] = '\0';
      this_ptr->unk6[0x9b] = '\0';
    }
    return iVar1;
  }
  return 0;
}
