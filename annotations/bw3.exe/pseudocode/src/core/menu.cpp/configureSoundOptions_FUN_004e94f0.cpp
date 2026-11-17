// Name: core_menu.cpp_configureSoundOptions_FUN_004e94f0
// Address: 004e94f0
// Address Range: [[004e94f0, 004ea26b]]
// Convention: __cdecl
// Signature: void __cdecl core_menu_cpp_configureSoundOptions_FUN_004e94f0(void)

#include "nocturne.h"

void __cdecl core_menu_cpp_configureSoundOptions_FUN_004e94f0(void)

{
  char cVar1;
  DWORD DVar2;
  CDemonSet *this_ptr;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  SSoundDeviceInfo *pSVar8;
  DWORD *pDVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  byte bVar13;
  double dVar14;
  float local_a28;
  float local_a24;
  float local_a20;
  CPickList local_a1c;
  SSoundDeviceInfo local_65c;
  SSoundDeviceInfo local_544;
  char acStack_330 [260];
  char local_22c [252];
  char acStack_130 [260];
  int local_2c [2];
  char *local_24;
  char *local_20;
  char *local_1c;
  float local_18;
  char *local_14;
  
  bVar13 = 0;
  local_2c[0] = 0;
  core_game_cpp_CGame_saveClockTime_FUN_004b4430(g_CGamePtr);
  iVar7 = 0x1d74a50;
  iVar3 = 0;
  do {
    *(int *)((int)&g_CHAR_PTR_01d75450 + iVar3) = iVar7;
    iVar3 = iVar3 + 4;
    iVar7 = iVar7 + 0x100;
  } while (iVar3 != 0x28);
  do {
    core_game_cpp_CGame_updateDT_FUN_004b4440(g_CGamePtr);
    this_ptr = g_CDemonSetPtr;
    g_CDemonSetPtr->rendering_mode = 1;
    core_set_cpp_CDemonSet_setFlatColor_FUN_0053b100(this_ptr,50000,50000,0x10000);
    g_CDemonSetPtr->ambient_base_quick = 0xdac;
    core_moon_cpp_CMoon_render_FUN_004f9670(&g_CMoonInstance);
    g_CDemonSetPtr->rendering_mode = 0;
    iVar3 = sound_sndmain_cpp_getCurrentSoundDevice_FUN_00558840();
    if ((iVar3 < 0) ||
       (iVar7 = sound_sndmain_cpp_getSoundDeviceCount_FUN_00558430(), iVar7 <= iVar3)) {
      local_65c.has_hardware_mixing = 0;
      local_65c.device_name[0] = '\0';
    }
    else {
      sound_sndmain_cpp_getSoundDeviceInfo_FUN_005584c0(iVar3,&local_65c);
    }
    pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Device : ");
    pcVar10 = (char *)0x1d74a50;
    do {
      cVar1 = *pcVar4;
      *pcVar10 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar4[1];
      pcVar4 = pcVar4 + 2;
      pcVar10[1] = cVar1;
      pcVar10 = pcVar10 + 2;
    } while (cVar1 != '\0');
    pSVar8 = &local_65c;
    iVar3 = -1;
    pcVar4 = (char *)0x1d74a50;
    do {
      pcVar10 = pcVar4;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar10 = pcVar4 + (uint)bVar13 * -2 + 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar10;
    } while (cVar1 != '\0');
    pcVar10 = pcVar10 + -1;
    do {
      cVar1 = pSVar8->device_name[0];
      *pcVar10 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pSVar8->device_name[1];
      pSVar8 = (SSoundDeviceInfo *)(pSVar8->device_name + 2);
      pcVar10[1] = cVar1;
      pcVar10 = pcVar10 + 2;
    } while (cVar1 != '\0');
    pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Sound : ");
    local_24 = (char *)0x1d74b50;
    pcVar4 = (char *)0x1d74b50;
    do {
      cVar1 = *pcVar10;
      *pcVar4 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar10[1];
      pcVar10 = pcVar10 + 2;
      pcVar4[1] = cVar1;
      pcVar4 = pcVar4 + 2;
    } while (cVar1 != '\0');
    iVar3 = sound_sndmain_cpp_isSoundMuted_FUN_00556750();
    if (iVar3 == 0) {
      pcVar4 = &DAT_005c776f;
    }
    else {
      pcVar4 = "Muted";
    }
    pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_00508960(pcVar4);
    iVar3 = -1;
    pcVar4 = (char *)0x1d74b50;
    do {
      pcVar11 = pcVar4;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar11 = pcVar4 + (uint)bVar13 * -2 + 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar11;
    } while (cVar1 != '\0');
    pcVar11 = pcVar11 + -1;
    do {
      cVar1 = *pcVar10;
      *pcVar11 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar10[1];
      pcVar10 = pcVar10 + 2;
      pcVar11[1] = cVar1;
      pcVar11 = pcVar11 + 2;
    } while (cVar1 != '\0');
    iVar3 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_00556e30(0);
    local_1c = (char *)0x1d74c50;
    if (iVar3 == 0) {
      pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_00508960
                         ("Sound Effects Volume : Off");
      _sprintf(local_1c,pcVar4);
    }
    else {
      pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Sound Effects Volume : ");
      _sprintf((char *)0x1d74c50,pcVar4);
      local_14 = (char *)sound_sndmain_cpp_getSfxChannelVol_FUN_00556d20(0);
      dVar14 = round
                         ((double)(((float)local_14 * 100.0f) / 0.25f +
                                  (float)0.001));
      local_18 = (float)(int)ROUND(dVar14);
      _sprintf((char *)&local_544.is_emulated,"%d");
      pcVar4 = local_20;
      pDVar9 = &local_544.is_emulated;
      iVar3 = -1;
      pcVar10 = local_20;
      do {
        pcVar11 = pcVar10;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar11 = pcVar10 + (uint)bVar13 * -2 + 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar11;
      } while (cVar1 != '\0');
      pcVar11 = pcVar11 + -1;
      do {
        DVar2 = *pDVar9;
        *pcVar11 = (char)DVar2;
        if ((char)DVar2 == '\0') break;
        cVar1 = *(char *)((int)pDVar9 + 1);
        pDVar9 = (DWORD *)((int)pDVar9 + 2);
        pcVar11[1] = cVar1;
        pcVar11 = pcVar11 + 2;
      } while (cVar1 != '\0');
      pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_00508960("%.");
      iVar3 = -1;
      do {
        pcVar11 = pcVar4;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar11 = pcVar4 + (uint)bVar13 * -2 + 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar11;
      } while (cVar1 != '\0');
      pcVar11 = pcVar11 + -1;
      do {
        cVar1 = *pcVar10;
        *pcVar11 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar10[1];
        pcVar10 = pcVar10 + 2;
        pcVar11[1] = cVar1;
        pcVar11 = pcVar11 + 2;
      } while (cVar1 != '\0');
    }
    iVar3 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_00556e30(2);
    pcVar4 = (char *)0x1d74d50;
    local_2c[1] = 4;
    if (iVar3 == 0) {
      pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Dialog Volume : Off");
      _sprintf((char *)0x1d74d50,pcVar4);
      iVar3 = 4;
    }
    else {
      pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Dialog Volume : ");
      do {
        cVar1 = *pcVar10;
        *pcVar4 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar10[1];
        pcVar10 = pcVar10 + 2;
        pcVar4[1] = cVar1;
        pcVar4 = pcVar4 + 2;
      } while (cVar1 != '\0');
      local_14 = (char *)sound_sndmain_cpp_getSfxChannelVol_FUN_00556d20(2);
      dVar14 = round
                         ((double)(((float)local_14 * 100.0f) / 1.0f +
                                  (float)0.001));
      local_18 = (float)(int)ROUND(dVar14);
      _sprintf(acStack_130,"%d");
      pcVar4 = acStack_130;
      iVar3 = -1;
      pcVar10 = (char *)0x1d74d50;
      do {
        pcVar11 = pcVar10;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar11 = pcVar10 + (uint)bVar13 * -2 + 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar11;
      } while (cVar1 != '\0');
      pcVar11 = pcVar11 + -1;
      do {
        cVar1 = *pcVar4;
        *pcVar11 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar11[1] = cVar1;
        pcVar11 = pcVar11 + 2;
      } while (cVar1 != '\0');
      pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_00508960("%.");
      iVar3 = -1;
      pcVar4 = (char *)0x1d74d50;
      do {
        pcVar11 = pcVar4;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar11 = pcVar4 + (uint)bVar13 * -2 + 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar11;
      } while (cVar1 != '\0');
      pcVar11 = pcVar11 + -1;
      do {
        cVar1 = *pcVar10;
        *pcVar11 = cVar1;
        iVar3 = local_2c[0];
        if (cVar1 == '\0') break;
        cVar1 = pcVar10[1];
        pcVar10 = pcVar10 + 2;
        pcVar11[1] = cVar1;
        pcVar11 = pcVar11 + 2;
      } while (cVar1 != '\0');
    }
    iVar7 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_00556e30(1);
    local_20 = (char *)(iVar3 * 0x100 + 0x1d74a50);
    if (iVar7 == 0) {
      pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Music Volume : Off");
      _sprintf(local_20,pcVar4);
    }
    else {
      pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Music Volume : ");
      pcVar4 = local_20;
      do {
        cVar1 = *pcVar10;
        *pcVar4 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar10[1];
        pcVar10 = pcVar10 + 2;
        pcVar4[1] = cVar1;
        pcVar4 = pcVar4 + 2;
      } while (cVar1 != '\0');
      local_14 = (char *)sound_sndmain_cpp_getSfxChannelVol_FUN_00556d20(1);
      dVar14 = round
                         ((double)(((float)local_14 * 100.0f) / 0.25f +
                                  (float)0.001));
      local_18 = (float)(int)ROUND(dVar14);
      _sprintf(acStack_330,"%d");
      pcVar10 = local_24;
      pcVar4 = acStack_330;
      iVar7 = -1;
      pcVar11 = local_24;
      do {
        pcVar12 = pcVar11;
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        pcVar12 = pcVar11 + (uint)bVar13 * -2 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar12;
      } while (cVar1 != '\0');
      pcVar12 = pcVar12 + -1;
      do {
        cVar1 = *pcVar4;
        *pcVar12 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar12[1] = cVar1;
        pcVar12 = pcVar12 + 2;
      } while (cVar1 != '\0');
      pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_00508960("%.");
      iVar7 = -1;
      do {
        pcVar11 = pcVar10;
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        pcVar11 = pcVar10 + (uint)bVar13 * -2 + 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar11;
      } while (cVar1 != '\0');
      pcVar11 = pcVar11 + -1;
      do {
        cVar1 = *pcVar4;
        *pcVar11 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar11[1] = cVar1;
        pcVar11 = pcVar11 + 2;
      } while (cVar1 != '\0');
    }
    pcVar11 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Output Rate : ");
    pcVar4 = (char *)((iVar3 + 1) * 0x100 + 0x1d74a50);
    pcVar10 = pcVar4;
    do {
      cVar1 = *pcVar11;
      *pcVar10 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar11[1];
      pcVar11 = pcVar11 + 2;
      pcVar10[1] = cVar1;
      pcVar10 = pcVar10 + 2;
    } while (cVar1 != '\0');
    local_14 = pcVar4;
    sound_sndmain_cpp_getAudioSampleRate_FUN_00558390();
    _sprintf(local_22c,"%d");
    pcVar10 = local_22c;
    iVar7 = -1;
    pcVar11 = pcVar4;
    do {
      pcVar12 = pcVar11;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar12 = pcVar11 + (uint)bVar13 * -2 + 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar12;
    } while (cVar1 != '\0');
    pcVar12 = pcVar12 + -1;
    do {
      cVar1 = *pcVar10;
      *pcVar12 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar10[1];
      pcVar10 = pcVar10 + 2;
      pcVar12[1] = cVar1;
      pcVar12 = pcVar12 + 2;
    } while (cVar1 != '\0');
    pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_00508960("hz");
    iVar7 = -1;
    do {
      pcVar11 = pcVar4;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar11 = pcVar4 + (uint)bVar13 * -2 + 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar11;
    } while (cVar1 != '\0');
    pcVar11 = pcVar11 + -1;
    do {
      cVar1 = *pcVar10;
      *pcVar11 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar10[1];
      pcVar10 = pcVar10 + 2;
      pcVar11[1] = cVar1;
      pcVar11 = pcVar11 + 2;
    } while (cVar1 != '\0');
    pcVar11 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Output Quality : ");
    pcVar4 = (char *)((iVar3 + 2) * 0x100 + 0x1d74a50);
    pcVar10 = pcVar4;
    do {
      cVar1 = *pcVar11;
      *pcVar10 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar11[1];
      pcVar11 = pcVar11 + 2;
      pcVar10[1] = cVar1;
      pcVar10 = pcVar10 + 2;
    } while (cVar1 != '\0');
    local_14 = pcVar4;
    sound_sndmain_cpp_getAudioBitDepth_FUN_00558370();
    _sprintf(local_22c,"%d");
    pcVar10 = local_22c;
    iVar7 = -1;
    pcVar11 = pcVar4;
    do {
      pcVar12 = pcVar11;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar12 = pcVar11 + (uint)bVar13 * -2 + 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar12;
    } while (cVar1 != '\0');
    pcVar12 = pcVar12 + -1;
    do {
      cVar1 = *pcVar10;
      *pcVar12 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar10[1];
      pcVar10 = pcVar10 + 2;
      pcVar12[1] = cVar1;
      pcVar12 = pcVar12 + 2;
    } while (cVar1 != '\0');
    pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_00508960("bit");
    iVar7 = -1;
    do {
      pcVar11 = pcVar4;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar11 = pcVar4 + (uint)bVar13 * -2 + 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar11;
    } while (cVar1 != '\0');
    pcVar11 = pcVar11 + -1;
    do {
      cVar1 = *pcVar10;
      *pcVar11 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar10[1];
      pcVar10 = pcVar10 + 2;
      pcVar11[1] = cVar1;
      pcVar11 = pcVar11 + 2;
    } while (cVar1 != '\0');
    uVar5 = sound_sndmain_cpp_getAudioChannelCount_FUN_005583b0();
    if (((uVar5 == 0) || (uVar5 < 2)) || (uVar5 != 2)) {
      pcVar4 = "Output Type : Mono";
    }
    else {
      pcVar4 = "Output Type : Stereo";
    }
    pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_00508960(pcVar4);
    iVar7 = iVar3 + 4;
    _sprintf((char *)((iVar3 + 3) * 0x100 + 0x1d74a50),pcVar4);
    if (0 < (int)local_65c.has_hardware_mixing) {
      iVar6 = sound_sndmain_cpp_isHardwareMixingEnabled_FUN_005586e0();
      pcVar4 = (char *)(iVar7 * 0x100 + 0x1d74a50);
      if (iVar6 < 1) {
        pcVar10 = "Hardware Mixing: Off";
      }
      else {
        pcVar10 = "Hardware Mixing: Enabled";
      }
      pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_00508960(pcVar10);
      do {
        cVar1 = *pcVar10;
        *pcVar4 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar10[1];
        pcVar10 = pcVar10 + 2;
        pcVar4[1] = cVar1;
        pcVar4 = pcVar4 + 2;
      } while (cVar1 != '\0');
      iVar7 = iVar3 + 5;
    }
    g_INT_01d737e0 = g_INT_01d737e0 + g_INT_01c5fad0 * 0x18;
    if (0x7ffff < g_INT_01d737e0) {
      g_INT_01d737e0 = g_INT_01d737e0 + -0x80000;
    }
    pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Sound Options");
    iVar3 = core_menu_cpp_renderMenuAndGetChoice_FUN_004e7860
                      (&g_CHAR_PTR_01d75450,iVar7,local_2c,200,pcVar4);
    wincore_wddvmem_cpp_swapBuffers_FUN_0057a8a0();
    local_18 = 0.2;
    switch(iVar3) {
    case 0:
      shape_edittool_cpp_CPickList_ctor_FUN_004831c0(&local_a1c);
      for (iVar3 = 0; iVar7 = sound_sndmain_cpp_getSoundDeviceCount_FUN_00558430(), iVar3 < iVar7;
          iVar3 = iVar3 + 1) {
        sound_sndmain_cpp_getSoundDeviceInfo_FUN_005584c0(iVar3,&local_544);
        shape_edittool_cpp_CStrList_add_FUN_00482070(&local_a1c.base,local_544.device_name);
      }
      uVar5 = 0;
      iVar3 = sound_sndmain_cpp_getCurrentSoundDevice_FUN_00558840();
      iVar3 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_00483450
                        (&local_a1c,"Select sound device",iVar3,uVar5);
      if (-1 < iVar3) {
        sound_sndmain_cpp_closeSoundDevice_FUN_005587e0();
        sound_sndmain_cpp_selectSoundDevice_FUN_00558640(iVar3);
        sound_sndmain_cpp_initializeSoundDevice_FUN_00558730();
        uVar5 = sound_sndmain_cpp_hasHardware3DSound_FUN_005586d0();
        if (0 < (int)uVar5) {
          sound_sndmain_cpp_setSoundOutputMode_FUN_00558290(0x10,2,0xac44);
        }
        core_sound_cpp_CSound_configure_FUN_005607d0(g_CSound_PTR_006045f8);
      }
      shape_edittool_cpp_CPickList_dtor_FUN_004832b0(&local_a1c,0);
      break;
    case 1:
      iVar3 = sound_sndmain_cpp_isSoundMuted_FUN_00556750();
      sound_sndmain_cpp_setSoundMuted_FUN_00556760((uint)(iVar3 == 0));
      iVar3 = sound_sndmain_cpp_isSoundMuted_FUN_00556750();
      if (iVar3 == 0) {
        core_sound_cpp_CSound_configure_FUN_005607d0(g_CSound_PTR_006045f8);
      }
      break;
    case 2:
      local_14 = (char *)sound_sndmain_cpp_getSfxChannelVol_FUN_00556d20(0);
      local_a28 = (float)local_14 / 0.25f;
      if (g_INT_01d737d4 == 1) {
        iVar3 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_00556e30(0);
        if (iVar3 == 0) {
          sound_sndmain_cpp_enableSfxChannel_FUN_00556db0(0,1);
          local_a28 = 1.0;
        }
        else {
          local_a28 = local_a28 - local_18;
          if (local_a28 < (float)0.01) {
LAB_004e9e11:
            local_a28 = 0.0;
            sound_sndmain_cpp_enableSfxChannel_FUN_00556db0(0,0);
          }
        }
      }
      else {
        iVar3 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_00556e30(0);
        if (iVar3 == 0) {
          sound_sndmain_cpp_enableSfxChannel_FUN_00556db0(0,1);
          local_a28 = local_18;
        }
        else {
          local_a28 = local_a28 + local_18;
          if ((float)1.01 < local_a28) goto LAB_004e9e11;
          if ((float)0.98999999999999999 < local_a28) {
            local_a28 = 1.0;
          }
        }
      }
      sound_sndmain_cpp_setSfxChannelVol_FUN_00556c90(0,local_a28 * 0.25f);
      sound_sndmain_cpp_pushSfxOptions_FUN_00555fd0();
      sound_sndmain_cpp_setNextSfxFlags_FUN_00555f00(1);
      sound_sndmain_cpp_startSfx_FUN_00556240("colt45-0.wav");
      sound_sndmain_cpp_popSfxOptions_FUN_00556050();
      break;
    case 3:
      local_14 = (char *)sound_sndmain_cpp_getSfxChannelVol_FUN_00556d20(2);
      local_a20 = (float)local_14 / 1.0f;
      if (g_INT_01d737d4 == 1) {
        iVar3 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_00556e30(2);
        if (iVar3 == 0) {
          sound_sndmain_cpp_enableSfxChannel_FUN_00556db0(2,1);
          local_a20 = 1.0;
        }
        else {
          local_a20 = local_a20 - local_18;
          if (local_a20 < (float)0.01) {
LAB_004e9f3d:
            local_a20 = 0.0;
            sound_sndmain_cpp_enableSfxChannel_FUN_00556db0(2,0);
          }
        }
      }
      else {
        iVar3 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_00556e30(2);
        if (iVar3 == 0) {
          sound_sndmain_cpp_enableSfxChannel_FUN_00556db0(2,1);
          local_a20 = local_18;
        }
        else {
          local_a20 = local_a20 + local_18;
          if ((float)1.01 < local_a20) goto LAB_004e9f3d;
          if ((float)0.98999999999999999 < local_a20) {
            local_a20 = 1.0;
          }
        }
      }
      sound_sndmain_cpp_setSfxChannelVol_FUN_00556c90(2,local_a20 * 1.0f);
      break;
    case 4:
      local_14 = (char *)sound_sndmain_cpp_getSfxChannelVol_FUN_00556d20(1);
      local_a24 = (float)local_14 / 0.25f;
      if (g_INT_01d737d4 == 1) {
        iVar3 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_00556e30(1);
        if (iVar3 == 0) {
          sound_sndmain_cpp_enableSfxChannel_FUN_00556db0(1,1);
          core_sound_cpp_CSound_configure_FUN_005607d0(g_CSound_PTR_006045f8);
          local_a24 = 1.0;
        }
        else {
          local_a24 = local_a24 + -0.2f;
          if (local_a24 < (float)0.01) {
LAB_004ea042:
            local_a24 = 0.0;
            sound_sndmain_cpp_enableSfxChannel_FUN_00556db0(1,0);
          }
        }
      }
      else {
        iVar3 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_00556e30(1);
        if (iVar3 == 0) {
          sound_sndmain_cpp_enableSfxChannel_FUN_00556db0(1,1);
          core_sound_cpp_CSound_configure_FUN_005607d0(g_CSound_PTR_006045f8);
          local_a24 = 0.2;
        }
        else {
          local_a24 = local_a24 + 0.2f;
          if ((float)1.01 < local_a24) goto LAB_004ea042;
          if (0.98999999999999999 < (double)local_a24) {
            local_a24 = 1.0;
          }
        }
      }
      sound_sndmain_cpp_setSfxChannelVol_FUN_00556c90(1,local_a24 * 0.25f);
      break;
    case 5:
      iVar3 = sound_sndmain_cpp_getAudioSampleRate_FUN_00558390();
      if (g_INT_01d737d4 == 1) {
        if (iVar3 == 0x5622) {
LAB_004ea121:
          iVar3 = 0x2b2a;
        }
        else if (iVar3 == 0xac44) {
          iVar3 = 0x5622;
        }
        else {
          iVar3 = 0xac44;
        }
      }
      else if (iVar3 < 0x5622) {
        iVar3 = 0x5622;
      }
      else {
        if (0xac43 < iVar3) goto LAB_004ea121;
        iVar3 = 0xac44;
      }
      uVar5 = sound_sndmain_cpp_hasHardware3DSound_FUN_005586d0();
      if (0 < (int)uVar5) {
        iVar3 = 0xac44;
      }
      iVar7 = sound_sndmain_cpp_getAudioSampleRate_FUN_00558390();
      if (iVar3 != iVar7) {
        sound_sndmain_cpp_resetSoundDevice_FUN_00558250();
        sound_sndmain_cpp_setAudioSampleRate_FUN_00558410(iVar3);
        core_sound_cpp_CSound_configure_FUN_005607d0(g_CSound_PTR_006045f8);
      }
      break;
    case 6:
      iVar3 = sound_sndmain_cpp_getAudioBitDepth_FUN_00558370();
      if (iVar3 == 0x10) {
        iVar3 = 8;
      }
      else {
        iVar3 = 0x10;
      }
      uVar5 = sound_sndmain_cpp_hasHardware3DSound_FUN_005586d0();
      if (0 < (int)uVar5) {
        iVar3 = 0x10;
      }
      iVar7 = sound_sndmain_cpp_getAudioBitDepth_FUN_00558370();
      if (iVar3 != iVar7) {
        sound_sndmain_cpp_resetSoundDevice_FUN_00558250();
        sound_sndmain_cpp_setAudioBitDepth_FUN_005583d0(iVar3);
        core_sound_cpp_CSound_configure_FUN_005607d0(g_CSound_PTR_006045f8);
      }
      break;
    case 7:
      iVar3 = sound_sndmain_cpp_getAudioChannelCount_FUN_005583b0();
      iVar3 = (iVar3 == 1) + 1;
      uVar5 = sound_sndmain_cpp_hasHardware3DSound_FUN_005586d0();
      if (0 < (int)uVar5) {
        iVar3 = 2;
      }
      iVar7 = sound_sndmain_cpp_getAudioChannelCount_FUN_005583b0();
      if (iVar3 != iVar7) {
        sound_sndmain_cpp_resetSoundDevice_FUN_00558250();
        sound_sndmain_cpp_setAudioChannelCount_FUN_005583f0(iVar3);
        core_sound_cpp_CSound_configure_FUN_005607d0(g_CSound_PTR_006045f8);
      }
      break;
    case 8:
      sound_sndmain_cpp_closeSoundDevice_FUN_005587e0();
      iVar3 = sound_sndmain_cpp_isHardwareMixingEnabled_FUN_005586e0();
      if (iVar3 < 1) {
        iVar3 = 2;
      }
      else {
        iVar3 = 0;
      }
      sound_sndmain_cpp_enableHwSoundMixing_FUN_005586f0(iVar3);
      sound_sndmain_cpp_initializeSoundDevice_FUN_00558730();
      core_sound_cpp_CSound_configure_FUN_005607d0(g_CSound_PTR_006045f8);
    }
    iVar3 = (*g_CKeys_PTR_00600284->vtable->getAndClearKeyState)(g_CKeys_PTR_00600284,DIK_ESCAPE);
    if (iVar3 != 0) {
      return;
    }
  } while( true );
}
