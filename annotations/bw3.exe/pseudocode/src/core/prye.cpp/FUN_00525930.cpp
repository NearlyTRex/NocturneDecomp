// Name: core_prye.cpp_FUN_00525930
// Address: 00525930
// Address Range: [[00525930, 005259b4]]
// Convention: unknown
// Signature: void core_prye_cpp_FUN_00525930(CPrye *param_1)

#include "nocturne.h"

void core_prye_cpp_FUN_00525930(CPrye *param_1)

{
  int iVar1;
  
  if ((param_1->base).action_pending == 0) {
    if ((param_1->base).player_input.action_state.fire == 0) {
      if ((param_1->base).player_input.action_state.action == 0) {
        return;
      }
    }
    else {
      iVar1 = core_prye_cpp_FUN_005262f0(param_1);
      if (iVar1 != 0) {
        return;
      }
      if ((param_1->base).player_input.action_state.action == 0) {
        return;
      }
    }
    iVar1 = core_hero_cpp_FUN_004d4900(param_1,0);
    if (iVar1 != 0) {
      (*(((param_1->base).base.base.vtable._uh)->_uh).doHeroAction)(&param_1->base);
      return;
    }
    iVar1 = core_prye_cpp_CPrye_tryPlaceObject_FUN_00521880(param_1);
    if (iVar1 != 0) {
      (param_1->base).player_input.action_state.fire = 0;
      return;
    }
    if (param_1->guns_drawn == 0) {
      (param_1->base).player_input.action_state.fire = 0;
      return;
    }
  }
  return;
}
