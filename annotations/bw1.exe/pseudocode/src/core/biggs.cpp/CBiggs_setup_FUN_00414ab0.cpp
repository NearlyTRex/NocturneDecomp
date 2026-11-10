// Name: core_biggs.cpp_CBiggs_setup_FUN_00414ab0
// Address: 00414ab0
// Address Range: [[00414ab0, 00414b27]]
// Convention: __cdecl
// Signature: void __cdecl core_biggs_cpp_CBiggs_setup_FUN_00414ab0(CBiggs *this_ptr)

#include "nocturne.h"

void __cdecl core_biggs_cpp_CBiggs_setup_FUN_00414ab0(CBiggs *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  byte *this_ptr_01;
  CKeyFramedModel *model_ptr;
  int frame_index;
  
  core_enemy_cpp_CEnemy_setup_FUN_004a0510(&this_ptr->base);
  this_ptr_00 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_00569b20(this_ptr_00);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_004688e0(&this_ptr->model);
  this_ptr_01 = &this_ptr->field_0xc3ec;
  core_morph_cpp_CMorph_setupModelFromDeformable_FUN_005230c0((CMorph *)this_ptr_01,0,this_ptr_00);
  frame_index = 0;
  model_ptr = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900(&this_ptr->model);
  core_morph_cpp_CMorph_setupModelFromKeyframed_FUN_00523100
            ((CMorph *)this_ptr_01,1,model_ptr,frame_index);
  core_morph_cpp_CMorph_getReady_FUN_00523310((CMorph *)this_ptr_01);
  this_ptr->morphing = 0;
  this_ptr->morph_timer = 0.0;
  return;
}
