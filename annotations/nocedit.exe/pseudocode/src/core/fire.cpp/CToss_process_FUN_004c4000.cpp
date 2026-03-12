// Name: core_fire.cpp_CToss_process_FUN_004c4000
// Address: 004c4000
// Address Range: [[004c4000, 004c415b]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CToss_process_FUN_004c4000(CToss *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CToss_process_FUN_004c4000(CToss *this_ptr)

{
  CBox *this_ptr_01;
  float delta_time;
  CKeyFramedModel *pCVar2;
  CVector3f *pCVar3;
  CVector3f local_30;
  float local_24;
  float local_20;
  float local_1c;
  CVector3f local_18;
  float local_c;
  CBox *this_ptr_00;
  float fVar1;
  
  if (0.0 < this_ptr->fuse_timer) {
    delta_time = g_CGamePtr->delta_time_float;
    fVar1 = this_ptr->fuse_timer - delta_time;
    this_ptr_01 = &this_ptr->physics_box;
    this_ptr->fuse_timer = fVar1;
    if (0.0 < fVar1) {
      core_box_cpp_CBox_process_FUN_0041e2f0(this_ptr_01,delta_time);
      if (this_ptr->toss_type != 0) {
        return;
      }
      local_30.x = g_ZeroVector.f.x;
      local_30.y = g_ZeroVector.f.y;
      local_30.z = g_ZeroVector.f.z;
      pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(&this_ptr->model);
      local_30.z = local_30.z + (pCVar2->bounds_max).z;
      pCVar3 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                         (&(this_ptr->physics_box).rotation_matrix,&local_18,&local_30);
      local_24 = (this_ptr_01->position).x + pCVar3->x;
      local_20 = (this_ptr->physics_box).position.y + pCVar3->y;
      local_1c = (this_ptr->physics_box).position.z + pCVar3->z;
      if (&local_30 != (CVector3f *)&local_24) {
        local_30.x = local_24;
        local_30.y = local_20;
        local_30.z = local_1c;
      }
      core_fire_cpp_CFireEffect_createSpark_FUN_004c79d0
                (g_CFireEffectPtr,&local_30,(CVector3f *)0x0,0x20000,0x10000,0,0xffff);
      return;
    }
    if (this_ptr->toss_type == 0) {
      core_fire_cpp_CFireEffect_createExplosion_FUN_004c8c10
                (g_CFireEffectPtr,&this_ptr_01->position,16.0,0x42c80000);
      sound_sndmain_cpp_killSfx_FUN_005a9c40(this_ptr->sfx_handle);
      return;
    }
  }
  return;
}
