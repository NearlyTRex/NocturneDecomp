// Name: core_fire.cpp_CToss_create_FUN_004873b0
// Address: 004873b0
// Address Range: [[004873b0, 004874cf]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CToss_create_FUN_004873b0(CToss *this_ptr,int toss_type,CVector3f *position,UOrientationVector *orientation,CVector3f *velocity,float fuse_time)

#include "nocturne.h"

void __cdecl core_fire_cpp_CToss_create_FUN_004873b0(CToss *this_ptr,int toss_type,CVector3f *position,UOrientationVector *orientation,CVector3f *velocity,float fuse_time)

{
  CKeyFramedModel *pCVar1;
  CVector3f local_2c;
  CVector3f local_20;
  float local_14;
  
  this_ptr->toss_type = toss_type;
  this_ptr->fuse_timer = fuse_time;
  this_ptr->sfx_handle = 0;
  if (this_ptr->toss_type == 0) {
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
              (&this_ptr->model,"dynamitestick.kfm");
    local_14 = 1.0;
  }
  else {
    PTR_01cc4800 = "..\\core\\fire.cpp";
    INT_01cc4804 = 0xb96;
    core_main_c_FUN_004c8440("CToss::create - invalid toss type.");
  }
  if (this_ptr->fuse_timer <= 0.0) {
    this_ptr->fuse_timer = 5.0;
  }
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00454510(&this_ptr->model);
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(&this_ptr->model);
  local_2c.x = *(float *)(pCVar1->texture_list[7].textures[1].texture_name + 8) -
               (float)pCVar1->texture_list[7].textures[1].base.count;
  local_2c.y = *(float *)(pCVar1->texture_list[7].textures[1].texture_name + 0xc) -
               *(float *)pCVar1->texture_list[7].textures[1].texture_name;
  local_2c.z = (float)pCVar1->texture_list[7].textures[2].base.type -
               *(float *)(pCVar1->texture_list[7].textures[1].texture_name + 4);
  core_box_cpp_CBox_setupCorners_FUN_0041a6e0
            (&this_ptr->physics_box,position,&orientation->vec,&local_2c,local_14);
  local_20.z = 0.0;
  local_20.y = 0.0;
  local_20.x = 9.424778;
  core_box_cpp_CBox_setupVelocities_FUN_0041cb40(&this_ptr->physics_box,velocity,&local_20);
  return;
}
