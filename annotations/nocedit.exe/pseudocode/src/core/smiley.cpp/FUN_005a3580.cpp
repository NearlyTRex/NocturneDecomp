// Name: core_smiley.cpp_FUN_005a3580
// Address: 005a3580
// Address Range: [[005a3580, 005a3685]]
// Convention: unknown
// Signature: void core_smiley_cpp_FUN_005a3580(void)

#include "nocturne.h"

/* Signature: byte actors_enemy_smiley.cpp_FUN_005a3580(uint param_1, uint
   param_2) */

void core_smiley_cpp_FUN_005a3580(void)

{
  CMotionController *this_ptr;
  int iVar1;
  float fVar2;
  SMotion *pSVar3;
  int in_stack_00000004;
  int in_stack_00000008;
  
  if (*(int *)(in_stack_00000004 + 0xbefc) != 1) {
    *(uint *)(in_stack_00000008 + 0x30) = 100;
    *(uint *)(in_stack_00000008 + 4) = 0;
    return;
  }
  iVar1 = *(int *)(in_stack_00000008 + 0x30);
  if (iVar1 == 4) {
    *(uint *)(in_stack_00000008 + 0x30) = 100;
  }
  else if ((iVar1 < 0xc) || (iVar1 == 0x6b)) goto LAB_005a35b4;
  *(uint *)(in_stack_00000008 + 4) = 0;
LAB_005a35b4:
  if (0.0 < *(float *)(in_stack_00000008 + 4)) {
    core_smiley_cpp_FUN_005a32a0();
  }
  fVar2 = *(float *)(in_stack_00000004 + 0x243c) - *(float *)(in_stack_00000008 + 4);
  this_ptr = (CMotionController *)(in_stack_00000004 + 0x158);
  *(float *)(in_stack_00000004 + 0x243c) = fVar2;
  if (fVar2 <= 0.0) {
    *(uint *)(in_stack_00000004 + 0x243c) = 0;
    pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0(this_ptr);
    if ((pSVar3->state_index != 8) && (pSVar3->state_index != 7)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(this_ptr,7,1);
      (**(code **)(*(int *)(in_stack_00000004 + 0x154) + 0x13c))();
      (**(code **)(*(int *)(in_stack_00000004 + 0x154) + 0x24))();
    }
    core_enemy_cpp_FUN_004a9f10();
    return;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(this_ptr,3,1);
  core_enemy_cpp_FUN_004a9f10();
  return;
}
