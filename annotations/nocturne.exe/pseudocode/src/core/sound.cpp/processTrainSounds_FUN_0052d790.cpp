// Name: core_sound.cpp_processTrainSounds_FUN_0052d790
// Address: 0052d790
// Address Range: [[0052d790, 0052db19] [0052db4b, 0052dc06] [0052dc48, 0052dcb3]]
// Convention: __cdecl
// Signature: void __cdecl core_sound_cpp_processTrainSounds_FUN_0052d790(void)

#include "nocturne.h"

void __cdecl core_sound_cpp_processTrainSounds_FUN_0052d790(void)

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
  float fStack_120;
  float fStack_11c;
  char acStack_118 [100];
  char acStack_b4 [100];
  CVector3f CStack_50;
  CVector3f CStack_44;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  STrainNoise *pSStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar10 = 0;
  fStack_18 = g_CGamePtr->delta_time_float;
  if (g_CGamePtr->goggles_active == 0) {
    if (g_TrainLastCameraIndex != g_CDemonSetPtr->selected_camera_index) {
      core_setcolid_cpp_CDemonSet_init_FUN_00511750(g_CDemonSetPtr);
      core_setcolid_cpp_CDemonSet_disableIgnore_FUN_005117e0(g_CDemonSetPtr);
      CStack_50.x = g_FLOAT_02dc945c;
      CStack_50.y = g_FLOAT_02dc9460;
      CStack_50.z = g_FLOAT_02dc9464;
      uStack_38 = 0;
      CStack_44.x = g_FLOAT_02dc945c;
      uStack_34 = 0x41a00000;
      CStack_44.z = g_FLOAT_02dc9464;
      uStack_30 = 0;
      CStack_44.y = g_FLOAT_02dc9460 + 20.0f;
      iVar4 = core_setcolid_cpp_CDemonSet_testLineOcclusion_FUN_0050fa30
                        (g_CDemonSetPtr,&CStack_50,&CStack_44);
      if (iVar4 == 0) {
        PTR_s_int_005bed60 = "ext";
      }
      else {
        PTR_s_int_005bed60 = "int";
      }
      core_setcolid_cpp_CDemonSet_init_FUN_00511750(g_CDemonSetPtr);
      g_TrainLastCameraIndex = g_CDemonSetPtr->selected_camera_index;
    }
  }
  else {
    PTR_s_int_005bed60 = "ext";
    g_TrainLastCameraIndex = -1;
  }
  sound_sndmain_cpp_pushSfxOptions_FUN_00526340();
  sound_sndmain_cpp_setNextSfxFlags_FUN_00526240(1);
  sound_sndmain_cpp_setNextSfxChannel_FUN_005261b0(3);
  iVar4 = _stricmp(PTR_s_int_005bed60,"int");
  if (iVar4 == 0) {
    sound_sndmain_cpp_killSfx_FUN_00527230(g_TrainExteriorAmbientHandle);
    fStack_120 = 0.4;
  }
  else {
    fStack_120 = 0.7;
    iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(g_TrainExteriorAmbientHandle);
    if (iVar4 == 0) {
      sound_sndmain_cpp_pushSfxOptions_FUN_00526340();
      sound_sndmain_cpp_setNextSfxVolume_FUN_005260f0(0.4);
      g_TrainExteriorAmbientHandle =
           sound_sndmain_cpp_startSfx_FUN_005265a0("trainext.wav");
      sound_sndmain_cpp_popSfxOptions_FUN_005263c0();
    }
  }
  iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(g_TrainRailNoiseHandle);
  if (iVar4 == 0) {
    sound_sndmain_cpp_pushSfxOptions_FUN_00526340();
    sound_sndmain_cpp_setNextSfxVolume_FUN_005260f0(fStack_120 * (float)1.5);
    g_TrainRailNoiseHandle = sound_sndmain_cpp_startSfx_FUN_005265a0("railnoiz.wav");
    sound_sndmain_cpp_popSfxOptions_FUN_005263c0();
  }
  else {
    iVar4 = _stricmp(PTR_s_x_005bed64,PTR_s_int_005bed60);
    if (iVar4 != 0) {
      sound_sndmain_cpp_setSfxVolume_FUN_005270d0
                (g_TrainRailNoiseHandle,fStack_120 * (float)1.5);
    }
  }
  sound_sndmain_cpp_popSfxOptions_FUN_005263c0();
  pSVar7 = g_TrainNoiseArray;
  iVar4 = 0;
  PTR_s_x_005bed64 = PTR_s_int_005bed60;
  g_TrainVelocityVector.x = 0.0;
  g_TrainVelocityVector.y = 0.0;
  pSStack_1c = (STrainNoise *)0x0;
  g_TrainVelocityVector.z = 30.0;
  do {
    iVar5 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(g_TrainNoiseArray[iVar4].sfx_handle);
    pSVar3 = pSVar7;
    if (iVar5 != 0) {
      fStack_2c = g_TrainVelocityVector.x * fStack_18;
      fStack_28 = g_TrainVelocityVector.y * fStack_18;
      fStack_24 = g_TrainVelocityVector.z * fStack_18;
      (pSVar7->position).x = (pSVar7->position).x + fStack_2c;
      (pSVar7->position).y = (pSVar7->position).y + fStack_28;
      (pSVar7->position).z = (pSVar7->position).z + fStack_24;
      pSVar3 = pSStack_1c;
      if ((float)510 < ABS(g_TrainNoiseArray[iVar4].position.z)) {
        sound_sndmain_cpp_killSfx_FUN_00527230(g_TrainNoiseArray[iVar4].sfx_handle);
        pSVar3 = pSStack_1c;
      }
    }
    pSStack_1c = pSVar3;
    iVar4 = iVar4 + 1;
    pSVar7 = pSVar7 + 1;
  } while (iVar4 < 10);
  g_TrainNoiseCooldown = g_TrainNoiseCooldown - fStack_18;
  if ((g_TrainNoiseCooldown <= 0.0) && (pSStack_1c != (STrainNoise *)0x0)) {
    g_TrainNoiseCooldown = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(1.0,5.0);
    fStack_20 = 20.0;
    fStack_11c = 1.0;
    pcVar9 = g_TrainSoundFilenameTemplate;
    pcVar8 = acStack_118;
    fStack_14 = g_TrainNoiseCooldown;
    for (iVar4 = 0x19; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(uint *)pcVar8 = *(uint *)pcVar9;
      pcVar9 = pcVar9 + ((uint)bVar10 * -2 + 1) * 4;
      pcVar8 = pcVar8 + ((uint)bVar10 * -2 + 1) * 4;
    }
    iVar4 = rand();
    switch(iVar4 % 5) {
    case 0:
    case 1:
      fStack_11c = fStack_120 * (float)0.59999999999999998;
      fStack_20 = 25.0;
      _sprintf(acStack_118,"rail?%s.wav");
      break;
    case 2:
    case 3:
      fStack_11c = fStack_120 * (float)0.80000000000000004;
      pcVar9 = acStack_118;
      fStack_20 = 20.0;
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
      goto LAB_0052da35;
    }
    (pSStack_1c->position).x = 0.0;
    fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(-3.0,2.0);
    fVar2 = fStack_14 * fStack_20 + g_FLOAT_02dc9464;
    (pSStack_1c->position).y = 0.0;
    (pSStack_1c->position).z = fVar2;
    sound_sndmain_cpp_pushSfxOptions_FUN_00526340();
    sound_sndmain_cpp_setNextSfxChannel_FUN_005261b0(3);
    sound_sndmain_cpp_setNextSfxTrackedVelocity1_FUN_00526090(&g_TrainVelocityVector);
    _sprintf(acStack_b4,"%s @ %g",acStack_118,(double)fStack_11c);
    uVar6 = core_sound_cpp_CSound_playTrackedActorSound_FUN_0052ea90
                      (g_CSound_PTR_005bed68,(CDemonActor *)0x0,acStack_b4,&pSStack_1c->position);
    pSStack_1c->sfx_handle = uVar6;
    sound_sndmain_cpp_popSfxOptions_FUN_005263c0();
    return;
  }
LAB_0052da35:
  return;
}
