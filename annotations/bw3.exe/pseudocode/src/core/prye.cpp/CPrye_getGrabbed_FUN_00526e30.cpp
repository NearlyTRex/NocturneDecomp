// Name: core_prye.cpp_CPrye_getGrabbed_FUN_00526e30
// Address: 00526e30
// Address Range: [[00526e30, 00526f4f]]
// Convention: __cdecl
// Signature: int __cdecl core_prye_cpp_CPrye_getGrabbed_FUN_00526e30(CPrye *this_ptr,CDemonActor *grabber,int grab_type)

#include "nocturne.h"

int __cdecl core_prye_cpp_CPrye_getGrabbed_FUN_00526e30(CPrye *this_ptr,CDemonActor *grabber,int grab_type)

{
  CWeapon *pCVar1;
  SMotion *pSVar2;
  int iVar3;
  int iVar4;
  
  if (grabber != (CDemonActor *)0x0) {
    engine_console_cpp_FUN_00441ff0
              (g_CConsolePtr,"@@CPrye::startGettingGrabbed by %s, type %d\n" + 2,grabber,grab_type);
    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                       (&(this_ptr->base).base.model.base);
    engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"  current motion is %s\n",pSVar2);
    if (((((this_ptr->base).object_to_pick_up == (CDemonActor *)0x0) &&
         ((this_ptr->base).door_to_open == (CDoor *)0x0)) &&
        ((this_ptr->base).lever_to_pull == (CLever *)0x0)) &&
       (((((iVar3 = (this_ptr->base).action_pending, iVar3 == 0 || (iVar3 == 3)) ||
          ((iVar3 == 7 || ((iVar3 == 10 || (iVar3 == 0xb)))))) || (iVar3 == 0xc)) || (iVar3 == 0xd))
       )) {
      iVar3 = core_hero_cpp_FUN_004d2af0(this_ptr,grabber,grab_type);
      if (iVar3 != 0) {
        pCVar1 = (CWeapon *)(this_ptr->base).base.carry_hands[0].carry_actor;
        if ((pCVar1 != this_ptr->weapon) &&
           (iVar4 = core_actor_cpp_castToClassHash_FUN_0040c840(pCVar1,DAT_007e1a50), iVar4 == 0)) {
          (*(((this_ptr->base).base.base.vtable._uc)->_uc).dropCarriedObject)
                    ((CCharacter *)this_ptr,0,(CVector3f *)0x0);
        }
        if (this_ptr->weapon != (CWeapon *)(this_ptr->base).base.carry_hands[1].carry_actor) {
          (*(((this_ptr->base).base.base.vtable._uc)->_uc).dropCarriedObject)
                    ((CCharacter *)this_ptr,1,(CVector3f *)0x0);
        }
        this_ptr->grab_timer = 0.0;
      }
      return iVar3;
    }
  }
  return 0;
}
