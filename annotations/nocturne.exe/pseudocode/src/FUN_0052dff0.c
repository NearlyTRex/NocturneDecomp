// Name: FUN_0052dff0
// Address: 0052dff0
// Address Range: [[0052dff0, 0052e84a]]
// Convention: unknown
// Signature: int FUN_0052dff0(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0052dff0(uint param_1)

{
  char cVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  ushort extraout_var;
  ushort uVar5;
  float *pfVar6;
  char *pcVar7;
  uint *puVar8;
  char *pcVar9;
  byte bVar10;
  float fVar11;
  float local_13c;
  float local_138;
  byte local_134 [100];
  char local_d0 [100];
  uint local_6c;
  uint local_68;
  uint local_64;
  float local_60;
  float local_5c;
  float local_58;
  uint local_54;
  float local_50;
  float local_4c;
  uint local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float *local_1c;
  float local_18;
  float local_14;
  
  bVar10 = 0;
  local_3c = *(float *)(0x01C775EC + 0x264);
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
    core_sound_cpp_CSound_killSound_FUN_0052ebb0(param_1,_DAT_02dc9454);
    _DAT_02dc946c = 0.0;
  }
  else {
    iVar3 = core_sound_cpp_CSound_isSoundPlaying_FUN_0052eba0(param_1,_DAT_02dc9454);
    if (iVar3 == 0) {
      _DAT_02dc9454 = sound_sndmain_cpp_startSfx_FUN_005265a0();
    }
    sound_sndmain_cpp_setSfxVolume_FUN_005270d0(_DAT_02dc9454,_DAT_02dc946c);
  }
  local_138 = 0.0;
  if (((0.0 < *(float *)(0x02DD1210 + 0xc)) &&
      (iVar3 = _strnicmp(0x01E57284 + 0x14cd08,"NDUN",4),
      iVar3 == 0)) &&
     (local_138 = SQRT(*(float *)(0x02DD1210 + 0xc)) * (float)0.027777777777777801 +
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
    core_sound_cpp_CSound_killSound_FUN_0052ebb0(param_1,_DAT_02dc9458);
    _DAT_02dc9470 = 0.0;
  }
  else {
    iVar3 = core_sound_cpp_CSound_isSoundPlaying_FUN_0052eba0(param_1,_DAT_02dc9458);
    if (iVar3 == 0) {
      _DAT_02dc9458 = sound_sndmain_cpp_startSfx_FUN_005265a0();
    }
    sound_sndmain_cpp_setSfxVolume_FUN_005270d0(_DAT_02dc9458,_DAT_02dc9470);
  }
  if (_DAT_02dc9ca0 <= local_30) {
    _DAT_02dc9c98 = _DAT_02dc9c9c;
    _DAT_02dc9ca0 = 0.0;
  }
  else {
    fVar11 = local_30 / _DAT_02dc9ca0;
    _DAT_02dc9ca0 = _DAT_02dc9ca0 - local_30;
    _DAT_02dc9c98 = fVar11 * (_DAT_02dc9c9c - _DAT_02dc9c98) + _DAT_02dc9c98;
  }
  iVar3 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_00527490();
  if (iVar3 == 0) {
    sound_sndmain_cpp_enableSfxChannel_FUN_00527410(3,0);
  }
  else {
    sound_sndmain_cpp_enableSfxChannel_FUN_00527410(3,1);
    local_14 = (float)sound_sndmain_cpp_getSfxChannelVol_FUN_00527380();
    sound_sndmain_cpp_setSfxChannelVol_FUN_005272e0(3,local_14 * _DAT_02dc9c98);
  }
  iVar3 = 0x01E57284;
  if (*(int *)(0x01E57284 + 0x15a8c0) != 0) {
    local_18 = *(float *)(0x01C775EC + 0x264);
    if (*(int *)(0x01C775EC + 0x240) == 0) {
      if (_DAT_02dc9d54 != *(int *)(0x01E57284 + 0x15aabc)) {
        core_setcolid_cpp_CDemonSet_init_FUN_00511750();
        core_setcolid_cpp_CDemonSet_disableIgnore_FUN_005117e0();
        local_54 = _DAT_02dc945c;
        local_50 = _DAT_02dc9460;
        local_4c = _DAT_02dc9464;
        local_68 = 0x41a00000;
        local_48 = _DAT_02dc945c;
        local_6c = 0;
        local_40 = _DAT_02dc9464;
        local_64 = 0;
        local_44 = _DAT_02dc9460 + 20.0f;
        iVar3 = core_setcolid_cpp_CDemonSet_testLineOcclusion_FUN_0050fa30
                          (0x01E57284,&local_54,&local_48);
        if (iVar3 == 0) {
          PTR_s_int_005bed60 = "ext";
        }
        else {
          PTR_s_int_005bed60 = "int";
        }
        core_setcolid_cpp_CDemonSet_init_FUN_00511750();
        _DAT_02dc9d54 = *(int *)(0x01E57284 + 0x15aabc);
      }
    }
    else {
      _DAT_02dc9d54 = -1;
      PTR_s_int_005bed60 = "ext";
    }
    sound_sndmain_cpp_pushSfxOptions_FUN_00526340();
    sound_sndmain_cpp_setNextSfxFlags_FUN_00526240();
    sound_sndmain_cpp_setNextSfxChannel_FUN_005261b0();
    iVar3 = _stricmp(PTR_s_int_005bed60,"int");
    if (iVar3 == 0) {
      sound_sndmain_cpp_killSfx_FUN_00527230();
      local_13c = 0.4;
    }
    else {
      iVar3 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50();
      local_13c = 0.7;
      if (iVar3 == 0) {
        sound_sndmain_cpp_pushSfxOptions_FUN_00526340();
        sound_sndmain_cpp_setNextSfxVolume_FUN_005260f0();
        _DAT_02dc9d5c = sound_sndmain_cpp_startSfx_FUN_005265a0();
        sound_sndmain_cpp_popSfxOptions_FUN_005263c0();
      }
    }
    iVar3 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50();
    if (iVar3 == 0) {
      sound_sndmain_cpp_pushSfxOptions_FUN_00526340();
      sound_sndmain_cpp_setNextSfxVolume_FUN_005260f0();
      _DAT_02dc9d58 = sound_sndmain_cpp_startSfx_FUN_005265a0();
      sound_sndmain_cpp_popSfxOptions_FUN_005263c0();
    }
    else {
      iVar3 = _stricmp(PTR_s_x_005bed64,PTR_s_int_005bed60);
      if (iVar3 != 0) {
        sound_sndmain_cpp_setSfxVolume_FUN_005270d0
                  (_DAT_02dc9d58,local_13c * (float)1.5);
      }
    }
    sound_sndmain_cpp_popSfxOptions_FUN_005263c0();
    pfVar6 = (float *)&DAT_02dc9ca4;
    iVar3 = 0;
    PTR_s_x_005bed64 = PTR_s_int_005bed60;
    _DAT_02dc9d44 = 0.0;
    _DAT_02dc9d48 = 0.0;
    _DAT_02dc9d4c = 30.0;
    local_1c = (float *)0x0;
    do {
      iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50();
      if (iVar4 == 0) {
        uVar5 = 0;
        local_1c = pfVar6;
      }
      else {
        local_60 = _DAT_02dc9d44 * local_18;
        local_5c = _DAT_02dc9d48 * local_18;
        local_58 = _DAT_02dc9d4c * local_18;
        *pfVar6 = *pfVar6 + local_60;
        pfVar6[1] = pfVar6[1] + local_5c;
        pfVar6[2] = pfVar6[2] + local_58;
        uVar5 = (ushort)((uint)iVar4 >> 0x10);
        if ((float)510 < ABS(*(float *)(&DAT_02dc9cac + iVar3 * 0x10))) {
          sound_sndmain_cpp_killSfx_FUN_00527230();
          uVar5 = extraout_var;
        }
      }
      iVar3 = iVar3 + 1;
      pfVar6 = pfVar6 + 4;
    } while (iVar3 < 10);
    _DAT_02dc9d50 = _DAT_02dc9d50 - local_18;
    iVar3 = CONCAT22(uVar5,(ushort)(0.0 < _DAT_02dc9d50) << 8 | (ushort)NAN(_DAT_02dc9d50) << 10 |
                           (ushort)(_DAT_02dc9d50 == 0.0) << 0xe);
    if ((0.0 >= _DAT_02dc9d50) && (local_1c != (float *)0x0)) {
      _DAT_02dc9d50 =
           (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0x3f800000,0x40a00000);
      local_2c = 20.0;
      puVar8 = &DAT_005bef88;
      pcVar9 = local_d0;
      local_14 = _DAT_02dc9d50;
      for (iVar3 = 0x19; iVar3 != 0; iVar3 = iVar3 + -1) {
        *(uint *)pcVar9 = *puVar8;
        puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
        pcVar9 = pcVar9 + ((uint)bVar10 * -2 + 1) * 4;
      }
      iVar4 = rand();
      iVar3 = iVar4 / 5;
      fVar11 = 1.0;
      switch(iVar4 % 5) {
      case 0:
      case 1:
        fVar11 = local_13c * (float)0.59999999999999998;
        local_2c = 25.0;
        _sprintf(local_d0,"rail?%s.wav",PTR_s_int_005bed60,fVar11);
        break;
      case 2:
      case 3:
        fVar11 = local_13c * (float)0.80000000000000004;
        pcVar7 = "bump?.wav";
        local_2c = 20.0;
        pcVar9 = local_d0;
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
        goto switchD_0052e844_caseD_4;
      }
      *local_1c = 0.0;
      local_14 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0
                                  (0xc0400000,0x40000000,fVar11);
      fVar2 = local_14 * local_2c + _DAT_02dc9464;
      local_1c[1] = 0.0;
      local_1c[2] = fVar2;
      sound_sndmain_cpp_pushSfxOptions_FUN_00526340();
      sound_sndmain_cpp_setNextSfxChannel_FUN_005261b0();
      sound_sndmain_cpp_setNextSfxTrackedVelocity1_FUN_00526090();
      _sprintf(local_134,"%s @ %g",local_d0,(double)fVar11);
      fVar11 = (float)core_sound_cpp_CSound_playTrackedActorSound_FUN_0052ea90
                                (0x02DC9450,0,local_134,local_1c);
      local_1c[3] = fVar11;
      iVar3 = sound_sndmain_cpp_popSfxOptions_FUN_005263c0();
      return iVar3;
    }
  }
switchD_0052e844_caseD_4:
  return iVar3;
}
