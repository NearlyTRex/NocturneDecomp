// Name: core_vampboss.cpp_CVampireBoss_advanceAnimation_FUN_0054d9c0
// Address: 0054d9c0
// Address Range: [[0054d9c0, 0054dabb]]
// Convention: __cdecl
// Signature: void __cdecl core_vampboss_cpp_CVampireBoss_advanceAnimation_FUN_0054d9c0(CVampireBoss *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_vampboss_cpp_CVampireBoss_advanceAnimation_FUN_0054d9c0(CVampireBoss *this_ptr,float delta_time)

{
  uint uVar1;
  char *sound_name;
  float local_78;
  char local_74 [104];
  
  if (0.0 < delta_time) {
    do {
      while( true ) {
        uVar1 = core_motion_cpp_CMotionController_advance_FUN_004e11c0
                          (&(this_ptr->model).motion_controller,&delta_time);
        if (uVar1 < 0x66) break;
        if ((uVar1 < 0x67) || (uVar1 == 0x67)) {
          sound_name = "wing?.wav @1.5 *1.2";
LAB_0054da79:
          (*((this_ptr->base).base.base.vtable._ub)->playSound)((CDemonActor *)this_ptr,sound_name);
          goto LAB_0054da86;
        }
        if (delta_time <= 0.0) {
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
          _sprintf(local_74,"wing?.wav @%f",(double)local_78 * 2.5);
          sound_name = local_74;
          goto LAB_0054da79;
        }
      }
LAB_0054da86:
    } while (0.0 < delta_time);
  }
  return;
}
