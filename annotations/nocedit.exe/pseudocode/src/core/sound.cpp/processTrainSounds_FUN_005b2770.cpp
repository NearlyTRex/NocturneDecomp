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
  char *pcVar9;
  uint *puVar10;
  byte bVar11;
  float in_stack_fffffec8;
  float in_stack_fffffed4;
  char local_b4 [16];
  char acStack_a4 [8];
  CVector3f CStack_9c;
  CVector3f CStack_90;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  float local_30;
  float local_2c;
  float local_28;
  int local_24;
  STrainNoise *local_20;
  CVector3f *local_1c;
  float local_18;
  
  bVar11 = 0;
  local_18 = g_CGamePtr->delta_time_float;
  if (g_CGamePtr->block_auto_save == 0) {
    if (g_TrainLastCameraIndex != g_CDemonSetPtr->selected_camera_index) {
      core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
      core_setcolid_cpp_CDemonSet_disableIgnore_FUN_00574210(g_CDemonSetPtr);
      CStack_9c.x = g_SoundListenerPrev.x;
      CStack_9c.y = g_SoundListenerPrev.y;
      CStack_9c.z = g_SoundListenerPrev.z;
      uStack_84 = 0;
      CStack_90.x = g_SoundListenerPrev.x;
      uStack_80 = 0x41a00000;
      CStack_90.z = g_SoundListenerPrev.z;
      uStack_7c = 0;
      CStack_90.y = g_SoundListenerPrev.y + 20f;
      iVar3 = core_setcolid_cpp_CDemonSet_testLineOcclusion_FUN_00572460
                        (g_CDemonSetPtr,&CStack_9c,&CStack_90);
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
  iVar3 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(g_TrainRailNoiseHandle);
  if (iVar3 == 0) {
    sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
    sound_sndmain_cpp_setNextSfxVolume_FUN_005a8a60(in_stack_fffffec8 * (float)1.5);
    g_TrainRailNoiseHandle = sound_sndmain_cpp_startSfx_FUN_005a8e90("railnoiz.wav");
    sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
  }
  else {
    iVar3 = crt_string_c_stricmp_FUN_005fe7f0(g_PreviousTrainMode,g_CurrentTrainMode);
    if (iVar3 != 0) {
      sound_sndmain_cpp_setSfxVolume_FUN_005a9ae0
                (g_TrainRailNoiseHandle,in_stack_fffffed4 * (float)1.5);
    }
  }
  sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
  pSVar7 = g_TrainNoiseArray;
  iVar3 = 0;
  g_PreviousTrainMode = g_CurrentTrainMode;
  g_TrainVelocityVector.x = 0.0;
  g_TrainVelocityVector.y = 0.0;
  local_24 = 0;
  g_TrainVelocityVector.z = 30.0;
  do {
    iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(g_TrainNoiseArray[iVar3].sound_handle);
    pSVar2 = pSVar7;
    if (iVar4 != 0) {
      local_30 = g_TrainVelocityVector.x * (float)local_1c;
      local_2c = g_TrainVelocityVector.y * (float)local_1c;
      local_28 = g_TrainVelocityVector.z * (float)local_1c;
      (pSVar7->position).x = (pSVar7->position).x + local_30;
      (pSVar7->position).y = (pSVar7->position).y + local_2c;
      (pSVar7->position).z = (pSVar7->position).z + local_28;
      pSVar2 = local_20;
      if ((float)510 < ABS(g_TrainNoiseArray[iVar3].position.z)) {
        sound_sndmain_cpp_killSfx_FUN_005a9c40(g_TrainNoiseArray[iVar3].sound_handle);
        pSVar2 = local_20;
      }
    }
    local_20 = pSVar2;
    iVar3 = iVar3 + 1;
    pSVar7 = pSVar7 + 1;
  } while (iVar3 < 10);
  g_TrainNoiseCooldown = g_TrainNoiseCooldown - (float)local_20;
  if ((g_TrainNoiseCooldown <= 0.0) && (local_24 != 0)) {
    g_TrainNoiseCooldown = core_actor_cpp_getRandomFloat_FUN_0040cc10(1.0,5.0);
    local_24 = 0x41a00000;
    pcVar9 = g_TrainSoundFilenameTemplate;
    puVar10 = (uint *)&stack0xfffffee0;
    local_18 = g_TrainNoiseCooldown;
    for (iVar3 = 0x19; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar10 = *(uint *)pcVar9;
      pcVar9 = pcVar9 + ((uint)bVar11 * -2 + 1) * 4;
      puVar10 = puVar10 + (uint)bVar11 * -2 + 1;
    }
    iVar3 = crt_stdlib_c_rand_FUN_005feb5c();
    switch(iVar3 % 5) {
    case 0:
    case 1:
      local_20 = (STrainNoise *)0x41c80000;
      crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xfffffee8,"rail?%s.wav",g_CurrentTrainMode);
      break;
    case 2:
    case 3:
      pcVar9 = &stack0xfffffee8;
      local_20 = (STrainNoise *)0x41a00000;
      pcVar8 = "bump?.wav";
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
      goto switchD_005b2c8d_caseD_4;
    }
    local_1c->x = 0.0;
    fVar5 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-3.0,2.0);
    fVar5 = fVar5 * (float)local_1c + g_SoundListenerPrev.z;
    *(uint *)((int)local_18 + 4) = 0;
    *(float *)((int)local_18 + 8) = fVar5;
    sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
    sound_sndmain_cpp_setNextSfxChannel_FUN_005a8af0(3);
    sound_sndmain_cpp_setNextSfxTrackedVelocity_FUN_005a8a00(&g_TrainVelocityVector);
    crt_stdio_c_sprintf_FUN_005fdbd0(acStack_a4,"%s @ %g");
    uVar6 = core_sound_cpp_CSound_playTrackedActorSound_FUN_005b3a70
                      (g_CSoundPtr,(CDemonActor *)0x0,local_b4,local_1c);
    *(uint *)((int)local_18 + 0xc) = uVar6;
    sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
    return;
  }
switchD_005b2c8d_caseD_4:
  return;
}
