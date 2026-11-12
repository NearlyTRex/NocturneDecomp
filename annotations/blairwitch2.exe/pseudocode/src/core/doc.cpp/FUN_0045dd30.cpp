// Name: core_doc.cpp_FUN_0045dd30
// Address: 0045dd30
// Address Range: [[0045dd30, 0045dd94]]
// Convention: unknown
// Signature: void core_doc_cpp_FUN_0045dd30(CHero *param_1)

#include "nocturne.h"

void core_doc_cpp_FUN_0045dd30(CHero *param_1)

{
  CDeformableModelInstance *this_ptr;
  
  this_ptr = &(param_1->base).model;
  core_hero_cpp_CHero_reset_FUN_004d02e0(param_1);
  param_1[1].base.base.orient_matrix.m[2].x = 0.0;
  param_1[1].base.base.orient_matrix.m[2].y = 0.0;
  param_1[1].base.base.health = 0;
  (param_1->base).layer_action_index = 0;
  (param_1->base).layer_action_t = 0.0;
  core_motion_cpp_CMotionController_jumpToMotionByName_FUN_00503950
            (&this_ptr->base,"stand",0.0);
  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&this_ptr->base,0,1);
  return;
}
