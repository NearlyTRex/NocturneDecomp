// Name: core_fire.cpp_CToss_create_FUN_004b1c50
// Address: 004b1c50
// Address Range: [[004b1c50, 004b1d80]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CToss_create_FUN_004b1c50(CToss *this_ptr,int toss_type,CVector3f *position,UOrientationVector *orientation,CVector3f *velocity,float fuse_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CToss_create_FUN_004b1c50(CToss *this_ptr,int toss_type,CVector3f *position,UOrientationVector *orientation,CVector3f *velocity,float fuse_time)

{
  CKeyFramedModel *pCVar1;
  byte bVar2;
  float afStackY_1020 [1013];
  float volume;
  float local_38;
  float local_34;
  float local_30;
  CVector3f local_2c;
  CVector3f local_20;
  float local_14;
  
  bVar2 = 0;
  this_ptr->toss_type = toss_type;
  this_ptr->fuse_timer = fuse_time;
  this_ptr->sfx_handle = 0;
  if (this_ptr->toss_type == 0) {
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
              (&this_ptr->model,"@\\@dynamitestick.kfm" + 3);
    local_14 = 1.0;
  }
  else {
    _DAT_01d1d400 = "..\\core\\fire.cpp";
    _DAT_01d1d404 = 0xd76;
    core_main_c_FUN_005030e0("CToss::create - invalid toss type.");
  }
  if (this_ptr->fuse_timer <= 0.0) {
    this_ptr->fuse_timer = 5.0;
  }
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_004688e0(&this_ptr->model);
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900(&this_ptr->model);
  volume = local_14;
  local_38 = (pCVar1->bounds).max.x - (pCVar1->bounds).min.x;
  local_34 = (pCVar1->bounds).max.y - (pCVar1->bounds).min.y;
  local_30 = (pCVar1->bounds).max.z - (pCVar1->bounds).min.z;
  local_2c.x = local_38;
  *(uint *)((int)&local_2c + (uint)bVar2 * -8 + 4) =
       *(uint *)((int)&stack0xffffffcc + (uint)bVar2 * -8);
  *(uint *)((int)&local_2c + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
       *(uint *)((int)&stack0xffffffd0 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  core_box_cpp_CBox_setupCorners_FUN_0041dac0
            (&this_ptr->physics_box,position,&orientation->vec,&local_2c,volume);
  local_20.z = 0.0;
  local_20.y = 0.0;
  local_20.x = 9.424778;
  core_box_cpp_CBox_setupVelocities_FUN_00420450(&this_ptr->physics_box,velocity,&local_20);
  return;
}
