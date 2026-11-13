// Name: core_fire.cpp_CToss_process_FUN_0049d090
// Address: 0049d090
// Address Range: [[0049d090, 0049d4fd]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CToss_process_FUN_0049d090(CToss *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CToss_process_FUN_0049d090(CToss *this_ptr)

{
  uint uVar1;
  float fVar2;
  CKeyFramedModel *pCVar3;
  CVector3f *pCVar4;
  int iVar5;
  CBox *position;
  byte bVar6;
  float afStackY_1070 [1011];
  CKeyFramedModelInstance *this_ptr_00;
  float local_88;
  float local_7c;
  uint local_78;
  float local_74;
  CVector3f local_70;
  CVector3f local_64;
  float local_58;
  float local_54 [4];
  float local_44;
  float local_40;
  float local_3c [4];
  float local_2c;
  float local_28 [2];
  float local_20;
  float local_1c;
  float local_18;
  
  bVar6 = 0;
  if (0.0 < this_ptr->fuse_timer) {
    local_1c = g_CGamePtr->delta_time_float;
    fVar2 = this_ptr->fuse_timer - local_1c;
    this_ptr->fuse_timer = fVar2;
    local_18 = local_1c;
    if (0.0 < fVar2) {
      pCVar4 = &(this_ptr->physics_box).linear_velocity;
      if ((CVector3f *)(local_54 + 2) != pCVar4) {
        local_54[2] = pCVar4->x;
        local_54[3] = (this_ptr->physics_box).linear_velocity.y;
        local_44 = (this_ptr->physics_box).linear_velocity.z;
      }
      core_box_cpp_CBox_process_FUN_0041b410(&this_ptr->physics_box,local_1c);
      local_3c[2] = local_54[2] - (this_ptr->physics_box).linear_velocity.x;
      local_3c[3] = local_54[3] - (this_ptr->physics_box).linear_velocity.y;
      local_2c = local_44 - (this_ptr->physics_box).linear_velocity.z;
      local_28[0] = local_3c[2];
      local_3c[(uint)bVar6 * -2 + 6] = local_3c[(uint)bVar6 * -2 + 3];
      local_3c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7] =
           local_3c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
      if (&stack0xffffff84 != local_3c + 5) {
        local_7c = local_28[0];
        local_74 = local_20;
      }
      local_78 = 0;
      if (((0.0 < SQRT(local_74 * local_74 + local_7c * local_7c)) ||
          (local_54[3] < (this_ptr->physics_box).linear_velocity.y)) &&
         ((float)_DAT_005c0760 < this_ptr->fuse_time - this_ptr->fuse_timer)) {
        iVar5 = this_ptr->toss_type;
        position = &this_ptr->physics_box;
        if (iVar5 == 1) {
          core_fire_cpp_CFireEffect_createRing_FUN_004a3f70(0x01C73654,position,1,0);
          core_sound_cpp_CSound_playActorSound_FUN_005609d0
                    (0x02CF5680,(CDemonActor *)this_ptr,"wp_bindevil.wav",
                     &position->position);
          this_ptr->fuse_timer = 0.0;
        }
        else if (iVar5 == 2) {
          core_fire_cpp_CFireEffect_createExplosion_FUN_004a36e0
                    (0x01C73654,&position->position,8.0,100.0,4.0,3);
          core_fire_cpp_spawnDiseaseBugs_FUN_0049cca0(&position->position);
          this_ptr->fuse_timer = 0.0;
        }
        else if (iVar5 == 3) {
          iVar5 = 0;
          core_fire_cpp_CFireEffect_createStormEffect_FUN_004a3fd0
                    (0x01C73654,(this_ptr->physics_box).position);
          do {
            iVar5 = iVar5 + 1;
            core_fire_cpp_CFireEffect_createRainDrop_FUN_004a3f20
                      (0x01C73654,&position->position,(CVector3f *)0x0);
          } while (iVar5 < 0x10);
          this_ptr->fuse_timer = 0.0;
        }
      }
      uVar1 = this_ptr->toss_type;
      if (((uVar1 != 0) && (1 < uVar1)) && (uVar1 != 2)) {
        return;
      }
      this_ptr_00 = &this_ptr->model;
      local_70.x = _DAT_02cfd900;
      *(uint *)((int)&local_70 + (uint)bVar6 * -8 + 4) =
           *(uint *)(&DAT_02cfd904 + (uint)bVar6 * -8);
      *(uint *)((int)&local_70 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
           *(uint *)(&DAT_02cfd908 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
      pCVar3 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0(this_ptr_00);
      local_70.z = local_70.z + (pCVar3->bounds).max.z;
      core_dirmat_cpp_FUN_0045b800(&(this_ptr->physics_box).rotation_matrix,&local_70);
      local_58 = local_88;
      local_54[(uint)bVar6 * -2] = *(float *)(&stack0xffffff7c + (uint)bVar6 * -8);
      local_54[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
           *(float *)(&stack0xffffff80 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
      local_40 = (this_ptr->physics_box).position.x + local_58;
      local_3c[0] = (this_ptr->physics_box).position.y + local_54[0];
      local_3c[1] = (this_ptr->physics_box).position.z + local_54[1];
      local_64.x = local_40;
      *(float *)((int)&local_64 + (uint)bVar6 * -8 + 4) = local_3c[(uint)bVar6 * -2];
      *(float *)((int)&local_64 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
           local_3c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
      if (&local_70 != &local_64) {
        local_70.x = local_64.x;
        local_70.y = local_64.y;
        local_70.z = local_64.z;
      }
      core_fire_cpp_CFireEffect_createSpark_FUN_004a23c0
                (0x01C73654,&local_70,(CVector3f *)0x0,0x20000,0x10000,0,0xffff);
      return;
    }
    switch(this_ptr->toss_type) {
    case 0:
      core_fire_cpp_CFireEffect_createExplosion_FUN_004a36e0
                (0x01C73654,&(this_ptr->physics_box).position,16.0,100.0,4.0,0);
      sound_sndmain_cpp_killSfx_FUN_00556be0(this_ptr->sfx_handle);
      break;
    case 1:
      core_fire_cpp_CFireEffect_createRing_FUN_004a3f70(0x01C73654,&this_ptr->physics_box,1,0);
      core_sound_cpp_CSound_playActorSound_FUN_005609d0
                (0x02CF5680,(CDemonActor *)this_ptr,"wp_bindevil.wav",
                 &(this_ptr->physics_box).position);
      return;
    case 2:
      core_fire_cpp_CFireEffect_createExplosion_FUN_004a36e0
                (0x01C73654,&(this_ptr->physics_box).position,8.0,100.0,4.0,3);
      core_fire_cpp_spawnDiseaseBugs_FUN_0049cca0(&(this_ptr->physics_box).position);
      return;
    case 3:
      core_fire_cpp_CFireEffect_createStormEffect_FUN_004a3fd0
                (0x01C73654,(this_ptr->physics_box).position);
      iVar5 = 0;
      do {
        iVar5 = iVar5 + 1;
        core_fire_cpp_CFireEffect_createRainDrop_FUN_004a3f20
                  (0x01C73654,&(this_ptr->physics_box).position,(CVector3f *)0x0);
      } while (iVar5 < 0x10);
      return;
    }
  }
  return;
}
