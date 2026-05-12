// Name: core_sound.cpp_processTrainSounds_FUN_005b2770
// Address: 005b2770
// MANUAL RECONSTRUCTION
// Address Range: [[005b2770, 005b2c93]]
// Convention: __cdecl
// Signature: void __cdecl core_sound_cpp_processTrainSounds_FUN_005b2770(void)

#include "nocturne.h"

void __cdecl core_sound_cpp_processTrainSounds_FUN_005b2770(void)

{
  float fVar3;
  float fVar4;
  int iVar4;
  int iVar6;
  int iVar5;
  float fVar7;
  uint uVar6;
  STrainNoise *pSVar7;
  float local_120;
  float local_11c;
  char local_118 [100];
  char local_b4 [100];
  CVector3f local_50;
  CVector3f local_44;
  float local_20;
  STrainNoise *local_1c;
  float fVar2;
  STrainNoise *pSVar3;

  fVar7 = g_CGamePtr->delta_time_float;
  if (g_CGamePtr->goggles_active == 0) {
    if (g_TrainLastCameraIndex != g_CDemonSetPtr->selected_camera_index) {
      core_setcolid_cpp_CDemonSet_init_FUN_00574180(g_CDemonSetPtr);
      core_setcolid_cpp_CDemonSet_disableIgnore_FUN_00574210(g_CDemonSetPtr);
      local_50 = g_SoundListenerPrev;
      local_44.x = g_SoundListenerPrev.x;
      local_44.z = g_SoundListenerPrev.z;
      local_44.y = g_SoundListenerPrev.y + 20.0f;
      iVar4 = core_setcolid_cpp_CDemonSet_testLineOcclusion_FUN_00572460
                        (g_CDemonSetPtr,&local_50,&local_44);
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
    g_CurrentTrainMode = "ext";
    g_TrainLastCameraIndex = -1;
  }
  sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
  sound_sndmain_cpp_setNextSfxFlags_FUN_005a8b70(1);
  sound_sndmain_cpp_setNextSfxChannel_FUN_005a8af0(3);
  iVar6 = _stricmp(g_CurrentTrainMode,"int");
  if (iVar6 == 0) {
    sound_sndmain_cpp_killSfx_FUN_005a9c40(g_TrainExteriorAmbientHandle);
    local_120 = 0.4;
  }
  else {
    local_120 = 0.7;
    iVar6 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(g_TrainExteriorAmbientHandle);
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
    sound_sndmain_cpp_setNextSfxVolume_FUN_005a8a60(local_120 * (float)1.5);
    g_TrainRailNoiseHandle = sound_sndmain_cpp_startSfx_FUN_005a8e90("railnoiz.wav");
    sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
  }
  else {
    iVar6 = _stricmp(g_PreviousTrainMode,g_CurrentTrainMode);
    if (iVar6 != 0) {
      sound_sndmain_cpp_setSfxVolume_FUN_005a9ae0
                (g_TrainRailNoiseHandle,local_120 * (float)1.5);
    }
  }
  sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
  pSVar7 = g_TrainNoiseArray;
  iVar6 = 0;
  g_PreviousTrainMode = g_CurrentTrainMode;
  g_TrainVelocityVector.x = 0.0;
  g_TrainVelocityVector.y = 0.0;
  local_1c = (STrainNoise *)0x0;
  g_TrainVelocityVector.z = 30.0;
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
    local_20 = 20.0;
    local_11c = 1.0;
    memcpy(local_118,g_TrainSoundFilenameTemplate,100);
    iVar6 = rand();
    switch(iVar6 % 5) {
    case 0:
    case 1:
      local_11c = local_120 * (float)0.59999999999999998;
      local_20 = 25.0;
      _sprintf(local_118,"rail?%s.wav",g_CurrentTrainMode);
      break;
    case 2:
    case 3:
      local_11c = local_120 * (float)0.80000000000000004;
      local_20 = 20.0;
      strcpy(local_118,"bump?.wav");
      break;
    case 4:
      goto switchD_005b2c8d_caseD_4;
    }
    (local_1c->position).x = 0.0;
    fVar7 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(-3.0,2.0);
    fVar2 = fVar7 * local_20 + g_SoundListenerPrev.z;
    (local_1c->position).y = 0.0;
    (local_1c->position).z = fVar2;
    sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
    sound_sndmain_cpp_setNextSfxChannel_FUN_005a8af0(3);
    sound_sndmain_cpp_setNextSfxTrackedVelocity1_FUN_005a8a00(&g_TrainVelocityVector);
    _sprintf(local_b4,"%s @ %g",local_118,(double)local_11c);
    uVar6 = core_sound_cpp_CSound_playTrackedActorSound_FUN_005b3a70
                      (g_CSoundPtr,(CDemonActor *)0x0,local_b4,&local_1c->position);
    local_1c->sfx_handle = uVar6;
    sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
    return;
  }
switchD_005b2c8d_caseD_4:
  return;
}
