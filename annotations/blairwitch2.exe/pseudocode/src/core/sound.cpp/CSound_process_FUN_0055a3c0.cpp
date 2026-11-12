// Name: core_sound.cpp_CSound_process_FUN_0055a3c0
// Address: 0055a3c0
// Address Range: [[0055a3c0, 0055ac44]]
// Convention: __cdecl
// Signature: void __cdecl core_sound_cpp_CSound_process_FUN_0055a3c0(CSound *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_sound_cpp_CSound_process_FUN_0055a3c0(CSound *this_ptr)

{
  char cVar1;
  CVector3f *pCVar2;
  int iVar3;
  float fVar4;
  CVector3f *pCVar5;
  char *pcVar6;
  uint *puVar7;
  char *pcVar8;
  byte bVar9;
  float afStackY_106c [960];
  float local_158;
  float local_154;
  float local_150;
  char local_14c [100];
  char local_e8 [100];
  float local_84;
  float local_80 [4];
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  CVector3f local_60;
  CVector3f local_54;
  float local_48;
  float local_44;
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
  local_48 = g_CGamePtr->delta_time_float;
  local_2c = local_48 * (float)_DAT_005ea8b4;
  local_3c = local_48;
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
    core_sound_cpp_CSound_killSound_FUN_0055af80(this_ptr,_DAT_0264b294);
    _DAT_0264b2ac = 0.0;
  }
  else {
    iVar3 = core_sound_cpp_CSound_isSoundPlaying_FUN_0055af70(this_ptr,_DAT_0264b294);
    if (iVar3 == 0) {
      _DAT_0264b294 = sound_sndmain_cpp_FUN_005506b0();
    }
    sound_sndmain_cpp_FUN_00550f20(_DAT_0264b294);
  }
  local_150 = 0.0;
  if (((0.0 < g_CWaterPtr->visible_area_sqft) &&
      (iVar3 = _strnicmp
                         (g_CDemonSetPtr->geometry_filename,&DAT_005ea8a1,4), iVar3 == 0)) &&
     (local_150 = SQRT(g_CWaterPtr->visible_area_sqft) * (float)_DAT_005ea8c4 + (float)_DAT_005ea8cc
     , (float)_DAT_005ea8d4 < local_150)) {
    local_150 = 0.7;
  }
  local_44 = -local_2c;
  local_34 = local_150 - _DAT_0264b2b0;
  if (local_34 < local_44) {
    local_34 = local_44;
  }
  if (local_2c < local_34) {
    local_34 = local_2c;
  }
  _DAT_0264b2b0 = _DAT_0264b2b0 + local_34;
  if (_DAT_0264b2b0 <= (float)_DAT_005ea8bc) {
    core_sound_cpp_CSound_killSound_FUN_0055af80(this_ptr,_DAT_0264b298);
    _DAT_0264b2b0 = 0.0;
  }
  else {
    iVar3 = core_sound_cpp_CSound_isSoundPlaying_FUN_0055af70(this_ptr,_DAT_0264b298);
    if (iVar3 == 0) {
      _DAT_0264b298 = sound_sndmain_cpp_FUN_005506b0();
    }
    sound_sndmain_cpp_FUN_00550f20(_DAT_0264b298);
  }
  if (_DAT_0264bae0 <= local_3c) {
    _DAT_0264bad8 = _DAT_0264badc;
    _DAT_0264bae0 = 0.0;
  }
  else {
    fVar4 = local_3c / _DAT_0264bae0;
    _DAT_0264bae0 = _DAT_0264bae0 - local_3c;
    _DAT_0264bad8 = fVar4 * (_DAT_0264badc - _DAT_0264bad8) + _DAT_0264bad8;
  }
  iVar3 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005512a0(0);
  if (iVar3 == 0) {
    sound_sndmain_cpp_enableSfxChannel_FUN_00551220(3,0);
  }
  else {
    sound_sndmain_cpp_enableSfxChannel_FUN_00551220(3,1);
    local_18 = sound_sndmain_cpp_getSfxChannelVol_FUN_00551190(0);
    sound_sndmain_cpp_setSfxChannelVol_FUN_00551100(3,local_18 * _DAT_0264bad8);
  }
  if (g_CDemonSetPtr->player_on_train != 0) {
    local_24 = g_CGamePtr->delta_time_float;
    if (g_CGamePtr->goggles_active == 0) {
      if (_DAT_0264bb94 != g_CDemonSetPtr->selected_camera_index) {
        core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
        core_setcolid_cpp_CDemonSet_disableIgnore_FUN_00537e90(g_CDemonSetPtr);
        local_54.x = _DAT_0264b29c;
        *(uint *)((int)&local_54 + (uint)bVar9 * -8 + 4) =
             *(uint *)(&DAT_0264b2a0 + (uint)bVar9 * -8);
        *(uint *)((int)&local_54 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
             *(uint *)(&DAT_0264b2a4 + (uint)bVar9 * -8 + (uint)bVar9 * -8);
        local_80[2] = local_54.x;
        local_70 = local_54.z;
        pCVar5 = &local_60;
        local_80[3] = local_54.y + _DAT_005ea8dc;
        local_60.x = local_54.x;
        *(float *)((int)&local_60 + (uint)bVar9 * -8 + 4) = local_80[(uint)bVar9 * -2 + 3];
        *(float *)((int)&local_60 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
             local_80[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
        iVar3 = core_setcolid_cpp_CDemonSet_testLineOcclusion_FUN_00535e10
                          (g_CDemonSetPtr,&local_54,pCVar5);
        if (iVar3 == 0) {
          PTR_DAT_0061c060 = &DAT_005ea82d;
        }
        else {
          PTR_DAT_0061c060 = &DAT_005ea829;
        }
        core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
        _DAT_0264bb94 = g_CDemonSetPtr->selected_camera_index;
      }
    }
    else {
      PTR_DAT_0061c060 = &DAT_005ea825;
      _DAT_0264bb94 = -1;
    }
    sound_sndmain_cpp_pushSfxOptions_FUN_00550450();
    sound_sndmain_cpp_setNextSfxFlags_FUN_00550380(1);
    sound_sndmain_cpp_setNextSfxChannel_FUN_00550310(3);
    iVar3 = _stricmp(PTR_DAT_0061c060,&DAT_005ea831);
    if (iVar3 == 0) {
      sound_sndmain_cpp_killSfx_FUN_00551050(_DAT_0264bb9c);
      local_154 = 0.4;
    }
    else {
      local_154 = 0.7;
      iVar3 = sound_sndmain_cpp_FUN_00550b70(_DAT_0264bb9c);
      if (iVar3 == 0) {
        sound_sndmain_cpp_pushSfxOptions_FUN_00550450();
        sound_sndmain_cpp_setNextSfxVolume_FUN_00550270(0.4);
        _DAT_0264bb9c = sound_sndmain_cpp_FUN_005506b0();
        sound_sndmain_cpp_popSfxOptions_FUN_005504d0();
      }
    }
    iVar3 = sound_sndmain_cpp_FUN_00550b70(_DAT_0264bb98);
    if (iVar3 == 0) {
      sound_sndmain_cpp_pushSfxOptions_FUN_00550450();
      sound_sndmain_cpp_setNextSfxVolume_FUN_00550270(local_154 * (float)_DAT_005ea8e4);
      _DAT_0264bb98 = sound_sndmain_cpp_FUN_005506b0();
      sound_sndmain_cpp_popSfxOptions_FUN_005504d0();
    }
    else {
      iVar3 = _stricmp(PTR_DAT_0061c064,PTR_DAT_0061c060);
      if (iVar3 != 0) {
        sound_sndmain_cpp_FUN_00550f20(_DAT_0264bb98);
      }
    }
    sound_sndmain_cpp_popSfxOptions_FUN_005504d0();
    pCVar5 = (CVector3f *)&DAT_0264bae4;
    PTR_DAT_0061c064 = PTR_DAT_0061c060;
    _DAT_0264bb84 = 0.0;
    _DAT_0264bb88 = 0.0;
    _DAT_0264bb8c = 30.0;
    local_28 = (CVector3f *)0x0;
    local_1c = 0;
    do {
      local_20 = local_1c * 0x10;
      iVar3 = sound_sndmain_cpp_FUN_00550b70(*(uint *)(local_20 + 0x264baf0));
      pCVar2 = pCVar5;
      if (iVar3 != 0) {
        local_6c = _DAT_0264bb84 * local_24;
        local_68 = _DAT_0264bb88 * local_24;
        local_64 = _DAT_0264bb8c * local_24;
        local_84 = _DAT_0264bb84 * local_24;
        local_80[(uint)bVar9 * -2] = local_80[(uint)bVar9 * -2 + 6];
        local_80[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
             local_80[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7];
        pCVar5->x = pCVar5->x + local_84;
        pCVar5->y = pCVar5->y + local_80[0];
        pCVar5->z = pCVar5->z + local_80[1];
        pCVar2 = local_28;
        if ((float)_DAT_005ea8fc < ABS(*(float *)(&DAT_0264baec + local_20))) {
          sound_sndmain_cpp_killSfx_FUN_00551050(*(uint *)(local_20 + 0x264baf0));
          pCVar2 = local_28;
        }
      }
      local_28 = pCVar2;
      local_1c = local_1c + 1;
      pCVar5 = (CVector3f *)&pCVar5[1].y;
    } while (local_1c < 10);
    _DAT_0264bb90 = _DAT_0264bb90 - local_24;
    if ((_DAT_0264bb90 <= 0.0) && (local_28 != (CVector3f *)0x0)) {
      _DAT_0264bb90 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(1.0,5.0);
      puVar7 = &DAT_0061c288;
      pcVar8 = local_e8;
      local_18 = _DAT_0264bb90;
      for (iVar3 = 0x19; iVar3 != 0; iVar3 = iVar3 + -1) {
        *(uint *)pcVar8 = *puVar7;
        puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
        pcVar8 = pcVar8 + ((uint)bVar9 * -2 + 1) * 4;
      }
      local_38 = 20.0;
      local_158 = 1.0;
      iVar3 = rand();
      switch(iVar3 % 5) {
      case 0:
      case 1:
        local_158 = local_154 * (float)_DAT_005ea8f4;
        local_38 = 25.0;
        _sprintf(local_e8,"rail?%s.wav");
        break;
      case 2:
      case 3:
        local_158 = local_154 * (float)_DAT_005ea8ec;
        pcVar6 = &DAT_005ea85b;
        pcVar8 = local_e8;
        local_38 = 20.0;
        do {
          cVar1 = *pcVar6;
          *pcVar8 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar6[1];
          pcVar6 = pcVar6 + 2;
          pcVar8[1] = cVar1;
          pcVar8 = pcVar8 + 2;
        } while (cVar1 != '\0');
        break;
      case 4:
        goto switchD_0055ac3e_caseD_4;
      }
      local_28->x = 0.0;
      local_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(-3.0,2.0);
      fVar4 = local_18 * local_38 + _DAT_0264b2a4;
      local_28->y = 0.0;
      local_28->z = fVar4;
      sound_sndmain_cpp_pushSfxOptions_FUN_00550450();
      sound_sndmain_cpp_setNextSfxChannel_FUN_00550310(3);
      sound_sndmain_cpp_setNextSfxTrackedVelocity1_FUN_00550210((CVector3f *)&DAT_0264bb84);
      _sprintf(local_14c,"%s @ %g");
      fVar4 = (float)core_sound_cpp_CSound_playTrackedActorSound_FUN_0055ae80
                               (0x0264B290,(CDemonActor *)0x0,local_14c,local_28);
      local_28[1].x = fVar4;
      sound_sndmain_cpp_popSfxOptions_FUN_005504d0();
      return;
    }
  }
switchD_0055ac3e_caseD_4:
  return;
}
