// Name: core_prye.cpp_CPrye_getGrabbed_FUN_00526e30
// Address: 00526e30
// Address Range: [[00526e30, 00526f4f]]
// Convention: __cdecl
// Signature: int __cdecl core_prye_cpp_CPrye_getGrabbed_FUN_00526e30(CPrye *this_ptr,CDemonActor *grabber,int grab_type)

#include "nocturne.h"

int __cdecl core_prye_cpp_CPrye_getGrabbed_FUN_00526e30(CPrye *this_ptr,CDemonActor *grabber,int grab_type)

{
  CWeapon *actor_ptr;
  int iVar1;
  CDemonActor *pCVar2;
  
  if (grabber != (CDemonActor *)0x0) {
    engine_console_cpp_CConsole_printf_FUN_00441ff0
              (g_CConsolePtr,"@@CPrye::startGettingGrabbed by %s, type %d\n" + 2);
    core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
              (&(this_ptr->base).base.model.base);
    engine_console_cpp_CConsole_printf_FUN_00441ff0(g_CConsolePtr,"  current motion is %s\n");
    if (((((this_ptr->base).object_to_pick_up == (CDemonActor *)0x0) &&
         ((this_ptr->base).door_to_open == (CDoor *)0x0)) &&
        ((this_ptr->base).lever_to_pull == (CLever *)0x0)) &&
       (((((iVar1 = (this_ptr->base).action_pending, iVar1 == 0 || (iVar1 == 3)) ||
          ((iVar1 == 7 || ((iVar1 == 10 || (iVar1 == 0xb)))))) || (iVar1 == 0xc)) || (iVar1 == 0xd))
       )) {
      iVar1 = core_hero_cpp_CHero_getGrabbed_FUN_004d2af0(&this_ptr->base,grabber,grab_type);
      if (iVar1 != 0) {
        actor_ptr = (CWeapon *)(this_ptr->base).base.carry_hands[0].carry_actor;
        if ((actor_ptr != this_ptr->weapon) &&
           (pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c840
                               ((CDemonActor *)actor_ptr,DAT_007e1a50), pCVar2 == (CDemonActor *)0x0
           )) {
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
  }
  return 0;
}
