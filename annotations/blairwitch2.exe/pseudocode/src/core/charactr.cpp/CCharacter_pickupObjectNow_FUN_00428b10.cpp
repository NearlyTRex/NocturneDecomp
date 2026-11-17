// Name: core_charactr.cpp_CCharacter_pickupObjectNow_FUN_00428b10
// Address: 00428b10
// Address Range: [[00428b10, 00428bcd]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_pickupObjectNow_FUN_00428b10(CCharacter *this_ptr,int hand_index,CDemonActor *object,float blend_time,CMatrix3x4f *carry_offset)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_pickupObjectNow_FUN_00428b10(CCharacter *this_ptr,int hand_index,CDemonActor *object,float blend_time,CMatrix3x4f *carry_offset)

{
  SCarryHand *pSVar1;
  
  if ((hand_index < 0) || (1 < hand_index)) {
    g_CHAR_PTR_01d046a0 = "..\\core\\charactr.cpp";
    g_INT_01d046a4 = 0xdfd;
    core_main_c_displayErrorAndQuit_FUN_004e4500("CCharacter::pickupObjectNow - invalid hand index");
  }
  if (object != (CDemonActor *)0x0) {
    pSVar1 = this_ptr->carry_hands + hand_index;
    if ((pSVar1->secondary_bone_index < 0) ||
       ((this_ptr->model).part_data.visibility_flags[pSVar1->secondary_bone_index] != 0)) {
      if (pSVar1->bone_index < 0) {
        g_CHAR_PTR_01d046a0 = "..\\core\\charactr.cpp";
        g_INT_01d046a4 = 0xe15;
        core_main_c_displayErrorAndQuit_FUN_004e4500("CCharacter::pickupObjectNow - invalid bone!");
      }
      (*((object->vtable)._ub)->pickup)(object,&this_ptr->base);
      pSVar1->carry_actor = object;
      core_charactr_cpp_CCharacter_computePickup_FUN_00428bd0
                (this_ptr,hand_index,blend_time,carry_offset);
    }
  }
  return;
}
