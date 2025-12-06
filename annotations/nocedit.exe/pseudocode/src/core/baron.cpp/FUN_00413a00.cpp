// Name: core_baron.cpp_FUN_00413a00
// Address: 00413a00
// Address Range: [[00413a00, 00413a68]]
// Convention: unknown
// Signature: undefined core_baron.cpp_FUN_00413a00()

#include "nocturne.h"

/* Signature: byte actors_hero_baron.cpp_FUN_00413a00(uint param_1, uint param_2)
    */

void core_baron_cpp_FUN_00413a00(void)

{
  uint uVar1;
  int in_stack_00000004;
  float in_stack_00000008;
  
  do {
    uVar1 = core_motion_cpp_CMotionController_advance_FUN_0052d610
                      ((CMotionController *)(in_stack_00000004 + 0x158));
    if (99 < uVar1) {
      if (uVar1 < 0x65) {
        core_baron_cpp_FUN_004136b0();
      }
      else if (uVar1 == 0x6e) {
        *(uint *)(in_stack_00000004 + 0x1fccc) = 0;
        *(uint *)(in_stack_00000004 + 0x1fcd0) = 0;
        *(uint *)(in_stack_00000004 + 0x1fcac) = 0;
      }
    }
  } while (0.0 < in_stack_00000008);
  return;
}
