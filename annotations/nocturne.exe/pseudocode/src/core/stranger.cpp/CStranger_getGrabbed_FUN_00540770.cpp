// Name: core_stranger.cpp_CStranger_getGrabbed_FUN_00540770
// Address: 00540770
// Address Range: [[00540770, 00540812]]
// Convention: unknown
// Signature: int core_stranger_cpp_CStranger_getGrabbed_FUN_00540770(CHero *param_1,CDemonActor *param_2,int param_3)

#include "nocturne.h"

int core_stranger_cpp_CStranger_getGrabbed_FUN_00540770(CHero *param_1,CDemonActor *param_2,int param_3)

{
  int iVar1;
  
  if (((param_1->object_to_pick_up == (CDemonActor *)0x0) && (param_1->door_to_open == (CDoor *)0x0)
      ) && ((iVar1 = param_1[1].base.base.health, iVar1 == 0 || (iVar1 == 3)))) {
    iVar1 = core_hero_cpp_CHero_getGrabbed_FUN_004b4c70(param_1,param_2,param_3);
    if (iVar1 != 0) {
      if ((CDemonActor *)param_1[1].base.base.orient_matrix.m[2].y !=
          (param_1->base).carry_hands[0].carry_actor) {
        (*(((param_1->base).base.vtable._uc)->_uc).getDeathState)(&param_1->base);
      }
      if ((CDemonActor *)param_1[1].base.base.orient_matrix.m[2].y !=
          (param_1->base).carry_hands[1].carry_actor) {
        (*(((param_1->base).base.vtable._uc)->_uc).getDeathState)(&param_1->base);
      }
      param_1[1].base.base.collision_disabled = 0;
    }
    return iVar1;
  }
  return 0;
}
