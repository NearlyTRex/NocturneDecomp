// Name: core_fire.cpp_FUN_0049d090
// Address: 0049d090
// Address Range: [[0049d090, 0049d4fd]]
// Convention: unknown
// Signature: uint core_fire_cpp_FUN_0049d090(CDemonActor *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_fire_cpp_FUN_0049d090(CDemonActor *param_1)

{
  float fVar1;
  uint uVar2;
  CKeyFramedModel *pCVar3;
  uint extraout_EAX;
  float *pfVar4;
  int iVar5;
  byte bVar6;
  float afStackY_1070 [1011];
  CKeyFramedModelInstance *this_ptr;
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
  fVar1 = param_1[2].previous_transform_state.position.x;
  uVar2 = (uint)(ushort)((ushort)(0.0 < fVar1) << 8 | (ushort)NAN(fVar1) << 10 |
                        (ushort)(fVar1 == 0.0) << 0xe);
  if (0.0 < fVar1) {
    local_1c = g_CGamePtr->delta_time_float;
    fVar1 = param_1[2].previous_transform_state.position.x - local_1c;
    param_1[2].previous_transform_state.position.x = fVar1;
    local_18 = local_1c;
    if (0.0 < fVar1) {
      if (local_54 + 2 != (float *)&param_1[1].validation_magic) {
        local_54[2] = (float)param_1[1].validation_magic;
        local_54[3] = (float)param_1[1].direction_hint;
        local_44 = (float)param_1[1].lifecycle_state;
      }
      core_box_cpp_CBox_process_FUN_0041b410((CBox *)&param_1[1].location.position.z,local_1c);
      local_3c[2] = local_54[2] - (float)param_1[1].validation_magic;
      local_3c[3] = local_54[3] - (float)param_1[1].direction_hint;
      local_2c = local_44 - (float)param_1[1].lifecycle_state;
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
          (local_54[3] < (float)param_1[1].direction_hint)) &&
         ((float)_DAT_005c0760 <
          param_1[2].previous_transform_state.position.y -
          param_1[2].previous_transform_state.position.x)) {
        iVar5 = *(int *)param_1->actor_name;
        pfVar4 = &param_1[1].location.position.z;
        if (iVar5 == 1) {
          core_fire_cpp_CFireEffect_createRing_FUN_004a3f70(0x01C73654,pfVar4,1,0);
          core_sound_cpp_CSound_playActorSound_FUN_005609d0
                    (0x02CF5680,param_1,"wp_bindevil.wav",(CVector3f *)pfVar4);
          param_1[2].previous_transform_state.position.x = 0.0;
        }
        else if (iVar5 == 2) {
          core_fire_cpp_FUN_004a36e0(0x01C73654,pfVar4,0x41000000,0x42c80000,0x40800000,3);
          core_fire_cpp_FUN_0049cca0(pfVar4);
          param_1[2].previous_transform_state.position.x = 0.0;
        }
        else if (iVar5 == 3) {
          iVar5 = 0;
          core_fire_cpp_FUN_004a3fd0
                    (0x01C73654,param_1[1].location.position.z,param_1[1].location.area_id,
                     param_1[1].orient.vec.x);
          do {
            iVar5 = iVar5 + 1;
            core_fire_cpp_FUN_004a3f20(0x01C73654,pfVar4,0);
          } while (iVar5 < 0x10);
          param_1[2].previous_transform_state.position.x = 0.0;
        }
      }
      uVar2 = *(uint *)param_1->actor_name;
      if (((uVar2 != 0) && (1 < uVar2)) && (uVar2 != 2)) {
        return uVar2;
      }
      this_ptr = (CKeyFramedModelInstance *)(param_1->actor_name + 4);
      local_70.x = _DAT_02cfd900;
      *(uint *)((int)&local_70 + (uint)bVar6 * -8 + 4) =
           *(uint *)(&DAT_02cfd904 + (uint)bVar6 * -8);
      *(uint *)((int)&local_70 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
           *(uint *)(&DAT_02cfd908 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
      pCVar3 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0(this_ptr);
      local_70.z = local_70.z + (pCVar3->bounds).max.z;
      core_dirmat_cpp_FUN_0045b800(&param_1[1].orient_matrix.m[0].y,&local_70);
      local_58 = local_88;
      local_54[(uint)bVar6 * -2] = *(float *)(&stack0xffffff7c + (uint)bVar6 * -8);
      local_54[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
           *(float *)(&stack0xffffff80 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
      local_40 = param_1[1].location.position.z + local_58;
      local_3c[0] = (float)param_1[1].location.area_id + local_54[0];
      local_3c[1] = param_1[1].orient.vec.x + local_54[1];
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
      return extraout_EAX;
    }
    uVar2 = *(uint *)param_1->actor_name;
    switch(uVar2) {
    case 0:
      core_fire_cpp_FUN_004a36e0
                (0x01C73654,&param_1[1].location.position.z,0x41800000,0x42c80000,0x40800000,0);
      uVar2 = sound_sndmain_cpp_killSfx_FUN_00556be0
                        ((uint)param_1[2].previous_transform_state.position.z);
      break;
    case 1:
      pfVar4 = &param_1[1].location.position.z;
      core_fire_cpp_CFireEffect_createRing_FUN_004a3f70(0x01C73654,pfVar4,1,0);
      uVar2 = core_sound_cpp_CSound_playActorSound_FUN_005609d0
                        (0x02CF5680,param_1,"wp_bindevil.wav",(CVector3f *)pfVar4);
      return uVar2;
    case 2:
      pfVar4 = &param_1[1].location.position.z;
      core_fire_cpp_FUN_004a36e0(0x01C73654,pfVar4,0x41000000,0x42c80000,0x40800000,3);
      uVar2 = core_fire_cpp_FUN_0049cca0(pfVar4);
      return uVar2;
    case 3:
      core_fire_cpp_FUN_004a3fd0
                (0x01C73654,param_1[1].location.position.z,param_1[1].location.area_id,
                 param_1[1].orient.vec.x);
      iVar5 = 0;
      do {
        iVar5 = iVar5 + 1;
        uVar2 = core_fire_cpp_FUN_004a3f20(0x01C73654,&param_1[1].location.position.z,0);
      } while (iVar5 < 0x10);
      return uVar2;
    }
  }
  return uVar2;
}
