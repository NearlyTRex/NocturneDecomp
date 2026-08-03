// Name: core_stranger.cpp_CStranger_getGrabbed_FUN_00540770
// Address: 00540770
// Address Range: [[00540770, 00540812]]
// Convention: __cdecl
// Signature: int __cdecl core_stranger_cpp_CStranger_getGrabbed_FUN_00540770(CStranger *this_ptr,CDemonActor *grabber,int grab_type)

#include "nocturne.h"

int __cdecl core_stranger_cpp_CStranger_getGrabbed_FUN_00540770(CStranger *this_ptr,CDemonActor *grabber,int grab_type)

{
  int iVar1;
  
  if ((((this_ptr->base).object_to_pick_up == (CDemonActor *)0x0) &&
      ((this_ptr->base).door_to_open == (CDoor *)0x0)) &&
     ((this_ptr->action_pending == 0 || (this_ptr->action_pending == 3)))) {
    iVar1 = core_hero_cpp_CHero_getGrabbed_FUN_004b4c70(&this_ptr->base,grabber,grab_type);
    if (iVar1 != 0) {
      if (this_ptr->weapon != (CWeapon *)(this_ptr->base).base.carry_hands[0].carry_actor) {
        (*(((this_ptr->base).base.base.vtable._uc)->_uc).dropCarriedObject)
                  ((CCharacter *)this_ptr,0,(CVector3f *)0x0);
      }
      if (this_ptr->weapon != (CWeapon *)(this_ptr->base).base.carry_hands[1].carry_actor) {
        (*(((this_ptr->base).base.base.vtable._uc)->_uc).dropCarriedObject)
                  ((CCharacter *)this_ptr,1,(CVector3f *)0x0);
      }
      this_ptr->grab_timer = 0.0;
    }
    return iVar1;
  }
  return 0;
}
