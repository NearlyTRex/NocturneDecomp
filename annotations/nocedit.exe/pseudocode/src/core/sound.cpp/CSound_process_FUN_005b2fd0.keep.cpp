// Name: core_sound.cpp_CSound_process_FUN_005b2fd0
// Address: 005b2fd0
// MANUAL RECONSTRUCTION
// Address Range: [[005b2fd0, 005b382a]]
// Convention: __cdecl
// Signature: void __cdecl core_sound_cpp_CSound_process_FUN_005b2fd0(CSound *this_ptr)

#include "nocturne.h"

void __cdecl core_sound_cpp_CSound_process_FUN_005b2fd0(CSound *this_ptr)

{
  float fVar3;
  float fVar4;
  int iVar4;
  int iVar6;
  float fVar7;
  int iVar5;
  uint uVar6;
  STrainNoise *pSVar7;
  float local_140;
  float local_13c;
  float local_138;
  char local_134 [100];
  char local_d0 [100];
  CVector3f local_54;
  CVector3f local_48;
  float local_2c;
  float local_28;
  float local_24;
  STrainNoise *local_1c;
  STrainNoise *pSVar3;
  float fVar2;

  fVar7 = g_CGamePtr->delta_time_float;
  fVar3 = fVar7 * (float)0.5;
  core_sound_cpp_updateListeners_FUN_005b1870();
  local_24 = CVector3f_03f6af7c.x - CVector3f_03f6af7c.y;
  if (CVector3f_03f6af7c.x - CVector3f_03f6af7c.y < -fVar3) {
    local_24 = -fVar3;
  }
  if (fVar3 < local_24) {
    local_24 = fVar3;
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
      (iVar6 = _strnicmp
                         (g_CDemonSetPtr->geometry_filename,"NDUN",4), iVar6 == 0)) &&
     (local_138 = SQRT(g_CWaterPtr->visible_area_sqft) * (float)0.027777777777777801 +
                  (float)0.20000000000000001, (float)0.69999999999999996 < local_138)) {
    local_138 = 0.7;
  }
  local_28 = local_138 - CVector3f_03f6af7c.z;
  if (local_138 - CVector3f_03f6af7c.z < -fVar3) {
    local_28 = -fVar3;
  }
  if (fVar3 < local_28) {
    local_28 = fVar3;
  }
  CVector3f_03f6af7c.z = CVector3f_03f6af7c.z + local_28;
  if (CVector3f_03f6af7c.z <= (float)0.001) {
    core_sound_cpp_CSound_killSound_FUN_005b3b90(this_ptr,g_WaterSoundHandle);
    CVector3f_03f6af7c.z = 0.0;
  }
  else {
    iVar6 = core_sound_cpp_CSound_isSoundPlaying_FUN_005b3b80(this_ptr,g_WaterSoundHandle);
    if (iVar6 == 0) {
      g_WaterSoundHandle = sound_sndmain_cpp_startSfx_FUN_005a8e90("water-2.wav");
    }
    sound_sndmain_cpp_setSfxVolume_FUN_005a9ae0(g_WaterSoundHandle,CVector3f_03f6af7c.z);
  }
  if (g_VolumeFadeTimeRemaining <= fVar7) {
    g_CurrentVolumeMultiplier = g_TargetVolumeMultiplier;
    g_VolumeFadeTimeRemaining = 0.0;
  }
  else {
    fVar2 = fVar7 / g_VolumeFadeTimeRemaining;
    g_VolumeFadeTimeRemaining = g_VolumeFadeTimeRemaining - fVar7;
    g_CurrentVolumeMultiplier =
         fVar2 * (g_TargetVolumeMultiplier - g_CurrentVolumeMultiplier) + g_CurrentVolumeMultiplier;
  }
  iVar6 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005a9ea0(0);
  if (iVar6 == 0) {
    sound_sndmain_cpp_enableSfxChannel_FUN_005a9e20(3,0);
  }
  else {
    sound_sndmain_cpp_enableSfxChannel_FUN_005a9e20(3,1);
    fVar7 = sound_sndmain_cpp_getSfxChannelVol_FUN_005a9d90(0);
    sound_sndmain_cpp_setSfxChannelVol_FUN_005a9cf0(3,fVar7 * g_CurrentVolumeMultiplier);
  }
  if (g_CDemonSetPtr->player_on_train != 0) {
    fVar7 = g_CGamePtr->delta_time_float;
    if (g_CGamePtr->goggles_active == 0) {
      if (g_TrainLastCameraIndex != g_CDemonSetPtr->selected_camera_index) {
        core_setcolid_cpp_CDemonSet_init_FUN_00574180(g_CDemonSetPtr);
        core_setcolid_cpp_CDemonSet_disableIgnore_FUN_00574210(g_CDemonSetPtr);
        local_54 = g_SoundListenerPrev;
        local_48.x = g_SoundListenerPrev.x;
        local_48.z = g_SoundListenerPrev.z;
        local_48.y = g_SoundListenerPrev.y + 20.0f;
        iVar6 = core_setcolid_cpp_CDemonSet_testLineOcclusion_FUN_00572460
                          (g_CDemonSetPtr,&local_54,&local_48);
        if (iVar6 == 0) {
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
    iVar6 = _stricmp(g_CurrentTrainMode,"int");
    if (iVar6 == 0) {
      sound_sndmain_cpp_killSfx_FUN_005a9c40(g_TrainExteriorAmbientHandle);
      local_13c = 0.4;
    }
    else {
      iVar6 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(g_TrainExteriorAmbientHandle);
      local_13c = 0.7;
      if (iVar6 == 0) {
        sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
        sound_sndmain_cpp_setNextSfxVolume_FUN_005a8a60(0.4);
        g_TrainExteriorAmbientHandle =
             sound_sndmain_cpp_startSfx_FUN_005a8e90("trainext.wav");
        sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
      }
    }
    iVar6 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(g_TrainRailNoiseHandle);
    if (iVar6 == 0) {
      sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
      sound_sndmain_cpp_setNextSfxVolume_FUN_005a8a60(local_13c * (float)1.5);
      g_TrainRailNoiseHandle = sound_sndmain_cpp_startSfx_FUN_005a8e90("railnoiz.wav");
      sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
    }
    else {
      iVar6 = _stricmp(g_PreviousTrainMode,g_CurrentTrainMode);
      if (iVar6 != 0) {
        sound_sndmain_cpp_setSfxVolume_FUN_005a9ae0
                  (g_TrainRailNoiseHandle,local_13c * (float)1.5);
      }
    }
    sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
    pSVar7 = g_TrainNoiseArray;
    iVar6 = 0;
    g_PreviousTrainMode = g_CurrentTrainMode;
    g_TrainVelocityVector.x = 0.0;
    g_TrainVelocityVector.y = 0.0;
    g_TrainVelocityVector.z = 30.0;
    local_1c = (STrainNoise *)0x0;
    do {
      iVar5 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(g_TrainNoiseArray[iVar6].sfx_handle);
      pSVar3 = pSVar7;
      if (iVar5 != 0) {
        fVar3 = g_TrainVelocityVector.y * fVar7;
        fVar4 = g_TrainVelocityVector.z * fVar7;
        (pSVar7->position).x = (pSVar7->position).x + g_TrainVelocityVector.x * fVar7;
        (pSVar7->position).y = (pSVar7->position).y + fVar3;
        (pSVar7->position).z = (pSVar7->position).z + fVar4;
        pSVar3 = local_1c;
        if ((float)510 < ABS(g_TrainNoiseArray[iVar6].position.z)) {
          sound_sndmain_cpp_killSfx_FUN_005a9c40(g_TrainNoiseArray[iVar6].sfx_handle);
        }
      }
      local_1c = pSVar3;
      iVar6 = iVar6 + 1;
      pSVar7 = pSVar7 + 1;
    } while (iVar6 < 10);
    g_TrainNoiseCooldown = g_TrainNoiseCooldown - fVar7;
    if ((g_TrainNoiseCooldown <= 0.0) && (local_1c != (STrainNoise *)0x0)) {
      g_TrainNoiseCooldown = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(1.0,5.0);
      local_2c = 20.0;
      memcpy(local_d0,g_TrainSoundFilenameTemplate,100);
#if NOCTURNE_AUTHENTIC_RNG
      iVar6 = rand();
#else
      iVar6 = (int)nocturne_rng_fx();
#endif
      local_140 = 1.0;
      switch(iVar6 % 5) {
      case 0:
      case 1:
        local_140 = local_13c * (float)0.59999999999999998;
        local_2c = 25.0;
        _sprintf(local_d0,"rail?%s.wav",g_CurrentTrainMode);
        break;
      case 2:
      case 3:
        local_140 = local_13c * (float)0.80000000000000004;
        local_2c = 20.0;
        strcpy(local_d0,"bump?.wav");
        break;
      case 4:
        goto switchD_005b3824_caseD_4;
      }
      (local_1c->position).x = 0.0;
      fVar7 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(-3.0,2.0);
      fVar7 = fVar7 * local_2c + g_SoundListenerPrev.z;
      (local_1c->position).y = 0.0;
      (local_1c->position).z = fVar7;
      sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
      sound_sndmain_cpp_setNextSfxChannel_FUN_005a8af0(3);
      sound_sndmain_cpp_setNextSfxTrackedVelocity1_FUN_005a8a00(&g_TrainVelocityVector);
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
