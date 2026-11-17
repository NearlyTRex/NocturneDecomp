// Name: core_sound.cpp_CSound_process_FUN_0055ff40
// Address: 0055ff40
// Address Range: [[0055ff40, 005607c0]]
// Convention: __cdecl
// Signature: void __cdecl core_sound_cpp_CSound_process_FUN_0055ff40(CSound *this_ptr)

#include "nocturne.h"

void __cdecl core_sound_cpp_CSound_process_FUN_0055ff40(CSound *this_ptr)

{
  char cVar1;
  float fVar2;
  STrainNoise *pSVar3;
  int iVar4;
  uint uVar5;
  STrainNoise *pSVar6;
  uint *puVar7;
  char *pcVar8;
  char *pcVar9;
  byte bVar10;
  float afStackY_106c [960];
  CVector3f *end_pos;
  float local_158;
  float local_154;
  float local_150;
  char local_14c [100];
  char local_e8 [100];
  float local_84;
  float local_80 [4];
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  CVector3f local_60;
  CVector3f local_54;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  STrainNoise *local_28;
  float local_24;
  int local_20;
  int local_1c;
  float local_18;
  
  bVar10 = 0;
  local_48 = g_CGamePtr->delta_time_float;
  local_2c = local_48 * (float)0.5;
  local_3c = local_48;
  core_sound_cpp_updateListeners_FUN_0055e8b0();
  local_40 = -local_2c;
  local_30 = g_FLOAT_02cf5698 - g_FLOAT_02cf569c;
  if (local_30 < local_40) {
    local_30 = local_40;
  }
  if (local_2c < local_30) {
    local_30 = local_2c;
  }
  g_FLOAT_02cf569c = g_FLOAT_02cf569c + local_30;
  if (g_FLOAT_02cf569c <= (float)0.001) {
    core_sound_cpp_CSound_killSound_FUN_00560b00(this_ptr,g_UINT_02cf5684);
    g_FLOAT_02cf569c = 0.0;
  }
  else {
    iVar4 = core_sound_cpp_CSound_isSoundPlaying_FUN_00560af0(this_ptr,g_UINT_02cf5684);
    if (iVar4 == 0) {
      g_UINT_02cf5684 = sound_sndmain_cpp_startSfx_FUN_00556240("wind-ctl.wav");
    }
    sound_sndmain_cpp_setSfxVolume_FUN_00556ab0(g_UINT_02cf5684,g_FLOAT_02cf569c);
  }
  local_150 = 0.0;
  if (((0.0 < g_CWaterPtr->visible_area_sqft) &&
      (iVar4 = _strnicmp
                         (g_CDemonSetPtr->geometry_filename,"NDUN",4), iVar4 == 0)) &&
     (local_150 = SQRT(g_CWaterPtr->visible_area_sqft) * (float)0.027777777777777801 +
                  (float)0.20000000000000001, (float)0.69999999999999996 < local_150)) {
    local_150 = 0.7;
  }
  local_44 = -local_2c;
  local_34 = local_150 - g_FLOAT_02cf56a0;
  if (local_34 < local_44) {
    local_34 = local_44;
  }
  if (local_2c < local_34) {
    local_34 = local_2c;
  }
  g_FLOAT_02cf56a0 = g_FLOAT_02cf56a0 + local_34;
  if (g_FLOAT_02cf56a0 <= (float)0.001) {
    core_sound_cpp_CSound_killSound_FUN_00560b00(this_ptr,g_UINT_02cf5688);
    g_FLOAT_02cf56a0 = 0.0;
  }
  else {
    iVar4 = core_sound_cpp_CSound_isSoundPlaying_FUN_00560af0(this_ptr,g_UINT_02cf5688);
    if (iVar4 == 0) {
      g_UINT_02cf5688 = sound_sndmain_cpp_startSfx_FUN_00556240("water-2.wav");
    }
    sound_sndmain_cpp_setSfxVolume_FUN_00556ab0(g_UINT_02cf5688,g_FLOAT_02cf56a0);
  }
  if (g_FLOAT_02cf5ed0 <= local_3c) {
    g_FLOAT_02cf5ec8 = g_FLOAT_02cf5ecc;
    g_FLOAT_02cf5ed0 = 0.0;
  }
  else {
    fVar2 = local_3c / g_FLOAT_02cf5ed0;
    g_FLOAT_02cf5ed0 = g_FLOAT_02cf5ed0 - local_3c;
    g_FLOAT_02cf5ec8 = fVar2 * (g_FLOAT_02cf5ecc - g_FLOAT_02cf5ec8) + g_FLOAT_02cf5ec8;
  }
  iVar4 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_00556e30(0);
  if (iVar4 == 0) {
    sound_sndmain_cpp_enableSfxChannel_FUN_00556db0(3,0);
  }
  else {
    sound_sndmain_cpp_enableSfxChannel_FUN_00556db0(3,1);
    local_18 = sound_sndmain_cpp_getSfxChannelVol_FUN_00556d20(0);
    sound_sndmain_cpp_setSfxChannelVol_FUN_00556c90(3,local_18 * g_FLOAT_02cf5ec8);
  }
  if (g_CDemonSetPtr->player_on_train != 0) {
    local_24 = g_CGamePtr->delta_time_float;
    if (g_CGamePtr->goggles_active == 0) {
      if (g_INT_02cf5f84 != g_CDemonSetPtr->selected_camera_index) {
        core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
        core_setcolid_cpp_CDemonSet_disableIgnore_FUN_0053ec70(g_CDemonSetPtr);
        local_54.x = g_FLOAT_02cf568c;
        *(float *)((int)&local_54 + (uint)bVar10 * -8 + 4) = (&g_FLOAT_02cf5690)[(uint)bVar10 * -2];
        *(float *)((int)&local_54 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
             (&g_FLOAT_02cf5694)[(uint)bVar10 * -2 + (uint)bVar10 * -2];
        local_80[2] = local_54.x;
        local_70 = local_54.z;
        end_pos = &local_60;
        local_80[3] = local_54.y + 20.0f;
        local_60.x = local_54.x;
        *(float *)((int)&local_60 + (uint)bVar10 * -8 + 4) = local_80[(uint)bVar10 * -2 + 3];
        *(float *)((int)&local_60 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
             local_80[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
        iVar4 = core_setcolid_cpp_CDemonSet_testLineOcclusion_FUN_0053cbf0
                          (g_CDemonSetPtr,&local_54,end_pos);
        if (iVar4 == 0) {
          PTR_s_int_006045f0 = "ext";
        }
        else {
          PTR_s_int_006045f0 = "int";
        }
        core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
        g_INT_02cf5f84 = g_CDemonSetPtr->selected_camera_index;
      }
    }
    else {
      PTR_s_int_006045f0 = "ext";
      g_INT_02cf5f84 = -1;
    }
    sound_sndmain_cpp_pushSfxOptions_FUN_00555fd0();
    sound_sndmain_cpp_setNextSfxFlags_FUN_00555f00(1);
    sound_sndmain_cpp_setNextSfxChannel_FUN_00555e90(3);
    iVar4 = _stricmp(PTR_s_int_006045f0,"int");
    if (iVar4 == 0) {
      sound_sndmain_cpp_killSfx_FUN_00556be0(g_UINT_02cf5f8c);
      local_154 = 0.4;
    }
    else {
      local_154 = 0.7;
      iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700(g_UINT_02cf5f8c);
      if (iVar4 == 0) {
        sound_sndmain_cpp_pushSfxOptions_FUN_00555fd0();
        sound_sndmain_cpp_setNextSfxVolume_FUN_00555df0(0.4);
        g_UINT_02cf5f8c = sound_sndmain_cpp_startSfx_FUN_00556240("trainext.wav");
        sound_sndmain_cpp_popSfxOptions_FUN_00556050();
      }
    }
    iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700(g_UINT_02cf5f88);
    if (iVar4 == 0) {
      sound_sndmain_cpp_pushSfxOptions_FUN_00555fd0();
      sound_sndmain_cpp_setNextSfxVolume_FUN_00555df0(local_154 * (float)1.5);
      g_UINT_02cf5f88 = sound_sndmain_cpp_startSfx_FUN_00556240("railnoiz.wav");
      sound_sndmain_cpp_popSfxOptions_FUN_00556050();
    }
    else {
      iVar4 = _stricmp(PTR_s_x_006045f4,PTR_s_int_006045f0);
      if (iVar4 != 0) {
        sound_sndmain_cpp_setSfxVolume_FUN_00556ab0
                  (g_UINT_02cf5f88,local_154 * (float)1.5);
      }
    }
    sound_sndmain_cpp_popSfxOptions_FUN_00556050();
    pSVar6 = g_STrainNoise_ARRAY_02cf5ed4;
    PTR_s_x_006045f4 = PTR_s_int_006045f0;
    g_CVector3f_02cf5f74.x = 0.0;
    g_CVector3f_02cf5f74.y = 0.0;
    g_CVector3f_02cf5f74.z = 30.0;
    local_28 = (STrainNoise *)0x0;
    local_1c = 0;
    do {
      local_20 = local_1c * 0x10;
      iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700
                        (g_STrainNoise_ARRAY_02cf5ed4[local_1c].sfx_handle);
      pSVar3 = pSVar6;
      if (iVar4 != 0) {
        local_6c = g_CVector3f_02cf5f74.x * local_24;
        local_68 = g_CVector3f_02cf5f74.y * local_24;
        local_64 = g_CVector3f_02cf5f74.z * local_24;
        local_84 = g_CVector3f_02cf5f74.x * local_24;
        local_80[(uint)bVar10 * -2] = local_80[(uint)bVar10 * -2 + 6];
        local_80[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
             local_80[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7];
        (pSVar6->position).x = (pSVar6->position).x + local_84;
        (pSVar6->position).y = (pSVar6->position).y + local_80[0];
        (pSVar6->position).z = (pSVar6->position).z + local_80[1];
        pSVar3 = local_28;
        if ((float)510 <
            ABS(*(float *)((int)&g_STrainNoise_ARRAY_02cf5ed4[0].position.z + local_20))) {
          sound_sndmain_cpp_killSfx_FUN_00556be0
                    (*(uint *)((int)&g_STrainNoise_ARRAY_02cf5ed4[0].sfx_handle + local_20));
          pSVar3 = local_28;
        }
      }
      local_28 = pSVar3;
      local_1c = local_1c + 1;
      pSVar6 = pSVar6 + 1;
    } while (local_1c < 10);
    g_FLOAT_02cf5f80 = g_FLOAT_02cf5f80 - local_24;
    if ((g_FLOAT_02cf5f80 <= 0.0) && (local_28 != (STrainNoise *)0x0)) {
      g_FLOAT_02cf5f80 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(1.0,5.0);
      puVar7 = &DAT_00604818;
      pcVar9 = local_e8;
      local_18 = g_FLOAT_02cf5f80;
      for (iVar4 = 0x19; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(uint *)pcVar9 = *puVar7;
        puVar7 = puVar7 + (uint)bVar10 * -2 + 1;
        pcVar9 = pcVar9 + ((uint)bVar10 * -2 + 1) * 4;
      }
      local_38 = 20.0;
      local_158 = 1.0;
      iVar4 = rand();
      switch(iVar4 % 5) {
      case 0:
      case 1:
        local_158 = local_154 * (float)0.59999999999999998;
        local_38 = 25.0;
        _sprintf(local_e8,"rail?%s.wav");
        break;
      case 2:
      case 3:
        local_158 = local_154 * (float)0.80000000000000004;
        pcVar8 = "bump?.wav";
        pcVar9 = local_e8;
        local_38 = 20.0;
        do {
          cVar1 = *pcVar8;
          *pcVar9 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar8[1];
          pcVar8 = pcVar8 + 2;
          pcVar9[1] = cVar1;
          pcVar9 = pcVar9 + 2;
        } while (cVar1 != '\0');
        break;
      case 4:
        goto switchD_00560453_caseD_4;
      }
      (local_28->position).x = 0.0;
      local_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-3.0,2.0);
      fVar2 = local_18 * local_38 + g_FLOAT_02cf5694;
      (local_28->position).y = 0.0;
      (local_28->position).z = fVar2;
      sound_sndmain_cpp_pushSfxOptions_FUN_00555fd0();
      sound_sndmain_cpp_setNextSfxChannel_FUN_00555e90(3);
      sound_sndmain_cpp_setNextSfxTrackedVelocity1_FUN_00555d90(&g_CVector3f_02cf5f74);
      _sprintf(local_14c,"%s @ %g");
      uVar5 = core_sound_cpp_CSound_playTrackedActorSound_FUN_00560a00
                        (g_CSound_PTR_006045f8,(CDemonActor *)0x0,local_14c,&local_28->position);
      local_28->sfx_handle = uVar5;
      sound_sndmain_cpp_popSfxOptions_FUN_00556050();
    }
  }
switchD_00560453_caseD_4:
  sound_sndmain_cpp_pollAllStreams_FUN_0055a1b0(1);
  return;
}
