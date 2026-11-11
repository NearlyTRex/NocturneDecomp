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
  SMotion *pSVar1;
  float fVar2;
  int iVar3;
  
  if (grabber != (CDemonActor *)0x0) {
    engine_console_cpp_FUN_00445430
              (g_CConsolePtr,"CDoc::startGettingGrabbed by %s, type %d\n",grabber,grab_type);
    this_ptr_00 = &(this_ptr->base).base.model;
    pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(&this_ptr_00->base);
    engine_console_cpp_FUN_00445430(g_CConsolePtr,"  current motion is %s\n",pSVar1);
    if ((((this_ptr->base).object_to_pick_up == (CDemonActor *)0x0) &&
        ((this_ptr->base).door_to_open == (CDoor *)0x0)) &&
       ((this_ptr->base).lever_to_pull == (CLever *)0x0)) {
      fVar2 = core_motion_cpp_FUN_00525020(&this_ptr_00->base);
      iVar3 = (this_ptr->base).base.layer_action_index;
      if ((iVar3 == 0xc) || (iVar3 == 0xd)) {
        if ((fVar2 <= (float)_DAT_005da64c) || (_DAT_005da654 <= (double)fVar2)) {
LAB_0047631f:
          iVar3 = core_hero_cpp_CHero_getGrabbed_FUN_004eadf0(&this_ptr->base,grabber,grab_type);
          if (iVar3 != 0) {
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
          return iVar3;
        }
      }
      else {
        iVar3 = (this_ptr->base).action_pending;
        if (iVar3 != 3) {
          if (iVar3 != 0) {
            return 0;
          }
          goto LAB_0047631f;
        }
      }
    }
  }
  return 0;
}
