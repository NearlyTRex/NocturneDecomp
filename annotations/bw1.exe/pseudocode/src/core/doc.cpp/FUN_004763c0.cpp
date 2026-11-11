// Name: core_doc.cpp_FUN_004763c0
// Address: 004763c0
// Address Range: [[004763c0, 00476424]]
// Convention: unknown
// Signature: void core_doc_cpp_FUN_004763c0(CHero *param_1)

#include "nocturne.h"

void core_doc_cpp_FUN_004763c0(CHero *param_1)

{
  CDeformableModelInstance *this_ptr;
  
  this_ptr = &(param_1->base).model;
  core_hero_cpp_CHero_reset_FUN_004ec570(param_1);
  param_1[1].base.base.orient_matrix.m[2].x = 0.0;
  param_1[1].base.base.orient_matrix.m[2].y = 0.0;
  param_1->action_pending = 0;
  (param_1->base).layer_action_index = 0;
  (param_1->base).layer_action_t = 0.0;
  core_motion_cpp_CMotionController_jumpToMotionByName_FUN_00524ae0
            (&this_ptr->base,"?stand" + 1,0.0);
  core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&this_ptr->base,0,1);
  return;
}
