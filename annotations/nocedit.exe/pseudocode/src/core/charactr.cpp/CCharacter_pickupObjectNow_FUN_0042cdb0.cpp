// Name: core_charactr.cpp_CCharacter_pickupObjectNow_FUN_0042cdb0
// Address: 0042cdb0
// Address Range: [[0042cdb0, 0042ce78]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_pickupObjectNow_FUN_0042cdb0 (CCharacter *this_ptr,int hand_index,CDemonActor *object,float blend_time)

#include "nocturne.h"

void __cdecl
core_charactr_cpp_CCharacter_pickupObjectNow_FUN_0042cdb0
          (CCharacter *this_ptr,int hand_index,CDemonActor *object,float blend_time)

{
  SCarryHand *pSVar1;
  float in_stack_00000024;
  
  if ((hand_index < 0) || (1 < hand_index)) {
    g_CurrentFilename = "..\\core\\charactr.cpp";
    g_CurrentLineNumber = 0xbd3;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CCharacter::pickupObjectNow - invalid hand index");
  }
  if (object != (CDemonActor *)0x0) {
    (*(((this_ptr->base).vtable._uc)->_uc).dropCarriedObject)(this_ptr,hand_index,(CVector3f *)0x0);
    pSVar1 = this_ptr->carry_hands + hand_index;
    if ((pSVar1->secondary_bone_index < 0) ||
       ((this_ptr->model).part_data.visibility_flags[pSVar1->secondary_bone_index] != 0)) {
      if (pSVar1->bone_index < 0) {
        g_CurrentFilename = "..\\core\\charactr.cpp";
        g_CurrentLineNumber = 0xbeb;
        core_main_c_displayErrorAndQuit_FUN_00506f10("CCharacter::pickupObjectNow - invalid bone!");
      }
      (*((object->vtable)._ub)->pickup)(object,&this_ptr->base);
      pSVar1->carry_actor = object;
      core_charactr_cpp_CCharacter_computePickup_FUN_0042ce80(this_ptr,hand_index,in_stack_00000024)
      ;
      return;
    }
  }
  return;
}
