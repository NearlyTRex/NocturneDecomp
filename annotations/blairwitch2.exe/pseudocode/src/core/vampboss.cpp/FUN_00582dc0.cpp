// Name: core_vampboss.cpp_FUN_00582dc0
// Address: 00582dc0
// Address Range: [[00582dc0, 00582ebb]]
// Convention: __cdecl
// Signature: void __cdecl core_vampboss_cpp_FUN_00582dc0(CVampireBoss *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_vampboss_cpp_FUN_00582dc0(CVampireBoss *this_ptr,float delta_time)

{
  uint uVar1;
  float local_78;
  byte local_74 [104];
  
  if (0.0 < delta_time) {
LAB_00582de2:
    do {
      uVar1 = core_motion_cpp_CMotionController_advance_FUN_005030c0
                        ((CMotionController *)&this_ptr->field_0x10af8,&delta_time);
      if (uVar1 < 0x66) {
        if (uVar1 == 0x65) {
          local_78 = 0.0;
          if (*(int *)&this_ptr->field_0xc2f3c == 1) {
            local_78 = *(float *)&this_ptr->field_0xc3b6c;
          }
          if (*(int *)&this_ptr->field_0xc2f3c == 2) {
            local_78 = 1.0;
          }
          if (*(int *)&this_ptr->field_0xc2f3c == 3) {
            local_78 = *(float *)&this_ptr->field_0xc3b6c;
          }
          if (0.0 < (double)local_78) {
            FUN_005b7790
                      (local_74,"wing?.wav @%f",(double)local_78 * _DAT_005edac4);
            goto LAB_00582e79;
          }
        }
      }
      else {
        if ((0x66 < uVar1) && (uVar1 != 0x67)) {
          if (delta_time <= 0.0) {
            return;
          }
          goto LAB_00582de2;
        }
LAB_00582e79:
        (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x34))(this_ptr);
      }
    } while (0.0 < delta_time);
  }
  return;
}
