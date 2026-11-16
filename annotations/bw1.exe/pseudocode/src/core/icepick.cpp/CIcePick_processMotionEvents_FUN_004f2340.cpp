// Name: core_icepick.cpp_CIcePick_processMotionEvents_FUN_004f2340
// Address: 004f2340
// Address Range: [[004f2340, 004f242f]]
// Convention: __cdecl
// Signature: void __cdecl core_icepick_cpp_CIcePick_processMotionEvents_FUN_004f2340(CIcePick *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_icepick_cpp_CIcePick_processMotionEvents_FUN_004f2340(CIcePick *this_ptr,float delta_time)

{
  CDeformableModelInstance *this_ptr_00;
  CDemonActor *object;
  int iVar1;
  uint uVar2;
  
  this_ptr_00 = &(this_ptr->base).base.model;
  do {
    iVar1 = core_motion_cpp_CMotionController_advance_FUN_00524270(&this_ptr_00->base,&delta_time);
    switch(iVar1) {
    case 100:
      iVar1 = this_ptr->attack_count + 1;
      this_ptr->attack_count = iVar1;
      if (4 < iVar1) {
        this_ptr->attack_count = 0;
      }
      break;
    case 0x65:
      core_icepick_cpp_CIcePick_performMeleeAttack_FUN_004f2430(this_ptr,_DAT_01d06ca8);
      break;
    case 0x66:
      core_icepick_cpp_CIcePick_performMeleeAttack_FUN_004f2430(this_ptr,_DAT_01d06cac);
      break;
    case 0x67:
      uVar2 = rand();
      if ((uVar2 & 3) == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&this_ptr_00->base,0x15,1);
      }
      break;
    case 0x68:
      object = this_ptr->pending_pickup_target;
      if (object != (CDemonActor *)0x0) {
        this_ptr->pending_pickup_target = (CDemonActor *)0x0;
        core_charactr_cpp_CCharacter_pickupObjectNow_FUN_004325b0
                  ((CCharacter *)this_ptr,1,object,0.2,(CMatrix3x4f *)0x0);
      }
      break;
    case 0x69:
      (*(((this_ptr->base).base.base.vtable._uc)->_uc).dropCarriedObject)
                ((CCharacter *)this_ptr,1,(CVector3f *)0x0);
      break;
    default:
      core_charactr_cpp_CCharacter_processMotion_FUN_00434a80((CCharacter *)this_ptr,iVar1);
    }
  } while (0.0 < delta_time);
  return;
}
