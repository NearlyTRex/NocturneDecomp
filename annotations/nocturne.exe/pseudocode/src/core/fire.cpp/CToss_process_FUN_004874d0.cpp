// Name: core_fire.cpp_CToss_process_FUN_004874d0
// Address: 004874d0
// Address Range: [[004874d0, 0048762b]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CToss_process_FUN_004874d0(CToss *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CToss_process_FUN_004874d0(CToss *this_ptr)

{
  CBox *this_ptr_00;
  float fVar1;
  CKeyFramedModel *pCVar2;
  CVector3f *pCVar3;
  CVector3f local_30;
  float local_24;
  float local_20;
  float local_1c;
  CVector3f local_18;
  float local_c;
  
  if (0.0 < this_ptr->fuse_timer) {
    local_c = g_CGame_PTR_005b9354->delta_time_float;
    fVar1 = this_ptr->fuse_timer - local_c;
    this_ptr_00 = &this_ptr->physics_box;
    this_ptr->fuse_timer = fVar1;
    if (0.0 < fVar1) {
      core_box_cpp_CBox_process_FUN_0041acb0(this_ptr_00,local_c);
      if (this_ptr->toss_type != 0) {
        return;
      }
      local_30.x = _DAT_02dd1184;
      local_30.y = _DAT_02dd1188;
      local_30.z = _DAT_02dd118c;
      pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(&this_ptr->model);
      local_30.z = local_30.z + (pCVar2->bounds).max.z;
      pCVar3 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0044da40
                         (&(this_ptr->physics_box).rotation_matrix,&local_18,&local_30);
      local_24 = (this_ptr_00->position).x + pCVar3->x;
      local_20 = (this_ptr->physics_box).position.y + pCVar3->y;
      local_1c = (this_ptr->physics_box).position.z + pCVar3->z;
      if (&local_30 != (CVector3f *)&local_24) {
        local_30.x = local_24;
        local_30.y = local_20;
        local_30.z = local_1c;
      }
      core_fire_cpp_CFireEffect_createSpark_FUN_0048ae90
                (g_CFireEffect_PTR_005b80f0,&local_30,(CVector3f *)0x0,0x20000,0x10000,0,0xffff);
      return;
    }
    if (this_ptr->toss_type == 0) {
      core_fire_cpp_FUN_0048c0d0(g_CFireEffect_PTR_005b80f0,&this_ptr_00->position,16.0,100.0,4.0);
      sound_sndmain_cpp_killSfx_FUN_00527230(this_ptr->sfx_handle);
      return;
    }
  }
  return;
}
