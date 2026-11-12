// Name: core_menu.cpp_FUN_004ed260
// Address: 004ed260
// Address Range: [[004ed260, 004ee180]]
// Convention: __cdecl
// Signature: void __cdecl core_menu_cpp_FUN_004ed260(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_menu_cpp_FUN_004ed260(void)

{
  char cVar1;
  CDemonSet *this_ptr;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  float fVar5;
  int extraout_EAX;
  int extraout_EAX_00;
  int extraout_EAX_01;
  int iVar6;
  byte *puVar7;
  SSoundDeviceInfo *pSVar8;
  char *pcVar9;
  char *pcVar10;
  int iVar11;
  char *pcVar12;
  byte bVar13;
  float10 fVar14;
  ulonglong uVar15;
  double in_stack_fffff5a0;
  uint local_a58;
  uint uStack_a54;
  float local_a48;
  float local_a40;
  float local_a3c;
  CPickList local_a38;
  SSoundDeviceInfo local_678;
  SSoundDeviceInfo local_560;
  char local_448 [256];
  char local_348 [256];
  char local_248 [256];
  char local_148 [256];
  ulonglong local_48;
  int local_40;
  int local_3c [2];
  int local_34;
  int local_30;
  int local_2c;
  float local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  float local_14;
  
  bVar13 = 0;
  local_3c[0] = 0;
  core_game_cpp_CGame_saveClockTime_FUN_004b3000(g_CGamePtr);
  puVar7 = &DAT_01d074a8;
  iVar2 = 0;
  do {
    *(byte **)(iVar2 + 0x1d07ea8) = puVar7;
    iVar2 = iVar2 + 4;
    puVar7 = puVar7 + 0x100;
  } while (iVar2 != 0x28);
  do {
    core_game_cpp_CGame_updateDT_FUN_004b3010(g_CGamePtr);
    this_ptr = g_CDemonSetPtr;
    g_CDemonSetPtr->rendering_mode = 1;
    core_set_cpp_CDemonSet_setFlatColor_FUN_005344c0(this_ptr,50000,50000,0x10000);
    g_CDemonSetPtr->ambient_base_quick = 0xdac;
    core_moon_cpp_CMoon_update_FUN_005024a0(&g_CMoonInstance,g_CGamePtr->delta_time_float);
    core_moon_cpp_CMoon_render_FUN_00502510(&g_CMoonInstance);
    local_2c = 0;
    g_CDemonSetPtr->rendering_mode = 0;
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80(">Sound : " + 1);
    pcVar9 = &DAT_01d074a8;
    do {
      cVar1 = *pcVar3;
      *pcVar9 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar9[1] = cVar1;
      pcVar9 = pcVar9 + 2;
    } while (cVar1 != '\0');
    iVar2 = sound_sndmain_cpp_isSoundMuted_FUN_00550bc0();
    if (iVar2 == 0) {
      pcVar3 = &DAT_005dd0c4;
    }
    else {
      pcVar3 = "Muted";
    }
    pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80(pcVar3);
    iVar2 = local_2c;
    iVar6 = -1;
    pcVar3 = &DAT_01d074a8;
    do {
      pcVar10 = pcVar3;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar10 = pcVar3 + (uint)bVar13 * -2 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar10;
    } while (cVar1 != '\0');
    pcVar10 = pcVar10 + -1;
    do {
      cVar1 = *pcVar9;
      *pcVar10 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar9[1];
      pcVar9 = pcVar9 + 2;
      pcVar10[1] = cVar1;
      pcVar10 = pcVar10 + 2;
    } while (cVar1 != '\0');
    iVar11 = local_2c + 1;
    iVar6 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005512a0(0);
    local_30 = iVar2 + 2;
    pcVar3 = &DAT_01d074a8 + iVar11 * 0x100;
    local_2c = iVar11;
    if (iVar6 == 0) {
      pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Sound effects : Off");
      iVar2 = local_30;
      _sprintf(pcVar3,pcVar9);
    }
    else {
      pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Sound effects : ");
      _sprintf(pcVar3,pcVar9);
      local_14 = sound_sndmain_cpp_getSfxChannelVol_FUN_00551190(0);
      fVar14 = ((float10)local_14 * (float10)_DAT_005dd1f1) / (float10)_DAT_005f9e34 +
               (float10)_DAT_005dd1fd;
      round();
      local_14 = (float)(int)ROUND(fVar14);
      _sprintf(local_248,&DAT_005dd0d8);
      pcVar9 = local_248;
      iVar2 = -1;
      pcVar10 = pcVar3;
      do {
        pcVar12 = pcVar10;
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        pcVar12 = pcVar10 + (uint)bVar13 * -2 + 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar12;
      } while (cVar1 != '\0');
      pcVar12 = pcVar12 + -1;
      do {
        cVar1 = *pcVar9;
        *pcVar12 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar9[1];
        pcVar9 = pcVar9 + 2;
        pcVar12[1] = cVar1;
        pcVar12 = pcVar12 + 2;
      } while (cVar1 != '\0');
      pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80(&DAT_005dd0db);
      iVar2 = -1;
      do {
        pcVar10 = pcVar3;
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        pcVar10 = pcVar3 + (uint)bVar13 * -2 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar10;
      } while (cVar1 != '\0');
      pcVar10 = pcVar10 + -1;
      do {
        cVar1 = *pcVar9;
        *pcVar10 = cVar1;
        iVar2 = local_30;
        if (cVar1 == '\0') break;
        cVar1 = pcVar9[1];
        pcVar9 = pcVar9 + 2;
        pcVar10[1] = cVar1;
        pcVar10 = pcVar10 + 2;
      } while (cVar1 != '\0');
    }
    iVar11 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005512a0(2);
    iVar6 = iVar2 + 1;
    pcVar3 = &DAT_01d074a8 + iVar2 * 0x100;
    local_34 = iVar6;
    if (iVar11 == 0) {
      pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Dialog : Off");
      _sprintf(pcVar3,pcVar9);
    }
    else {
      pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Dialog : ");
      pcVar9 = pcVar3;
      do {
        cVar1 = *pcVar10;
        *pcVar9 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar10[1];
        pcVar10 = pcVar10 + 2;
        pcVar9[1] = cVar1;
        pcVar9 = pcVar9 + 2;
      } while (cVar1 != '\0');
      local_14 = sound_sndmain_cpp_getSfxChannelVol_FUN_00551190(2);
      fVar14 = ((float10)local_14 * (float10)_DAT_005dd1f1) / (float10)_DAT_005f9e38 +
               (float10)_DAT_005dd1fd;
      round();
      local_14 = (float)(int)ROUND(fVar14);
      _sprintf(local_348,&DAT_005dd0fc);
      pcVar9 = local_348;
      iVar2 = -1;
      pcVar10 = pcVar3;
      do {
        pcVar12 = pcVar10;
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        pcVar12 = pcVar10 + (uint)bVar13 * -2 + 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar12;
      } while (cVar1 != '\0');
      pcVar12 = pcVar12 + -1;
      do {
        cVar1 = *pcVar9;
        *pcVar12 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar9[1];
        pcVar9 = pcVar9 + 2;
        pcVar12[1] = cVar1;
        pcVar12 = pcVar12 + 2;
      } while (cVar1 != '\0');
      pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80(&DAT_005dd0ff);
      iVar2 = -1;
      do {
        pcVar10 = pcVar3;
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        pcVar10 = pcVar3 + (uint)bVar13 * -2 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar10;
      } while (cVar1 != '\0');
      pcVar10 = pcVar10 + -1;
      do {
        cVar1 = *pcVar9;
        *pcVar10 = cVar1;
        iVar6 = local_34;
        if (cVar1 == '\0') break;
        cVar1 = pcVar9[1];
        pcVar9 = pcVar9 + 2;
        pcVar10[1] = cVar1;
        pcVar10 = pcVar10 + 2;
      } while (cVar1 != '\0');
    }
    iVar2 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005512a0(1);
    iVar11 = iVar6 + 1;
    pcVar3 = &DAT_01d074a8 + iVar6 * 0x100;
    local_40 = iVar11;
    if (iVar2 == 0) {
      pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Music Vol : Off");
      local_24 = iVar11;
      _sprintf(pcVar3,pcVar9);
    }
    else {
      pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Music Vol : ");
      pcVar9 = pcVar3;
      do {
        cVar1 = *pcVar10;
        *pcVar9 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar10[1];
        pcVar10 = pcVar10 + 2;
        pcVar9[1] = cVar1;
        pcVar9 = pcVar9 + 2;
      } while (cVar1 != '\0');
      local_14 = sound_sndmain_cpp_getSfxChannelVol_FUN_00551190(1);
      fVar14 = ((float10)local_14 * (float10)_DAT_005dd1f1) / (float10)_DAT_005f9e30 +
               (float10)_DAT_005dd1fd;
      round();
      local_14 = (float)(int)ROUND(fVar14);
      _sprintf(local_148,&DAT_005dd11c);
      pcVar9 = local_148;
      iVar2 = -1;
      pcVar10 = pcVar3;
      do {
        pcVar12 = pcVar10;
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        pcVar12 = pcVar10 + (uint)bVar13 * -2 + 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar12;
      } while (cVar1 != '\0');
      pcVar12 = pcVar12 + -1;
      do {
        cVar1 = *pcVar9;
        *pcVar12 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar9[1];
        pcVar9 = pcVar9 + 2;
        pcVar12[1] = cVar1;
        pcVar12 = pcVar12 + 2;
      } while (cVar1 != '\0');
      pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80(&DAT_005dd11f);
      iVar2 = -1;
      do {
        pcVar10 = pcVar3;
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        pcVar10 = pcVar3 + (uint)bVar13 * -2 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar10;
      } while (cVar1 != '\0');
      pcVar10 = pcVar10 + -1;
      do {
        cVar1 = *pcVar9;
        *pcVar10 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar9[1];
        pcVar9 = pcVar9 + 2;
        pcVar10[1] = cVar1;
        pcVar10 = pcVar10 + 2;
      } while (cVar1 != '\0');
      local_24 = local_40;
    }
    pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Output rate : ");
    pcVar3 = &DAT_01d074a8 + local_24 * 0x100;
    pcVar9 = pcVar3;
    do {
      cVar1 = *pcVar10;
      *pcVar9 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar10[1];
      pcVar10 = pcVar10 + 2;
      pcVar9[1] = cVar1;
      pcVar9 = pcVar9 + 2;
    } while (cVar1 != '\0');
    sound_sndmain_cpp_FUN_005527f0();
    _sprintf(local_448,&DAT_005dd141);
    pcVar9 = local_448;
    iVar2 = -1;
    pcVar10 = pcVar3;
    do {
      pcVar12 = pcVar10;
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      pcVar12 = pcVar10 + (uint)bVar13 * -2 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar12;
    } while (cVar1 != '\0');
    pcVar12 = pcVar12 + -1;
    do {
      cVar1 = *pcVar9;
      *pcVar12 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar9[1];
      pcVar9 = pcVar9 + 2;
      pcVar12[1] = cVar1;
      pcVar12 = pcVar12 + 2;
    } while (cVar1 != '\0');
    pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80(&DAT_005dd144);
    iVar2 = local_24;
    iVar6 = -1;
    do {
      pcVar10 = pcVar3;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar10 = pcVar3 + (uint)bVar13 * -2 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar10;
    } while (cVar1 != '\0');
    pcVar10 = pcVar10 + -1;
    do {
      cVar1 = *pcVar9;
      *pcVar10 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar9[1];
      pcVar9 = pcVar9 + 2;
      pcVar10[1] = cVar1;
      pcVar10 = pcVar10 + 2;
    } while (cVar1 != '\0');
    iVar6 = local_24 + 1;
    pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Output quality : ");
    pcVar3 = &DAT_01d074a8 + iVar6 * 0x100;
    pcVar9 = pcVar3;
    do {
      cVar1 = *pcVar10;
      *pcVar9 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar10[1];
      pcVar10 = pcVar10 + 2;
      pcVar9[1] = cVar1;
      pcVar9 = pcVar9 + 2;
    } while (cVar1 != '\0');
    local_24 = iVar6;
    sound_sndmain_cpp_FUN_005527d0();
    _sprintf(local_448,&DAT_005dd159);
    pcVar9 = local_448;
    iVar6 = -1;
    pcVar10 = pcVar3;
    do {
      pcVar12 = pcVar10;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar12 = pcVar10 + (uint)bVar13 * -2 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar12;
    } while (cVar1 != '\0');
    pcVar12 = pcVar12 + -1;
    do {
      cVar1 = *pcVar9;
      *pcVar12 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar9[1];
      pcVar9 = pcVar9 + 2;
      pcVar12[1] = cVar1;
      pcVar12 = pcVar12 + 2;
    } while (cVar1 != '\0');
    pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80(&DAT_005dd15c);
    iVar6 = -1;
    do {
      pcVar10 = pcVar3;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar10 = pcVar3 + (uint)bVar13 * -2 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar10;
    } while (cVar1 != '\0');
    pcVar10 = pcVar10 + -1;
    do {
      cVar1 = *pcVar9;
      *pcVar10 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar9[1];
      pcVar9 = pcVar9 + 2;
      pcVar10[1] = cVar1;
      pcVar10 = pcVar10 + 2;
    } while (cVar1 != '\0');
    iVar6 = iVar2 + 2;
    uVar4 = sound_sndmain_cpp_FUN_00552810();
    local_24 = iVar6;
    if (((uVar4 == 0) || (uVar4 < 2)) || (uVar4 != 2)) {
      pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Output type : MONO");
      iVar2 = local_24 + 1;
      iVar6 = local_24;
    }
    else {
      pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Output type : STEREO");
      iVar2 = iVar2 + 3;
    }
    local_24 = iVar2;
    _sprintf(&DAT_01d074a8 + iVar6 * 0x100,pcVar3);
    iVar2 = sound_sndmain_cpp_getCurrentSoundDevice_FUN_00552ca0();
    if ((iVar2 < 0) ||
       (iVar6 = sound_sndmain_cpp_getSoundDeviceCount_FUN_00552890(), iVar6 <= iVar2)) {
      local_560.has_hardware_mixing = 0;
      local_560.device_name[0] = '\0';
    }
    else {
      sound_sndmain_cpp_getSoundDeviceInfo_FUN_00552920(iVar2,&local_560);
    }
    pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Device : ");
    iVar2 = local_24 * 0x100;
    pcVar3 = &DAT_01d074a8 + iVar2;
    do {
      cVar1 = *pcVar9;
      *pcVar3 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar9[1];
      pcVar9 = pcVar9 + 2;
      pcVar3[1] = cVar1;
      pcVar3 = pcVar3 + 2;
    } while (cVar1 != '\0');
    pSVar8 = &local_560;
    local_24 = local_24 + 1;
    iVar6 = -1;
    pcVar3 = &DAT_01d074a8 + iVar2;
    do {
      pcVar9 = pcVar3;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar9 = pcVar3 + (uint)bVar13 * -2 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar9;
    } while (cVar1 != '\0');
    pcVar9 = pcVar9 + -1;
    do {
      cVar1 = pSVar8->device_name[0];
      *pcVar9 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pSVar8->device_name[1];
      pSVar8 = (SSoundDeviceInfo *)(pSVar8->device_name + 2);
      pcVar9[1] = cVar1;
      pcVar9 = pcVar9 + 2;
    } while (cVar1 != '\0');
    if (0 < (int)local_560.has_hardware_mixing) {
      iVar6 = local_24 * 0x100;
      iVar2 = sound_sndmain_cpp_isHardwareMixingEnabled_FUN_00552b40();
      pcVar3 = &DAT_01d074a8 + iVar6;
      if (iVar2 < 1) {
        pcVar9 = "Hardware mixing: Off";
      }
      else {
        pcVar9 = "Hardware mixing: Enabled";
      }
      pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80(pcVar9);
      do {
        cVar1 = *pcVar9;
        *pcVar3 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar9[1];
        pcVar9 = pcVar9 + 2;
        pcVar3[1] = cVar1;
        pcVar3 = pcVar3 + 2;
      } while (cVar1 != '\0');
      local_24 = local_24 + 1;
    }
    _DAT_01d06134 = _DAT_01d06134 + _DAT_01c2a370 * 0x18;
    if (0x7ffff < _DAT_01d06134) {
      _DAT_01d06134 = _DAT_01d06134 + -0x80000;
    }
    iVar2 = sound_sndmain_cpp_isSoundBusy_FUN_00552b20();
    if (iVar2 != 0) {
      iVar2 = sound_sndmain_cpp_FUN_00552810();
      local_1c = DAT_006141b8 / 0x14;
      local_18 = DAT_006141b8 / iVar2;
      iVar6 = local_18 + local_1c * -2;
      iVar11 = iVar6 >> 0x1f;
      fVar5 = (float)((int)((iVar6 + iVar11 * -4) - (uint)(iVar11 << 1 < 0)) >> 2);
      fVar14 = (float10)_DAT_005dd205;
      local_20 = iVar2;
      local_14 = fVar5;
      pow();
      iVar6 = 0;
      in_stack_fffff5a0 = (double)fVar14;
      if (0 < iVar2) {
        do {
          local_a58 = 0;
          uStack_a54 = 0x40690000;
          if (0 < (int)fVar5) {
            iVar2 = local_18 * iVar6 + local_1c;
            iVar11 = (int)fVar5 * 4 + iVar2;
            do {
              fVar14 = (float10)__BITCAST_DOUBLE(CONCAT44(uStack_a54,local_a58)) * (float10)in_stack_fffff5a0;
              local_48 = (double)fVar14;
              local_14 = sound_sndmain_cpp_analyzeFrequencyBand_FUN_00553b60
                                   (iVar6,(float)__BITCAST_DOUBLE(CONCAT44(uStack_a54,local_a58)),
                                    (float)fVar14);
              fVar14 = (float10)DAT_006141bc -
                       (float10)local_14 * (float10)DAT_006141bc * (float10)_DAT_005dd1f5;
              uVar15 = round();
              local_14 = (float)(int)ROUND(fVar14);
              core_menu_cpp_FUN_004eaf30
                        (iVar2,(int)uVar15,((int)((ulonglong)uVar15 >> 0x20) - (int)local_14) + 1);
              local_a58 = (uint)local_48;
              uStack_a54 = local_48._4_4_;
              iVar2 = iVar2 + 4;
            } while (iVar2 < iVar11);
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < local_20);
      }
    }
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Sound Options");
    iVar2 = core_menu_cpp_FUN_004eb0e0((char **)0x1d07ea8,local_24,local_3c,0x122,pcVar3);
    wincore_wddvmem_cpp_swapBuffers_FUN_00589560();
    local_28 = 0.2;
    switch(iVar2) {
    case 0:
      iVar2 = sound_sndmain_cpp_isSoundMuted_FUN_00550bc0();
      sound_sndmain_cpp_setSoundMuted_FUN_00550bd0((uint)(iVar2 == 0));
      iVar2 = sound_sndmain_cpp_isSoundMuted_FUN_00550bc0();
      if (iVar2 == 0) goto LAB_004edb4a;
      break;
    case 1:
      local_14 = sound_sndmain_cpp_getSfxChannelVol_FUN_00551190(0);
      local_a48 = local_14 / _DAT_005f9e34;
      if (_DAT_01d0612c == 1) {
        iVar2 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005512a0(0);
        if (iVar2 == 0) {
          sound_sndmain_cpp_enableSfxChannel_FUN_00551220(0,1);
          local_a48 = 1.0;
        }
        else {
          local_a48 = local_a48 - local_28;
          if (local_a48 < (float)_DAT_005dd225) {
LAB_004edc96:
            local_a48 = 0.0;
            sound_sndmain_cpp_enableSfxChannel_FUN_00551220(0,0);
          }
        }
      }
      else {
        iVar2 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005512a0(0);
        if (iVar2 == 0) {
          sound_sndmain_cpp_enableSfxChannel_FUN_00551220(0,1);
          local_a48 = 0.2;
        }
        else {
          local_a48 = local_a48 + local_28;
          if ((float)_DAT_005dd215 < local_a48) goto LAB_004edc96;
          if ((float)_DAT_005dd21d < local_a48) {
            local_a48 = 1.0;
          }
        }
      }
      sound_sndmain_cpp_setSfxChannelVol_FUN_00551100(0,local_a48 * _DAT_005f9e34);
      sound_sndmain_cpp_pushSfxOptions_FUN_00550450();
      sound_sndmain_cpp_setNextSfxFlags_FUN_00550380(1);
      sound_sndmain_cpp_FUN_005506b0("colt45-0.wav");
      sound_sndmain_cpp_popSfxOptions_FUN_005504d0();
      break;
    case 2:
      local_14 = sound_sndmain_cpp_getSfxChannelVol_FUN_00551190(2);
      local_a3c = local_14 / _DAT_005f9e38;
      if (_DAT_01d0612c == 1) {
        iVar2 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005512a0(2);
        if (iVar2 == 0) {
          sound_sndmain_cpp_enableSfxChannel_FUN_00551220(2,1);
          local_a3c = 1.0;
        }
        else {
          local_a3c = local_a3c - local_28;
          if (local_a3c < (float)_DAT_005dd225) {
LAB_004eddbb:
            local_a3c = 0.0;
            sound_sndmain_cpp_enableSfxChannel_FUN_00551220(2,0);
          }
        }
      }
      else {
        iVar2 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005512a0(2);
        if (iVar2 == 0) {
          sound_sndmain_cpp_enableSfxChannel_FUN_00551220(2,1);
          local_a3c = 0.2;
        }
        else {
          local_a3c = local_a3c + local_28;
          if ((float)_DAT_005dd215 < local_a3c) goto LAB_004eddbb;
          if ((float)_DAT_005dd21d < local_a3c) {
            local_a3c = 1.0;
          }
        }
      }
      sound_sndmain_cpp_setSfxChannelVol_FUN_00551100(2,local_a3c * _DAT_005f9e38);
      break;
    case 3:
      local_14 = sound_sndmain_cpp_getSfxChannelVol_FUN_00551190(1);
      local_a40 = local_14 / _DAT_005f9e30;
      if (_DAT_01d0612c == 1) {
        iVar2 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005512a0(1);
        if (iVar2 == 0) {
          sound_sndmain_cpp_enableSfxChannel_FUN_00551220(1,1);
          core_sound_cpp_CSound_configure_FUN_0055ac50(0x0264B290);
          local_a40 = 1.0;
        }
        else {
          local_a40 = local_a40 - local_28;
          if (local_a40 < (float)_DAT_005dd225) {
LAB_004edebd:
            local_a40 = 0.0;
            sound_sndmain_cpp_enableSfxChannel_FUN_00551220(1,0);
          }
        }
      }
      else {
        iVar2 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005512a0(1);
        if (iVar2 == 0) {
          sound_sndmain_cpp_enableSfxChannel_FUN_00551220(1,1);
          core_sound_cpp_CSound_configure_FUN_0055ac50(0x0264B290);
          local_a40 = 0.2;
        }
        else {
          local_a40 = local_a40 + _DAT_005dd20d;
          if ((float)_DAT_005dd215 < local_a40) goto LAB_004edebd;
          if (_DAT_005dd21d < (double)local_a40) {
            local_a40 = 1.0;
          }
        }
      }
      sound_sndmain_cpp_setSfxChannelVol_FUN_00551100(1,local_a40 * _DAT_005f9e30);
      break;
    case 4:
      iVar2 = sound_sndmain_cpp_FUN_005527f0();
      if (_DAT_01d0612c == 1) {
        if (iVar2 == 0x5622) {
LAB_004edf9c:
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
        if (0xac43 < iVar2) goto LAB_004edf9c;
        iVar2 = 0xac44;
      }
      iVar6 = sound_sndmain_cpp_isHardwareMixingEnabled_FUN_00552b40();
      if (0 < iVar6) {
        iVar2 = 0xac44;
      }
      iVar6 = sound_sndmain_cpp_FUN_005527f0();
      if (iVar2 != iVar6) {
        sound_sndmain_cpp_resetSoundDevice_FUN_005526b0();
        sound_sndmain_cpp_setAudioSampleRate_FUN_00552870(iVar2);
        goto LAB_004edb4a;
      }
      break;
    case 5:
      iVar2 = sound_sndmain_cpp_FUN_005527d0();
      if (iVar2 == 0x10) {
        iVar2 = 8;
      }
      else {
        iVar2 = 0x10;
      }
      sound_sndmain_cpp_FUN_00552b30(SUB84(in_stack_fffff5a0,0));
      if (0 < extraout_EAX) {
        iVar2 = 0x10;
      }
      iVar6 = sound_sndmain_cpp_FUN_005527d0();
      if (iVar2 != iVar6) {
        sound_sndmain_cpp_resetSoundDevice_FUN_005526b0();
        sound_sndmain_cpp_setAudioBitDepth_FUN_00552830(iVar2);
        goto LAB_004edb4a;
      }
      break;
    case 6:
      iVar2 = sound_sndmain_cpp_FUN_00552810();
      iVar2 = (iVar2 == 1) + 1;
      sound_sndmain_cpp_FUN_00552b30(SUB84(in_stack_fffff5a0,0));
      if (0 < extraout_EAX_00) {
        iVar2 = 2;
      }
      iVar6 = sound_sndmain_cpp_FUN_00552810();
      if (iVar2 != iVar6) {
        sound_sndmain_cpp_resetSoundDevice_FUN_005526b0();
        sound_sndmain_cpp_setAudioChannelCount_FUN_00552850(iVar2);
        goto LAB_004edb4a;
      }
      break;
    case 7:
      shape_edittool_cpp_CPickList_ctor_FUN_00481fc0(&local_a38);
      for (iVar2 = 0; iVar6 = sound_sndmain_cpp_getSoundDeviceCount_FUN_00552890(), iVar2 < iVar6;
          iVar2 = iVar2 + 1) {
        sound_sndmain_cpp_getSoundDeviceInfo_FUN_00552920(iVar2,&local_678);
        shape_edittool_cpp_CStrList_add_FUN_00480e70(&local_a38.base,local_678.device_name);
      }
      uVar4 = 0;
      iVar2 = sound_sndmain_cpp_getCurrentSoundDevice_FUN_00552ca0();
      iVar2 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_00482250
                        (&local_a38,"Select sound device",iVar2,uVar4);
      if (-1 < iVar2) {
        sound_sndmain_cpp_closeSoundDevice_FUN_00552c40();
        sound_sndmain_cpp_selectSoundDevice_FUN_00552aa0(iVar2);
        sound_sndmain_cpp_initializeSoundDevice_FUN_00552b90();
        sound_sndmain_cpp_FUN_00552b30(SUB84(in_stack_fffff5a0,0));
        if (0 < extraout_EAX_01) {
          sound_sndmain_cpp_setSoundOutputMode_FUN_005526f0(0x10,2,0xac44);
        }
        core_sound_cpp_CSound_configure_FUN_0055ac50(0x0264B290);
      }
      shape_edittool_cpp_CPickList_dtor_FUN_004820b0(&local_a38,0);
      break;
    case 8:
      sound_sndmain_cpp_closeSoundDevice_FUN_00552c40();
      iVar2 = sound_sndmain_cpp_isHardwareMixingEnabled_FUN_00552b40();
      if (iVar2 < 1) {
        sound_sndmain_cpp_FUN_00552b50(2);
        sound_sndmain_cpp_initializeSoundDevice_FUN_00552b90();
      }
      else {
        sound_sndmain_cpp_FUN_00552b50(0);
        sound_sndmain_cpp_initializeSoundDevice_FUN_00552b90();
      }
LAB_004edb4a:
      core_sound_cpp_CSound_configure_FUN_0055ac50(0x0264B290);
    }
    iVar2 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,1);
    if (iVar2 != 0) {
      return;
    }
  } while( true );
}
