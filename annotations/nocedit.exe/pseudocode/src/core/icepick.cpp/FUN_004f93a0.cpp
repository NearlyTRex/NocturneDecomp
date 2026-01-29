// Name: core_icepick.cpp_FUN_004f93a0
// Address: 004f93a0
// Address Range: [[004f93a0, 004f948d]]
// Convention: unknown
// Signature: void core_icepick_cpp_FUN_004f93a0(void)

#include "nocturne.h"

/* Signature: byte actors_hero_icepick.cpp_FUN_004f93a0(uint param_1, uint
   param_2) */

void core_icepick_cpp_FUN_004f93a0(void)

{
  int iVar1;
  uint uVar2;
  CCharacter *in_stack_00000004;
  float in_stack_00000008;
  
  do {
    iVar1 = core_motion_cpp_CMotionController_advance_FUN_0052d610
                      (&(in_stack_00000004->model).motion_controller);
    switch(iVar1) {
    case 100:
      iVar1 = *(int *)(in_stack_00000004[2].cloth_data + 0x54f8) + 1;
      *(int *)(in_stack_00000004[2].cloth_data + 0x54f8) = iVar1;
      if (4 < iVar1) {
        in_stack_00000004[2].cloth_data[0x54f8] = '\0';
        in_stack_00000004[2].cloth_data[0x54f9] = '\0';
        in_stack_00000004[2].cloth_data[0x54fa] = '\0';
        in_stack_00000004[2].cloth_data[0x54fb] = '\0';
      }
      break;
    case 0x65:
      core_icepick_cpp_FUN_004f9490();
      break;
    case 0x66:
      core_icepick_cpp_FUN_004f9490();
      break;
    case 0x67:
      uVar2 = rand();
      if ((uVar2 & 3) == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&(in_stack_00000004->model).motion_controller,0x15,1);
      }
      break;
    case 0x68:
      if (*(int *)(in_stack_00000004[2].cloth_data + 0x5518) != 0) {
        in_stack_00000004[2].cloth_data[0x5518] = '\0';
        in_stack_00000004[2].cloth_data[0x5519] = '\0';
        in_stack_00000004[2].cloth_data[0x551a] = '\0';
        in_stack_00000004[2].cloth_data[0x551b] = '\0';
        core_charactr_cpp_CCharacter_pickupObjectNow_FUN_0042cdb0(in_stack_00000004);
      }
      break;
    case 0x69:
      (*(((in_stack_00000004->base).vtable._uc)->_uc).cfunc21)();
      break;
    default:
      core_charactr_cpp_CCharacter_FUN_0042ec40(in_stack_00000004);
    }
  } while (0.0 < in_stack_00000008);
  return;
}
