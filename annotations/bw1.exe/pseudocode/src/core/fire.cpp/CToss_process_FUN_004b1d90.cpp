// Name: core_fire.cpp_CToss_process_FUN_004b1d90
// Address: 004b1d90
// Address Range: [[004b1d90, 004b1f0d]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CToss_process_FUN_004b1d90(CToss *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CToss_process_FUN_004b1d90(CToss *this_ptr)

{
  CBox *this_ptr_00;
  float fVar1;
  CKeyFramedModel *pCVar2;
  byte bVar3;
  float afStackY_1034 [1010];
  CKeyFramedModelInstance *this_ptr_01;
  float local_4c;
  float local_48;
  float local_44;
  CVector3f local_40;
  CVector3f local_34;
  float local_28;
  float afStack_24 [4];
  float local_14;
  float local_10;
  
  bVar3 = 0;
  if (0.0 < this_ptr->fuse_timer) {
    local_10 = g_CGamePtr->delta_time_float;
    fVar1 = this_ptr->fuse_timer - local_10;
    this_ptr_00 = &this_ptr->physics_box;
    this_ptr->fuse_timer = fVar1;
    if (0.0 < fVar1) {
      core_box_cpp_CBox_process_FUN_0041e0d0(this_ptr_00,local_10);
      if (this_ptr->toss_type != 0) {
        return;
      }
      this_ptr_01 = &this_ptr->model;
      local_40.x = _DAT_02c8af28;
      *(uint *)((int)&local_40 + (uint)bVar3 * -8 + 4) =
           *(uint *)(&DAT_02c8af2c + (uint)bVar3 * -8);
      *(uint *)((int)&local_40 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
           *(uint *)(&DAT_02c8af30 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
      pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900(this_ptr_01);
      local_40.z = local_40.z + (pCVar2->bounds).max.z;
      core_dirmat_cpp_FUN_0045f690(&(this_ptr->physics_box).rotation_matrix,&local_40);
      afStack_24[2] = local_28;
      afStack_24[(uint)bVar3 * -2 + 3] = afStack_24[(uint)bVar3 * -2];
      afStack_24[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4] =
           afStack_24[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
      local_4c = (this_ptr_00->position).x + afStack_24[2];
      local_48 = (this_ptr->physics_box).position.y + afStack_24[3];
      local_44 = (this_ptr->physics_box).position.z + local_14;
      local_34.x = local_4c;
      *(uint *)((int)&local_34 + (uint)bVar3 * -8 + 4) =
           *(uint *)((int)&stack0xffffffb8 + (uint)bVar3 * -8);
      *(uint *)((int)&local_34 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
           *(uint *)((int)&stack0xffffffbc + (uint)bVar3 * -8 + (uint)bVar3 * -8);
      if (&local_40 != &local_34) {
        local_40.x = local_34.x;
        local_40.y = local_34.y;
        local_40.z = local_34.z;
      }
      core_fire_cpp_CFireEffect_createSpark_FUN_004b59e0
                (0x01C57074,&local_40,(CVector3f *)0x0,0x20000,0x10000,0,0xffff);
      return;
    }
    if (this_ptr->toss_type == 0) {
      core_fire_cpp_CFireEffect_createExplosion_FUN_004b6c60
                (0x01C57074,&this_ptr_00->position,16.0,100.0,4.0);
      sound_sndmain_cpp_killSfx_FUN_00573a80(this_ptr->sfx_handle);
      return;
    }
  }
  return;
}
