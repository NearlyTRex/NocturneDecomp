// Name: core_colonel.cpp_FUN_00440430
// Address: 00440430
// Address Range: [[00440430, 0044048d]]
// Convention: __cdecl
// Signature: ushort __cdecl core_colonel_cpp_FUN_00440430(void)

#include "nocturne.h"

/* Signature: byte actors_hero_colonel.cpp_FUN_00440430(uint param_1, uint
   param_2) */

ushort __cdecl core_colonel_cpp_FUN_00440430(void)

{
  uint uVar1;
  CCharacter *in_stack_00000004;
  float in_stack_00000008;
  
  do {
    uVar1 = core_motion_cpp_CMotionController_advance_FUN_0052d610
                      (&(in_stack_00000004->model).motion_controller);
    if (uVar1 < 100) {
      core_charactr_cpp_CCharacter_FUN_0042ec40(in_stack_00000004);
    }
    else if ((100 < uVar1) && (uVar1 != 0x65)) {
      core_charactr_cpp_CCharacter_FUN_0042ec40(in_stack_00000004);
    }
  } while (0.0 < in_stack_00000008);
  return (ushort)(0.0 < in_stack_00000008) << 8 | (ushort)NAN(in_stack_00000008) << 10 |
         (ushort)(in_stack_00000008 == 0.0) << 0xe;
}
