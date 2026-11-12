// Name: core_doc.cpp_CDoc_getGrabbed_FUN_00476260
// Address: 00476260
// Address Range: [[00476260, 004763b2]]
// Convention: __cdecl
// Signature: int __cdecl core_doc_cpp_CDoc_getGrabbed_FUN_00476260(CDoc *this_ptr,CDemonActor *grabber,int grab_type)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_doc_cpp_CDoc_getGrabbed_FUN_00476260(CDoc *this_ptr,CDemonActor *grabber,int grab_type)

{
  CDeformableModelInstance *this_ptr_00;
  float fVar1;
  int iVar2;
  
  if (grabber != (CDemonActor *)0x0) {
    engine_console_cpp_CConsole_printf_FUN_00445430
              (g_CConsolePtr,"CDoc::startGettingGrabbed by %s, type %d\n");
    this_ptr_00 = &(this_ptr->base).base.model;
    core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(&this_ptr_00->base);
    engine_console_cpp_CConsole_printf_FUN_00445430(g_CConsolePtr,"  current motion is %s\n");
    if ((((this_ptr->base).object_to_pick_up == (CDemonActor *)0x0) &&
        ((this_ptr->base).door_to_open == (CDoor *)0x0)) &&
       ((this_ptr->base).lever_to_pull == (CLever *)0x0)) {
      fVar1 = core_motion_cpp_FUN_00525020(&this_ptr_00->base);
      iVar2 = (this_ptr->base).base.layer_action_index;
      if ((iVar2 == 0xc) || (iVar2 == 0xd)) {
        if ((fVar1 <= (float)_DAT_005da64c) || (_DAT_005da654 <= (double)fVar1)) {
LAB_0047631f:
          iVar2 = core_hero_cpp_CHero_getGrabbed_FUN_004eadf0(&this_ptr->base,grabber,grab_type);
          if (iVar2 != 0) {
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
          return iVar2;
        }
      }
      else {
        iVar2 = (this_ptr->base).action_pending;
        if (iVar2 != 3) {
          if (iVar2 != 0) {
            return 0;
          }
          goto LAB_0047631f;
        }
      }
    }
  }
  return 0;
}
