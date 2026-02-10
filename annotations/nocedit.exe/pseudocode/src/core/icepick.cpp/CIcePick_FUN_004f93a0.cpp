// Name: core_icepick.cpp_CIcePick_FUN_004f93a0
// Address: 004f93a0
// Address Range: [[004f93a0, 004f948d]]
// Convention: __cdecl
// Signature: void __cdecl core_icepick_cpp_CIcePick_FUN_004f93a0(CIcePick *this_ptr)

#include "nocturne.h"

void __cdecl core_icepick_cpp_CIcePick_FUN_004f93a0(CIcePick *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  CDemonActor *object;
  uint uVar1;
  int iVar2;
  float in_stack_00000008;
  
  this_ptr_00 = &(this_ptr->base).base.model;
  do {
    uVar1 = core_motion_cpp_CMotionController_advance_FUN_0052d610(&this_ptr_00->motion_controller);
    switch(uVar1) {
    case 100:
      iVar2 = *(int *)(this_ptr->unk + 4) + 1;
      *(int *)(this_ptr->unk + 4) = iVar2;
      if (4 < iVar2) {
        this_ptr->unk[4] = '\0';
        this_ptr->unk[5] = '\0';
        this_ptr->unk[6] = '\0';
        this_ptr->unk[7] = '\0';
      }
      break;
    case 0x65:
      core_icepick_cpp_CIcePick_FUN_004f9490(this_ptr);
      break;
    case 0x66:
      core_icepick_cpp_CIcePick_FUN_004f9490(this_ptr);
      break;
    case 0x67:
      uVar1 = rand();
      if ((uVar1 & 3) == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&this_ptr_00->motion_controller,0x15,1);
      }
      break;
    case 0x68:
      object = *(CDemonActor **)(this_ptr->unk + 0x24);
      if (object != (CDemonActor *)0x0) {
        this_ptr->unk[0x24] = '\0';
        this_ptr->unk[0x25] = '\0';
        this_ptr->unk[0x26] = '\0';
        this_ptr->unk[0x27] = '\0';
        core_charactr_cpp_CCharacter_pickupObjectNow_FUN_0042cdb0
                  ((CCharacter *)this_ptr,1,object,0.2);
      }
      break;
    case 0x69:
      (*(((this_ptr->base).base.base.vtable._uc)->_uc).dropCarriedObject)
                ((CCharacter *)this_ptr,1,(CVector3f *)0x0);
      break;
    default:
      core_charactr_cpp_CCharacter_processMotion_FUN_0042ec40((CCharacter *)this_ptr,uVar1);
    }
  } while (0.0 < in_stack_00000008);
  return;
}
