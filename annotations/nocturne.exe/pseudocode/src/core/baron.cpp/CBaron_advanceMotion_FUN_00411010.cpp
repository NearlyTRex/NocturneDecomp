// Name: core_baron.cpp_CBaron_advanceMotion_FUN_00411010
// Address: 00411010
// Address Range: [[00411010, 00411078]]
// Convention: unknown
// Signature: void core_baron_cpp_CBaron_advanceMotion_FUN_00411010(CBaron *param_1,float param_2)

#include "nocturne.h"

void core_baron_cpp_CBaron_advanceMotion_FUN_00411010(CBaron *param_1,float param_2)

{
  uint uVar1;
  
  do {
    uVar1 = core_motion_cpp_CMotionController_advance_FUN_004e11c0
                      (&(param_1->base).base.model.motion_controller,&param_2);
    if (99 < uVar1) {
      if (uVar1 < 0x65) {
        core_baron_cpp_FUN_00410cc0(param_1);
      }
      else if (uVar1 == 0x6e) {
        param_1->summoned = 0;
        param_1->shell_visible = 0;
        param_1->target_actor = (CDemonActor *)0x0;
      }
    }
  } while (0.0 < param_2);
  return;
}
