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
  int iVar4;
  uint uVar5;
  STrainNoise *pSVar6;
  BADSPACEBASE *in_ESP;
  char *pcVar7;
  char *pcVar8;
  uint *puVar9;
  byte bVar10;
  float fVar11;
  float fStack_154;
  float in_stack_fffffec4;
  float fStack_130;
  char acStack_124 [76];
  uint auStack_d8 [2];
  char local_d0 [16];
  byte auStack_c0 [8];
  uint uStack_b8;
  uint uStack_b4;
  uint uStack_b0;
  CVector3f CStack_a0;
  CVector3f CStack_94;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float local_6c;
  float local_64;
  float local_60;
  float local_5c;
  float local_3c;
  float local_30;
  uint local_2c;
  float local_28;
  int local_24;
  STrainNoise *local_20;
  CVector3f *local_1c;
  float local_18;
  
  bVar10 = 0;
  local_3c = g_CGamePtr->delta_time_float;
  local_20 = (STrainNoise *)(local_3c * (float)0.5);
  local_30 = local_3c;
  core_sound_cpp_updateListeners_FUN_005b1870();
  CStack_a0.y = -fStack_84;
  fStack_88 = CVector3f_03f6af7c.x - CVector3f_03f6af7c.y;
  if (fStack_88 < CStack_a0.y) {
    fStack_88 = CStack_a0.y;
  }
  if (fStack_84 < fStack_88) {
    fStack_88 = fStack_84;
  }
  CVector3f_03f6af7c.y = CVector3f_03f6af7c.y + fStack_88;
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
  fVar11 = 0.0;
  if (((0.0 < g_CWaterPtr->visible_area_sqft) &&
      (iVar3 = crt_string_c_strnicmp_FUN_005ff070
                         (g_CDemonSetPtr->geometry_filename,"NDUN",4), iVar3 == 0)) &&
     (fVar11 = SQRT(g_CWaterPtr->visible_area_sqft) * (float)0.027777777777777801 +
               (float)0.20000000000000001, (float)0.69999999999999996 < fVar11)) {
    fVar11 = 0.7;
  }
  CStack_94.x = -fStack_80;
  fStack_88 = fVar11 - CVector3f_03f6af7c.z;
  if (fStack_88 < CStack_94.x) {
    fStack_88 = CStack_94.x;
  }
  if (fStack_80 < fStack_88) {
    fStack_88 = fStack_80;
  }
  CVector3f_03f6af7c.z = CVector3f_03f6af7c.z + fStack_88;
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
  if (g_VolumeFadeTimeRemaining <= CStack_94.z) {
    g_CurrentVolumeMultiplier = g_TargetVolumeMultiplier;
    g_VolumeFadeTimeRemaining = 0.0;
  }
  else {
    fVar11 = CStack_94.z / g_VolumeFadeTimeRemaining;
    g_VolumeFadeTimeRemaining = g_VolumeFadeTimeRemaining - CStack_94.z;
    g_CurrentVolumeMultiplier =
         fVar11 * (g_TargetVolumeMultiplier - g_CurrentVolumeMultiplier) + g_CurrentVolumeMultiplier
    ;
  }
  iVar3 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005a9ea0(0);
  if (iVar3 == 0) {
    sound_sndmain_cpp_enableSfxChannel_FUN_005a9e20(3,0);
  }
  else {
    sound_sndmain_cpp_enableSfxChannel_FUN_005a9e20(3,1);
    local_64 = sound_sndmain_cpp_getSfxChannelVol_FUN_005a9d90(0);
    sound_sndmain_cpp_setSfxChannelVol_FUN_005a9cf0(3,local_64 * g_CurrentVolumeMultiplier);
  }
  if (g_CDemonSetPtr->player_on_train != 0) {
    local_6c = g_CGamePtr->delta_time_float;
    if (g_CGamePtr->block_auto_save == 0) {
      if (g_TrainLastCameraIndex != g_CDemonSetPtr->selected_camera_index) {
        core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
        core_setcolid_cpp_CDemonSet_disableIgnore_FUN_00574210(g_CDemonSetPtr);
        CStack_a0.x = g_SoundListenerPrev.x;
        CStack_a0.y = g_SoundListenerPrev.y;
        CStack_a0.z = g_SoundListenerPrev.z;
        uStack_b4 = 0x41a00000;
        CStack_94.x = g_SoundListenerPrev.x;
        uStack_b8 = 0;
        CStack_94.z = g_SoundListenerPrev.z;
        uStack_b0 = 0;
        CStack_94.y = g_SoundListenerPrev.y + 20f;
        iVar3 = core_setcolid_cpp_CDemonSet_testLineOcclusion_FUN_00572460
                          (g_CDemonSetPtr,&CStack_a0,&CStack_94);
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
    sound_sndmain_cpp_setNextSfxFlags_FUN_005a8b70(1);
    sound_sndmain_cpp_setNextSfxChannel_FUN_005a8af0(3);
    iVar3 = crt_string_c_stricmp_FUN_005fe7f0(g_CurrentTrainMode,"int");
    if (iVar3 == 0) {
      sound_sndmain_cpp_killSfx_FUN_005a9c40(g_TrainExteriorAmbientHandle);
    }
    else {
      iVar3 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(g_TrainExteriorAmbientHandle);
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
      sound_sndmain_cpp_setNextSfxVolume_FUN_005a8a60(fStack_154 * (float)1.5);
      g_TrainRailNoiseHandle = sound_sndmain_cpp_startSfx_FUN_005a8e90("railnoiz.wav");
      sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
    }
    else {
      iVar3 = crt_string_c_stricmp_FUN_005fe7f0(g_PreviousTrainMode,g_CurrentTrainMode);
      if (iVar3 != 0) {
        sound_sndmain_cpp_setSfxVolume_FUN_005a9ae0
                  (g_TrainRailNoiseHandle,fStack_154 * (float)1.5);
      }
    }
    sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
    pSVar6 = g_TrainNoiseArray;
    iVar3 = 0;
    g_PreviousTrainMode = g_CurrentTrainMode;
    g_TrainVelocityVector.x = 0.0;
    g_TrainVelocityVector.y = 0.0;
    g_TrainVelocityVector.z = 30.0;
    local_24 = 0;
    do {
      iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(g_TrainNoiseArray[iVar3].sound_handle);
      pSVar2 = pSVar6;
      if (iVar4 != 0) {
        local_64 = g_TrainVelocityVector.x * (float)local_1c;
        local_60 = g_TrainVelocityVector.y * (float)local_1c;
        local_5c = g_TrainVelocityVector.z * (float)local_1c;
        (pSVar6->position).x = (pSVar6->position).x + local_64;
        (pSVar6->position).y = (pSVar6->position).y + local_60;
        (pSVar6->position).z = (pSVar6->position).z + local_5c;
        pSVar2 = local_20;
        if ((float)510 < ABS(g_TrainNoiseArray[iVar3].position.z)) {
          sound_sndmain_cpp_killSfx_FUN_005a9c40(g_TrainNoiseArray[iVar3].sound_handle);
          pSVar2 = local_20;
        }
      }
      local_20 = pSVar2;
      iVar3 = iVar3 + 1;
      pSVar6 = pSVar6 + 1;
    } while (iVar3 < 10);
    g_TrainNoiseCooldown = g_TrainNoiseCooldown - (float)local_20;
    if ((g_TrainNoiseCooldown <= 0.0) && (local_24 != 0)) {
      g_TrainNoiseCooldown = core_actor_cpp_getRandomFloat_FUN_0040cc10(1.0,5.0);
      local_30 = 20.0;
      pcVar8 = g_TrainSoundFilenameTemplate;
      puVar9 = auStack_d8;
      local_18 = g_TrainNoiseCooldown;
      for (iVar3 = 0x19; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar9 = *(uint *)pcVar8;
        pcVar8 = pcVar8 + ((uint)bVar10 * -2 + 1) * 4;
        puVar9 = puVar9 + (uint)bVar10 * -2 + 1;
      }
      iVar3 = crt_stdlib_c_rand_FUN_005feb5c();
      switch(iVar3 % 5) {
      case 0:
      case 1:
        local_2c = 0x41c80000;
        crt_stdio_c_sprintf_FUN_005fdbd0
                  (local_d0,"rail?%s.wav",g_CurrentTrainMode,
                   in_stack_fffffec4 * (float)0.59999999999999998);
        break;
      case 2:
      case 3:
        pcVar7 = "bump?.wav";
        local_2c = 0x41a00000;
        pcVar8 = local_d0;
        do {
          cVar1 = *pcVar7;
          *pcVar8 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar7[1];
          pcVar7 = pcVar7 + 2;
          pcVar8[1] = cVar1;
          pcVar8 = pcVar8 + 2;
        } while (cVar1 != '\0');
        break;
      case 4:
        goto switchD_005b3824_caseD_4;
      }
      local_1c->x = 0.0;
      fVar11 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-3.0,2.0);
      fVar11 = fVar11 * local_28 + g_SoundListenerPrev.z;
      *(uint *)((int)local_18 + 4) = 0;
      *(float *)((int)local_18 + 8) = fVar11;
      sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
      sound_sndmain_cpp_setNextSfxChannel_FUN_005a8af0(3);
      sound_sndmain_cpp_setNextSfxTrackedVelocity_FUN_005a8a00(&g_TrainVelocityVector);
      crt_stdio_c_sprintf_FUN_005fdbd0(acStack_124,"%s @ %g",auStack_c0,(double)fStack_130);
      uVar5 = core_sound_cpp_CSound_playTrackedActorSound_FUN_005b3a70
                        (g_CSoundPtr,(CDemonActor *)0x0,&stack0xfffffecc,local_1c);
      *(uint *)((int)local_18 + 0xc) = uVar5;
      sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
      return;
    }
  }
switchD_005b3824_caseD_4:
  return;
}
