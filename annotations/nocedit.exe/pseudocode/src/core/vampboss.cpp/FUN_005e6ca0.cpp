// Name: core_vampboss.cpp_FUN_005e6ca0
// Address: 005e6ca0
// Address Range: [[005e6ca0, 005e6d9b]]
// Convention: unknown
// Signature: void core_vampboss_cpp_FUN_005e6ca0(void)

#include "nocturne.h"

/* Signature: byte actors_enemy_vampboss.cpp_FUN_005e6ca0(uint param_1, uint
   param_2) */

void core_vampboss_cpp_FUN_005e6ca0(void)

{
  uint uVar1;
  int in_stack_00000004;
  float in_stack_00000008;
  float local_78;
  char local_74 [104];
  
  if (0.0 < in_stack_00000008) {
LAB_005e6cc2:
    do {
      uVar1 = core_motion_cpp_CMotionController_advance_FUN_0052d610
                        ((CMotionController *)(in_stack_00000004 + 0xbebc));
      if (uVar1 < 0x66) {
        if (uVar1 == 0x65) {
          local_78 = 0.0;
          if (*(int *)(in_stack_00000004 + 0xcdcc0) == 1) {
            local_78 = *(float *)(in_stack_00000004 + 0xce8f0);
          }
          if (*(int *)(in_stack_00000004 + 0xcdcc0) == 2) {
            local_78 = 1.0;
          }
          if (*(int *)(in_stack_00000004 + 0xcdcc0) == 3) {
            local_78 = *(float *)(in_stack_00000004 + 0xce8f0);
          }
          if (0.0 < (double)local_78) {
            sprintf
                      (local_74,"wing?.wav @%f",(double)local_78 * 2.5);
            goto LAB_005e6d59;
          }
        }
      }
      else {
        if ((0x66 < uVar1) && (uVar1 != 0x67)) {
          if (in_stack_00000008 <= 0.0) {
            return;
          }
          goto LAB_005e6cc2;
        }
LAB_005e6d59:
        (**(code **)(*(int *)(in_stack_00000004 + 0x154) + 0x24))();
      }
    } while (0.0 < in_stack_00000008);
  }
  return;
}
