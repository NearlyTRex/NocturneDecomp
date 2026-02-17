// Name: core_baron.cpp_CBaron_FUN_00413a00
// Address: 00413a00
// Address Range: [[00413a00, 00413a68]]
// Convention: __cdecl
// Signature: void __cdecl core_baron_cpp_CBaron_FUN_00413a00(CBaron *this_ptr,float param_2)

#include "nocturne.h"

void __cdecl core_baron_cpp_CBaron_FUN_00413a00(CBaron *this_ptr,float param_2)

{
  uint uVar1;
  
  do {
    uVar1 = core_motion_cpp_CMotionController_advance_FUN_0052d610
                      (&(this_ptr->base).base.model.motion_controller);
    if (99 < uVar1) {
      if (uVar1 < 0x65) {
        core_baron_cpp_CBaron_FUN_004136b0(this_ptr);
      }
      else if (uVar1 == 0x6e) {
        this_ptr->summoned = 0;
        this_ptr->shell_visible = 0;
        this_ptr->target_actor = (CDemonActor *)0x0;
      }
    }
  } while (0.0 < param_2);
  return;
}
