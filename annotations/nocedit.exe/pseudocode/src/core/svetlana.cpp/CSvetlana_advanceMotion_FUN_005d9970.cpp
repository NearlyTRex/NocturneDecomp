// Name: core_svetlana.cpp_CSvetlana_advanceMotion_FUN_005d9970
// Address: 005d9970
// Address Range: [[005d9970, 005d9a07]]
// Convention: __cdecl
// Signature: void __cdecl core_svetlana_cpp_CSvetlana_advanceMotion_FUN_005d9970(CSvetlana *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_svetlana_cpp_CSvetlana_advanceMotion_FUN_005d9970(CSvetlana *this_ptr,float delta_time)

{
  int iVar1;
  uint bone_index;
  
  do {
    bone_index = core_motion_cpp_CMotionController_advance_FUN_0052d610
                           (&(this_ptr->base).base.model.motion_controller,&delta_time);
    if (bone_index < 100) {
      core_charactr_cpp_CCharacter_processMotion_FUN_0042ec40((CCharacter *)this_ptr,bone_index);
    }
    else {
      if (bone_index < 0x65) {
        core_svetlana_cpp_CSvetlana_performBladeAttack_FUN_005d9a10(this_ptr,INT_03f6cbd4);
        iVar1 = this_ptr->attack_hand;
      }
      else {
        if (bone_index != 0x65) {
          core_charactr_cpp_CCharacter_processMotion_FUN_0042ec40((CCharacter *)this_ptr,bone_index)
          ;
          goto LAB_005d99be;
        }
        core_svetlana_cpp_CSvetlana_performBladeAttack_FUN_005d9a10(this_ptr,INT_03f6cbd8);
        iVar1 = this_ptr->attack_hand;
      }
      this_ptr->attack_hand = (uint)(iVar1 == 0);
    }
LAB_005d99be:
    if (delta_time <= 0.0) {
      return;
    }
  } while( true );
}
