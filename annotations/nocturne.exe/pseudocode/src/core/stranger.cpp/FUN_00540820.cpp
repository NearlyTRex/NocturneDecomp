// Name: core_stranger.cpp_FUN_00540820
// Address: 00540820
// Address Range: [[00540820, 00540884]]
// Convention: unknown
// Signature: void core_stranger_cpp_FUN_00540820(CHero *param_1)

#include "nocturne.h"

void core_stranger_cpp_FUN_00540820(CHero *param_1)

{
  CDeformableModelInstance *this_ptr;
  
  this_ptr = &(param_1->base).model;
  core_hero_cpp_CHero_reset_FUN_004b5ec0(param_1);
  param_1[1].base.base.orient_matrix.m[2].x = 0.0;
  param_1[1].base.base.orient_matrix.m[2].y = 0.0;
  param_1[1].base.base.health = 0;
  (param_1->base).layer_action_index = 0;
  (param_1->base).layer_action_t = 0.0;
  core_motion_cpp_CMotionController_jumpToMotionByName_FUN_004e1960
            (&this_ptr->motion_controller,"stand",0.0);
  core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(&this_ptr->motion_controller,0,1);
  return;
}
