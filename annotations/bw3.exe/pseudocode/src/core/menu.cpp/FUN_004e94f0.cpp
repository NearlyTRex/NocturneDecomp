// Name: core_menu.cpp_FUN_004e94f0
// Address: 004e94f0
// Address Range: [[004e94f0, 004ea26b]]
// Convention: __cdecl
// Signature: void __cdecl core_menu_cpp_FUN_004e94f0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_menu_cpp_FUN_004e94f0(void)

{
  char cVar1;
  CDemonSet *this_ptr;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  SSoundDeviceInfo *pSVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  byte bVar11;
  float10 fVar12;
  float local_a28;
  float local_a24;
  float local_a20;
  CPickList local_a1c;
  SSoundDeviceInfo local_65c;
  SSoundDeviceInfo local_544;
  char local_42c [256];
  char local_32c [256];
  char local_22c [256];
  char local_12c [256];
  int local_2c;
  int local_28;
  uint local_24;
  char *local_20;
  char *local_1c;
  float local_18;
  char *local_14;
  
  bVar11 = 0;
  local_2c = 0;
  core_game_cpp_CGame_saveClockTime_FUN_004b4430(g_CGamePtr);
  iVar6 = 0x1d74a50;
  iVar2 = 0;
  do {
    *(int *)(iVar2 + 0x1d75450) = iVar6;
    iVar2 = iVar2 + 4;
    iVar6 = iVar6 + 0x100;
  } while (iVar2 != 0x28);
  do {
    core_game_cpp_FUN_004b4440(g_CGamePtr);
    this_ptr = g_CDemonSetPtr;
    g_CDemonSetPtr->rendering_mode = 1;
    core_set_cpp_CDemonSet_setFlatColor_FUN_0053b100(this_ptr,50000,50000,0x10000);
    g_CDemonSetPtr->ambient_base_quick = 0xdac;
    core_moon_cpp_CMoon_render_FUN_004f9670(&g_CMoonInstance);
    g_CDemonSetPtr->rendering_mode = 0;
    iVar2 = sound_sndmain_cpp_getCurrentSoundDevice_FUN_00558840();
    if ((iVar2 < 0) ||
       (iVar6 = sound_sndmain_cpp_getSoundDeviceCount_FUN_00558430(), iVar6 <= iVar2)) {
      local_65c.has_hardware_mixing = 0;
      local_65c.device_name[0] = '\0';
    }
    else {
      sound_sndmain_cpp_getSoundDeviceInfo_FUN_005584c0(iVar2,&local_65c);
    }
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_00508960(">Device : " + 1);
    pcVar8 = (char *)0x1d74a50;
    do {
      cVar1 = *pcVar3;
      *pcVar8 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar8[1] = cVar1;
      pcVar8 = pcVar8 + 2;
    } while (cVar1 != '\0');
    pSVar7 = &local_65c;
    iVar2 = -1;
    pcVar3 = (char *)0x1d74a50;
    do {
      pcVar8 = pcVar3;
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      pcVar8 = pcVar3 + (uint)bVar11 * -2 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar8;
    } while (cVar1 != '\0');
    pcVar8 = pcVar8 + -1;
    do {
      cVar1 = pSVar7->device_name[0];
      *pcVar8 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pSVar7->device_name[1];
      pSVar7 = (SSoundDeviceInfo *)(pSVar7->device_name + 2);
      pcVar8[1] = cVar1;
      pcVar8 = pcVar8 + 2;
    } while (cVar1 != '\0');
    pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Sound : ");
    local_24 = 0x1d74b50;
    pcVar3 = (char *)0x1d74b50;
    do {
      cVar1 = *pcVar8;
      *pcVar3 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar8[1];
      pcVar8 = pcVar8 + 2;
      pcVar3[1] = cVar1;
      pcVar3 = pcVar3 + 2;
    } while (cVar1 != '\0');
    iVar2 = sound_sndmain_cpp_isSoundMuted_FUN_00556750();
    if (iVar2 == 0) {
      pcVar3 = &DAT_005c776f;
    }
    else {
      pcVar3 = "Muted";
    }
    pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_00508960(pcVar3);
    iVar2 = -1;
    pcVar3 = (char *)0x1d74b50;
    do {
      pcVar9 = pcVar3;
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      pcVar9 = pcVar3 + (uint)bVar11 * -2 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar9;
    } while (cVar1 != '\0');
    pcVar9 = pcVar9 + -1;
    do {
      cVar1 = *pcVar8;
      *pcVar9 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar8[1];
      pcVar8 = pcVar8 + 2;
      pcVar9[1] = cVar1;
      pcVar9 = pcVar9 + 2;
    } while (cVar1 != '\0');
    iVar2 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_00556e30(0);
    local_1c = (char *)0x1d74c50;
    if (iVar2 == 0) {
      pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_00508960
                         ("Sound Effects Volume : Off");
      _sprintf(local_1c,pcVar3);
    }
    else {
      pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Sound Effects Volume : ");
      _sprintf((char *)0x1d74c50,pcVar3);
      local_14 = (char *)sound_sndmain_cpp_getSfxChannelVol_FUN_00556d20(0);
      fVar12 = ((float10)(float)local_14 * (float10)_DAT_005c78b2) / (float10)_DAT_005e2924 +
               (float10)_DAT_005c78b6;
      round();
      local_14 = (char *)(int)ROUND(fVar12);
      _sprintf(local_42c,&DAT_005c778a);
      pcVar8 = local_1c;
      pcVar3 = local_42c;
      iVar2 = -1;
      pcVar9 = local_1c;
      do {
        pcVar10 = pcVar9;
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        pcVar10 = pcVar9 + (uint)bVar11 * -2 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar10;
      } while (cVar1 != '\0');
      pcVar10 = pcVar10 + -1;
      do {
        cVar1 = *pcVar3;
        *pcVar10 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar3[1];
        pcVar3 = pcVar3 + 2;
        pcVar10[1] = cVar1;
        pcVar10 = pcVar10 + 2;
      } while (cVar1 != '\0');
      pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_00508960(&DAT_005c778d);
      iVar2 = -1;
      do {
        pcVar9 = pcVar8;
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        pcVar9 = pcVar8 + (uint)bVar11 * -2 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar9;
      } while (cVar1 != '\0');
      pcVar9 = pcVar9 + -1;
      do {
        cVar1 = *pcVar3;
        *pcVar9 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar3[1];
        pcVar3 = pcVar3 + 2;
        pcVar9[1] = cVar1;
        pcVar9 = pcVar9 + 2;
      } while (cVar1 != '\0');
    }
    iVar2 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_00556e30(2);
    pcVar3 = (char *)0x1d74d50;
    local_28 = 4;
    if (iVar2 == 0) {
      pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Dialog Volume : Off");
      _sprintf((char *)0x1d74d50,pcVar3);
      iVar2 = 4;
    }
    else {
      pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Dialog Volume : ");
      do {
        cVar1 = *pcVar8;
        *pcVar3 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar8[1];
        pcVar8 = pcVar8 + 2;
        pcVar3[1] = cVar1;
        pcVar3 = pcVar3 + 2;
      } while (cVar1 != '\0');
      local_14 = (char *)sound_sndmain_cpp_getSfxChannelVol_FUN_00556d20(2);
      fVar12 = ((float10)(float)local_14 * (float10)_DAT_005c78b2) / (float10)_DAT_005e2928 +
               (float10)_DAT_005c78b6;
      round();
      local_14 = (char *)(int)ROUND(fVar12);
      _sprintf(local_12c,&DAT_005c77bc);
      pcVar3 = local_12c;
      iVar2 = -1;
      pcVar8 = (char *)0x1d74d50;
      do {
        pcVar9 = pcVar8;
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        pcVar9 = pcVar8 + (uint)bVar11 * -2 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar9;
      } while (cVar1 != '\0');
      pcVar9 = pcVar9 + -1;
      do {
        cVar1 = *pcVar3;
        *pcVar9 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar3[1];
        pcVar3 = pcVar3 + 2;
        pcVar9[1] = cVar1;
        pcVar9 = pcVar9 + 2;
      } while (cVar1 != '\0');
      pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_00508960(&DAT_005c77bf);
      iVar2 = -1;
      pcVar3 = (char *)0x1d74d50;
      do {
        pcVar9 = pcVar3;
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        pcVar9 = pcVar3 + (uint)bVar11 * -2 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar9;
      } while (cVar1 != '\0');
      pcVar9 = pcVar9 + -1;
      do {
        cVar1 = *pcVar8;
        *pcVar9 = cVar1;
        iVar2 = local_28;
        if (cVar1 == '\0') break;
        cVar1 = pcVar8[1];
        pcVar8 = pcVar8 + 2;
        pcVar9[1] = cVar1;
        pcVar9 = pcVar9 + 2;
      } while (cVar1 != '\0');
    }
    iVar6 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_00556e30(1);
    local_20 = (char *)(iVar2 * 0x100 + 0x1d74a50);
    if (iVar6 == 0) {
      pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Music Volume : Off");
      _sprintf(local_20,pcVar3);
    }
    else {
      pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Music Volume : ");
      pcVar3 = local_20;
      do {
        cVar1 = *pcVar8;
        *pcVar3 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar8[1];
        pcVar8 = pcVar8 + 2;
        pcVar3[1] = cVar1;
        pcVar3 = pcVar3 + 2;
      } while (cVar1 != '\0');
      local_14 = (char *)sound_sndmain_cpp_getSfxChannelVol_FUN_00556d20(1);
      fVar12 = ((float10)(float)local_14 * (float10)_DAT_005c78b2) / (float10)_DAT_005e2920 +
               (float10)_DAT_005c78b6;
      round();
      local_14 = (char *)(int)ROUND(fVar12);
      _sprintf(local_32c,&DAT_005c77e6);
      pcVar8 = local_20;
      pcVar3 = local_32c;
      iVar6 = -1;
      pcVar9 = local_20;
      do {
        pcVar10 = pcVar9;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar10 = pcVar9 + (uint)bVar11 * -2 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar10;
      } while (cVar1 != '\0');
      pcVar10 = pcVar10 + -1;
      do {
        cVar1 = *pcVar3;
        *pcVar10 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar3[1];
        pcVar3 = pcVar3 + 2;
        pcVar10[1] = cVar1;
        pcVar10 = pcVar10 + 2;
      } while (cVar1 != '\0');
      pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_00508960(&DAT_005c77e9);
      iVar6 = -1;
      do {
        pcVar9 = pcVar8;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar9 = pcVar8 + (uint)bVar11 * -2 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar9;
      } while (cVar1 != '\0');
      pcVar9 = pcVar9 + -1;
      do {
        cVar1 = *pcVar3;
        *pcVar9 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar3[1];
        pcVar3 = pcVar3 + 2;
        pcVar9[1] = cVar1;
        pcVar9 = pcVar9 + 2;
      } while (cVar1 != '\0');
    }
    pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Output Rate : ");
    pcVar3 = (char *)((iVar2 + 1) * 0x100 + 0x1d74a50);
    pcVar8 = pcVar3;
    do {
      cVar1 = *pcVar9;
      *pcVar8 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar9[1];
      pcVar9 = pcVar9 + 2;
      pcVar8[1] = cVar1;
      pcVar8 = pcVar8 + 2;
    } while (cVar1 != '\0');
    local_14 = pcVar3;
    sound_sndmain_cpp_getAudioSampleRate_FUN_00558390();
    _sprintf(local_22c,&DAT_005c780e);
    pcVar8 = local_22c;
    iVar6 = -1;
    pcVar9 = pcVar3;
    do {
      pcVar10 = pcVar9;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar10 = pcVar9 + (uint)bVar11 * -2 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar10;
    } while (cVar1 != '\0');
    pcVar10 = pcVar10 + -1;
    do {
      cVar1 = *pcVar8;
      *pcVar10 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar8[1];
      pcVar8 = pcVar8 + 2;
      pcVar10[1] = cVar1;
      pcVar10 = pcVar10 + 2;
    } while (cVar1 != '\0');
    pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_00508960(&DAT_005c7811);
    iVar6 = -1;
    do {
      pcVar9 = pcVar3;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar9 = pcVar3 + (uint)bVar11 * -2 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar9;
    } while (cVar1 != '\0');
    pcVar9 = pcVar9 + -1;
    do {
      cVar1 = *pcVar8;
      *pcVar9 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar8[1];
      pcVar8 = pcVar8 + 2;
      pcVar9[1] = cVar1;
      pcVar9 = pcVar9 + 2;
    } while (cVar1 != '\0');
    pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Output Quality : ");
    pcVar3 = (char *)((iVar2 + 2) * 0x100 + 0x1d74a50);
    pcVar8 = pcVar3;
    do {
      cVar1 = *pcVar9;
      *pcVar8 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar9[1];
      pcVar9 = pcVar9 + 2;
      pcVar8[1] = cVar1;
      pcVar8 = pcVar8 + 2;
    } while (cVar1 != '\0');
    local_14 = pcVar3;
    sound_sndmain_cpp_getAudioBitDepth_FUN_00558370();
    _sprintf(local_22c,&DAT_005c7826);
    pcVar8 = local_22c;
    iVar6 = -1;
    pcVar9 = pcVar3;
    do {
      pcVar10 = pcVar9;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar10 = pcVar9 + (uint)bVar11 * -2 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar10;
    } while (cVar1 != '\0');
    pcVar10 = pcVar10 + -1;
    do {
      cVar1 = *pcVar8;
      *pcVar10 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar8[1];
      pcVar8 = pcVar8 + 2;
      pcVar10[1] = cVar1;
      pcVar10 = pcVar10 + 2;
    } while (cVar1 != '\0');
    pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_00508960(&DAT_005c7829);
    iVar6 = -1;
    do {
      pcVar9 = pcVar3;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar9 = pcVar3 + (uint)bVar11 * -2 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar9;
    } while (cVar1 != '\0');
    pcVar9 = pcVar9 + -1;
    do {
      cVar1 = *pcVar8;
      *pcVar9 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar8[1];
      pcVar8 = pcVar8 + 2;
      pcVar9[1] = cVar1;
      pcVar9 = pcVar9 + 2;
    } while (cVar1 != '\0');
    uVar4 = sound_sndmain_cpp_getAudioChannelCount_FUN_005583b0();
    if (((uVar4 == 0) || (uVar4 < 2)) || (uVar4 != 2)) {
      pcVar3 = "Output Type : Mono";
    }
    else {
      pcVar3 = "Output Type : Stereo";
    }
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_00508960(pcVar3);
    iVar6 = iVar2 + 4;
    _sprintf((char *)((iVar2 + 3) * 0x100 + 0x1d74a50),pcVar3);
    if (0 < (int)local_65c.has_hardware_mixing) {
      iVar5 = sound_sndmain_cpp_isHardwareMixingEnabled_FUN_005586e0();
      pcVar3 = (char *)(iVar6 * 0x100 + 0x1d74a50);
      if (iVar5 < 1) {
        pcVar8 = "Hardware Mixing: Off";
      }
      else {
        pcVar8 = "Hardware Mixing: Enabled";
      }
      pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_00508960(pcVar8);
      do {
        cVar1 = *pcVar8;
        *pcVar3 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar8[1];
        pcVar8 = pcVar8 + 2;
        pcVar3[1] = cVar1;
        pcVar3 = pcVar3 + 2;
      } while (cVar1 != '\0');
      iVar6 = iVar2 + 5;
    }
    _DAT_01d737e0 = _DAT_01d737e0 + _DAT_01c5fad0 * 0x18;
    if (0x7ffff < _DAT_01d737e0) {
      _DAT_01d737e0 = _DAT_01d737e0 + -0x80000;
    }
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Sound Options");
    iVar2 = core_menu_cpp_FUN_004e7860((char **)0x1d75450,iVar6,&local_2c,200,pcVar3);
    wincore_wddvmem_cpp_swapBuffers_FUN_0057a8a0();
    local_18 = 0.2;
    switch(iVar2) {
    case 0:
      shape_edittool_cpp_CPickList_ctor_FUN_004831c0(&local_a1c);
      for (iVar2 = 0; iVar6 = sound_sndmain_cpp_getSoundDeviceCount_FUN_00558430(), iVar2 < iVar6;
          iVar2 = iVar2 + 1) {
        sound_sndmain_cpp_getSoundDeviceInfo_FUN_005584c0(iVar2,&local_544);
        shape_edittool_cpp_CStrList_add_FUN_00482070(&local_a1c.base,local_544.device_name);
      }
      uVar4 = 0;
      iVar2 = sound_sndmain_cpp_getCurrentSoundDevice_FUN_00558840();
      iVar2 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_00483450
                        (&local_a1c,"Select sound device",iVar2,uVar4);
      if (-1 < iVar2) {
        sound_sndmain_cpp_closeSoundDevice_FUN_005587e0();
        sound_sndmain_cpp_selectSoundDevice_FUN_00558640(iVar2);
        sound_sndmain_cpp_initializeSoundDevice_FUN_00558730();
        uVar4 = sound_sndmain_cpp_hasHardware3DSound_FUN_005586d0();
        if (0 < (int)uVar4) {
          sound_sndmain_cpp_setSoundOutputMode_FUN_00558290(0x10,2,0xac44);
        }
        core_sound_cpp_CSound_configure_FUN_005607d0(0x02CF5680);
      }
      shape_edittool_cpp_CPickList_dtor_FUN_004832b0(&local_a1c,0);
      break;
    case 1:
      iVar2 = sound_sndmain_cpp_isSoundMuted_FUN_00556750();
      sound_sndmain_cpp_setSoundMuted_FUN_00556760((uint)(iVar2 == 0));
      iVar2 = sound_sndmain_cpp_isSoundMuted_FUN_00556750();
      if (iVar2 == 0) {
        core_sound_cpp_CSound_configure_FUN_005607d0(0x02CF5680);
      }
      break;
    case 2:
      local_14 = (char *)sound_sndmain_cpp_getSfxChannelVol_FUN_00556d20(0);
      local_a28 = (float)local_14 / _DAT_005e2924;
      if (_DAT_01d737d4 == 1) {
        iVar2 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_00556e30(0);
        if (iVar2 == 0) {
          sound_sndmain_cpp_enableSfxChannel_FUN_00556db0(0,1);
          local_a28 = 1.0;
        }
        else {
          local_a28 = local_a28 - local_18;
          if (local_a28 < (float)_DAT_005c78de) {
LAB_004e9e11:
            local_a28 = 0.0;
            sound_sndmain_cpp_enableSfxChannel_FUN_00556db0(0,0);
          }
        }
      }
      else {
        iVar2 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_00556e30(0);
        if (iVar2 == 0) {
          sound_sndmain_cpp_enableSfxChannel_FUN_00556db0(0,1);
          local_a28 = local_18;
        }
        else {
          local_a28 = local_a28 + local_18;
          if ((float)_DAT_005c78c6 < local_a28) goto LAB_004e9e11;
          if ((float)_DAT_005c78ce < local_a28) {
            local_a28 = 1.0;
          }
        }
      }
      sound_sndmain_cpp_setSfxChannelVol_FUN_00556c90(0,local_a28 * _DAT_005e2924);
      sound_sndmain_cpp_pushSfxOptions_FUN_00555fd0();
      sound_sndmain_cpp_setNextSfxFlags_FUN_00555f00(1);
      sound_sndmain_cpp_startSfx_FUN_00556240("colt45-0.wav");
      sound_sndmain_cpp_popSfxOptions_FUN_00556050();
      break;
    case 3:
      local_14 = (char *)sound_sndmain_cpp_getSfxChannelVol_FUN_00556d20(2);
      local_a20 = (float)local_14 / _DAT_005e2928;
      if (_DAT_01d737d4 == 1) {
        iVar2 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_00556e30(2);
        if (iVar2 == 0) {
          sound_sndmain_cpp_enableSfxChannel_FUN_00556db0(2,1);
          local_a20 = 1.0;
        }
        else {
          local_a20 = local_a20 - local_18;
          if (local_a20 < (float)_DAT_005c78de) {
LAB_004e9f3d:
            local_a20 = 0.0;
            sound_sndmain_cpp_enableSfxChannel_FUN_00556db0(2,0);
          }
        }
      }
      else {
        iVar2 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_00556e30(2);
        if (iVar2 == 0) {
          sound_sndmain_cpp_enableSfxChannel_FUN_00556db0(2,1);
          local_a20 = local_18;
        }
        else {
          local_a20 = local_a20 + local_18;
          if ((float)_DAT_005c78c6 < local_a20) goto LAB_004e9f3d;
          if ((float)_DAT_005c78ce < local_a20) {
            local_a20 = 1.0;
          }
        }
      }
      sound_sndmain_cpp_setSfxChannelVol_FUN_00556c90(2,local_a20 * _DAT_005e2928);
      break;
    case 4:
      local_14 = (char *)sound_sndmain_cpp_getSfxChannelVol_FUN_00556d20(1);
      local_a24 = (float)local_14 / _DAT_005e2920;
      if (_DAT_01d737d4 == 1) {
        iVar2 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_00556e30(1);
        if (iVar2 == 0) {
          sound_sndmain_cpp_enableSfxChannel_FUN_00556db0(1,1);
          core_sound_cpp_CSound_configure_FUN_005607d0(0x02CF5680);
          local_a24 = 1.0;
        }
        else {
          local_a24 = local_a24 + _DAT_005c78d6;
          if (local_a24 < (float)_DAT_005c78de) {
LAB_004ea042:
            local_a24 = 0.0;
            sound_sndmain_cpp_enableSfxChannel_FUN_00556db0(1,0);
          }
        }
      }
      else {
        iVar2 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_00556e30(1);
        if (iVar2 == 0) {
          sound_sndmain_cpp_enableSfxChannel_FUN_00556db0(1,1);
          core_sound_cpp_CSound_configure_FUN_005607d0(0x02CF5680);
          local_a24 = 0.2;
        }
        else {
          local_a24 = local_a24 + _DAT_005c78be;
          if ((float)_DAT_005c78c6 < local_a24) goto LAB_004ea042;
          if (_DAT_005c78ce < (double)local_a24) {
            local_a24 = 1.0;
          }
        }
      }
      sound_sndmain_cpp_setSfxChannelVol_FUN_00556c90(1,local_a24 * _DAT_005e2920);
      break;
    case 5:
      iVar2 = sound_sndmain_cpp_getAudioSampleRate_FUN_00558390();
      if (_DAT_01d737d4 == 1) {
        if (iVar2 == 0x5622) {
LAB_004ea121:
          iVar2 = 0x2b2a;
        }
        else if (iVar2 == 0xac44) {
          iVar2 = 0x5622;
        }
        else {
          iVar2 = 0xac44;
        }
      }
      else if (iVar2 < 0x5622) {
        iVar2 = 0x5622;
      }
      else {
        if (0xac43 < iVar2) goto LAB_004ea121;
        iVar2 = 0xac44;
      }
      uVar4 = sound_sndmain_cpp_hasHardware3DSound_FUN_005586d0();
      if (0 < (int)uVar4) {
        iVar2 = 0xac44;
      }
      iVar6 = sound_sndmain_cpp_getAudioSampleRate_FUN_00558390();
      if (iVar2 != iVar6) {
        sound_sndmain_cpp_resetSoundDevice_FUN_00558250();
        sound_sndmain_cpp_setAudioSampleRate_FUN_00558410(iVar2);
        core_sound_cpp_CSound_configure_FUN_005607d0(0x02CF5680);
      }
      break;
    case 6:
      iVar2 = sound_sndmain_cpp_getAudioBitDepth_FUN_00558370();
      if (iVar2 == 0x10) {
        iVar2 = 8;
      }
      else {
        iVar2 = 0x10;
      }
      uVar4 = sound_sndmain_cpp_hasHardware3DSound_FUN_005586d0();
      if (0 < (int)uVar4) {
        iVar2 = 0x10;
      }
      iVar6 = sound_sndmain_cpp_getAudioBitDepth_FUN_00558370();
      if (iVar2 != iVar6) {
        sound_sndmain_cpp_resetSoundDevice_FUN_00558250();
        sound_sndmain_cpp_setAudioBitDepth_FUN_005583d0(iVar2);
        core_sound_cpp_CSound_configure_FUN_005607d0(0x02CF5680);
      }
      break;
    case 7:
      iVar2 = sound_sndmain_cpp_getAudioChannelCount_FUN_005583b0();
      iVar2 = (iVar2 == 1) + 1;
      uVar4 = sound_sndmain_cpp_hasHardware3DSound_FUN_005586d0();
      if (0 < (int)uVar4) {
        iVar2 = 2;
      }
      iVar6 = sound_sndmain_cpp_getAudioChannelCount_FUN_005583b0();
      if (iVar2 != iVar6) {
        sound_sndmain_cpp_resetSoundDevice_FUN_00558250();
        sound_sndmain_cpp_setAudioChannelCount_FUN_005583f0(iVar2);
        core_sound_cpp_CSound_configure_FUN_005607d0(0x02CF5680);
      }
      break;
    case 8:
      sound_sndmain_cpp_closeSoundDevice_FUN_005587e0();
      iVar2 = sound_sndmain_cpp_isHardwareMixingEnabled_FUN_005586e0();
      if (iVar2 < 1) {
        iVar2 = 2;
      }
      else {
        iVar2 = 0;
      }
      sound_sndmain_cpp_enableHwSoundMixing_FUN_005586f0(iVar2);
      sound_sndmain_cpp_initializeSoundDevice_FUN_00558730();
      core_sound_cpp_CSound_configure_FUN_005607d0(0x02CF5680);
    }
    iVar2 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,1);
    if (iVar2 != 0) {
      return;
    }
  } while( true );
}
