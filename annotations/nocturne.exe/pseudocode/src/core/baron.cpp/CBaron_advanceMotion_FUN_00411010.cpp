// Name: core_baron.cpp_CBaron_advanceMotion_FUN_00411010
// Address: 00411010
// Address Range: [[00411010, 00411078]]
// Convention: __cdecl
// Signature: void __cdecl core_baron_cpp_CBaron_advanceMotion_FUN_00411010(CBaron *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_baron_cpp_CBaron_advanceMotion_FUN_00411010(CBaron *this_ptr,float delta_time)

{
  uint uVar1;
  
  do {
    uVar1 = core_motion_cpp_CMotionController_advance_FUN_004e11c0
                      (&(this_ptr->base).base.model.motion_controller,&delta_time);
    if (99 < uVar1) {
      if (uVar1 < 0x65) {
        core_baron_cpp_CBaron_performLightningAttack_FUN_00410cc0(this_ptr);
      }
      else if (uVar1 == 0x6e) {
        this_ptr->summoned = 0;
        this_ptr->shell_visible = 0;
        this_ptr->target_actor = (CDemonActor *)0x0;
      }
    }
  } while (0.0 < delta_time);
  return;
}
