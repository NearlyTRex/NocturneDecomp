// Name: core_charactr.cpp_CCharacter_pickupObjectNow_FUN_00428b10
// Address: 00428b10
// Address Range: [[00428b10, 00428bcd]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_pickupObjectNow_FUN_00428b10(CCharacter *this_ptr,int param_2,int param_3,float param_4,int *param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_charactr_cpp_CCharacter_pickupObjectNow_FUN_00428b10(CCharacter *this_ptr,int param_2,int param_3,float param_4,int *param_5)

{
  SCarryHand *pSVar1;
  
  if ((param_2 < 0) || (1 < param_2)) {
    _DAT_01d046a0 = "..\\core\\charactr.cpp";
    _DAT_01d046a4 = 0xdfd;
    core_main_c_FUN_004e4500("CCharacter::pickupObjectNow - invalid hand index");
  }
  if (param_3 != 0) {
    pSVar1 = this_ptr->carry_hands + param_2;
    if ((pSVar1->secondary_bone_index < 0) ||
       ((this_ptr->model).part_data.visibility_flags[pSVar1->secondary_bone_index] != 0)) {
      if (pSVar1->bone_index < 0) {
        _DAT_01d046a0 = "..\\core\\charactr.cpp";
        _DAT_01d046a4 = 0xe15;
        core_main_c_FUN_004e4500("CCharacter::pickupObjectNow - invalid bone!");
      }
      (**(code **)(*(int *)(param_3 + 0x2b0) + 0x90))(param_3,this_ptr);
      pSVar1->carry_actor = (CDemonActor *)param_3;
      core_charactr_cpp_CCharacter_computePickup_FUN_00428bd0(this_ptr,param_2,param_4,param_5);
    }
  }
  return;
}
