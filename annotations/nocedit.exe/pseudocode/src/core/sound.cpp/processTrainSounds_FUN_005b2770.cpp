// Name: core_sound.cpp_processTrainSounds_FUN_005b2770
// Address: 005b2770
// Address Range: [[005b2770, 005b2c93]]
// Convention: __cdecl
// Signature: void core_sound.cpp_processTrainSounds_FUN_005b2770(void)

#include "nocturne.h"

void __cdecl core_sound_cpp_processTrainSounds_FUN_005b2770(void)

{
  char cVar1;
  float fVar2;
  float fVar3;
  STrainNoise *pSVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  STrainNoise *pSVar8;
  BADSPACEBASE *in_ESP;
  char *pcVar9;
  char *pcVar10;
  uint *puVar11;
  byte bVar12;
  int iStack00000030;
  STrainNoise *in_stack_00000034;
  uint *in_stack_00000038;
  float fStack0000003c;
  float fStack00000044;
  CVector3f *in_stack_0000004c;
  int in_stack_00000050;
  float in_stack_ffffff1c;
  float in_stack_ffffff28;
  char local_50 [4];
  char local_4c [4];
  CVector3f local_48;
  CVector3f local_3c;
  uint local_30;
  uint local_2c;
  uint local_28;
  float local_18;
  
  bVar12 = 0;
  local_18 = g_CGamePtr->delta_time_float;
  if (g_CGamePtr->block_auto_save == 0) {
    if (g_TrainLastCameraIndex != g_CDemonSetPtr->selected_camera_index) {
      core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
      core_setcolid_cpp_CDemonSet_disableIgnore_FUN_00574210(g_CDemonSetPtr);
      local_48.x = g_SoundListenerPrev.x;
      local_48.y = g_SoundListenerPrev.y;
      local_48.z = g_SoundListenerPrev.z;
      local_30 = 0;
      local_3c.x = g_SoundListenerPrev.x;
      local_2c = 0x41a00000;
      local_3c.z = g_SoundListenerPrev.z;
      local_28 = 0;
      local_3c.y = g_SoundListenerPrev.y + 20f;
      iVar5 = core_setcolid_cpp_CDemonSet_testLineOcclusion_FUN_00572460
                        (g_CDemonSetPtr,&local_48,&local_3c);
      if (iVar5 == 0) {
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
  iVar5 = crt_string_c_stricmp_FUN_005fe7f0(g_CurrentTrainMode,"int");
  if (iVar5 == 0) {
    sound_sndmain_cpp_killSfx_FUN_005a9c40(g_TrainExteriorAmbientHandle);
  }
  else {
    iVar5 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(g_TrainExteriorAmbientHandle);
    if (iVar5 == 0) {
      sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
      sound_sndmain_cpp_setNextSfxVolume_FUN_005a8a60(0.4);
      g_TrainExteriorAmbientHandle =
           sound_sndmain_cpp_startSfx_FUN_005a8e90("trainext.wav");
      sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
    }
  }
  iVar5 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(g_TrainRailNoiseHandle);
  if (iVar5 == 0) {
    sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
    sound_sndmain_cpp_setNextSfxVolume_FUN_005a8a60(in_stack_ffffff1c * (float)1.5);
    g_TrainRailNoiseHandle = sound_sndmain_cpp_startSfx_FUN_005a8e90("railnoiz.wav");
    sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
  }
  else {
    iVar5 = crt_string_c_stricmp_FUN_005fe7f0(g_PreviousTrainMode,g_CurrentTrainMode);
    if (iVar5 != 0) {
      sound_sndmain_cpp_setSfxVolume_FUN_005a9ae0
                (g_TrainRailNoiseHandle,in_stack_ffffff28 * (float)1.5);
    }
  }
  sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
  pSVar8 = g_TrainNoiseArray;
  iVar5 = 0;
  g_PreviousTrainMode = g_CurrentTrainMode;
  g_TrainVelocityVector.x = 0.0;
  g_TrainVelocityVector.y = 0.0;
  iStack00000030 = 0;
  g_TrainVelocityVector.z = 30.0;
  do {
    iVar6 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(g_TrainNoiseArray[iVar5].sound_handle);
    pSVar4 = pSVar8;
    if (iVar6 != 0) {
      fVar2 = g_TrainVelocityVector.y * (float)in_stack_00000038;
      fVar3 = g_TrainVelocityVector.z * (float)in_stack_00000038;
      (pSVar8->position).x =
           (pSVar8->position).x + g_TrainVelocityVector.x * (float)in_stack_00000038;
      (pSVar8->position).y = (pSVar8->position).y + fVar2;
      (pSVar8->position).z = (pSVar8->position).z + fVar3;
      pSVar4 = in_stack_00000034;
      if ((float)510 < ABS(g_TrainNoiseArray[iVar5].position.z)) {
        sound_sndmain_cpp_killSfx_FUN_005a9c40(g_TrainNoiseArray[iVar5].sound_handle);
      }
    }
    in_stack_00000034 = pSVar4;
    iVar5 = iVar5 + 1;
    pSVar8 = pSVar8 + 1;
  } while (iVar5 < 10);
  g_TrainNoiseCooldown = g_TrainNoiseCooldown - (float)in_stack_00000034;
  if ((g_TrainNoiseCooldown <= 0.0) && (iStack00000030 != 0)) {
    g_TrainNoiseCooldown = core_actor_cpp_getRandomFloat_FUN_0040cc10(1.0,5.0);
    iStack00000030 = 0x41a00000;
    pcVar10 = g_TrainSoundFilenameTemplate;
    puVar11 = (uint *)&stack0xffffff34;
    for (iVar5 = 0x19; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar11 = *(uint *)pcVar10;
      pcVar10 = pcVar10 + ((uint)bVar12 * -2 + 1) * 4;
      puVar11 = puVar11 + (uint)bVar12 * -2 + 1;
    }
    fStack0000003c = g_TrainNoiseCooldown;
    iVar5 = crt_stdlib_c_rand_FUN_005feb5c();
    switch(iVar5 % 5) {
    case 0:
    case 1:
      crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffff3c,"rail?%s.wav",g_CurrentTrainMode);
      break;
    case 2:
    case 3:
      pcVar10 = &stack0xffffff3c;
      pcVar9 = "bump?.wav";
      do {
        cVar1 = *pcVar9;
        *pcVar10 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar9[1];
        pcVar9 = pcVar9 + 2;
        pcVar10[1] = cVar1;
        pcVar10 = pcVar10 + 2;
      } while (cVar1 != '\0');
      break;
    case 4:
      goto switchD_005b2c8d_caseD_4;
    }
    *in_stack_00000038 = 0;
    fStack00000044 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-3.0,2.0);
    fVar2 = fStack00000044 * (float)in_stack_00000038 + g_SoundListenerPrev.z;
    *(uint *)((int)fStack0000003c + 4) = 0;
    *(float *)((int)fStack0000003c + 8) = fVar2;
    sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
    sound_sndmain_cpp_setNextSfxChannel_FUN_005a8af0(3);
    sound_sndmain_cpp_setNextSfxTrackedVelocity_FUN_005a8a00(&g_TrainVelocityVector);
    crt_stdio_c_sprintf_FUN_005fdbd0(local_50,"%s @ %g");
    uVar7 = core_sound_cpp_CSound_playTrackedActorSound_FUN_005b3a70
                      (g_CSoundPtr,(CDemonActor *)0x0,local_4c,in_stack_0000004c);
    *(uint *)(in_stack_00000050 + 0xc) = uVar7;
    sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
    return;
  }
switchD_005b2c8d_caseD_4:
  return;
}
