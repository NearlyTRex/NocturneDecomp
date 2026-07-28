// Name: core_svetlana.cpp_CSvetlana_advanceMotion_FUN_00542ad0
// Address: 00542ad0
// Address Range: [[00542ad0, 00542b67]]
// Convention: __cdecl
// Signature: void __cdecl core_svetlana_cpp_CSvetlana_advanceMotion_FUN_00542ad0(CSvetlana *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_svetlana_cpp_CSvetlana_advanceMotion_FUN_00542ad0(CSvetlana *this_ptr,float delta_time)

{
  int iVar1;
  uint bone_index;
  
  do {
    bone_index = core_motion_cpp_CMotionController_advance_FUN_004e11c0
                           (&(this_ptr->base).base.model.motion_controller,&delta_time);
    if (bone_index < 100) {
      core_charactr_cpp_CCharacter_processMotion_FUN_0042add0((CCharacter *)this_ptr,bone_index);
    }
    else {
      if (bone_index < 0x65) {
        core_svetlana_cpp_CSvetlana_performBladeAttack_FUN_00542b70(this_ptr,_DAT_02dca09c);
        iVar1 = this_ptr->attack_hand;
      }
      else {
        if (bone_index != 0x65) {
          core_charactr_cpp_CCharacter_processMotion_FUN_0042add0((CCharacter *)this_ptr,bone_index)
          ;
          goto LAB_00542b1e;
        }
        core_svetlana_cpp_CSvetlana_performBladeAttack_FUN_00542b70(this_ptr,_DAT_02dca0a0);
        iVar1 = this_ptr->attack_hand;
      }
      this_ptr->attack_hand = (uint)(iVar1 == 0);
    }
LAB_00542b1e:
    if (delta_time <= 0.0) {
      return;
    }
  } while( true );
}
