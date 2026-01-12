// Name: core_sound.cpp_processTrainSounds_FUN_005b2770
// Address: 005b2770
// Address Range: [[005b2770, 005b2c93]]
// Convention: __cdecl
// Signature: void core_sound.cpp_processTrainSounds_FUN_005b2770(void)

#include "nocturne.h"

void __cdecl core_sound_cpp_processTrainSounds_FUN_005b2770(void)

{
  char cVar1;
  STrainNoise *pSVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  uint uVar6;
  STrainNoise *pSVar7;
  BADSPACEBASE *in_ESP;
  char *pcVar8;
  float *pfVar9;
  char *pcVar10;
  float *pfVar11;
  byte bVar12;
  float local_11c;
  float local_118;
  char acStack_114 [96];
  char local_b4 [100];
  CVector3f local_50;
  CVector3f local_44;
  uint local_38;
  uint local_34;
  uint local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  STrainNoise *local_1c;
  uint *local_18;
  
  bVar12 = 0;
  local_18 = (uint *)g_CGamePtr->delta_time_float;
  if (g_CGamePtr->block_auto_save == 0) {
    if (g_TrainLastCameraIndex != g_CDemonSetPtr->selected_camera_index) {
      core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
      core_setcolid_cpp_CDemonSet_disableIgnore_FUN_00574210(g_CDemonSetPtr);
      local_50.x = g_SoundListenerPrev.x;
      local_50.y = g_SoundListenerPrev.y;
      local_50.z = g_SoundListenerPrev.z;
      local_38 = 0;
      local_44.x = g_SoundListenerPrev.x;
      local_34 = 0x41a00000;
      local_44.z = g_SoundListenerPrev.z;
      local_30 = 0;
      local_44.y = g_SoundListenerPrev.y + 20f;
      iVar3 = core_setcolid_cpp_CDemonSet_testLineOcclusion_FUN_00572460
                        (g_CDemonSetPtr,&local_50,&local_44);
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
    g_CurrentTrainMode = "ext";
    g_TrainLastCameraIndex = -1;
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
  fVar5 = (float)g_TrainRailNoiseHandle;
  iVar3 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(g_TrainRailNoiseHandle);
  if (iVar3 == 0) {
    sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
    sound_sndmain_cpp_setNextSfxVolume_FUN_005a8a60(local_11c * (float)1.5);
    g_TrainRailNoiseHandle = sound_sndmain_cpp_startSfx_FUN_005a8e90("railnoiz.wav");
    sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
  }
  else {
    iVar3 = crt_string_c_stricmp_FUN_005fe7f0(g_PreviousTrainMode,g_CurrentTrainMode);
    if (iVar3 != 0) {
      sound_sndmain_cpp_setSfxVolume_FUN_005a9ae0
                (g_TrainRailNoiseHandle,fVar5 * (float)1.5);
    }
  }
  sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
  pSVar7 = g_TrainNoiseArray;
  iVar3 = 0;
  g_PreviousTrainMode = g_CurrentTrainMode;
  g_TrainVelocityVector.x = 0.0;
  g_TrainVelocityVector.y = 0.0;
  local_18 = (uint *)0x0;
  g_TrainVelocityVector.z = 30.0;
  do {
    iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(g_TrainNoiseArray[iVar3].sound_handle);
    pSVar2 = pSVar7;
    if (iVar4 != 0) {
      local_2c = g_TrainVelocityVector.x * (float)local_18;
      local_28 = g_TrainVelocityVector.y * (float)local_18;
      local_24 = g_TrainVelocityVector.z * (float)local_18;
      (pSVar7->position).x = (pSVar7->position).x + local_2c;
      (pSVar7->position).y = (pSVar7->position).y + local_28;
      (pSVar7->position).z = (pSVar7->position).z + local_24;
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
    local_20 = 20.0;
    pfVar9 = (float *)g_TrainSoundFilenameTemplate;
    pfVar11 = &local_118;
    for (iVar3 = 0x19; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pfVar11 = *pfVar9;
      pfVar9 = pfVar9 + (uint)bVar12 * -2 + 1;
      pfVar11 = pfVar11 + (uint)bVar12 * -2 + 1;
    }
    iVar3 = crt_stdlib_c_rand_FUN_005feb5c();
    switch(iVar3 % 5) {
    case 0:
    case 1:
      local_118 = (float)0.59999999999999998 * 1.0;
      local_1c = (STrainNoise *)0x41c80000;
      crt_stdio_c_sprintf_FUN_005fdbd0(acStack_114,"rail?%s.wav",g_CurrentTrainMode);
      break;
    case 2:
    case 3:
      local_118 = (float)0.80000000000000004 * 1.0;
      pcVar10 = acStack_114;
      local_1c = (STrainNoise *)0x41a00000;
      pcVar8 = "bump?.wav";
      do {
        cVar1 = *pcVar8;
        *pcVar10 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar8[1];
        pcVar8 = pcVar8 + 2;
        pcVar10[1] = cVar1;
        pcVar10 = pcVar10 + 2;
      } while (cVar1 != '\0');
      break;
    case 4:
      goto switchD_005b2c8d_caseD_4;
    }
    *local_18 = 0;
    fVar5 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-3.0,2.0);
    fVar5 = fVar5 * local_20 + g_SoundListenerPrev.z;
    (local_1c->position).y = 0.0;
    (local_1c->position).z = fVar5;
    sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
    sound_sndmain_cpp_setNextSfxChannel_FUN_005a8af0(3);
    sound_sndmain_cpp_setNextSfxTrackedVelocity_FUN_005a8a00(&g_TrainVelocityVector);
    crt_stdio_c_sprintf_FUN_005fdbd0(local_b4,"%s @ %g",&local_118,0x3ff0000000000000);
    uVar6 = core_sound_cpp_CSound_playTrackedActorSound_FUN_005b3a70
                      (g_CSoundPtr,(CDemonActor *)0x0,local_b4,&local_1c->position);
    local_1c->sound_handle = uVar6;
    sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
    return;
  }
switchD_005b2c8d_caseD_4:
  return;
}
