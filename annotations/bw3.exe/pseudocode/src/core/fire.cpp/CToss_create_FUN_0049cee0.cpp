// Name: core_fire.cpp_CToss_create_FUN_0049cee0
// Address: 0049cee0
// Address Range: [[0049cee0, 0049d07d]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CToss_create_FUN_0049cee0(CToss *this_ptr,int toss_type,CVector3f *position,UOrientationVector *orientation,CVector3f *velocity,float fuse_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CToss_create_FUN_0049cee0(CToss *this_ptr,int toss_type,CVector3f *position,UOrientationVector *orientation,CVector3f *velocity,float fuse_time)

{
  CKeyFramedModel *pCVar1;
  byte bVar2;
  float afStackY_1020 [1013];
  CBox *this_ptr_00;
  CVector3f *extents;
  float volume;
  CVector3f local_38;
  CVector3f local_2c;
  float local_20;
  float local_1c [3];
  
  bVar2 = 0;
  this_ptr->toss_type = toss_type;
  this_ptr->fuse_timer = fuse_time;
  this_ptr->sfx_handle = 0;
  switch(this_ptr->toss_type) {
  case 0:
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
              (&this_ptr->model,"dynamitestick.kfm");
    local_1c[2] = 1.0;
    break;
  case 1:
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
              (&this_ptr->model,"bindingstone.kfm");
    local_1c[2] = 1.0;
    break;
  case 2:
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
              (&this_ptr->model,"scarabstone.kfm");
    local_1c[2] = 1.0;
    break;
  case 3:
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
              (&this_ptr->model,"rainvial.kfm");
    local_1c[2] = 1.0;
    break;
  default:
    _DAT_01d71de0 = "..\\core\\fire.cpp";
    _DAT_01d71de4 = 0xe59;
    core_main_c_FUN_004e4330("CToss::create - invalid toss type.");
  }
  extents = &local_38;
  if (this_ptr->fuse_timer <= 0.0) {
    this_ptr->fuse_timer = 5.0;
  }
  this_ptr->fuse_time = this_ptr->fuse_timer;
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00462580(&this_ptr->model);
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0(&this_ptr->model);
  volume = local_1c[2];
  local_20 = (pCVar1->bounds).max.x - (pCVar1->bounds).min.x;
  local_1c[0] = (pCVar1->bounds).max.y - (pCVar1->bounds).min.y;
  local_1c[1] = (pCVar1->bounds).max.z - (pCVar1->bounds).min.z;
  local_38.x = local_20;
  *(float *)((int)&local_38 + (uint)bVar2 * -8 + 4) = local_1c[(uint)bVar2 * -2];
  this_ptr_00 = &this_ptr->physics_box;
  *(float *)((int)&local_38 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
       local_1c[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
  core_box_cpp_CBox_setupCorners_FUN_0041ae00(this_ptr_00,position,&orientation->vec,extents,volume)
  ;
  local_2c.z = 0.0;
  local_2c.y = 0.0;
  local_2c.x = 9.424778;
  core_box_cpp_CBox_setupVelocities_FUN_0041d790(&this_ptr->physics_box,velocity,&local_2c);
  return;
}
