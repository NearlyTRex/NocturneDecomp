// Name: core_charactr.cpp_CCharacter_pickupObjectNow_FUN_004319d0
// Address: 004319d0
// Address Range: [[004319d0, 00431aa1]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_pickupObjectNow_FUN_004319d0(CCharacter *this_ptr,int hand_index,CDemonActor *object,float blend_time,CMatrix3x4f *carry_offset)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_charactr_cpp_CCharacter_pickupObjectNow_FUN_004319d0(CCharacter *this_ptr,int hand_index,CDemonActor *object,float blend_time,CMatrix3x4f *carry_offset)

{
  SCarryHand *pSVar1;
  
  if ((hand_index < 0) || (1 < hand_index)) {
    _DAT_01d71de0 = "..\\core\\charactr.cpp";
    _DAT_01d71de4 = 0xeec;
    core_main_c_displayErrorAndQuit_FUN_004e4330("CCharacter::pickupObjectNow - invalid hand index");
  }
  if (object != (CDemonActor *)0x0) {
    (*(((this_ptr->base).vtable._uc)->_uc).dropCarriedObject)(this_ptr,hand_index,(CVector3f *)0x0);
    pSVar1 = this_ptr->carry_hands + hand_index;
    if ((pSVar1->secondary_bone_index < 0) ||
       ((this_ptr->model).part_data.visibility_flags[pSVar1->secondary_bone_index] != 0)) {
      if (pSVar1->bone_index < 0) {
        _DAT_01d71de0 = "..\\core\\charactr.cpp";
        _DAT_01d71de4 = 0xf04;
        core_main_c_displayErrorAndQuit_FUN_004e4330("CCharacter::pickupObjectNow - invalid bone!");
      }
      (*((object->vtable)._ub)->pickup)(object,&this_ptr->base);
      pSVar1->carry_actor = object;
      core_charactr_cpp_CCharacter_computePickup_FUN_00431ab0
                (this_ptr,hand_index,blend_time,carry_offset);
      return;
    }
  }
  return;
}
