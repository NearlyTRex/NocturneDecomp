// Name: core_baron.cpp_CBaron_advanceMotion_FUN_00413a00
// Address: 00413a00
// MANUAL RECONSTRUCTION
// Address Range: [[00413a00, 00413a68]]
// Convention: __cdecl
// Signature: void __cdecl core_baron_cpp_CBaron_advanceMotion_FUN_00413a00(CBaron *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_baron_cpp_CBaron_advanceMotion_FUN_00413a00(CBaron *this_ptr,float delta_time)

{
  uint uVar1;

  do {
    uVar1 = core_motion_cpp_CMotionController_advance_FUN_0052d610
                      (&(this_ptr->base).base.model.motion_controller,&delta_time);
    if (99 < uVar1) {
      if (uVar1 < 0x65) {
        core_baron_cpp_CBaron_performLightningAttack_FUN_004136b0(this_ptr);
      }
#if !NOCTURNE_AUTHENTIC_HERO_ACTIONS
      else if ((uVar1 == 0x6e) &&
               ((this_ptr->target_actor == (CDemonActor *)0x0) ||
                ((this_ptr->base).base.model.motion_controller.state_index != 6))) {
#else
      else if (uVar1 == 0x6e) {
#endif
        this_ptr->summoned = 0;
        this_ptr->shell_visible = 0;
        this_ptr->target_actor = (CDemonActor *)0x0;
      }
    }
  } while (0.0 < delta_time);
  return;
}
