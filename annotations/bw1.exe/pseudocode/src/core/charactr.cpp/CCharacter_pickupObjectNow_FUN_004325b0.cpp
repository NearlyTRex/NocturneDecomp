// Name: core_charactr.cpp_CCharacter_pickupObjectNow_FUN_004325b0
// Address: 004325b0
// Address Range: [[004325b0, 00432681]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_pickupObjectNow_FUN_004325b0(CCharacter *this_ptr,int hand_index,CDemonActor *object,float blend_time,CMatrix3x4f *carry_offset)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_charactr_cpp_CCharacter_pickupObjectNow_FUN_004325b0(CCharacter *this_ptr,int hand_index,CDemonActor *object,float blend_time,CMatrix3x4f *carry_offset)

{
  SCarryHand *pSVar1;
  
  if ((hand_index < 0) || (1 < hand_index)) {
    _DAT_01d1d400 = "..\\core\\charactr.cpp";
    _DAT_01d1d404 = 0xdba;
    core_main_c_displayErrorAndQuit_FUN_005030e0("CCharacter::pickupObjectNow - invalid hand index");
  }
  if (object != (CDemonActor *)0x0) {
    (*(((this_ptr->base).vtable._uc)->_uc).dropCarriedObject)(this_ptr,hand_index,(CVector3f *)0x0);
    pSVar1 = this_ptr->carry_hands + hand_index;
    if ((pSVar1->secondary_bone_index < 0) ||
       ((this_ptr->model).part_data.visibility_flags[pSVar1->secondary_bone_index] != 0)) {
      if (pSVar1->bone_index < 0) {
        _DAT_01d1d400 = "..\\core\\charactr.cpp";
        _DAT_01d1d404 = 0xdd2;
        core_main_c_displayErrorAndQuit_FUN_005030e0("CCharacter::pickupObjectNow - invalid bone!");
      }
      (*((object->vtable)._ub)->pickup)(object,&this_ptr->base);
      pSVar1->carry_actor = object;
      core_charactr_cpp_CCharacter_computePickup_FUN_00432690
                (this_ptr,hand_index,blend_time,carry_offset);
      return;
    }
  }
  return;
}
