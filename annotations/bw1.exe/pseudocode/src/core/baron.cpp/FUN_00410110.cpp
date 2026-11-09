// Name: core_baron.cpp_FUN_00410110
// Address: 00410110
// Address Range: [[00410110, 00410178]]
// Convention: unknown
// Signature: void core_baron_cpp_FUN_00410110(CBaron *param_1,float param_2)

#include "nocturne.h"

void core_baron_cpp_FUN_00410110(CBaron *param_1,float param_2)

{
  uint uVar1;
  
  do {
    uVar1 = core_motion_cpp_CMotionController_advance_FUN_00524270
                      ((CMotionController *)&param_1->field_0x158,&param_2);
    if (99 < uVar1) {
      if (uVar1 < 0x65) {
        core_baron_cpp_FUN_0040fcf0(param_1);
      }
      else if (uVar1 == 0x6e) {
        *(uint *)&param_1->field_0x200a4 = 0;
        *(uint *)&param_1->field_0x200a8 = 0;
        *(uint *)&param_1->field_0x20084 = 0;
      }
    }
  } while (0.0 < param_2);
  return;
}
