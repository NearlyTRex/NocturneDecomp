// Name: core_sound.cpp_FUN_0055a3c0
// Address: 0055a3c0
// Address Range: [[0055a3c0, 0055ac44]]
// Convention: __cdecl
// Signature: void __cdecl core_sound_cpp_FUN_0055a3c0(CSound *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_sound_cpp_FUN_0055a3c0(CSound *this_ptr)

{
  char cVar1;
  float fVar2;
  CVector3f *pCVar3;
  int iVar4;
  uint uVar5;
  CVector3f *pCVar6;
  char *pcVar7;
  uint *puVar8;
  char *pcVar9;
  byte bVar10;
  float afStackY_106c [960];
  float fVar11;
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
  
  bVar10 = 0;
  local_50[2] = *(float *)&g_CGamePtr->field_0x284;
  local_2c = local_50[2] * (float)_DAT_005ea8b4;
  local_3c = local_50[2];
  core_sound_cpp_updateListeners_FUN_00558d50();
  local_40 = -local_2c;
  local_30 = _DAT_0264b2a8 - _DAT_0264b2ac;
  if (local_30 < local_40) {
    local_30 = local_40;
  }
  if (local_2c < local_30) {
    local_30 = local_2c;
  }
  _DAT_0264b2ac = _DAT_0264b2ac + local_30;
  if (_DAT_0264b2ac <= (float)_DAT_005ea8bc) {
    core_sound_cpp_FUN_0055af80(this_ptr,_DAT_0264b294);
    _DAT_0264b2ac = 0.0;
  }
  else {
    iVar4 = core_sound_cpp_FUN_0055af70(this_ptr,_DAT_0264b294);
    if (iVar4 == 0) {
      _DAT_0264b294 = sound_sndmain_cpp_FUN_005506b0();
    }
    sound_sndmain_cpp_FUN_00550f20(_DAT_0264b294);
  }
  local_150 = 0.0;
  if (((0.0 < *(float *)&g_CWaterPtr->field_0xc) &&
      (iVar4 = _strnicmp(&g_CDemonSetPtr->field_0x14d0f0,&DAT_005ea8a1,4),
      iVar4 == 0)) &&
     (local_150 = SQRT(*(float *)&g_CWaterPtr->field_0xc) * (float)_DAT_005ea8c4 +
                  (float)_DAT_005ea8cc, (float)_DAT_005ea8d4 < local_150)) {
    local_150 = 0.7;
  }
  local_50[3] = -local_2c;
  local_34 = local_150 - _DAT_0264b2b0;
  if (local_34 < local_50[3]) {
    local_34 = local_50[3];
  }
  if (local_2c < local_34) {
    local_34 = local_2c;
  }
  _DAT_0264b2b0 = _DAT_0264b2b0 + local_34;
  if (_DAT_0264b2b0 <= (float)_DAT_005ea8bc) {
    core_sound_cpp_FUN_0055af80(this_ptr,_DAT_0264b298);
    _DAT_0264b2b0 = 0.0;
  }
  else {
    iVar4 = core_sound_cpp_FUN_0055af70(this_ptr,_DAT_0264b298);
    if (iVar4 == 0) {
      _DAT_0264b298 = sound_sndmain_cpp_FUN_005506b0();
    }
    sound_sndmain_cpp_FUN_00550f20(_DAT_0264b298);
  }
  if (_DAT_0264bae0 <= local_3c) {
    _DAT_0264bad8 = _DAT_0264badc;
    _DAT_0264bae0 = 0.0;
  }
  else {
    fVar11 = local_3c / _DAT_0264bae0;
    _DAT_0264bae0 = _DAT_0264bae0 - local_3c;
    _DAT_0264bad8 = fVar11 * (_DAT_0264badc - _DAT_0264bad8) + _DAT_0264bad8;
  }
  iVar4 = sound_sndmain_cpp_FUN_005512a0(0);
  if (iVar4 == 0) {
    sound_sndmain_cpp_FUN_00551220(3,0);
  }
  else {
    sound_sndmain_cpp_FUN_00551220(3,1);
    local_18 = (float)sound_sndmain_cpp_getSfxChannelVol_FUN_00551190();
    sound_sndmain_cpp_setSfxChannelVol_FUN_00551100(3);
  }
  if (*(int *)&g_CDemonSetPtr->field_0x15acb8 != 0) {
    local_24 = *(float *)&g_CGamePtr->field_0x284;
    if (*(int *)&g_CGamePtr->field_0x25c == 0) {
      if (_DAT_0264bb94 != *(int *)&g_CDemonSetPtr->field_0x15aeb8) {
        core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
        core_setcolid_cpp_CDemonSet_disableIgnore_FUN_00537e90(g_CDemonSetPtr);
        local_54 = (byte  [4])_DAT_0264b29c;
        local_50[(uint)bVar10 * -2] = *(float *)(&DAT_0264b2a0 + (uint)bVar10 * -8);
        local_50[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
             *(float *)(&DAT_0264b2a4 + (uint)bVar10 * -8 + (uint)bVar10 * -8);
        local_78 = local_54;
        local_74[1] = local_50[1];
        pCVar6 = (CVector3f *)local_60;
        local_74[0] = local_50[0] + _DAT_005ea8dc;
        local_60._0_4_ = local_54;
        *(float *)(local_54 + (uint)bVar10 * -8 + -8) = local_74[(uint)bVar10 * -2];
        *(float *)(local_54 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + -4) =
             local_74[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
        iVar4 = core_setcolid_cpp_CDemonSet_testLineOcclusion_FUN_00535e10
                          (g_CDemonSetPtr,(CVector3f *)local_54,pCVar6);
        if (iVar4 == 0) {
          PTR_DAT_0061c060 = &DAT_005ea82d;
        }
        else {
          PTR_DAT_0061c060 = &DAT_005ea829;
        }
        core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
        _DAT_0264bb94 = *(int *)&g_CDemonSetPtr->field_0x15aeb8;
      }
    }
    else {
      PTR_DAT_0061c060 = &DAT_005ea825;
      _DAT_0264bb94 = -1;
    }
    sound_sndmain_cpp_FUN_00550450();
    sound_sndmain_cpp_setNextSfxFlags_FUN_00550380(1);
    sound_sndmain_cpp_setNextSfxChannel_FUN_00550310(3);
    iVar4 = _stricmp(PTR_DAT_0061c060,&DAT_005ea831);
    if (iVar4 == 0) {
      sound_sndmain_cpp_killSfx_FUN_00551050(_DAT_0264bb9c);
      local_154 = 0.4;
    }
    else {
      local_154 = 0.7;
      iVar4 = sound_sndmain_cpp_FUN_00550b70(_DAT_0264bb9c);
      if (iVar4 == 0) {
        sound_sndmain_cpp_FUN_00550450();
        sound_sndmain_cpp_FUN_00550270(0.4);
        _DAT_0264bb9c = sound_sndmain_cpp_FUN_005506b0();
        sound_sndmain_cpp_FUN_005504d0();
      }
    }
    iVar4 = sound_sndmain_cpp_FUN_00550b70(_DAT_0264bb98);
    if (iVar4 == 0) {
      sound_sndmain_cpp_FUN_00550450();
      sound_sndmain_cpp_FUN_00550270(local_154 * (float)_DAT_005ea8e4);
      _DAT_0264bb98 = sound_sndmain_cpp_FUN_005506b0();
      sound_sndmain_cpp_FUN_005504d0();
    }
    else {
      iVar4 = _stricmp(PTR_DAT_0061c064,PTR_DAT_0061c060);
      if (iVar4 != 0) {
        sound_sndmain_cpp_FUN_00550f20(_DAT_0264bb98);
      }
    }
    sound_sndmain_cpp_FUN_005504d0();
    pCVar6 = (CVector3f *)&DAT_0264bae4;
    PTR_DAT_0061c064 = PTR_DAT_0061c060;
    _DAT_0264bb84 = 0.0;
    _DAT_0264bb88 = 0.0;
    _DAT_0264bb8c = 30.0;
    local_28 = (CVector3f *)0x0;
    local_1c = 0;
    do {
      local_20 = local_1c * 0x10;
      iVar4 = sound_sndmain_cpp_FUN_00550b70(*(uint *)(local_20 + 0x264baf0));
      pCVar3 = pCVar6;
      if (iVar4 != 0) {
        local_74[2] = _DAT_0264bb84 * local_24;
        local_74[3] = _DAT_0264bb88 * local_24;
        local_64 = _DAT_0264bb8c * local_24;
        local_84 = _DAT_0264bb84 * local_24;
        local_80[(uint)bVar10 * -2] = local_74[(uint)bVar10 * -2 + 3];
        local_80[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
             local_74[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
        *(float *)pCVar6 = *(float *)pCVar6 + local_84;
        *(float *)&pCVar6->field_0x4 = *(float *)&pCVar6->field_0x4 + local_80[0];
        *(float *)&pCVar6->field_0x8 = *(float *)&pCVar6->field_0x8 + local_80[1];
        pCVar3 = local_28;
        if ((float)_DAT_005ea8fc < ABS(*(float *)(&DAT_0264baec + local_20))) {
          sound_sndmain_cpp_killSfx_FUN_00551050(*(uint *)(local_20 + 0x264baf0));
          pCVar3 = local_28;
        }
      }
      local_28 = pCVar3;
      local_1c = local_1c + 1;
      pCVar6 = (CVector3f *)&pCVar6[1].field_0x4;
    } while (local_1c < 10);
    _DAT_0264bb90 = _DAT_0264bb90 - local_24;
    if ((_DAT_0264bb90 <= 0.0) && (local_28 != (CVector3f *)0x0)) {
      _DAT_0264bb90 = (float)core_actor_cpp_FUN_0040cf60(0x3f800000);
      puVar8 = &DAT_0061c288;
      pcVar9 = local_e8;
      local_18 = _DAT_0264bb90;
      for (iVar4 = 0x19; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(uint *)pcVar9 = *puVar8;
        puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
        pcVar9 = pcVar9 + ((uint)bVar10 * -2 + 1) * 4;
      }
      local_38 = 20.0;
      fVar11 = 1.0;
      iVar4 = rand();
      switch(iVar4 % 5) {
      case 0:
      case 1:
        fVar11 = local_154 * (float)_DAT_005ea8f4;
        local_38 = 25.0;
        FUN_005b7790(local_e8,"rail?%s.wav",PTR_DAT_0061c060,fVar11);
        break;
      case 2:
      case 3:
        fVar11 = local_154 * (float)_DAT_005ea8ec;
        pcVar7 = &DAT_005ea85b;
        pcVar9 = local_e8;
        local_38 = 20.0;
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
        goto switchD_0055ac3e_caseD_4;
      }
      *(float *)local_28 = 0.0;
      local_18 = (float)core_actor_cpp_FUN_0040cf60(0xc0400000);
      fVar2 = local_18 * local_38 + _DAT_0264b2a4;
      *(uint *)&local_28->field_0x4 = 0;
      *(float *)&local_28->field_0x8 = fVar2;
      sound_sndmain_cpp_FUN_00550450();
      sound_sndmain_cpp_setNextSfxChannel_FUN_00550310(3);
      sound_sndmain_cpp_setNextSfxTrackedVelocity1_FUN_00550210((CVector3f *)&DAT_0264bb84);
      FUN_005b7790(local_14c,"%s @ %g",local_e8,(double)fVar11);
      uVar5 = core_sound_cpp_CSound_playTrackedActorSound_FUN_0055ae80
                        (0x0264B290,(CDemonActor *)0x0,local_14c,local_28);
      *(uint *)(local_28 + 1) = uVar5;
      sound_sndmain_cpp_FUN_005504d0();
      return;
    }
  }
switchD_0055ac3e_caseD_4:
  return;
}
