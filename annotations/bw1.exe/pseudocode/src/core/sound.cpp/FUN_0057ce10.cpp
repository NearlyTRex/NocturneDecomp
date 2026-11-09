// Name: core_sound.cpp_FUN_0057ce10
// Address: 0057ce10
// Address Range: [[0057ce10, 0057d690]]
// Convention: __cdecl
// Signature: void __cdecl core_sound_cpp_FUN_0057ce10(CSound *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_sound_cpp_FUN_0057ce10(CSound *this_ptr)

{
  char cVar1;
  float fVar2;
  CVector3f *pCVar3;
  int iVar4;
  CVector3f *pCVar5;
  uint *puVar6;
  char *pcVar7;
  char *pcVar8;
  byte bVar9;
  float afStackY_106c [960];
  float fVar10;
  float local_154;
  float local_150;
  char local_14c [100];
  char local_e8 [100];
  float local_84;
  float local_80 [2];
  byte local_78 [4];
  float local_74 [4];
  float local_64;
  byte local_60 [8];
  float fStack_58;
  byte local_54 [4];
  float local_50 [4];
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  CVector3f *local_28;
  float local_24;
  int local_20;
  int local_1c;
  float local_18;
  
  bVar9 = 0;
  local_50[2] = *(float *)&g_CGamePtr->field_0x294;
  local_2c = local_50[2] * (float)_DAT_005f5aae;
  local_3c = local_50[2];
  core_sound_cpp_updateListeners_FUN_0057b780();
  local_40 = -local_2c;
  local_30 = _DAT_02c82a78 - _DAT_02c82a7c;
  if (local_30 < local_40) {
    local_30 = local_40;
  }
  if (local_2c < local_30) {
    local_30 = local_2c;
  }
  _DAT_02c82a7c = _DAT_02c82a7c + local_30;
  if (_DAT_02c82a7c <= (float)_DAT_005f5ab6) {
    core_sound_cpp_FUN_0057d9d0(this_ptr,_DAT_02c82a64);
    _DAT_02c82a7c = 0.0;
  }
  else {
    iVar4 = core_sound_cpp_FUN_0057d9c0(this_ptr,_DAT_02c82a64);
    if (iVar4 == 0) {
      _DAT_02c82a64 = sound_sndmain_cpp_startSfx_FUN_00572d20("@wind-ctl.wav" + 1);
    }
    sound_sndmain_cpp_FUN_00573950(_DAT_02c82a64);
  }
  local_150 = 0.0;
  if (((0.0 < *(float *)&g_CWaterPtr->field_0xc) &&
      (iVar4 = _strnicmp(&g_CDemonSetPtr->field_0x14d0f0,&DAT_005f5a9b,4),
      iVar4 == 0)) &&
     (local_150 = SQRT(*(float *)&g_CWaterPtr->field_0xc) * (float)_DAT_005f5abe +
                  (float)_DAT_005f5ac6, (float)_DAT_005f5ace < local_150)) {
    local_150 = 0.7;
  }
  local_50[3] = -local_2c;
  local_34 = local_150 - _DAT_02c82a80;
  if (local_34 < local_50[3]) {
    local_34 = local_50[3];
  }
  if (local_2c < local_34) {
    local_34 = local_2c;
  }
  _DAT_02c82a80 = _DAT_02c82a80 + local_34;
  if (_DAT_02c82a80 <= (float)_DAT_005f5ab6) {
    core_sound_cpp_FUN_0057d9d0(this_ptr,_DAT_02c82a68);
    _DAT_02c82a80 = 0.0;
  }
  else {
    iVar4 = core_sound_cpp_FUN_0057d9c0(this_ptr,_DAT_02c82a68);
    if (iVar4 == 0) {
      _DAT_02c82a68 = sound_sndmain_cpp_startSfx_FUN_00572d20("water-2.wav");
    }
    sound_sndmain_cpp_FUN_00573950(_DAT_02c82a68);
  }
  if (_DAT_02c832b0 <= local_3c) {
    _DAT_02c832a8 = _DAT_02c832ac;
    _DAT_02c832b0 = 0.0;
  }
  else {
    fVar10 = local_3c / _DAT_02c832b0;
    _DAT_02c832b0 = _DAT_02c832b0 - local_3c;
    _DAT_02c832a8 = fVar10 * (_DAT_02c832ac - _DAT_02c832a8) + _DAT_02c832a8;
  }
  iVar4 = sound_sndmain_cpp_FUN_00573cd0(0);
  if (iVar4 == 0) {
    sound_sndmain_cpp_enableSfxChannel_FUN_00573c50(3,0);
  }
  else {
    sound_sndmain_cpp_enableSfxChannel_FUN_00573c50(3,1);
    local_18 = (float)sound_sndmain_cpp_getSfxChannelVol_FUN_00573bc0();
    sound_sndmain_cpp_setSfxChannelVol_FUN_00573b30(3);
  }
  if (*(int *)&g_CDemonSetPtr->field_0x15acb8 != 0) {
    local_24 = *(float *)&g_CGamePtr->field_0x294;
    if (*(int *)&g_CGamePtr->field_0x25c == 0) {
      if (_DAT_02c83364 != *(int *)&g_CDemonSetPtr->field_0x15aeb8) {
        core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
        core_setcolid_cpp_CDemonSet_disableIgnore_FUN_005592b0(g_CDemonSetPtr);
        local_54 = (byte  [4])_DAT_02c82a6c;
        local_50[(uint)bVar9 * -2] = *(float *)(&DAT_02c82a70 + (uint)bVar9 * -8);
        local_50[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
             *(float *)(&DAT_02c82a74 + (uint)bVar9 * -8 + (uint)bVar9 * -8);
        local_78 = local_54;
        local_74[1] = local_50[1];
        pCVar5 = (CVector3f *)local_60;
        local_74[0] = local_50[0] + _DAT_005f5ad6;
        local_60._0_4_ = local_54;
        *(float *)(local_54 + (uint)bVar9 * -8 + -8) = local_74[(uint)bVar9 * -2];
        *(float *)(local_54 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + -4) =
             local_74[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
        iVar4 = core_setcolid_cpp_CDemonSet_testLineOcclusion_FUN_00557230
                          (g_CDemonSetPtr,(CVector3f *)local_54,pCVar5);
        if (iVar4 == 0) {
          PTR_DAT_006236b0 = &DAT_005f5a27;
        }
        else {
          PTR_DAT_006236b0 = &DAT_005f5a23;
        }
        core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
        _DAT_02c83364 = *(int *)&g_CDemonSetPtr->field_0x15aeb8;
      }
    }
    else {
      PTR_DAT_006236b0 = &DAT_005f5a1f;
      _DAT_02c83364 = -1;
    }
    sound_sndmain_cpp_FUN_00572ac0();
    sound_sndmain_cpp_FUN_005729f0(1);
    sound_sndmain_cpp_FUN_00572980(3);
    iVar4 = _stricmp(PTR_DAT_006236b0,&DAT_005f5a2b);
    if (iVar4 == 0) {
      sound_sndmain_cpp_killSfx_FUN_00573a80(_DAT_02c8336c);
      local_154 = 0.4;
    }
    else {
      local_154 = 0.7;
      iVar4 = sound_sndmain_cpp_FUN_005735a0(_DAT_02c8336c);
      if (iVar4 == 0) {
        sound_sndmain_cpp_FUN_00572ac0();
        sound_sndmain_cpp_FUN_005728e0(0.4);
        _DAT_02c8336c = sound_sndmain_cpp_startSfx_FUN_00572d20("trainext.wav");
        sound_sndmain_cpp_FUN_00572b40();
      }
    }
    iVar4 = sound_sndmain_cpp_FUN_005735a0(_DAT_02c83368);
    if (iVar4 == 0) {
      sound_sndmain_cpp_FUN_00572ac0();
      sound_sndmain_cpp_FUN_005728e0(local_154 * (float)_DAT_005f5ade);
      _DAT_02c83368 = sound_sndmain_cpp_startSfx_FUN_00572d20("railnoiz.wav");
      sound_sndmain_cpp_FUN_00572b40();
    }
    else {
      iVar4 = _stricmp(PTR_DAT_006236b4,PTR_DAT_006236b0);
      if (iVar4 != 0) {
        sound_sndmain_cpp_FUN_00573950(_DAT_02c83368);
      }
    }
    sound_sndmain_cpp_FUN_00572b40();
    pCVar5 = (CVector3f *)&DAT_02c832b4;
    PTR_DAT_006236b4 = PTR_DAT_006236b0;
    _DAT_02c83354 = 0.0;
    _DAT_02c83358 = 0.0;
    _DAT_02c8335c = 30.0;
    local_28 = (CVector3f *)0x0;
    local_1c = 0;
    do {
      local_20 = local_1c * 0x10;
      iVar4 = sound_sndmain_cpp_FUN_005735a0(*(uint *)(local_20 + 0x2c832c0));
      pCVar3 = pCVar5;
      if (iVar4 != 0) {
        local_74[2] = _DAT_02c83354 * local_24;
        local_74[3] = _DAT_02c83358 * local_24;
        local_64 = _DAT_02c8335c * local_24;
        local_84 = _DAT_02c83354 * local_24;
        local_80[(uint)bVar9 * -2] = local_74[(uint)bVar9 * -2 + 3];
        local_80[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
             local_74[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
        *(float *)pCVar5 = *(float *)pCVar5 + local_84;
        *(float *)&pCVar5->field_0x4 = *(float *)&pCVar5->field_0x4 + local_80[0];
        *(float *)&pCVar5->field_0x8 = *(float *)&pCVar5->field_0x8 + local_80[1];
        pCVar3 = local_28;
        if ((float)_DAT_005f5af6 < ABS(*(float *)(&DAT_02c832bc + local_20))) {
          sound_sndmain_cpp_killSfx_FUN_00573a80(*(uint *)(local_20 + 0x2c832c0));
          pCVar3 = local_28;
        }
      }
      local_28 = pCVar3;
      local_1c = local_1c + 1;
      pCVar5 = (CVector3f *)&pCVar5[1].field_0x4;
    } while (local_1c < 10);
    _DAT_02c83360 = _DAT_02c83360 - local_24;
    if ((_DAT_02c83360 <= 0.0) && (local_28 != (CVector3f *)0x0)) {
      _DAT_02c83360 = (float)core_actor_cpp_FUN_0040cc00(0x3f800000);
      puVar6 = &DAT_006238d8;
      pcVar8 = local_e8;
      local_18 = _DAT_02c83360;
      for (iVar4 = 0x19; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(uint *)pcVar8 = *puVar6;
        puVar6 = puVar6 + (uint)bVar9 * -2 + 1;
        pcVar8 = pcVar8 + ((uint)bVar9 * -2 + 1) * 4;
      }
      local_38 = 20.0;
      fVar10 = 1.0;
      iVar4 = rand();
      switch(iVar4 % 5) {
      case 0:
      case 1:
        fVar10 = local_154 * (float)_DAT_005f5aee;
        local_38 = 25.0;
        FUN_005bfb40(local_e8,"rail?%s.wav",PTR_DAT_006236b0,fVar10);
        break;
      case 2:
      case 3:
        fVar10 = local_154 * (float)_DAT_005f5ae6;
        pcVar7 = &DAT_005f5a55;
        pcVar8 = local_e8;
        local_38 = 20.0;
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
        goto switchD_0057d323_caseD_4;
      }
      *(float *)local_28 = 0.0;
      local_18 = (float)core_actor_cpp_FUN_0040cc00(0xc0400000);
      fVar2 = local_18 * local_38 + _DAT_02c82a74;
      *(uint *)&local_28->field_0x4 = 0;
      *(float *)&local_28->field_0x8 = fVar2;
      sound_sndmain_cpp_FUN_00572ac0();
      sound_sndmain_cpp_FUN_00572980(3);
      sound_sndmain_cpp_FUN_00572880((CVector3f *)&DAT_02c83354);
      FUN_005bfb40(local_14c,"%s @ %g",local_e8,(double)fVar10);
      fVar10 = (float)core_sound_cpp_CSound_playTrackedActorSound_FUN_0057d8d0
                                (0x02C82A60,(CDemonActor *)0x0,local_14c,local_28);
      *(float *)(local_28 + 1) = fVar10;
      sound_sndmain_cpp_FUN_00572b40();
    }
  }
switchD_0057d323_caseD_4:
  sound_sndmain_cpp_pollAllStreams_FUN_00577040(1);
  return;
}
