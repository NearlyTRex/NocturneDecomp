// Name: core_stranger.cpp_CStranger_FUN_005c6750
// Address: 005c6750
// Address Range: [[005c6750, 005c67b4]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_FUN_005c6750(void)

#include "nocturne.h"

/* Signature: byte actors_hero_stranger.cpp_CStranger_FUN_005c6750(uint param_1) */

void __cdecl core_stranger_cpp_CStranger_FUN_005c6750(void)

{
  CDeformableModelInstance *this_ptr;
  CHero *in_stack_00000004;
  
  this_ptr = &(in_stack_00000004->base).model;
  core_hero_cpp_CHero_FUN_004f3b20(in_stack_00000004);
  in_stack_00000004[1].base.base.orient_matrix.m[2].x = 0.0;
  in_stack_00000004[1].base.base.orient_matrix.m[2].y = 0.0;
  in_stack_00000004[1].base.base.health = 0;
  (in_stack_00000004->base).unk3[0x46c] = '\0';
  (in_stack_00000004->base).unk3[0x46d] = '\0';
  (in_stack_00000004->base).unk3[0x46e] = '\0';
  (in_stack_00000004->base).unk3[0x46f] = '\0';
  (in_stack_00000004->base).unk3[0x470] = '\0';
  (in_stack_00000004->base).unk3[0x471] = '\0';
  (in_stack_00000004->base).unk3[0x472] = '\0';
  (in_stack_00000004->base).unk3[0x473] = '\0';
  core_motion_cpp_CMotionController_jumpToMotionByName_FUN_0052ddb0
            (&this_ptr->motion_controller,"stand",0.0);
  core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(&this_ptr->motion_controller,0,1);
  return;
}
