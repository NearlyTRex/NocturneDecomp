// Name: core_sound.cpp_FUN_0052d790
// Address: 0052d790
// Address Range: [[0052d790, 0052db19] [0052db4b, 0052dc06] [0052dc48, 0052dcb3]]
// Convention: unknown
// Signature: uint core_sound_cpp_FUN_0052d790(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_sound_cpp_FUN_0052d790(void)

{
  char cVar1;
  STrainNoise *pSVar2;
  int iVar3;
  int iVar4;
  uint extraout_EAX;
  uint uVar5;
  STrainNoise *pSVar6;
  char *pcVar7;
  uint *puVar8;
  char *pcVar9;
  byte bVar10;
  float fVar11;
  float fVar12;
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
  fStack_18 = g_CGame_PTR_005b9354->delta_time_float;
  if (g_CGame_PTR_005b9354->goggles_active == 0) {
    if (_DAT_02dc9d54 != g_CDemonSet_PTR_005be368->selected_camera_index) {
      core_setcolid_cpp_CDemonSet_init_FUN_00511750(g_CDemonSet_PTR_005be368);
      core_setcolid_cpp_CDemonSet_disableIgnore_FUN_005117e0(g_CDemonSet_PTR_005be368);
      CStack_50.x = _DAT_02dc945c;
      CStack_50.y = _DAT_02dc9460;
      CStack_50.z = _DAT_02dc9464;
      uStack_38 = 0;
      CStack_44.x = _DAT_02dc945c;
      uStack_34 = 0x41a00000;
      CStack_44.z = _DAT_02dc9464;
      uStack_30 = 0;
      CStack_44.y = _DAT_02dc9460 + 20.0f;
      iVar3 = core_setcolid_cpp_CDemonSet_testLineOcclusion_FUN_0050fa30
                        (g_CDemonSet_PTR_005be368,&CStack_50,&CStack_44);
      if (iVar3 == 0) {
        PTR_s_int_005bed60 = "ext";
      }
      else {
        PTR_s_int_005bed60 = "int";
      }
      core_setcolid_cpp_CDemonSet_init_FUN_00511750(g_CDemonSet_PTR_005be368);
      _DAT_02dc9d54 = g_CDemonSet_PTR_005be368->selected_camera_index;
    }
  }
  else {
    PTR_s_int_005bed60 = "ext";
    _DAT_02dc9d54 = -1;
  }
  sound_sndmain_cpp_pushSfxOptions_FUN_00526340();
  sound_sndmain_cpp_setNextSfxFlags_FUN_00526240(1);
  sound_sndmain_cpp_setNextSfxChannel_FUN_005261b0(3);
  iVar3 = _stricmp(PTR_s_int_005bed60,"int");
  if (iVar3 == 0) {
    sound_sndmain_cpp_killSfx_FUN_00527230(_DAT_02dc9d5c);
    fVar11 = 0.4;
  }
  else {
    fVar11 = 0.7;
    iVar3 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(_DAT_02dc9d5c);
    if (iVar3 == 0) {
      sound_sndmain_cpp_pushSfxOptions_FUN_00526340();
      sound_sndmain_cpp_setNextSfxVolume_FUN_005260f0(0.4);
      _DAT_02dc9d5c = sound_sndmain_cpp_startSfx_FUN_005265a0("trainext.wav");
      sound_sndmain_cpp_popSfxOptions_FUN_005263c0();
    }
  }
  iVar3 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(_DAT_02dc9d58);
  if (iVar3 == 0) {
    sound_sndmain_cpp_pushSfxOptions_FUN_00526340();
    sound_sndmain_cpp_setNextSfxVolume_FUN_005260f0(fVar11 * (float)1.5);
    _DAT_02dc9d58 = sound_sndmain_cpp_startSfx_FUN_005265a0("railnoiz.wav");
    sound_sndmain_cpp_popSfxOptions_FUN_005263c0();
  }
  else {
    iVar3 = _stricmp(PTR_s_x_005bed64,PTR_s_int_005bed60);
    if (iVar3 != 0) {
      sound_sndmain_cpp_setSfxVolume_FUN_005270d0(_DAT_02dc9d58,fVar11 * (float)1.5);
    }
  }
  sound_sndmain_cpp_popSfxOptions_FUN_005263c0();
  pSVar6 = g_STrainNoise_ARRAY_02dc9ca4;
  iVar3 = 0;
  PTR_s_x_005bed64 = PTR_s_int_005bed60;
  _DAT_02dc9d44 = 0.0;
  _DAT_02dc9d48 = 0.0;
  pSStack_1c = (STrainNoise *)0x0;
  _DAT_02dc9d4c = 30.0;
  do {
    iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50
                      (g_STrainNoise_ARRAY_02dc9ca4[iVar3].sfx_handle);
    pSVar2 = pSVar6;
    if (iVar4 != 0) {
      fStack_2c = _DAT_02dc9d44 * fStack_18;
      fStack_28 = _DAT_02dc9d48 * fStack_18;
      fStack_24 = _DAT_02dc9d4c * fStack_18;
      (pSVar6->position).x = (pSVar6->position).x + fStack_2c;
      (pSVar6->position).y = (pSVar6->position).y + fStack_28;
      (pSVar6->position).z = (pSVar6->position).z + fStack_24;
      pSVar2 = pSStack_1c;
      if ((float)510 < ABS(g_STrainNoise_ARRAY_02dc9ca4[iVar3].position.z)) {
        sound_sndmain_cpp_killSfx_FUN_00527230(g_STrainNoise_ARRAY_02dc9ca4[iVar3].sfx_handle);
        pSVar2 = pSStack_1c;
      }
    }
    pSStack_1c = pSVar2;
    iVar3 = iVar3 + 1;
    pSVar6 = pSVar6 + 1;
  } while (iVar3 < 10);
  _DAT_02dc9d50 = _DAT_02dc9d50 - fStack_18;
  uVar5 = (uint)(ushort)((ushort)(0.0 < _DAT_02dc9d50) << 8 | (ushort)NAN(_DAT_02dc9d50) << 10 |
                        (ushort)(_DAT_02dc9d50 == 0.0) << 0xe);
  if ((0.0 >= _DAT_02dc9d50) && (pSStack_1c != (STrainNoise *)0x0)) {
    _DAT_02dc9d50 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(1.0,5.0);
    fStack_20 = 20.0;
    fVar12 = 1.0;
    puVar8 = &DAT_005bef88;
    pcVar9 = acStack_118;
    fStack_14 = _DAT_02dc9d50;
    for (iVar3 = 0x19; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(uint *)pcVar9 = *puVar8;
      puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
      pcVar9 = pcVar9 + ((uint)bVar10 * -2 + 1) * 4;
    }
    iVar3 = rand();
    uVar5 = iVar3 / 5;
    switch(iVar3 % 5) {
    case 0:
    case 1:
      fVar12 = fVar11 * (float)0.59999999999999998;
      fStack_20 = 25.0;
      _sprintf(acStack_118,"rail?%s.wav",PTR_s_int_005bed60,fVar11,fVar12);
      break;
    case 2:
    case 3:
      fVar12 = fVar11 * (float)0.80000000000000004;
      pcVar9 = acStack_118;
      fStack_20 = 20.0;
      pcVar7 = "bump?.wav";
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
      goto LAB_0052da35;
    }
    (pSStack_1c->position).x = 0.0;
    fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(-3.0,2.0);
    fVar11 = fStack_14 * fStack_20 + _DAT_02dc9464;
    (pSStack_1c->position).y = 0.0;
    (pSStack_1c->position).z = fVar11;
    sound_sndmain_cpp_pushSfxOptions_FUN_00526340();
    sound_sndmain_cpp_setNextSfxChannel_FUN_005261b0(3);
    sound_sndmain_cpp_setNextSfxTrackedVelocity1_FUN_00526090((CVector3f *)&DAT_02dc9d44);
    _sprintf(acStack_b4,"%s @ %g",acStack_118,(double)fVar12);
    uVar5 = core_sound_cpp_CSound_playTrackedActorSound_FUN_0052ea90
                      (g_CSound_PTR_005bed68,(CDemonActor *)0x0,acStack_b4,&pSStack_1c->position);
    pSStack_1c->sfx_handle = uVar5;
    sound_sndmain_cpp_popSfxOptions_FUN_005263c0();
    return extraout_EAX;
  }
LAB_0052da35:
  return uVar5;
}
