// Name: core_haystack.cpp_FUN_004f1970
// Address: 004f1970
// Address Range: [[004f1970, 004f1aa5]]
// Convention: unknown
// Signature: void core_haystack_cpp_FUN_004f1970(void)

#include "nocturne.h"

/* Signature: byte actors_hero_haystack.cpp_FUN_004f1970(uint param_1, uint
   param_2) */

void core_haystack_cpp_FUN_004f1970(void)

{
  int iVar1;
  CCharacter *in_stack_00000004;
  float in_stack_00000008;
  
  do {
    iVar1 = core_motion_cpp_CMotionController_advance_FUN_0052d610
                      (&(in_stack_00000004->model).motion_controller);
    switch(iVar1) {
    case 0x65:
      core_haystack_cpp_FUN_004f1ab0();
      iVar1 = *(int *)(in_stack_00000004[2].cloth_data + 0x54f8);
      goto LAB_004f19bc;
    case 0x66:
      core_haystack_cpp_FUN_004f1ab0();
      iVar1 = *(int *)(in_stack_00000004[2].cloth_data + 0x54f8);
LAB_004f19bc:
      *(uint *)(in_stack_00000004[2].cloth_data + 0x54f8) = (uint)(iVar1 == 0);
      break;
    case 0x67:
    case 0x69:
    case 0x6b:
      iVar1 = sound_sndmain_cpp_isWithinListenerRadius_FUN_005aa290
                        ((double)(in_stack_00000004->base).location.position.x,
                         (double)(in_stack_00000004->base).location.position.y,
                         (double)(in_stack_00000004->base).location.position.z,40.0);
      if (iVar1 != 0) {
        (*((in_stack_00000004->base).vtable._ub)->playSound)
                  (&in_stack_00000004->base,"box-swing?.wav");
      }
      break;
    case 0x68:
    case 0x6a:
    case 0x6c:
      iVar1 = sound_sndmain_cpp_isWithinListenerRadius_FUN_005aa290
                        ((double)(in_stack_00000004->base).location.position.x,
                         (double)(in_stack_00000004->base).location.position.y,
                         (double)(in_stack_00000004->base).location.position.z,40.0);
      if ((iVar1 != 0) && (iVar1 = core_actor_cpp_randomChance_FUN_0040cd10(0.4), iVar1 != 0)) {
        (*((in_stack_00000004->base).vtable._ub)->playSound)
                  (&in_stack_00000004->base,"box-punch?.wav");
      }
      break;
    default:
      core_charactr_cpp_CCharacter_FUN_0042ec40(in_stack_00000004);
    }
    if (in_stack_00000008 <= 0.0) {
      return;
    }
  } while( true );
}
