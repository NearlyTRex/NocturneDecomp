// Name: core_fire.cpp_CToss_create_FUN_004c3ee0
// Address: 004c3ee0
// Address Range: [[004c3ee0, 004c3fff]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CToss_create_FUN_004c3ee0(CToss *this_ptr,int toss_type,CVector3f *position,UOrientationVector *orientation,CVector3f *velocity,float fuse_time)

#include "nocturne.h"

void __cdecl core_fire_cpp_CToss_create_FUN_004c3ee0(CToss *this_ptr,int toss_type,CVector3f *position,UOrientationVector *orientation,CVector3f *velocity,float fuse_time)

{
  CKeyFramedModel *pCVar1;
  CVector3f local_2c;
  CVector3f local_20;
  float local_14;
  
  this_ptr->toss_type = toss_type;
  this_ptr->fuse_timer = fuse_time;
  this_ptr->sfx_handle = 0;
  if (this_ptr->toss_type == 0) {
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
              (&this_ptr->model,"dynamitestick.kfm");
    local_14 = 1.0;
  }
  else {
    g_CurrentFilename = "..\\core\\fire.cpp";
    g_CurrentLineNumber = 2978;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CToss::create - invalid toss type.");
  }
  if (this_ptr->fuse_timer <= 0.0) {
    this_ptr->fuse_timer = 5.0;
  }
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(&this_ptr->model);
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(&this_ptr->model);
  local_2c.x = (pCVar1->bounds).max.x - (pCVar1->bounds).min.x;
  local_2c.y = (pCVar1->bounds).max.y - (pCVar1->bounds).min.y;
  local_2c.z = (pCVar1->bounds).max.z - (pCVar1->bounds).min.z;
  core_box_cpp_CBox_setupCorners_FUN_0041dd20
            (&this_ptr->physics_box,position,&orientation->vec,&local_2c,local_14);
  local_20.z = 0.0;
  local_20.y = 0.0;
  local_20.x = 9.424778;
  core_box_cpp_CBox_setupVelocities_FUN_00420180(&this_ptr->physics_box,velocity,&local_20);
  return;
}
