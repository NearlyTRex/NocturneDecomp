// Name: core_vampboss.cpp_CVampireBoss_FUN_005e6ca0
// Address: 005e6ca0
// Address Range: [[005e6ca0, 005e6d9b]]
// Convention: __cdecl
// Signature: void __cdecl core_vampboss_cpp_CVampireBoss_FUN_005e6ca0(CVampireBoss *this_ptr)

#include "nocturne.h"

void __cdecl core_vampboss_cpp_CVampireBoss_FUN_005e6ca0(CVampireBoss *this_ptr)

{
  uint uVar1;
  float in_stack_00000008;
  char *sound_name;
  float local_78;
  char local_74 [104];
  
  if (0.0 < in_stack_00000008) {
    do {
      while( true ) {
        uVar1 = core_motion_cpp_CMotionController_advance_FUN_0052d610
                          (&(this_ptr->model).motion_controller,&stack0x00000008);
        if (uVar1 < 0x66) break;
        if ((uVar1 < 0x67) || (uVar1 == 0x67)) {
          sound_name = "wing?.wav @1.5 *1.2";
LAB_005e6d59:
          (*((this_ptr->base).base.base.vtable._ub)->playSound)((CDemonActor *)this_ptr,sound_name);
          goto LAB_005e6d66;
        }
        if (in_stack_00000008 <= 0.0) {
          return;
        }
      }
      if (uVar1 == 0x65) {
        local_78 = 0.0;
        if (this_ptr->form == 1) {
          local_78 = this_ptr->morph_t;
        }
        if (this_ptr->form == 2) {
          local_78 = 1.0;
        }
        if (this_ptr->form == 3) {
          local_78 = this_ptr->morph_t;
        }
        if (0.0 < (double)local_78) {
          _sprintf
                    (local_74,"wing?.wav @%f",(double)local_78 * 2.5);
          sound_name = local_74;
          goto LAB_005e6d59;
        }
      }
LAB_005e6d66:
    } while (0.0 < in_stack_00000008);
  }
  return;
}
