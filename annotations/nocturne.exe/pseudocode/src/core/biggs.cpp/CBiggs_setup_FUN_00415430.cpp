// Name: core_biggs.cpp_CBiggs_setup_FUN_00415430
// Address: 00415430
// Address Range: [[00415430, 004154a7]]
// Convention: unknown
// Signature: void core_biggs_cpp_CBiggs_setup_FUN_00415430(CEnemy *param_1)

#include "nocturne.h"

void core_biggs_cpp_CBiggs_setup_FUN_00415430(CEnemy *param_1)

{
  CDeformableModelInstance *this_ptr;
  CMorph *this_ptr_00;
  CCharacter *pCVar1;
  CKeyFramedModel *model_ptr;
  int frame_index;
  
  core_enemy_cpp_CEnemy_setup_FUN_004796b0(param_1);
  this_ptr = &(param_1->base).model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_0051dcd0(this_ptr);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00454510
            ((CKeyFramedModelInstance *)(param_1 + 1));
  this_ptr_00 = (CMorph *)(param_1[1].base.model.motion_controller.current_motion_name + 4);
  core_morph_cpp_CMorph_setupModelFromDeformable_FUN_004e0170(this_ptr_00,0,this_ptr);
  frame_index = 0;
  model_ptr = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
                        ((CKeyFramedModelInstance *)(param_1 + 1));
  core_morph_cpp_CMorph_setupModelFromKeyframed_FUN_004e01b0(this_ptr_00,1,model_ptr,frame_index);
  core_morph_cpp_CMorph_getReady_FUN_004e03c0(this_ptr_00);
  param_1[1].base.model.motion_controller.in_transition = (SMotionTransition *)0x0;
  pCVar1 = &param_1[1].base;
  (pCVar1->model).motion_controller.current_motion_name[0] = '\0';
  (pCVar1->model).motion_controller.current_motion_name[1] = '\0';
  (pCVar1->model).motion_controller.current_motion_name[2] = '\0';
  (pCVar1->model).motion_controller.current_motion_name[3] = '\0';
  return;
}
