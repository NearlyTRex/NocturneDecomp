// Name: core_doc.cpp_CDoc_getGrabbed_FUN_0045dc40
// Address: 0045dc40
// Address Range: [[0045dc40, 0045dd2a]]
// Convention: __cdecl
// Signature: int __cdecl core_doc_cpp_CDoc_getGrabbed_FUN_0045dc40(CDoc *this_ptr,CDemonActor *grabber,int grab_type)

#include "nocturne.h"

int __cdecl core_doc_cpp_CDoc_getGrabbed_FUN_0045dc40(CDoc *this_ptr,CDemonActor *grabber,int grab_type)

{
  int iVar1;
  
  if (grabber != (CDemonActor *)0x0) {
    engine_console_cpp_CConsole_printf_FUN_00436710
              (g_CConsolePtr,"?CDoc::startGettingGrabbed by %s, type %d\n" + 1);
    core_motion_cpp_FUN_005035c0(&(this_ptr->base).base.model);
    engine_console_cpp_CConsole_printf_FUN_00436710(g_CConsolePtr,"  current motion is %s\n");
    if (((((this_ptr->base).object_to_pick_up == (CDemonActor *)0x0) &&
         ((this_ptr->base).door_to_open == (CDoor *)0x0)) &&
        ((this_ptr->base).lever_to_pull == (CLever *)0x0)) &&
       ((this_ptr->action_pending == 0 || (this_ptr->action_pending == 3)))) {
      iVar1 = core_hero_cpp_CHero_getGrabbed_FUN_004cea50(&this_ptr->base,grabber,grab_type);
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
  }
  return 0;
}
