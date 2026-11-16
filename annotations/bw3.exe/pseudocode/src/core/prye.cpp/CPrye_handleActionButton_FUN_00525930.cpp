// Name: core_prye.cpp_CPrye_handleActionButton_FUN_00525930
// Address: 00525930
// Address Range: [[00525930, 005259b4]]
// Convention: __cdecl
// Signature: void __cdecl core_prye_cpp_CPrye_handleActionButton_FUN_00525930(CPrye *this_ptr)

#include "nocturne.h"

void __cdecl core_prye_cpp_CPrye_handleActionButton_FUN_00525930(CPrye *this_ptr)

{
  int iVar1;
  
  if ((this_ptr->base).action_pending == 0) {
    if ((this_ptr->base).player_input.action_state.fire == 0) {
      if ((this_ptr->base).player_input.action_state.action == 0) {
        return;
      }
    }
    else {
      iVar1 = core_prye_cpp_CPrye_tryThrowDynamite_FUN_005262f0(this_ptr);
      if (iVar1 != 0) {
        return;
      }
      if ((this_ptr->base).player_input.action_state.action == 0) {
        return;
      }
    }
    iVar1 = core_hero_cpp_CHero_findHeroAction_FUN_004d4900(&this_ptr->base,0);
    if (iVar1 != 0) {
      (*(((this_ptr->base).base.base.vtable._uh)->_uh).doHeroAction)(&this_ptr->base);
      return;
    }
    iVar1 = core_prye_cpp_CPrye_tryPlaceObject_FUN_00521880(this_ptr);
    if (iVar1 != 0) {
      (this_ptr->base).player_input.action_state.fire = 0;
      return;
    }
    if (this_ptr->guns_drawn == 0) {
      (this_ptr->base).player_input.action_state.fire = 0;
      return;
    }
  }
  return;
}
