// Name: core_sound.cpp_CSound_process_FUN_005b2fd0
// Address: 005b2fd0
// Address Range: [[005b2fd0, 005b382a]]
// Convention: __cdecl
// Signature: void __cdecl core_sound_cpp_CSound_process_FUN_005b2fd0(CSound *this_ptr)

#include "nocturne.h"

void __cdecl core_sound_cpp_CSound_process_FUN_005b2fd0(CSound *this_ptr)

{
  char cVar1;
  float fVar2;
  STrainNoise *pSVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  STrainNoise *pSVar7;
  char *pcVar8;
  char *pcVar9;
  byte bVar10;
  float local_140;
  float local_13c;
  float local_138;
  char local_134 [100];
  char local_d0 [100];
  uint local_6c;
  uint local_68;
  uint local_64;
  float local_60;
  float local_5c;
  float local_58;
  CVector3f local_54;
  CVector3f local_48;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  STrainNoise *local_1c;
  float local_18;
  float local_14;
  
  bVar10 = 0;
  local_3c = g_CGamePtr->delta_time_float;
  local_20 = local_3c * (float)0.5;
  local_30 = local_3c;
  core_sound_cpp_updateListeners_FUN_005b1870();
  local_38 = -local_20;
  local_24 = CVector3f_03f6af7c.x - CVector3f_03f6af7c.y;
  if (local_24 < local_38) {
    local_24 = local_38;
  }
  if (local_20 < local_24) {
    local_24 = local_20;
  }
  CVector3f_03f6af7c.y = CVector3f_03f6af7c.y + local_24;
  if (CVector3f_03f6af7c.y <= (float)0.001) {
    core_sound_cpp_CSound_killSound_FUN_005b3b90(this_ptr,g_WindSoundHandle);
    CVector3f_03f6af7c.y = 0.0;
  }
  else {
    iVar4 = core_sound_cpp_CSound_isSoundPlaying_FUN_005b3b80(this_ptr,g_WindSoundHandle);
    if (iVar4 == 0) {
      g_WindSoundHandle = sound_sndmain_cpp_startSfx_FUN_005a8e90("wind-ctl.wav");
    }
    sound_sndmain_cpp_setSfxVolume_FUN_005a9ae0(g_WindSoundHandle,CVector3f_03f6af7c.y);
  }
  local_138 = 0.0;
  if (((0.0 < g_CWaterPtr->visible_area_sqft) &&
      (iVar4 = _strnicmp
                         (g_CDemonSetPtr->geometry_filename,"NDUN",4), iVar4 == 0)) &&
     (local_138 = SQRT(g_CWaterPtr->visible_area_sqft) * (float)0.027777777777777801 +
                  (float)0.20000000000000001, (float)0.69999999999999996 < local_138)) {
    local_138 = 0.7;
  }
  local_34 = -local_20;
  local_28 = local_138 - CVector3f_03f6af7c.z;
  if (local_28 < local_34) {
    local_28 = local_34;
  }
  if (local_20 < local_28) {
    local_28 = local_20;
  }
  CVector3f_03f6af7c.z = CVector3f_03f6af7c.z + local_28;
  if (CVector3f_03f6af7c.z <= (float)0.001) {
    core_sound_cpp_CSound_killSound_FUN_005b3b90(this_ptr,g_WaterSoundHandle);
    CVector3f_03f6af7c.z = 0.0;
  }
  else {
    iVar4 = core_sound_cpp_CSound_isSoundPlaying_FUN_005b3b80(this_ptr,g_WaterSoundHandle);
    if (iVar4 == 0) {
      g_WaterSoundHandle = sound_sndmain_cpp_startSfx_FUN_005a8e90("water-2.wav");
    }
    sound_sndmain_cpp_setSfxVolume_FUN_005a9ae0(g_WaterSoundHandle,CVector3f_03f6af7c.z);
  }
  if (g_VolumeFadeTimeRemaining <= local_30) {
    g_CurrentVolumeMultiplier = g_TargetVolumeMultiplier;
    g_VolumeFadeTimeRemaining = 0.0;
  }
  else {
    fVar2 = local_30 / g_VolumeFadeTimeRemaining;
    g_VolumeFadeTimeRemaining = g_VolumeFadeTimeRemaining - local_30;
    g_CurrentVolumeMultiplier =
         fVar2 * (g_TargetVolumeMultiplier - g_CurrentVolumeMultiplier) + g_CurrentVolumeMultiplier;
  }
  iVar4 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005a9ea0(0);
  if (iVar4 == 0) {
    sound_sndmain_cpp_enableSfxChannel_FUN_005a9e20(3,0);
  }
  else {
    sound_sndmain_cpp_enableSfxChannel_FUN_005a9e20(3,1);
    local_14 = sound_sndmain_cpp_getSfxChannelVol_FUN_005a9d90(0);
    sound_sndmain_cpp_setSfxChannelVol_FUN_005a9cf0(3,local_14 * g_CurrentVolumeMultiplier);
  }
  if (g_CDemonSetPtr->player_on_train != 0) {
    local_18 = g_CGamePtr->delta_time_float;
    if (g_CGamePtr->block_auto_save == 0) {
      if (g_TrainLastCameraIndex != g_CDemonSetPtr->selected_camera_index) {
        core_setcolid_cpp_CDemonSet_init_FUN_00574180(g_CDemonSetPtr);
        core_setcolid_cpp_CDemonSet_disableIgnore_FUN_00574210(g_CDemonSetPtr);
        local_54.x = g_SoundListenerPrev.x;
        local_54.y = g_SoundListenerPrev.y;
        local_54.z = g_SoundListenerPrev.z;
        local_68 = 0x41a00000;
        local_48.x = g_SoundListenerPrev.x;
        local_6c = 0;
        local_48.z = g_SoundListenerPrev.z;
        local_64 = 0;
        local_48.y = g_SoundListenerPrev.y + 20.0f;
        iVar4 = core_setcolid_cpp_CDemonSet_testLineOcclusion_FUN_00572460
                          (g_CDemonSetPtr,&local_54,&local_48);
        if (iVar4 == 0) {
          g_CurrentTrainMode = "ext";
        }
        else {
          g_CurrentTrainMode = "int";
        }
        core_setcolid_cpp_CDemonSet_init_FUN_00574180(g_CDemonSetPtr);
        g_TrainLastCameraIndex = g_CDemonSetPtr->selected_camera_index;
      }
    }
    else {
      g_TrainLastCameraIndex = -1;
      g_CurrentTrainMode = "ext";
    }
    sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
    sound_sndmain_cpp_setNextSfxFlags_FUN_005a8b70(1);
    sound_sndmain_cpp_setNextSfxChannel_FUN_005a8af0(3);
    iVar4 = _stricmp(g_CurrentTrainMode,"int");
    if (iVar4 == 0) {
      sound_sndmain_cpp_killSfx_FUN_005a9c40(g_TrainExteriorAmbientHandle);
      local_13c = 0.4;
    }
    else {
      iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(g_TrainExteriorAmbientHandle);
      local_13c = 0.7;
      if (iVar4 == 0) {
        sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
        sound_sndmain_cpp_setNextSfxVolume_FUN_005a8a60(0.4);
        g_TrainExteriorAmbientHandle =
             sound_sndmain_cpp_startSfx_FUN_005a8e90("trainext.wav");
        sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
      }
    }
    iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(g_TrainRailNoiseHandle);
    if (iVar4 == 0) {
      sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
      sound_sndmain_cpp_setNextSfxVolume_FUN_005a8a60(local_13c * (float)1.5);
      g_TrainRailNoiseHandle = sound_sndmain_cpp_startSfx_FUN_005a8e90("railnoiz.wav");
      sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
    }
    else {
      iVar4 = _stricmp(g_PreviousTrainMode,g_CurrentTrainMode);
      if (iVar4 != 0) {
        sound_sndmain_cpp_setSfxVolume_FUN_005a9ae0
                  (g_TrainRailNoiseHandle,local_13c * (float)1.5);
      }
    }
    sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
    pSVar7 = g_TrainNoiseArray;
    iVar4 = 0;
    g_PreviousTrainMode = g_CurrentTrainMode;
    g_TrainVelocityVector.x = 0.0;
    g_TrainVelocityVector.y = 0.0;
    g_TrainVelocityVector.z = 30.0;
    local_1c = (STrainNoise *)0x0;
    do {
      iVar5 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(g_TrainNoiseArray[iVar4].sfx_handle);
      pSVar3 = pSVar7;
      if (iVar5 != 0) {
        local_60 = g_TrainVelocityVector.x * local_18;
        local_5c = g_TrainVelocityVector.y * local_18;
        local_58 = g_TrainVelocityVector.z * local_18;
        (pSVar7->position).x = (pSVar7->position).x + local_60;
        (pSVar7->position).y = (pSVar7->position).y + local_5c;
        (pSVar7->position).z = (pSVar7->position).z + local_58;
        pSVar3 = local_1c;
        if ((float)510 < ABS(g_TrainNoiseArray[iVar4].position.z)) {
          sound_sndmain_cpp_killSfx_FUN_005a9c40(g_TrainNoiseArray[iVar4].sfx_handle);
          pSVar3 = local_1c;
        }
      }
      local_1c = pSVar3;
      iVar4 = iVar4 + 1;
      pSVar7 = pSVar7 + 1;
    } while (iVar4 < 10);
    g_TrainNoiseCooldown = g_TrainNoiseCooldown - local_18;
    if ((g_TrainNoiseCooldown <= 0.0) && (local_1c != (STrainNoise *)0x0)) {
      g_TrainNoiseCooldown = core_actor_cpp_getRandomFloat_FUN_0040cc10(1.0,5.0);
      local_2c = 20.0;
      pcVar9 = g_TrainSoundFilenameTemplate;
      pcVar8 = local_d0;
      local_14 = g_TrainNoiseCooldown;
      for (iVar4 = 0x19; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(uint *)pcVar8 = *(uint *)pcVar9;
        pcVar9 = pcVar9 + ((uint)bVar10 * -2 + 1) * 4;
        pcVar8 = pcVar8 + ((uint)bVar10 * -2 + 1) * 4;
      }
      iVar4 = rand();
      local_140 = 1.0;
      switch(iVar4 % 5) {
      case 0:
      case 1:
        local_140 = local_13c * (float)0.59999999999999998;
        local_2c = 25.0;
        _sprintf(local_d0,"rail?%s.wav");
        break;
      case 2:
      case 3:
        local_140 = local_13c * (float)0.80000000000000004;
        pcVar8 = "bump?.wav";
        local_2c = 20.0;
        pcVar9 = local_d0;
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
        goto switchD_005b3824_caseD_4;
      }
      (local_1c->position).x = 0.0;
      local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-3.0,2.0);
      fVar2 = local_14 * local_2c + g_SoundListenerPrev.z;
      (local_1c->position).y = 0.0;
      (local_1c->position).z = fVar2;
      sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
      sound_sndmain_cpp_setNextSfxChannel_FUN_005a8af0(3);
      sound_sndmain_cpp_setNextSfxTrackedVelocity_FUN_005a8a00(&g_TrainVelocityVector);
      _sprintf(local_134,"%s @ %g",local_d0,(double)local_140);
      uVar6 = core_sound_cpp_CSound_playTrackedActorSound_FUN_005b3a70
                        (g_CSoundPtr,(CDemonActor *)0x0,local_134,&local_1c->position);
      local_1c->sfx_handle = uVar6;
      sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
      return;
    }
  }
switchD_005b3824_caseD_4:
  return;
}
