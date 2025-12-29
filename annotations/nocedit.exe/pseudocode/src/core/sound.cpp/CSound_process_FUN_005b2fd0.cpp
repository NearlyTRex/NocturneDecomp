// Name: core_sound.cpp_CSound_process_FUN_005b2fd0
// Address: 005b2fd0
// Address Range: [[005b2fd0, 005b382a]]
// Convention: __cdecl
// Signature: void core_sound.cpp_CSound_process_FUN_005b2fd0(CSound * this_ptr)

#include "nocturne.h"

void __cdecl core_sound_cpp_CSound_process_FUN_005b2fd0(CSound *this_ptr)

{
  char cVar1;
  float fVar2;
  STrainNoise *pSVar3;
  int extraout_EAX;
  int iVar4;
  int extraout_EAX_00;
  int iVar5;
  uint uVar6;
  STrainNoise *pSVar7;
  BADSPACEBASE *in_ESP;
  char *pcVar8;
  char *pcVar9;
  uint *puVar10;
  byte bVar11;
  uint uStack00000038;
  float in_stack_00000040;
  int iStack00000044;
  STrainNoise *in_stack_00000048;
  uint *in_stack_0000004c;
  float fStack00000050;
  float fStack00000058;
  CVector3f *in_stack_00000060;
  int in_stack_00000064;
  float fVar12;
  float in_stack_ffffff14;
  float in_stack_ffffff1c;
  float in_stack_ffffff2c;
  float in_stack_ffffff38;
  char acStack_bc [4];
  char acStack_b8 [72];
  uint auStack_70 [2];
  char local_68 [16];
  byte local_58 [8];
  uint local_50;
  uint local_4c;
  uint local_48;
  float local_3c;
  CVector3f local_38;
  CVector3f local_2c;
  float local_20;
  float local_1c;
  float local_18;
  
  bVar11 = 0;
  local_3c = g_CGamePtr->delta_time_float;
  local_20 = local_3c * (float)0.5;
  local_38.z = local_3c;
  core_sound_cpp_updateListeners_FUN_005b1870();
  local_38.y = -local_1c;
  local_20 = CVector3f_03f6af7c.x - CVector3f_03f6af7c.y;
  if (local_20 < local_38.y) {
    local_20 = local_38.y;
  }
  if (local_1c < local_20) {
    local_20 = local_1c;
  }
  CVector3f_03f6af7c.y = CVector3f_03f6af7c.y + local_20;
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
  fVar12 = 0.0;
  if (((0.0 < g_CWaterPtr->visible_area_sqft) &&
      (iVar4 = crt_string_c_strnicmp_FUN_005ff070
                         (g_CDemonSetPtr->geometry_filename,"NDUN",4), iVar4 == 0)) &&
     (fVar12 = SQRT(g_CWaterPtr->visible_area_sqft) * (float)0.027777777777777801 +
               (float)0.20000000000000001, (float)0.69999999999999996 < fVar12)) {
    fVar12 = 0.7;
  }
  local_2c.x = -local_18;
  local_20 = fVar12 - CVector3f_03f6af7c.z;
  if (local_20 < local_2c.x) {
    local_20 = local_2c.x;
  }
  if (local_18 < local_20) {
    local_20 = local_18;
  }
  CVector3f_03f6af7c.z = CVector3f_03f6af7c.z + local_20;
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
  if (g_VolumeFadeTimeRemaining <= local_2c.z) {
    g_CurrentVolumeMultiplier = g_TargetVolumeMultiplier;
    g_VolumeFadeTimeRemaining = 0.0;
  }
  else {
    fVar12 = local_2c.z / g_VolumeFadeTimeRemaining;
    g_VolumeFadeTimeRemaining = g_VolumeFadeTimeRemaining - local_2c.z;
    g_CurrentVolumeMultiplier =
         fVar12 * (g_TargetVolumeMultiplier - g_CurrentVolumeMultiplier) + g_CurrentVolumeMultiplier
    ;
  }
  iVar4 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005a9ea0(0);
  if (iVar4 == 0) {
    sound_sndmain_cpp_enableSfxChannel_FUN_005a9e20(3,0);
  }
  else {
    sound_sndmain_cpp_enableSfxChannel_FUN_005a9e20(3,1);
    fVar12 = sound_sndmain_cpp_getSfxChannelVol_FUN_005a9d90(0);
    sound_sndmain_cpp_setSfxChannelVol_FUN_005a9cf0(3,fVar12 * g_CurrentVolumeMultiplier);
  }
  if (g_CDemonSetPtr->player_on_train != 0) {
    if (g_CGamePtr->block_auto_save == 0) {
      if (g_TrainLastCameraIndex != g_CDemonSetPtr->selected_camera_index) {
        core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
        core_setcolid_cpp_CDemonSet_disableIgnore_FUN_00574210(g_CDemonSetPtr);
        local_38.x = g_SoundListenerPrev.x;
        local_38.y = g_SoundListenerPrev.y;
        local_38.z = g_SoundListenerPrev.z;
        local_4c = 0x41a00000;
        local_2c.x = g_SoundListenerPrev.x;
        local_50 = 0;
        local_2c.z = g_SoundListenerPrev.z;
        local_48 = 0;
        local_2c.y = g_SoundListenerPrev.y + 20f;
        iVar4 = core_setcolid_cpp_CDemonSet_testLineOcclusion_FUN_00572460
                          (g_CDemonSetPtr,&local_38,&local_2c);
        if (iVar4 == 0) {
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
    iVar4 = crt_string_c_stricmp_FUN_005fe7f0(g_CurrentTrainMode,"int");
    if (iVar4 == 0) {
      sound_sndmain_cpp_killSfx_FUN_005a9c40(g_TrainExteriorAmbientHandle);
    }
    else {
      iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(g_TrainExteriorAmbientHandle);
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
      sound_sndmain_cpp_setNextSfxVolume_FUN_005a8a60(in_stack_ffffff14 * (float)1.5);
      g_TrainRailNoiseHandle = sound_sndmain_cpp_startSfx_FUN_005a8e90("railnoiz.wav");
      sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
    }
    else {
      iVar4 = crt_string_c_stricmp_FUN_005fe7f0(g_PreviousTrainMode,g_CurrentTrainMode);
      if (iVar4 != 0) {
        sound_sndmain_cpp_setSfxVolume_FUN_005a9ae0
                  (g_TrainRailNoiseHandle,in_stack_ffffff1c * (float)1.5);
      }
    }
    sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
    pSVar7 = g_TrainNoiseArray;
    iVar4 = 0;
    g_PreviousTrainMode = g_CurrentTrainMode;
    g_TrainVelocityVector.x = 0.0;
    g_TrainVelocityVector.y = 0.0;
    g_TrainVelocityVector.z = 30.0;
    iStack00000044 = 0;
    do {
      iVar5 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(g_TrainNoiseArray[iVar4].sound_handle);
      pSVar3 = pSVar7;
      if (iVar5 != 0) {
        fVar12 = g_TrainVelocityVector.y * (float)in_stack_0000004c;
        fVar2 = g_TrainVelocityVector.z * (float)in_stack_0000004c;
        (pSVar7->position).x =
             (pSVar7->position).x + g_TrainVelocityVector.x * (float)in_stack_0000004c;
        (pSVar7->position).y = (pSVar7->position).y + fVar12;
        (pSVar7->position).z = (pSVar7->position).z + fVar2;
        pSVar3 = in_stack_00000048;
        if ((float)510 < ABS(g_TrainNoiseArray[iVar4].position.z)) {
          sound_sndmain_cpp_killSfx_FUN_005a9c40(g_TrainNoiseArray[iVar4].sound_handle);
        }
      }
      in_stack_00000048 = pSVar3;
      iVar4 = iVar4 + 1;
      pSVar7 = pSVar7 + 1;
    } while (iVar4 < 10);
    g_TrainNoiseCooldown = g_TrainNoiseCooldown - (float)in_stack_00000048;
    if ((g_TrainNoiseCooldown <= 0.0) && (iStack00000044 != 0)) {
      g_TrainNoiseCooldown = core_actor_cpp_getRandomFloat_FUN_0040cc10(1.0,5.0);
      uStack00000038 = 0x41a00000;
      pcVar9 = g_TrainSoundFilenameTemplate;
      puVar10 = auStack_70;
      for (iVar4 = 0x19; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar10 = *(uint *)pcVar9;
        pcVar9 = pcVar9 + ((uint)bVar11 * -2 + 1) * 4;
        puVar10 = puVar10 + (uint)bVar11 * -2 + 1;
      }
      fStack00000050 = g_TrainNoiseCooldown;
      iVar4 = crt_stdlib_c_rand_FUN_005feb5c();
      switch(iVar4 % 5) {
      case 0:
      case 1:
        crt_stdio_c_sprintf_FUN_005fdbd0
                  (local_68,"rail?%s.wav",g_CurrentTrainMode,
                   in_stack_ffffff2c * (float)0.59999999999999998);
        break;
      case 2:
      case 3:
        pcVar8 = "bump?.wav";
        pcVar9 = local_68;
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
      *in_stack_0000004c = 0;
      fStack00000058 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-3.0,2.0);
      fVar12 = fStack00000058 * in_stack_00000040 + g_SoundListenerPrev.z;
      *(uint *)((int)fStack00000050 + 4) = 0;
      *(float *)((int)fStack00000050 + 8) = fVar12;
      sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
      sound_sndmain_cpp_setNextSfxChannel_FUN_005a8af0(3);
      sound_sndmain_cpp_setNextSfxTrackedVelocity_FUN_005a8a00(&g_TrainVelocityVector);
      crt_stdio_c_sprintf_FUN_005fdbd0(acStack_bc,"%s @ %g",local_58,(double)in_stack_ffffff38)
      ;
      uVar6 = core_sound_cpp_CSound_playTrackedActorSound_FUN_005b3a70
                        (g_CSoundPtr,(CDemonActor *)0x0,acStack_b8,in_stack_00000060);
      *(uint *)(in_stack_00000064 + 0xc) = uVar6;
      sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
      return;
    }
  }
switchD_005b3824_caseD_4:
  return;
}
