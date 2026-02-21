// Name: core_svetlana.cpp_CSvetlana_FUN_005d9970
// Address: 005d9970
// Address Range: [[005d9970, 005d9a07]]
// Convention: __cdecl
// Signature: void __cdecl core_svetlana_cpp_CSvetlana_FUN_005d9970(CSvetlana *this_ptr)

#include "nocturne.h"

void __cdecl core_svetlana_cpp_CSvetlana_FUN_005d9970(CSvetlana *this_ptr)

{
  int iVar1;
  uint event_id;
  float in_stack_00000008;
  
  do {
    event_id = core_motion_cpp_CMotionController_advance_FUN_0052d610
                         (&(this_ptr->base).base.model.motion_controller);
    if (event_id < 100) {
      core_charactr_cpp_CCharacter_processMotion_FUN_0042ec40((CCharacter *)this_ptr,event_id);
    }
    else {
      if (event_id < 0x65) {
        core_svetlana_cpp_CSvetlana_FUN_005d9a10(this_ptr);
        iVar1 = this_ptr->attack_hand;
      }
      else {
        if (event_id != 0x65) {
          core_charactr_cpp_CCharacter_processMotion_FUN_0042ec40((CCharacter *)this_ptr,event_id);
          goto LAB_005d99be;
        }
        core_svetlana_cpp_CSvetlana_FUN_005d9a10(this_ptr);
        iVar1 = this_ptr->attack_hand;
      }
      this_ptr->attack_hand = (uint)(iVar1 == 0);
    }
LAB_005d99be:
    if (in_stack_00000008 <= 0.0) {
      return;
    }
  } while( true );
}
