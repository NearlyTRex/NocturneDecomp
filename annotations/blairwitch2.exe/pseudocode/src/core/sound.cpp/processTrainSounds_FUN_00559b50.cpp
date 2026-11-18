// Name: core_sound.cpp_processTrainSounds_FUN_00559b50
// Address: 00559b50
// Address Range: [[00559b50, 0055a09b]]
// Convention: __cdecl
// Signature: void __cdecl core_sound_cpp_processTrainSounds_FUN_00559b50(void)

#include "nocturne.h"

void __cdecl core_sound_cpp_processTrainSounds_FUN_00559b50(void)

{
  char cVar1;
  float fVar2;
  STrainNoise *pSVar3;
  int iVar4;
  uint uVar5;
  STrainNoise *pSVar6;
  char *pcVar7;
  char *pcVar8;
  byte bVar9;
  float afStackY_1050 [961];
  CVector3f *end_pos;
  float fStack_138;
  float fStack_134;
  char acStack_130 [100];
  char acStack_cc [100];
  float fStack_68;
  float afStack_64 [2];
  CVector3f CStack_5c;
  CVector3f CStack_50;
  float fStack_44;
  float afStack_40 [4];
  float fStack_30;
  float fStack_2c;
  STrainNoise *pSStack_28;
  float fStack_24;
  int iStack_20;
  int iStack_1c;
  float fStack_18;
  
  bVar9 = 0;
  fStack_24 = g_CGamePtr->delta_time_float;
  if (g_CGamePtr->goggles_active == 0) {
    if (g_TrainLastCameraIndex != g_CDemonSetPtr->selected_camera_index) {
      core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
      core_setcolid_cpp_CDemonSet_disableIgnore_FUN_00537e90(g_CDemonSetPtr);
      CStack_5c.x = g_FLOAT_0264b29c;
      *(float *)((int)&CStack_5c + (uint)bVar9 * -8 + 4) = (&g_FLOAT_0264b2a0)[(uint)bVar9 * -2];
      *(float *)((int)&CStack_5c + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
           (&g_FLOAT_0264b2a4)[(uint)bVar9 * -2 + (uint)bVar9 * -2];
      fStack_68 = CStack_5c.x;
      afStack_64[1] = CStack_5c.z;
      end_pos = &CStack_50;
      afStack_64[0] = CStack_5c.y + 20.0f;
      CStack_50.x = CStack_5c.x;
      *(float *)((int)&CStack_50 + (uint)bVar9 * -8 + 4) = afStack_64[(uint)bVar9 * -2];
      *(float *)((int)&CStack_50 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
           afStack_64[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
      iVar4 = core_setcolid_cpp_CDemonSet_testLineOcclusion_FUN_00535e10
                        (g_CDemonSetPtr,&CStack_5c,end_pos);
      if (iVar4 == 0) {
        PTR_s_int_0061c060 = "ext";
      }
      else {
        PTR_s_int_0061c060 = "int";
      }
      core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
      g_TrainLastCameraIndex = g_CDemonSetPtr->selected_camera_index;
    }
  }
  else {
    PTR_s_int_0061c060 = "ext";
    g_TrainLastCameraIndex = -1;
  }
  sound_sndmain_cpp_pushSfxOptions_FUN_00550450();
  sound_sndmain_cpp_setNextSfxFlags_FUN_00550380(1);
  sound_sndmain_cpp_setNextSfxChannel_FUN_00550310(3);
  iVar4 = _stricmp(PTR_s_int_0061c060,"int");
  if (iVar4 == 0) {
    sound_sndmain_cpp_killSfx_FUN_00551050(g_TrainExteriorAmbientHandle);
    fStack_138 = 0.4;
  }
  else {
    iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_00550b70(g_TrainExteriorAmbientHandle);
    fStack_138 = 0.7;
    if (iVar4 == 0) {
      sound_sndmain_cpp_pushSfxOptions_FUN_00550450();
      sound_sndmain_cpp_setNextSfxVolume_FUN_00550270(0.4);
      g_TrainExteriorAmbientHandle =
           sound_sndmain_cpp_startSfx_FUN_005506b0("trainext.wav");
      sound_sndmain_cpp_popSfxOptions_FUN_005504d0();
    }
  }
  iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_00550b70(g_TrainRailNoiseHandle);
  if (iVar4 == 0) {
    sound_sndmain_cpp_pushSfxOptions_FUN_00550450();
    sound_sndmain_cpp_setNextSfxVolume_FUN_00550270(fStack_138 * (float)1.5);
    g_TrainRailNoiseHandle = sound_sndmain_cpp_startSfx_FUN_005506b0("railnoiz.wav");
    sound_sndmain_cpp_popSfxOptions_FUN_005504d0();
  }
  else {
    iVar4 = _stricmp(PTR_s_x_0061c064,PTR_s_int_0061c060);
    if (iVar4 != 0) {
      sound_sndmain_cpp_setSfxVolume_FUN_00550f20
                (g_TrainRailNoiseHandle,fStack_138 * (float)1.5);
    }
  }
  sound_sndmain_cpp_popSfxOptions_FUN_005504d0();
  PTR_s_x_0061c064 = PTR_s_int_0061c060;
  g_CVector3f_0264bb84.x = 0.0;
  g_CVector3f_0264bb84.y = 0.0;
  g_CVector3f_0264bb84.z = 30.0;
  pSStack_28 = (STrainNoise *)0x0;
  iStack_1c = 0;
  pSVar6 = g_TrainNoiseArray;
  do {
    iStack_20 = iStack_1c * 0x10;
    iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_00550b70(g_TrainNoiseArray[iStack_1c].sfx_handle);
    pSVar3 = pSVar6;
    if (iVar4 != 0) {
      fStack_44 = g_CVector3f_0264bb84.x * fStack_24;
      afStack_40[0] = g_CVector3f_0264bb84.y * fStack_24;
      afStack_40[1] = g_CVector3f_0264bb84.z * fStack_24;
      afStack_40[2] = g_CVector3f_0264bb84.x * fStack_24;
      afStack_40[(uint)bVar9 * -2 + 3] = afStack_40[(uint)bVar9 * -2];
      afStack_40[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
           afStack_40[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
      (pSVar6->position).x = (pSVar6->position).x + afStack_40[2];
      (pSVar6->position).y = (pSVar6->position).y + afStack_40[3];
      (pSVar6->position).z = (pSVar6->position).z + fStack_30;
      pSVar3 = pSStack_28;
      if ((float)510 <
          ABS(*(float *)((int)&g_TrainNoiseArray[0].position.z + iStack_20))) {
        sound_sndmain_cpp_killSfx_FUN_00551050
                  (*(uint *)((int)&g_TrainNoiseArray[0].sfx_handle + iStack_20));
        pSVar3 = pSStack_28;
      }
    }
    pSStack_28 = pSVar3;
    iStack_1c = iStack_1c + 1;
    pSVar6 = pSVar6 + 1;
  } while (iStack_1c < 10);
  g_TrainNoiseCooldown = g_TrainNoiseCooldown - fStack_24;
  if ((g_TrainNoiseCooldown <= 0.0) && (pSStack_28 != (STrainNoise *)0x0)) {
    g_TrainNoiseCooldown = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(1.0,5.0);
    pcVar8 = g_TrainSoundFilenameTemplate;
    pcVar7 = acStack_cc;
    fStack_18 = g_TrainNoiseCooldown;
    for (iVar4 = 0x19; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(uint *)pcVar7 = *(uint *)pcVar8;
      pcVar8 = pcVar8 + ((uint)bVar9 * -2 + 1) * 4;
      pcVar7 = pcVar7 + ((uint)bVar9 * -2 + 1) * 4;
    }
    fStack_2c = 20.0;
    fStack_134 = 1.0;
    iVar4 = rand();
    switch(iVar4 % 5) {
    case 0:
    case 1:
      fStack_134 = fStack_138 * (float)0.59999999999999998;
      fStack_2c = 25.0;
      _sprintf(acStack_cc,"rail?%s.wav");
      break;
    case 2:
    case 3:
      fStack_134 = fStack_138 * (float)0.80000000000000004;
      pcVar7 = "bump?.wav";
      pcVar8 = acStack_cc;
      fStack_2c = 20.0;
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
      goto switchD_0055a095_caseD_4;
    }
    (pSStack_28->position).x = 0.0;
    fStack_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(-3.0,2.0);
    fVar2 = fStack_18 * fStack_2c + g_FLOAT_0264b2a4;
    (pSStack_28->position).y = 0.0;
    (pSStack_28->position).z = fVar2;
    sound_sndmain_cpp_pushSfxOptions_FUN_00550450();
    sound_sndmain_cpp_setNextSfxChannel_FUN_00550310(3);
    sound_sndmain_cpp_setNextSfxTrackedVelocity1_FUN_00550210(&g_CVector3f_0264bb84);
    _sprintf(acStack_130,"%s @ %g");
    uVar5 = core_sound_cpp_CSound_playTrackedActorSound_FUN_0055ae80
                      (g_CSound_PTR_0061c068,(CDemonActor *)0x0,acStack_130,&pSStack_28->position);
    pSStack_28->sfx_handle = uVar5;
    sound_sndmain_cpp_popSfxOptions_FUN_005504d0();
    return;
  }
switchD_0055a095_caseD_4:
  return;
}
