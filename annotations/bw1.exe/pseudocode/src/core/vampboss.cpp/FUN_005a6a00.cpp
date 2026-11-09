// Name: core_vampboss.cpp_FUN_005a6a00
// Address: 005a6a00
// Address Range: [[005a6a00, 005a6afb]]
// Convention: __cdecl
// Signature: void __cdecl core_vampboss_cpp_FUN_005a6a00(CVampireBoss *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_vampboss_cpp_FUN_005a6a00(CVampireBoss *this_ptr,float delta_time)

{
  uint uVar1;
  float local_78;
  byte local_74 [104];
  
  if (0.0 < delta_time) {
LAB_005a6a22:
    do {
      uVar1 = core_motion_cpp_CMotionController_advance_FUN_00524270
                        ((CMotionController *)&this_ptr->field_0xc268,&delta_time);
      if (uVar1 < 0x66) {
        if (uVar1 == 0x65) {
          local_78 = 0.0;
          if (*(int *)&this_ptr->field_0xbe79c == 1) {
            local_78 = *(float *)&this_ptr->field_0xbf3cc;
          }
          if (*(int *)&this_ptr->field_0xbe79c == 2) {
            local_78 = 1.0;
          }
          if (*(int *)&this_ptr->field_0xbe79c == 3) {
            local_78 = *(float *)&this_ptr->field_0xbf3cc;
          }
          if (0.0 < (double)local_78) {
            FUN_005bfb40
                      (local_74,"wing?.wav @%f",(double)local_78 * _DAT_005f8e20);
            goto LAB_005a6ab9;
          }
        }
      }
      else {
        if ((0x66 < uVar1) && (uVar1 != 0x67)) {
          if (delta_time <= 0.0) {
            return;
          }
          goto LAB_005a6a22;
        }
LAB_005a6ab9:
        (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))(this_ptr);
      }
    } while (0.0 < delta_time);
  }
  return;
}
