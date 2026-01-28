// Name: core_mimic.cpp_FUN_00520a00
// Address: 00520a00
// Address Range: [[00520a00, 00520a79]]
// Convention: unknown
// Signature: undefined4 core_mimic_cpp_FUN_00520a00(void)

#include "nocturne.h"

/* Signature: byte actors_enemy_mimic.cpp_FUN_00520a00(uint param_1, uint param_2)
    */

uint core_mimic_cpp_FUN_00520a00(void)

{
  float fVar1;
  SMotion *pSVar2;
  int in_stack_00000004;
  int *in_stack_00000008;
  
  in_stack_00000008[6] = *(int *)(in_stack_00000004 + 0x23a0);
  in_stack_00000008[7] = 0x3f800000;
  if (*in_stack_00000008 == 1) {
    in_stack_00000008[5] = -0x42333333;
    fVar1 = (float)1.3;
    in_stack_00000008[6] = (int)((float)in_stack_00000008[6] + 0.5f);
    in_stack_00000008[7] = (int)((float)in_stack_00000008[7] * fVar1);
  }
  else {
    in_stack_00000008[5] = 0x40000000;
  }
  pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     ((CMotionController *)(in_stack_00000004 + 0x158));
  if (pSVar2->state_index == 0xc) {
    return 0;
  }
  return 2;
}
