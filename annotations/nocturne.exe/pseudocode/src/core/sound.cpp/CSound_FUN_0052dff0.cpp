// Name: core_sound.cpp_CSound_FUN_0052dff0
// Address: 0052dff0
// Address Range: [[0052dff0, 0052e84a]]
// Convention: __cdecl
// Signature: void __cdecl core_sound_cpp_CSound_FUN_0052dff0(CSound *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_sound_cpp_CSound_FUN_0052dff0(CSound *this_ptr)

{
  char cVar1;
  float fVar2;
  STrainNoise *pSVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  STrainNoise *pSVar7;
  char *pcVar8;
  uint *puVar9;
  char *pcVar10;
  byte bVar11;
  float local_140;
  float local_13c;
  float local_138;
  char local_134 [100];
  char local_d0 [100];
  uint local_6c;
  uint local_68;
  uint local_64;
  float local_60;
  float local_5c;
  float local_58;
  CVector3f local_54;
  CVector3f local_48;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  STrainNoise *local_1c;
  float local_18;
  float local_14;
  
  bVar11 = 0;
  local_3c = g_CGame_PTR_005b9354->delta_time_float;
  local_20 = local_3c * (float)0.5;
  local_30 = local_3c;
  core_sound_cpp_updateListeners_FUN_0052c9d0();
  local_38 = -local_20;
  local_24 = _DAT_02dc9468 - _DAT_02dc946c;
  if (local_24 < local_38) {
    local_24 = local_38;
  }
  if (local_20 < local_24) {
    local_24 = local_20;
  }
  _DAT_02dc946c = _DAT_02dc946c + local_24;
  if (_DAT_02dc946c <= (float)0.001) {
    core_sound_cpp_CSound_killSound_FUN_0052ebb0(this_ptr,_DAT_02dc9454);
    _DAT_02dc946c = 0.0;
  }
  else {
    iVar4 = core_sound_cpp_CSound_isSoundPlaying_FUN_0052eba0(this_ptr,_DAT_02dc9454);
    if (iVar4 == 0) {
      _DAT_02dc9454 = sound_sndmain_cpp_startSfx_FUN_005265a0("wind-ctl.wav");
    }
    sound_sndmain_cpp_setSfxVolume_FUN_005270d0(_DAT_02dc9454,_DAT_02dc946c);
  }
  local_138 = 0.0;
  if (((0.0 < *(float *)(0x02DD1210 + 0xc)) &&
      (iVar4 = _strnicmp
                         (g_CDemonSet_PTR_005be368->geometry_filename,"NDUN",4), iVar4 == 0
      )) && (local_138 = SQRT(*(float *)(0x02DD1210 + 0xc)) * (float)0.027777777777777801 +
                         (float)0.20000000000000001, (float)0.69999999999999996 < local_138)) {
    local_138 = 0.7;
  }
  local_34 = -local_20;
  local_28 = local_138 - _DAT_02dc9470;
  if (local_28 < local_34) {
    local_28 = local_34;
  }
  if (local_20 < local_28) {
    local_28 = local_20;
  }
  _DAT_02dc9470 = _DAT_02dc9470 + local_28;
  if (_DAT_02dc9470 <= (float)0.001) {
    core_sound_cpp_CSound_killSound_FUN_0052ebb0(this_ptr,_DAT_02dc9458);
    _DAT_02dc9470 = 0.0;
  }
  else {
    iVar4 = core_sound_cpp_CSound_isSoundPlaying_FUN_0052eba0(this_ptr,_DAT_02dc9458);
    if (iVar4 == 0) {
      _DAT_02dc9458 = sound_sndmain_cpp_startSfx_FUN_005265a0("water-2.wav");
    }
    sound_sndmain_cpp_setSfxVolume_FUN_005270d0(_DAT_02dc9458,_DAT_02dc9470);
  }
  if (_DAT_02dc9ca0 <= local_30) {
    _DAT_02dc9c98 = _DAT_02dc9c9c;
    _DAT_02dc9ca0 = 0.0;
  }
  else {
    fVar2 = local_30 / _DAT_02dc9ca0;
    _DAT_02dc9ca0 = _DAT_02dc9ca0 - local_30;
    _DAT_02dc9c98 = fVar2 * (_DAT_02dc9c9c - _DAT_02dc9c98) + _DAT_02dc9c98;
  }
  iVar4 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_00527490(0);
  if (iVar4 == 0) {
    sound_sndmain_cpp_enableSfxChannel_FUN_00527410(3,0);
  }
  else {
    sound_sndmain_cpp_enableSfxChannel_FUN_00527410(3,1);
    local_14 = sound_sndmain_cpp_getSfxChannelVol_FUN_00527380(0);
    sound_sndmain_cpp_setSfxChannelVol_FUN_005272e0(3,local_14 * _DAT_02dc9c98);
  }
  if (g_CDemonSet_PTR_005be368->player_on_train != 0) {
    local_18 = g_CGame_PTR_005b9354->delta_time_float;
    if (g_CGame_PTR_005b9354->goggles_active == 0) {
      if (_DAT_02dc9d54 != g_CDemonSet_PTR_005be368->selected_camera_index) {
        core_setcolid_cpp_CDemonSet_init_FUN_00511750(g_CDemonSet_PTR_005be368);
        core_setcolid_cpp_CDemonSet_disableIgnore_FUN_005117e0(g_CDemonSet_PTR_005be368);
        local_54.x = _DAT_02dc945c;
        local_54.y = _DAT_02dc9460;
        local_54.z = _DAT_02dc9464;
        local_68 = 0x41a00000;
        local_48.x = _DAT_02dc945c;
        local_6c = 0;
        local_48.z = _DAT_02dc9464;
        local_64 = 0;
        local_48.y = _DAT_02dc9460 + 20.0f;
        iVar4 = core_setcolid_cpp_CDemonSet_testLineOcclusion_FUN_0050fa30
                          (g_CDemonSet_PTR_005be368,&local_54,&local_48);
        if (iVar4 == 0) {
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
      _DAT_02dc9d54 = -1;
      PTR_s_int_005bed60 = "ext";
    }
    sound_sndmain_cpp_pushSfxOptions_FUN_00526340();
    sound_sndmain_cpp_setNextSfxFlags_FUN_00526240(1);
    sound_sndmain_cpp_setNextSfxChannel_FUN_005261b0(3);
    iVar4 = _stricmp(PTR_s_int_005bed60,"int");
    if (iVar4 == 0) {
      sound_sndmain_cpp_killSfx_FUN_00527230(_DAT_02dc9d5c);
      local_13c = 0.4;
    }
    else {
      iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(_DAT_02dc9d5c);
      local_13c = 0.7;
      if (iVar4 == 0) {
        sound_sndmain_cpp_pushSfxOptions_FUN_00526340();
        sound_sndmain_cpp_setNextSfxVolume_FUN_005260f0(0.4);
        _DAT_02dc9d5c = sound_sndmain_cpp_startSfx_FUN_005265a0("trainext.wav");
        sound_sndmain_cpp_popSfxOptions_FUN_005263c0();
      }
    }
    iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(_DAT_02dc9d58);
    if (iVar4 == 0) {
      sound_sndmain_cpp_pushSfxOptions_FUN_00526340();
      sound_sndmain_cpp_setNextSfxVolume_FUN_005260f0(local_13c * (float)1.5);
      _DAT_02dc9d58 = sound_sndmain_cpp_startSfx_FUN_005265a0("railnoiz.wav");
      sound_sndmain_cpp_popSfxOptions_FUN_005263c0();
    }
    else {
      iVar4 = _stricmp(PTR_s_x_005bed64,PTR_s_int_005bed60);
      if (iVar4 != 0) {
        sound_sndmain_cpp_setSfxVolume_FUN_005270d0
                  (_DAT_02dc9d58,local_13c * (float)1.5);
      }
    }
    sound_sndmain_cpp_popSfxOptions_FUN_005263c0();
    pSVar7 = g_STrainNoise_ARRAY_02dc9ca4;
    iVar4 = 0;
    PTR_s_x_005bed64 = PTR_s_int_005bed60;
    _DAT_02dc9d44 = 0.0;
    _DAT_02dc9d48 = 0.0;
    _DAT_02dc9d4c = 30.0;
    local_1c = (STrainNoise *)0x0;
    do {
      iVar5 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50
                        (g_STrainNoise_ARRAY_02dc9ca4[iVar4].sfx_handle);
      pSVar3 = pSVar7;
      if (iVar5 != 0) {
        local_60 = _DAT_02dc9d44 * local_18;
        local_5c = _DAT_02dc9d48 * local_18;
        local_58 = _DAT_02dc9d4c * local_18;
        (pSVar7->position).x = (pSVar7->position).x + local_60;
        (pSVar7->position).y = (pSVar7->position).y + local_5c;
        (pSVar7->position).z = (pSVar7->position).z + local_58;
        pSVar3 = local_1c;
        if ((float)510 < ABS(g_STrainNoise_ARRAY_02dc9ca4[iVar4].position.z)) {
          sound_sndmain_cpp_killSfx_FUN_00527230(g_STrainNoise_ARRAY_02dc9ca4[iVar4].sfx_handle);
          pSVar3 = local_1c;
        }
      }
      local_1c = pSVar3;
      iVar4 = iVar4 + 1;
      pSVar7 = pSVar7 + 1;
    } while (iVar4 < 10);
    _DAT_02dc9d50 = _DAT_02dc9d50 - local_18;
    if ((_DAT_02dc9d50 <= 0.0) && (local_1c != (STrainNoise *)0x0)) {
      _DAT_02dc9d50 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(1.0,5.0);
      local_2c = 20.0;
      puVar9 = &DAT_005bef88;
      pcVar10 = local_d0;
      local_14 = _DAT_02dc9d50;
      for (iVar4 = 0x19; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(uint *)pcVar10 = *puVar9;
        puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
        pcVar10 = pcVar10 + ((uint)bVar11 * -2 + 1) * 4;
      }
      iVar4 = rand();
      local_140 = 1.0;
      switch(iVar4 % 5) {
      case 0:
      case 1:
        local_140 = local_13c * (float)0.59999999999999998;
        local_2c = 25.0;
        _sprintf(local_d0,"rail?%s.wav");
        break;
      case 2:
      case 3:
        local_140 = local_13c * (float)0.80000000000000004;
        pcVar8 = "bump?.wav";
        local_2c = 20.0;
        pcVar10 = local_d0;
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
        goto switchD_0052e844_caseD_4;
      }
      (local_1c->position).x = 0.0;
      local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(-3.0,2.0);
      fVar2 = local_14 * local_2c + _DAT_02dc9464;
      (local_1c->position).y = 0.0;
      (local_1c->position).z = fVar2;
      sound_sndmain_cpp_pushSfxOptions_FUN_00526340();
      sound_sndmain_cpp_setNextSfxChannel_FUN_005261b0(3);
      sound_sndmain_cpp_setNextSfxTrackedVelocity1_FUN_00526090((CVector3f *)&DAT_02dc9d44);
      _sprintf(local_134,"%s @ %g",local_d0,(double)local_140);
      uVar6 = core_sound_cpp_CSound_playTrackedActorSound_FUN_0052ea90
                        (g_CSound_PTR_005bed68,(CDemonActor *)0x0,local_134,&local_1c->position);
      local_1c->sfx_handle = uVar6;
      sound_sndmain_cpp_popSfxOptions_FUN_005263c0();
      return;
    }
  }
switchD_0052e844_caseD_4:
  return;
}
