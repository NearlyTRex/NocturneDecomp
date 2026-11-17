// Name: core_sound.cpp_CSound_process_FUN_0055a3c0
// Address: 0055a3c0
// Address Range: [[0055a3c0, 0055ac44]]
// Convention: __cdecl
// Signature: void __cdecl core_sound_cpp_CSound_process_FUN_0055a3c0(CSound *this_ptr)

#include "nocturne.h"

void __cdecl core_sound_cpp_CSound_process_FUN_0055a3c0(CSound *this_ptr)

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
  float afStackY_106c [960];
  CVector3f *end_pos;
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
  STrainNoise *local_28;
  float local_24;
  int local_20;
  int local_1c;
  float local_18;
  
  bVar9 = 0;
  local_48 = g_CGamePtr->delta_time_float;
  local_2c = local_48 * (float)0.5;
  local_3c = local_48;
  core_sound_cpp_updateListeners_FUN_00558d50();
  local_40 = -local_2c;
  local_30 = g_FLOAT_0264b2a8 - g_FLOAT_0264b2ac;
  if (local_30 < local_40) {
    local_30 = local_40;
  }
  if (local_2c < local_30) {
    local_30 = local_2c;
  }
  g_FLOAT_0264b2ac = g_FLOAT_0264b2ac + local_30;
  if (g_FLOAT_0264b2ac <= (float)0.001) {
    core_sound_cpp_CSound_killSound_FUN_0055af80(this_ptr,g_UINT_0264b294);
    g_FLOAT_0264b2ac = 0.0;
  }
  else {
    iVar4 = core_sound_cpp_CSound_isSoundPlaying_FUN_0055af70(this_ptr,g_UINT_0264b294);
    if (iVar4 == 0) {
      g_UINT_0264b294 = sound_sndmain_cpp_startSfx_FUN_005506b0("wind-ctl.wav");
    }
    sound_sndmain_cpp_setSfxVolume_FUN_00550f20(g_UINT_0264b294,g_FLOAT_0264b2ac);
  }
  local_150 = 0.0;
  if (((0.0 < g_CWaterPtr->visible_area_sqft) &&
      (iVar4 = _strnicmp
                         (g_CDemonSetPtr->geometry_filename,"NDUN",4), iVar4 == 0)) &&
     (local_150 = SQRT(g_CWaterPtr->visible_area_sqft) * (float)0.027777777777777801 +
                  (float)0.20000000000000001, (float)0.69999999999999996 < local_150)) {
    local_150 = 0.7;
  }
  local_44 = -local_2c;
  local_34 = local_150 - g_FLOAT_0264b2b0;
  if (local_34 < local_44) {
    local_34 = local_44;
  }
  if (local_2c < local_34) {
    local_34 = local_2c;
  }
  g_FLOAT_0264b2b0 = g_FLOAT_0264b2b0 + local_34;
  if (g_FLOAT_0264b2b0 <= (float)0.001) {
    core_sound_cpp_CSound_killSound_FUN_0055af80(this_ptr,g_UINT_0264b298);
    g_FLOAT_0264b2b0 = 0.0;
  }
  else {
    iVar4 = core_sound_cpp_CSound_isSoundPlaying_FUN_0055af70(this_ptr,g_UINT_0264b298);
    if (iVar4 == 0) {
      g_UINT_0264b298 = sound_sndmain_cpp_startSfx_FUN_005506b0("water-2.wav");
    }
    sound_sndmain_cpp_setSfxVolume_FUN_00550f20(g_UINT_0264b298,g_FLOAT_0264b2b0);
  }
  if (g_FLOAT_0264bae0 <= local_3c) {
    g_FLOAT_0264bad8 = g_FLOAT_0264badc;
    g_FLOAT_0264bae0 = 0.0;
  }
  else {
    fVar2 = local_3c / g_FLOAT_0264bae0;
    g_FLOAT_0264bae0 = g_FLOAT_0264bae0 - local_3c;
    g_FLOAT_0264bad8 = fVar2 * (g_FLOAT_0264badc - g_FLOAT_0264bad8) + g_FLOAT_0264bad8;
  }
  iVar4 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005512a0(0);
  if (iVar4 == 0) {
    sound_sndmain_cpp_enableSfxChannel_FUN_00551220(3,0);
  }
  else {
    sound_sndmain_cpp_enableSfxChannel_FUN_00551220(3,1);
    local_18 = sound_sndmain_cpp_getSfxChannelVol_FUN_00551190(0);
    sound_sndmain_cpp_setSfxChannelVol_FUN_00551100(3,local_18 * g_FLOAT_0264bad8);
  }
  if (g_CDemonSetPtr->player_on_train != 0) {
    local_24 = g_CGamePtr->delta_time_float;
    if (g_CGamePtr->goggles_active == 0) {
      if (g_INT_0264bb94 != g_CDemonSetPtr->selected_camera_index) {
        core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
        core_setcolid_cpp_CDemonSet_disableIgnore_FUN_00537e90(g_CDemonSetPtr);
        local_54.x = g_FLOAT_0264b29c;
        *(float *)((int)&local_54 + (uint)bVar9 * -8 + 4) = (&g_FLOAT_0264b2a0)[(uint)bVar9 * -2];
        *(float *)((int)&local_54 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
             (&g_FLOAT_0264b2a4)[(uint)bVar9 * -2 + (uint)bVar9 * -2];
        local_80[2] = local_54.x;
        local_70 = local_54.z;
        end_pos = &local_60;
        local_80[3] = local_54.y + 20.0f;
        local_60.x = local_54.x;
        *(float *)((int)&local_60 + (uint)bVar9 * -8 + 4) = local_80[(uint)bVar9 * -2 + 3];
        *(float *)((int)&local_60 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
             local_80[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
        iVar4 = core_setcolid_cpp_CDemonSet_testLineOcclusion_FUN_00535e10
                          (g_CDemonSetPtr,&local_54,end_pos);
        if (iVar4 == 0) {
          PTR_s_int_0061c060 = "ext";
        }
        else {
          PTR_s_int_0061c060 = "int";
        }
        core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
        g_INT_0264bb94 = g_CDemonSetPtr->selected_camera_index;
      }
    }
    else {
      PTR_s_int_0061c060 = "ext";
      g_INT_0264bb94 = -1;
    }
    sound_sndmain_cpp_pushSfxOptions_FUN_00550450();
    sound_sndmain_cpp_setNextSfxFlags_FUN_00550380(1);
    sound_sndmain_cpp_setNextSfxChannel_FUN_00550310(3);
    iVar4 = _stricmp(PTR_s_int_0061c060,"int");
    if (iVar4 == 0) {
      sound_sndmain_cpp_killSfx_FUN_00551050(g_UINT_0264bb9c);
      local_154 = 0.4;
    }
    else {
      local_154 = 0.7;
      iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_00550b70(g_UINT_0264bb9c);
      if (iVar4 == 0) {
        sound_sndmain_cpp_pushSfxOptions_FUN_00550450();
        sound_sndmain_cpp_setNextSfxVolume_FUN_00550270(0.4);
        g_UINT_0264bb9c = sound_sndmain_cpp_startSfx_FUN_005506b0("trainext.wav");
        sound_sndmain_cpp_popSfxOptions_FUN_005504d0();
      }
    }
    iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_00550b70(g_UINT_0264bb98);
    if (iVar4 == 0) {
      sound_sndmain_cpp_pushSfxOptions_FUN_00550450();
      sound_sndmain_cpp_setNextSfxVolume_FUN_00550270(local_154 * (float)1.5);
      g_UINT_0264bb98 = sound_sndmain_cpp_startSfx_FUN_005506b0("railnoiz.wav");
      sound_sndmain_cpp_popSfxOptions_FUN_005504d0();
    }
    else {
      iVar4 = _stricmp(PTR_s_x_0061c064,PTR_s_int_0061c060);
      if (iVar4 != 0) {
        sound_sndmain_cpp_setSfxVolume_FUN_00550f20
                  (g_UINT_0264bb98,local_154 * (float)1.5);
      }
    }
    sound_sndmain_cpp_popSfxOptions_FUN_005504d0();
    pSVar6 = g_STrainNoise_ARRAY_0264bae4;
    PTR_s_x_0061c064 = PTR_s_int_0061c060;
    g_CVector3f_0264bb84.x = 0.0;
    g_CVector3f_0264bb84.y = 0.0;
    g_CVector3f_0264bb84.z = 30.0;
    local_28 = (STrainNoise *)0x0;
    local_1c = 0;
    do {
      local_20 = local_1c * 0x10;
      iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_00550b70
                        (g_STrainNoise_ARRAY_0264bae4[local_1c].sfx_handle);
      pSVar3 = pSVar6;
      if (iVar4 != 0) {
        local_6c = g_CVector3f_0264bb84.x * local_24;
        local_68 = g_CVector3f_0264bb84.y * local_24;
        local_64 = g_CVector3f_0264bb84.z * local_24;
        local_84 = g_CVector3f_0264bb84.x * local_24;
        local_80[(uint)bVar9 * -2] = local_80[(uint)bVar9 * -2 + 6];
        local_80[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
             local_80[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7];
        (pSVar6->position).x = (pSVar6->position).x + local_84;
        (pSVar6->position).y = (pSVar6->position).y + local_80[0];
        (pSVar6->position).z = (pSVar6->position).z + local_80[1];
        pSVar3 = local_28;
        if ((float)510 <
            ABS(*(float *)((int)&g_STrainNoise_ARRAY_0264bae4[0].position.z + local_20))) {
          sound_sndmain_cpp_killSfx_FUN_00551050
                    (*(uint *)((int)&g_STrainNoise_ARRAY_0264bae4[0].sfx_handle + local_20));
          pSVar3 = local_28;
        }
      }
      local_28 = pSVar3;
      local_1c = local_1c + 1;
      pSVar6 = pSVar6 + 1;
    } while (local_1c < 10);
    g_FLOAT_0264bb90 = g_FLOAT_0264bb90 - local_24;
    if ((g_FLOAT_0264bb90 <= 0.0) && (local_28 != (STrainNoise *)0x0)) {
      g_FLOAT_0264bb90 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(1.0,5.0);
      pcVar8 = g_CHAR_ARRAY_0061c288;
      pcVar7 = local_e8;
      local_18 = g_FLOAT_0264bb90;
      for (iVar4 = 0x19; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(uint *)pcVar7 = *(uint *)pcVar8;
        pcVar8 = pcVar8 + ((uint)bVar9 * -2 + 1) * 4;
        pcVar7 = pcVar7 + ((uint)bVar9 * -2 + 1) * 4;
      }
      local_38 = 20.0;
      local_158 = 1.0;
      iVar4 = rand();
      switch(iVar4 % 5) {
      case 0:
      case 1:
        local_158 = local_154 * (float)0.59999999999999998;
        local_38 = 25.0;
        _sprintf(local_e8,"rail?%s.wav");
        break;
      case 2:
      case 3:
        local_158 = local_154 * (float)0.80000000000000004;
        pcVar7 = "bump?.wav";
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
        goto switchD_0055ac3e_caseD_4;
      }
      (local_28->position).x = 0.0;
      local_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(-3.0,2.0);
      fVar2 = local_18 * local_38 + g_FLOAT_0264b2a4;
      (local_28->position).y = 0.0;
      (local_28->position).z = fVar2;
      sound_sndmain_cpp_pushSfxOptions_FUN_00550450();
      sound_sndmain_cpp_setNextSfxChannel_FUN_00550310(3);
      sound_sndmain_cpp_setNextSfxTrackedVelocity1_FUN_00550210(&g_CVector3f_0264bb84);
      _sprintf(local_14c,"%s @ %g");
      uVar5 = core_sound_cpp_CSound_playTrackedActorSound_FUN_0055ae80
                        (g_CSound_PTR_0061c068,(CDemonActor *)0x0,local_14c,&local_28->position);
      local_28->sfx_handle = uVar5;
      sound_sndmain_cpp_popSfxOptions_FUN_005504d0();
      return;
    }
  }
switchD_0055ac3e_caseD_4:
  return;
}
