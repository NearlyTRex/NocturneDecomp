// Name: core_charactr.cpp_CCharacter_pickupObjectNow_FUN_00428f40
// Address: 00428f40
// Address Range: [[00428f40, 00429008]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_pickupObjectNow_FUN_00428f40(CCharacter *this_ptr,int hand_index,CDemonActor *object,float blend_time)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_pickupObjectNow_FUN_00428f40(CCharacter *this_ptr,int hand_index,CDemonActor *object,float blend_time)

{
  SCarryHand *pSVar1;
  
  if ((hand_index < 0) || (1 < hand_index)) {
    g_CHAR_PTR_01cc4800 = "..\\core\\charactr.cpp";
    g_INT_01cc4804 = 0xbe7;
    core_main_c_FUN_004c8440("CCharacter::pickupObjectNow - invalid hand index");
  }
  if (object != (CDemonActor *)0x0) {
    (*(((this_ptr->base).vtable._uc)->_uc).dropCarriedObject)(this_ptr,hand_index,(CVector3f *)0x0);
    pSVar1 = this_ptr->carry_hands + hand_index;
    if ((pSVar1->secondary_bone_index < 0) ||
       ((this_ptr->model).part_data.visibility_flags[pSVar1->secondary_bone_index] != 0)) {
      if (pSVar1->bone_index < 0) {
        g_CHAR_PTR_01cc4800 = "..\\core\\charactr.cpp";
        g_INT_01cc4804 = 0xbff;
        core_main_c_FUN_004c8440("CCharacter::pickupObjectNow - invalid bone!");
      }
      (*((object->vtable)._ub)->pickup)(object,&this_ptr->base);
      pSVar1->carry_actor = object;
      core_charactr_cpp_CCharacter_computePickup_FUN_00429010(this_ptr,hand_index,blend_time);
      return;
    }
  }
  return;
}
