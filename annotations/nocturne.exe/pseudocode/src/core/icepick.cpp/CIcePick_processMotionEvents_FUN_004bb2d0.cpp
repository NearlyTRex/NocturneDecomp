// Name: core_icepick.cpp_CIcePick_processMotionEvents_FUN_004bb2d0
// Address: 004bb2d0
// Address Range: [[004bb2d0, 004bb3bd]]
// Convention: __cdecl
// Signature: void __cdecl core_icepick_cpp_CIcePick_processMotionEvents_FUN_004bb2d0(CIcePick *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_icepick_cpp_CIcePick_processMotionEvents_FUN_004bb2d0(CIcePick *this_ptr,float delta_time)

{
  CDeformableModelInstance *this_ptr_00;
  CDemonActor *object;
  int iVar1;
  uint uVar2;
  
  this_ptr_00 = &(this_ptr->base).base.model;
  do {
    iVar1 = core_motion_cpp_CMotionController_advance_FUN_004e11c0
                      (&this_ptr_00->motion_controller,&delta_time);
    switch(iVar1) {
    case 100:
      iVar1 = this_ptr->attack_count + 1;
      this_ptr->attack_count = iVar1;
      if (4 < iVar1) {
        this_ptr->attack_count = 0;
      }
      break;
    case 0x65:
      core_icepick_cpp_CIcePick_performMeleeAttack_FUN_004bb3c0(this_ptr,_DAT_01cae2bc);
      break;
    case 0x66:
      core_icepick_cpp_CIcePick_performMeleeAttack_FUN_004bb3c0(this_ptr,_DAT_01cae2c0);
      break;
    case 0x67:
      uVar2 = rand();
      if ((uVar2 & 3) == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  (&this_ptr_00->motion_controller,0x15,1);
      }
      break;
    case 0x68:
      object = this_ptr->pending_pickup_target;
      if (object != (CDemonActor *)0x0) {
        this_ptr->pending_pickup_target = (CDemonActor *)0x0;
        core_charactr_cpp_CCharacter_pickupObjectNow_FUN_00428f40
                  ((CCharacter *)this_ptr,1,object,0.2);
      }
      break;
    case 0x69:
      (*(((this_ptr->base).base.base.vtable._uc)->_uc).dropCarriedObject)
                ((CCharacter *)this_ptr,1,(CVector3f *)0x0);
      break;
    default:
      core_charactr_cpp_CCharacter_processMotion_FUN_0042add0((CCharacter *)this_ptr,iVar1);
    }
  } while (0.0 < delta_time);
  return;
}
