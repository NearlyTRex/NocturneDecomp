// Name: core_biggs.cpp_CBiggs_setup_FUN_00414dd0
// Address: 00414dd0
// Address Range: [[00414dd0, 00414e47]]
// Convention: __cdecl
// Signature: void __cdecl core_biggs_cpp_CBiggs_setup_FUN_00414dd0(CBiggs *this_ptr)

#include "nocturne.h"

void __cdecl core_biggs_cpp_CBiggs_setup_FUN_00414dd0(CBiggs *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  CMorph *this_ptr_01;
  CKeyFramedModel *model_ptr;
  int frame_index;
  
  core_enemy_cpp_CEnemy_setup_FUN_00487eb0(&this_ptr->base);
  this_ptr_00 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_00547480(this_ptr_00);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00(&this_ptr->model);
  this_ptr_01 = &this_ptr->morph;
  core_morph_cpp_CMorph_setupModelFromDeformable_FUN_005b6f80(this_ptr_01,0,this_ptr_00);
  frame_index = 0;
  model_ptr = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20(&this_ptr->model);
  core_morph_cpp_CMorph_setupModelFromKeyframed_FUN_005b6fc0(this_ptr_01,1,model_ptr,frame_index);
  core_morph_cpp_CMorph_getReady_FUN_005b71d0(this_ptr_01);
  this_ptr->morphing = 0;
  this_ptr->morph_timer = 0.0;
  return;
}
