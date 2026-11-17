// Name: core_sound.cpp_processTrainSounds_FUN_0055f6b0
// Address: 0055f6b0
// Address Range: [[0055f6b0, 0055fbfb]]
// Convention: __cdecl
// Signature: void __cdecl core_sound_cpp_processTrainSounds_FUN_0055f6b0(void)

#include "nocturne.h"

void __cdecl core_sound_cpp_processTrainSounds_FUN_0055f6b0(void)

{
  char cVar1;
  float fVar2;
  STrainNoise *pSVar3;
  int iVar4;
  uint uVar5;
  STrainNoise *pSVar6;
  char *pcVar7;
  uint *puVar8;
  char *pcVar9;
  byte bVar10;
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
  
  bVar10 = 0;
  fStack_24 = g_CGamePtr->delta_time_float;
  if (g_CGamePtr->goggles_active == 0) {
    if (g_INT_02cf5f84 != g_CDemonSetPtr->selected_camera_index) {
      core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
      core_setcolid_cpp_CDemonSet_disableIgnore_FUN_0053ec70(g_CDemonSetPtr);
      CStack_5c.x = g_FLOAT_02cf568c;
      *(float *)((int)&CStack_5c + (uint)bVar10 * -8 + 4) = (&g_FLOAT_02cf5690)[(uint)bVar10 * -2];
      *(float *)((int)&CStack_5c + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
           (&g_FLOAT_02cf5694)[(uint)bVar10 * -2 + (uint)bVar10 * -2];
      fStack_68 = CStack_5c.x;
      afStack_64[1] = CStack_5c.z;
      end_pos = &CStack_50;
      afStack_64[0] = CStack_5c.y + 20.0f;
      CStack_50.x = CStack_5c.x;
      *(float *)((int)&CStack_50 + (uint)bVar10 * -8 + 4) = afStack_64[(uint)bVar10 * -2];
      *(float *)((int)&CStack_50 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
           afStack_64[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
      iVar4 = core_setcolid_cpp_CDemonSet_testLineOcclusion_FUN_0053cbf0
                        (g_CDemonSetPtr,&CStack_5c,end_pos);
      if (iVar4 == 0) {
        PTR_s_int_006045f0 = "ext";
      }
      else {
        PTR_s_int_006045f0 = "int";
      }
      core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
      g_INT_02cf5f84 = g_CDemonSetPtr->selected_camera_index;
    }
  }
  else {
    PTR_s_int_006045f0 = "ext";
    g_INT_02cf5f84 = -1;
  }
  sound_sndmain_cpp_pushSfxOptions_FUN_00555fd0();
  sound_sndmain_cpp_setNextSfxFlags_FUN_00555f00(1);
  sound_sndmain_cpp_setNextSfxChannel_FUN_00555e90(3);
  iVar4 = _stricmp(PTR_s_int_006045f0,"int");
  if (iVar4 == 0) {
    sound_sndmain_cpp_killSfx_FUN_00556be0(g_UINT_02cf5f8c);
    fStack_138 = 0.4;
  }
  else {
    iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700(g_UINT_02cf5f8c);
    fStack_138 = 0.7;
    if (iVar4 == 0) {
      sound_sndmain_cpp_pushSfxOptions_FUN_00555fd0();
      sound_sndmain_cpp_setNextSfxVolume_FUN_00555df0(0.4);
      g_UINT_02cf5f8c = sound_sndmain_cpp_startSfx_FUN_00556240("trainext.wav");
      sound_sndmain_cpp_popSfxOptions_FUN_00556050();
    }
  }
  iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700(g_UINT_02cf5f88);
  if (iVar4 == 0) {
    sound_sndmain_cpp_pushSfxOptions_FUN_00555fd0();
    sound_sndmain_cpp_setNextSfxVolume_FUN_00555df0(fStack_138 * (float)1.5);
    g_UINT_02cf5f88 = sound_sndmain_cpp_startSfx_FUN_00556240("railnoiz.wav");
    sound_sndmain_cpp_popSfxOptions_FUN_00556050();
  }
  else {
    iVar4 = _stricmp(PTR_s_x_006045f4,PTR_s_int_006045f0);
    if (iVar4 != 0) {
      sound_sndmain_cpp_setSfxVolume_FUN_00556ab0
                (g_UINT_02cf5f88,fStack_138 * (float)1.5);
    }
  }
  sound_sndmain_cpp_popSfxOptions_FUN_00556050();
  PTR_s_x_006045f4 = PTR_s_int_006045f0;
  g_CVector3f_02cf5f74.x = 0.0;
  g_CVector3f_02cf5f74.y = 0.0;
  g_CVector3f_02cf5f74.z = 30.0;
  pSStack_28 = (STrainNoise *)0x0;
  iStack_1c = 0;
  pSVar6 = g_STrainNoise_ARRAY_02cf5ed4;
  do {
    iStack_20 = iStack_1c * 0x10;
    iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700
                      (g_STrainNoise_ARRAY_02cf5ed4[iStack_1c].sfx_handle);
    pSVar3 = pSVar6;
    if (iVar4 != 0) {
      fStack_44 = g_CVector3f_02cf5f74.x * fStack_24;
      afStack_40[0] = g_CVector3f_02cf5f74.y * fStack_24;
      afStack_40[1] = g_CVector3f_02cf5f74.z * fStack_24;
      afStack_40[2] = g_CVector3f_02cf5f74.x * fStack_24;
      afStack_40[(uint)bVar10 * -2 + 3] = afStack_40[(uint)bVar10 * -2];
      afStack_40[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
           afStack_40[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
      (pSVar6->position).x = (pSVar6->position).x + afStack_40[2];
      (pSVar6->position).y = (pSVar6->position).y + afStack_40[3];
      (pSVar6->position).z = (pSVar6->position).z + fStack_30;
      pSVar3 = pSStack_28;
      if ((float)510 <
          ABS(*(float *)((int)&g_STrainNoise_ARRAY_02cf5ed4[0].position.z + iStack_20))) {
        sound_sndmain_cpp_killSfx_FUN_00556be0
                  (*(uint *)((int)&g_STrainNoise_ARRAY_02cf5ed4[0].sfx_handle + iStack_20));
        pSVar3 = pSStack_28;
      }
    }
    pSStack_28 = pSVar3;
    iStack_1c = iStack_1c + 1;
    pSVar6 = pSVar6 + 1;
  } while (iStack_1c < 10);
  g_FLOAT_02cf5f80 = g_FLOAT_02cf5f80 - fStack_24;
  if ((g_FLOAT_02cf5f80 <= 0.0) && (pSStack_28 != (STrainNoise *)0x0)) {
    g_FLOAT_02cf5f80 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(1.0,5.0);
    puVar8 = &DAT_00604818;
    pcVar9 = acStack_cc;
    fStack_18 = g_FLOAT_02cf5f80;
    for (iVar4 = 0x19; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(uint *)pcVar9 = *puVar8;
      puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
      pcVar9 = pcVar9 + ((uint)bVar10 * -2 + 1) * 4;
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
      pcVar9 = acStack_cc;
      fStack_2c = 20.0;
      do {
        cVar1 = *pcVar7;
        *pcVar9 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar7[1];
        pcVar7 = pcVar7 + 2;
        pcVar9[1] = cVar1;
        pcVar9 = pcVar9 + 2;
      } while (cVar1 != '\0');
      break;
    case 4:
      goto switchD_0055fbf5_caseD_4;
    }
    (pSStack_28->position).x = 0.0;
    fStack_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-3.0,2.0);
    fVar2 = fStack_18 * fStack_2c + g_FLOAT_02cf5694;
    (pSStack_28->position).y = 0.0;
    (pSStack_28->position).z = fVar2;
    sound_sndmain_cpp_pushSfxOptions_FUN_00555fd0();
    sound_sndmain_cpp_setNextSfxChannel_FUN_00555e90(3);
    sound_sndmain_cpp_setNextSfxTrackedVelocity1_FUN_00555d90(&g_CVector3f_02cf5f74);
    _sprintf(acStack_130,"%s @ %g");
    uVar5 = core_sound_cpp_CSound_playTrackedActorSound_FUN_00560a00
                      (g_CSound_PTR_006045f8,(CDemonActor *)0x0,acStack_130,&pSStack_28->position);
    pSStack_28->sfx_handle = uVar5;
    sound_sndmain_cpp_popSfxOptions_FUN_00556050();
    return;
  }
switchD_0055fbf5_caseD_4:
  return;
}
