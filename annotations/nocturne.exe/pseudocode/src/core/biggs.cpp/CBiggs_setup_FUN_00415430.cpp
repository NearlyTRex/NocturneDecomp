// Name: core_biggs.cpp_CBiggs_setup_FUN_00415430
// Address: 00415430
// Address Range: [[00415430, 004154a7]]
// Convention: __cdecl
// Signature: void __cdecl core_biggs_cpp_CBiggs_setup_FUN_00415430(CBiggs *this_ptr)

#include "nocturne.h"

void __cdecl core_biggs_cpp_CBiggs_setup_FUN_00415430(CBiggs *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  CMorph *this_ptr_01;
  CKeyFramedModel *model_ptr;
  int frame_index;
  
  core_enemy_cpp_CEnemy_setup_FUN_004796b0(&this_ptr->base);
  this_ptr_00 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_0051dcd0(this_ptr_00);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00454510(&this_ptr->model);
  this_ptr_01 = &this_ptr->morph;
  core_morph_cpp_CMorph_setupModelFromDeformable_FUN_004e0170(this_ptr_01,0,this_ptr_00);
  frame_index = 0;
  model_ptr = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(&this_ptr->model);
  core_morph_cpp_CMorph_setupModelFromKeyframed_FUN_004e01b0(this_ptr_01,1,model_ptr,frame_index);
  core_morph_cpp_CMorph_getReady_FUN_004e03c0(this_ptr_01);
  this_ptr->morphing = 0;
  this_ptr->morph_timer = 0.0;
  return;
}
