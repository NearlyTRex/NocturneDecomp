// Name: core_sound.cpp_CSound_process_FUN_005b2fd0
// Address: 005b2fd0
// Address Range: [[005b2fd0, 005b382a]]
// Convention: __cdecl
// Signature: void core_sound.cpp_CSound_process_FUN_005b2fd0(CSound * this_ptr)

#include "nocturne.h"

void __cdecl core_sound_cpp_CSound_process_FUN_005b2fd0(CSound *this_ptr)

{
  char cVar1;
  STrainNoise *pSVar2;
  int extraout_EAX;
  int iVar3;
  int extraout_EAX_00;
  float fVar4;
  int iVar5;
  uint uVar6;
  STrainNoise *pSVar7;
  BADSPACEBASE *in_ESP;
  char *pcVar8;
  char *pcVar9;
  uint *puVar10;
  byte bVar11;
  float local_138;
  char local_134 [100];
  uint local_d0;
  char acStack_cc [96];
  uint local_6c;
  uint local_68;
  uint local_64;
  float local_60;
  float local_5c;
  float local_58;
  CVector3f local_54;
  CVector3f local_48;
  float local_3c;
  STrainNoise *local_34;
  float local_30;
  float local_2c;
  STrainNoise *local_28;
  STrainNoise *local_20;
  STrainNoise *local_1c;
  uint *local_18;
  float local_14;
  
  bVar11 = 0;
  local_3c = g_CGamePtr->delta_time_float;
  local_20 = (STrainNoise *)(local_3c * (float)0.5);
  local_30 = local_3c;
  core_sound_cpp_updateListeners_FUN_005b1870();
  local_34 = (STrainNoise *)-(float)local_1c;
  local_20 = (STrainNoise *)(CVector3f_03f6af7c.x - CVector3f_03f6af7c.y);
  if ((float)local_20 < (float)local_34) {
    local_20 = local_34;
  }
  if ((float)local_1c < (float)local_20) {
    local_20 = local_1c;
  }
  CVector3f_03f6af7c.y = CVector3f_03f6af7c.y + (float)local_20;
  if (CVector3f_03f6af7c.y <= (float)0.001) {
    core_sound_cpp_CSound_killSound_FUN_005b3b90(this_ptr,g_WindSoundHandle);
    CVector3f_03f6af7c.y = 0.0;
  }
  else {
    core_sound_cpp_CSound_isSoundPlaying_FUN_005b3b80(this_ptr,g_WindSoundHandle);
    if (extraout_EAX == 0) {
      g_WindSoundHandle = sound_sndmain_cpp_startSfx_FUN_005a8e90("wind-ctl.wav");
    }
    sound_sndmain_cpp_setSfxVolume_FUN_005a9ae0(g_WindSoundHandle,CVector3f_03f6af7c.y);
  }
  local_138 = 0.0;
  if (((0.0 < g_CWaterPtr->visible_area_sqft) &&
      (iVar3 = crt_string_c_strnicmp_FUN_005ff070
                         (g_CDemonSetPtr->geometry_filename,"NDUN",4), iVar3 == 0)) &&
     (local_138 = SQRT(g_CWaterPtr->visible_area_sqft) * (float)0.027777777777777801 +
                  (float)0.20000000000000001, (float)0.69999999999999996 < local_138)) {
    local_138 = 0.7;
  }
  local_34 = (STrainNoise *)-(float)local_20;
  local_28 = (STrainNoise *)(local_138 - CVector3f_03f6af7c.z);
  if ((float)local_28 < (float)local_34) {
    local_28 = local_34;
  }
  if ((float)local_20 < (float)local_28) {
    local_28 = local_20;
  }
  CVector3f_03f6af7c.z = CVector3f_03f6af7c.z + (float)local_28;
  if (CVector3f_03f6af7c.z <= (float)0.001) {
    core_sound_cpp_CSound_killSound_FUN_005b3b90(this_ptr,g_WaterSoundHandle);
    CVector3f_03f6af7c.z = 0.0;
  }
  else {
    core_sound_cpp_CSound_isSoundPlaying_FUN_005b3b80(this_ptr,g_WaterSoundHandle);
    if (extraout_EAX_00 == 0) {
      g_WaterSoundHandle = sound_sndmain_cpp_startSfx_FUN_005a8e90("water-2.wav");
    }
    sound_sndmain_cpp_setSfxVolume_FUN_005a9ae0(g_WaterSoundHandle,CVector3f_03f6af7c.z);
  }
  if (g_VolumeFadeTimeRemaining <= local_30) {
    g_CurrentVolumeMultiplier = g_TargetVolumeMultiplier;
    g_VolumeFadeTimeRemaining = 0.0;
  }
  else {
    fVar4 = local_30 / g_VolumeFadeTimeRemaining;
    g_VolumeFadeTimeRemaining = g_VolumeFadeTimeRemaining - local_30;
    g_CurrentVolumeMultiplier =
         fVar4 * (g_TargetVolumeMultiplier - g_CurrentVolumeMultiplier) + g_CurrentVolumeMultiplier;
  }
  iVar3 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005a9ea0(0);
  if (iVar3 == 0) {
    sound_sndmain_cpp_enableSfxChannel_FUN_005a9e20(3,0);
  }
  else {
    sound_sndmain_cpp_enableSfxChannel_FUN_005a9e20(3,1);
    fVar4 = sound_sndmain_cpp_getSfxChannelVol_FUN_005a9d90(0);
    sound_sndmain_cpp_setSfxChannelVol_FUN_005a9cf0(3,fVar4 * g_CurrentVolumeMultiplier);
  }
  if (g_CDemonSetPtr->player_on_train != 0) {
    local_14 = g_CGamePtr->delta_time_float;
    if (g_CGamePtr->block_auto_save == 0) {
      if (g_TrainLastCameraIndex != g_CDemonSetPtr->selected_camera_index) {
        core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
        core_setcolid_cpp_CDemonSet_disableIgnore_FUN_00574210(g_CDemonSetPtr);
        local_54.x = g_SoundListenerPrev.x;
        local_54.y = g_SoundListenerPrev.y;
        local_54.z = g_SoundListenerPrev.z;
        local_68 = 0x41a00000;
        local_48.x = g_SoundListenerPrev.x;
        local_6c = 0;
        local_48.z = g_SoundListenerPrev.z;
        local_64 = 0;
        local_48.y = g_SoundListenerPrev.y + 20f;
        iVar3 = core_setcolid_cpp_CDemonSet_testLineOcclusion_FUN_00572460
                          (g_CDemonSetPtr,&local_54,&local_48);
        if (iVar3 == 0) {
          g_CurrentTrainMode = "ext";
        }
        else {
          g_CurrentTrainMode = "int";
        }
        core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
        g_TrainLastCameraIndex = g_CDemonSetPtr->selected_camera_index;
      }
    }
    else {
      g_TrainLastCameraIndex = -1;
      g_CurrentTrainMode = "ext";
    }
    sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
    fVar4 = 1.4013e-45;
    sound_sndmain_cpp_setNextSfxFlags_FUN_005a8b70(1);
    sound_sndmain_cpp_setNextSfxChannel_FUN_005a8af0(3);
    iVar3 = crt_string_c_stricmp_FUN_005fe7f0(g_CurrentTrainMode,"int");
    if (iVar3 == 0) {
      sound_sndmain_cpp_killSfx_FUN_005a9c40(g_TrainExteriorAmbientHandle);
      fVar4 = 0.4;
    }
    else {
      iVar3 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(g_TrainExteriorAmbientHandle);
      local_138 = 0.7;
      if (iVar3 == 0) {
        sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
        sound_sndmain_cpp_setNextSfxVolume_FUN_005a8a60(0.4);
        g_TrainExteriorAmbientHandle =
             sound_sndmain_cpp_startSfx_FUN_005a8e90("trainext.wav");
        sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
      }
    }
    iVar3 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(g_TrainRailNoiseHandle);
    if (iVar3 == 0) {
      sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
      sound_sndmain_cpp_setNextSfxVolume_FUN_005a8a60(local_138 * (float)1.5);
      g_TrainRailNoiseHandle = sound_sndmain_cpp_startSfx_FUN_005a8e90("railnoiz.wav");
      sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
    }
    else {
      iVar3 = crt_string_c_stricmp_FUN_005fe7f0(g_PreviousTrainMode,g_CurrentTrainMode);
      if (iVar3 != 0) {
        sound_sndmain_cpp_setSfxVolume_FUN_005a9ae0
                  (g_TrainRailNoiseHandle,fVar4 * (float)1.5);
      }
    }
    sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
    pSVar7 = g_TrainNoiseArray;
    iVar3 = 0;
    g_PreviousTrainMode = g_CurrentTrainMode;
    g_TrainVelocityVector.x = 0.0;
    g_TrainVelocityVector.y = 0.0;
    g_TrainVelocityVector.z = 30.0;
    local_18 = (uint *)0x0;
    do {
      iVar5 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(g_TrainNoiseArray[iVar3].sound_handle);
      pSVar2 = pSVar7;
      if (iVar5 != 0) {
        local_60 = g_TrainVelocityVector.x * (float)local_18;
        local_5c = g_TrainVelocityVector.y * (float)local_18;
        local_58 = g_TrainVelocityVector.z * (float)local_18;
        (pSVar7->position).x = (pSVar7->position).x + local_60;
        (pSVar7->position).y = (pSVar7->position).y + local_5c;
        (pSVar7->position).z = (pSVar7->position).z + local_58;
        pSVar2 = local_1c;
        if ((float)510 < ABS(g_TrainNoiseArray[iVar3].position.z)) {
          sound_sndmain_cpp_killSfx_FUN_005a9c40(g_TrainNoiseArray[iVar3].sound_handle);
          pSVar2 = local_1c;
        }
      }
      local_1c = pSVar2;
      iVar3 = iVar3 + 1;
      pSVar7 = pSVar7 + 1;
    } while (iVar3 < 10);
    g_TrainNoiseCooldown = g_TrainNoiseCooldown - (float)local_18;
    if ((g_TrainNoiseCooldown <= 0.0) && (local_1c != (STrainNoise *)0x0)) {
      g_TrainNoiseCooldown = core_actor_cpp_getRandomFloat_FUN_0040cc10(1.0,5.0);
      local_2c = 20.0;
      pcVar9 = g_TrainSoundFilenameTemplate;
      puVar10 = &local_d0;
      for (iVar3 = 0x19; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar10 = *(uint *)pcVar9;
        pcVar9 = pcVar9 + ((uint)bVar11 * -2 + 1) * 4;
        puVar10 = puVar10 + (uint)bVar11 * -2 + 1;
      }
      iVar3 = crt_stdlib_c_rand_FUN_005feb5c();
      switch(iVar3 % 5) {
      case 0:
      case 1:
        local_28 = (STrainNoise *)0x41c80000;
        crt_stdio_c_sprintf_FUN_005fdbd0
                  (acStack_cc,"rail?%s.wav",g_CurrentTrainMode,
                   local_138 * (float)0.59999999999999998);
        break;
      case 2:
      case 3:
        pcVar8 = "bump?.wav";
        local_28 = (STrainNoise *)0x41a00000;
        pcVar9 = acStack_cc;
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
      *local_18 = 0;
      fVar4 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-3.0,2.0);
      fVar4 = fVar4 * local_2c + g_SoundListenerPrev.z;
      (local_1c->position).y = 0.0;
      (local_1c->position).z = fVar4;
      sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
      fVar4 = 4.2039e-45;
      sound_sndmain_cpp_setNextSfxChannel_FUN_005a8af0(3);
      sound_sndmain_cpp_setNextSfxTrackedVelocity_FUN_005a8a00(&g_TrainVelocityVector);
      crt_stdio_c_sprintf_FUN_005fdbd0(local_134,"%s @ %g",&local_d0,(double)fVar4);
      uVar6 = core_sound_cpp_CSound_playTrackedActorSound_FUN_005b3a70
                        (g_CSoundPtr,(CDemonActor *)0x0,local_134,&local_1c->position);
      local_1c->sound_handle = uVar6;
      sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
      return;
    }
  }
switchD_005b3824_caseD_4:
  return;
}
