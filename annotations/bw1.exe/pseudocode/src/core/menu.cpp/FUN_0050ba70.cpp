// Name: core_menu.cpp_FUN_0050ba70
// Address: 0050ba70
// Address Range: [[0050ba70, 0050c96f]]
// Convention: __cdecl
// Signature: void __cdecl core_menu_cpp_FUN_0050ba70(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_menu_cpp_FUN_0050ba70(void)

{
  char cVar1;
  SSoundDeviceInfo SVar2;
  CDemonSet *this_ptr;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  float fVar6;
  int extraout_EAX;
  int extraout_EAX_00;
  int extraout_EAX_01;
  int iVar7;
  byte *puVar8;
  SSoundDeviceInfo *pSVar9;
  char *pcVar10;
  char *pcVar11;
  int iVar12;
  char *pcVar13;
  SSoundDeviceInfo *pSVar14;
  byte bVar15;
  float10 fVar16;
  ulonglong uVar17;
  double in_stack_fffff5a0;
  uint local_a58;
  uint uStack_a54;
  float local_a48;
  float local_a44;
  float local_a40;
  CPickList local_a38;
  SSoundDeviceInfo local_678 [264];
  int local_570;
  SSoundDeviceInfo local_560 [280];
  char local_448 [256];
  char local_348 [256];
  char local_248 [256];
  char local_148 [256];
  ulonglong local_48;
  int local_40;
  int local_3c;
  int local_34;
  int local_30;
  int local_2c;
  float local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  float local_14;
  
  bVar15 = 0;
  local_40 = 0;
  core_game_cpp_CGame_saveClockTime_FUN_004cbf10(g_CGamePtr);
  puVar8 = &DAT_01d20008;
  iVar3 = 0;
  do {
    *(byte **)(iVar3 + 0x1d20a08) = puVar8;
    iVar3 = iVar3 + 4;
    puVar8 = puVar8 + 0x100;
  } while (iVar3 != 0x28);
  do {
    core_game_cpp_FUN_004cbf20(g_CGamePtr);
    this_ptr = g_CDemonSetPtr;
    *(uint *)&g_CDemonSetPtr->field_0x15ae84 = 1;
    core_set_cpp_FUN_00555770(this_ptr,50000,50000,0x10000);
    *(uint *)&g_CDemonSetPtr->field_0x15ae94 = 0xdac;
    core_moon_cpp_FUN_00521e40(&g_CMoonInstance);
    local_2c = 0;
    *(uint *)&g_CDemonSetPtr->field_0x15ae84 = 0;
    pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_00531090(">Sound : " + 1);
    pcVar10 = &DAT_01d20008;
    do {
      cVar1 = *pcVar4;
      *pcVar10 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar4[1];
      pcVar4 = pcVar4 + 2;
      pcVar10[1] = cVar1;
      pcVar10 = pcVar10 + 2;
    } while (cVar1 != '\0');
    iVar3 = sound_sndmain_cpp_isSoundMuted_FUN_005735f0();
    if (iVar3 == 0) {
      pcVar4 = &DAT_005e8031;
    }
    else {
      pcVar4 = "Muted";
    }
    pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_00531090(pcVar4);
    iVar3 = local_2c;
    iVar7 = -1;
    pcVar4 = &DAT_01d20008;
    do {
      pcVar11 = pcVar4;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar11 = pcVar4 + (uint)bVar15 * -2 + 1;
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
    iVar12 = local_2c + 1;
    iVar7 = sound_sndmain_cpp_FUN_00573cd0(0);
    local_3c = iVar3 + 2;
    pcVar4 = &DAT_01d20008 + iVar12 * 0x100;
    local_2c = iVar12;
    if (iVar7 == 0) {
      pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Sound effects : Off");
      iVar3 = local_3c;
      FUN_005bfb40(pcVar4,pcVar10);
    }
    else {
      pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Sound effects : ");
      FUN_005bfb40(pcVar4,pcVar10);
      local_14 = (float)sound_sndmain_cpp_getSfxChannelVol_FUN_00573bc0(0);
      fVar16 = ((float10)local_14 * (float10)_DAT_005e815e) / (float10)_DAT_00603974 +
               (float10)_DAT_005e816a;
      round();
      local_14 = (float)(int)ROUND(fVar16);
      FUN_005bfb40(local_248,&DAT_005e8045,local_14);
      pcVar10 = local_248;
      iVar3 = -1;
      pcVar11 = pcVar4;
      do {
        pcVar13 = pcVar11;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar13 = pcVar11 + (uint)bVar15 * -2 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar13;
      } while (cVar1 != '\0');
      pcVar13 = pcVar13 + -1;
      do {
        cVar1 = *pcVar10;
        *pcVar13 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar10[1];
        pcVar10 = pcVar10 + 2;
        pcVar13[1] = cVar1;
        pcVar13 = pcVar13 + 2;
      } while (cVar1 != '\0');
      pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_00531090(&DAT_005e8048);
      iVar3 = -1;
      do {
        pcVar11 = pcVar4;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar11 = pcVar4 + (uint)bVar15 * -2 + 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar11;
      } while (cVar1 != '\0');
      pcVar11 = pcVar11 + -1;
      do {
        cVar1 = *pcVar10;
        *pcVar11 = cVar1;
        iVar3 = local_3c;
        if (cVar1 == '\0') break;
        cVar1 = pcVar10[1];
        pcVar10 = pcVar10 + 2;
        pcVar11[1] = cVar1;
        pcVar11 = pcVar11 + 2;
      } while (cVar1 != '\0');
    }
    iVar12 = sound_sndmain_cpp_FUN_00573cd0(2);
    iVar7 = iVar3 + 1;
    pcVar4 = &DAT_01d20008 + iVar3 * 0x100;
    local_30 = iVar7;
    if (iVar12 == 0) {
      pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Dialog : Off");
      FUN_005bfb40(pcVar4,pcVar10);
    }
    else {
      pcVar11 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Dialog : ");
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
      local_14 = (float)sound_sndmain_cpp_getSfxChannelVol_FUN_00573bc0(2);
      fVar16 = ((float10)local_14 * (float10)_DAT_005e815e) / (float10)_DAT_00603978 +
               (float10)_DAT_005e816a;
      round();
      local_14 = (float)(int)ROUND(fVar16);
      FUN_005bfb40(local_148,&DAT_005e8069,local_14);
      pcVar10 = local_148;
      iVar3 = -1;
      pcVar11 = pcVar4;
      do {
        pcVar13 = pcVar11;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar13 = pcVar11 + (uint)bVar15 * -2 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar13;
      } while (cVar1 != '\0');
      pcVar13 = pcVar13 + -1;
      do {
        cVar1 = *pcVar10;
        *pcVar13 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar10[1];
        pcVar10 = pcVar10 + 2;
        pcVar13[1] = cVar1;
        pcVar13 = pcVar13 + 2;
      } while (cVar1 != '\0');
      pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_00531090(&DAT_005e806c);
      iVar3 = -1;
      do {
        pcVar11 = pcVar4;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar11 = pcVar4 + (uint)bVar15 * -2 + 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar11;
      } while (cVar1 != '\0');
      pcVar11 = pcVar11 + -1;
      do {
        cVar1 = *pcVar10;
        *pcVar11 = cVar1;
        iVar7 = local_30;
        if (cVar1 == '\0') break;
        cVar1 = pcVar10[1];
        pcVar10 = pcVar10 + 2;
        pcVar11[1] = cVar1;
        pcVar11 = pcVar11 + 2;
      } while (cVar1 != '\0');
    }
    iVar3 = sound_sndmain_cpp_FUN_00573cd0(1);
    iVar12 = iVar7 + 1;
    pcVar4 = &DAT_01d20008 + iVar7 * 0x100;
    local_34 = iVar12;
    if (iVar3 == 0) {
      pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Music Vol : Off");
      local_24 = iVar12;
      FUN_005bfb40(pcVar4,pcVar10);
    }
    else {
      pcVar11 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Music Vol : ");
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
      local_14 = (float)sound_sndmain_cpp_getSfxChannelVol_FUN_00573bc0(1);
      fVar16 = ((float10)local_14 * (float10)_DAT_005e815e) / (float10)_DAT_00603970 +
               (float10)_DAT_005e816a;
      round();
      local_14 = (float)(int)ROUND(fVar16);
      FUN_005bfb40(local_448,&DAT_005e8089,local_14);
      pcVar10 = local_448;
      iVar3 = -1;
      pcVar11 = pcVar4;
      do {
        pcVar13 = pcVar11;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar13 = pcVar11 + (uint)bVar15 * -2 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar13;
      } while (cVar1 != '\0');
      pcVar13 = pcVar13 + -1;
      do {
        cVar1 = *pcVar10;
        *pcVar13 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar10[1];
        pcVar10 = pcVar10 + 2;
        pcVar13[1] = cVar1;
        pcVar13 = pcVar13 + 2;
      } while (cVar1 != '\0');
      pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_00531090(&DAT_005e808c);
      iVar3 = -1;
      do {
        pcVar11 = pcVar4;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar11 = pcVar4 + (uint)bVar15 * -2 + 1;
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
      local_24 = local_34;
    }
    pcVar11 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Output rate : ");
    pcVar4 = &DAT_01d20008 + local_24 * 0x100;
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
    iVar3 = sound_sndmain_cpp_FUN_00575220();
    FUN_005bfb40(local_348,&DAT_005e80ae,iVar3);
    pcVar10 = local_348;
    iVar3 = -1;
    pcVar11 = pcVar4;
    do {
      pcVar13 = pcVar11;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar13 = pcVar11 + (uint)bVar15 * -2 + 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar13;
    } while (cVar1 != '\0');
    pcVar13 = pcVar13 + -1;
    do {
      cVar1 = *pcVar10;
      *pcVar13 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar10[1];
      pcVar10 = pcVar10 + 2;
      pcVar13[1] = cVar1;
      pcVar13 = pcVar13 + 2;
    } while (cVar1 != '\0');
    pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_00531090(&DAT_005e80b1);
    iVar3 = local_24;
    iVar7 = -1;
    do {
      pcVar11 = pcVar4;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar11 = pcVar4 + (uint)bVar15 * -2 + 1;
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
    iVar7 = local_24 + 1;
    pcVar11 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Output quality : ");
    pcVar4 = &DAT_01d20008 + iVar7 * 0x100;
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
    local_24 = iVar7;
    iVar7 = sound_sndmain_cpp_FUN_00575200();
    FUN_005bfb40(local_348,&DAT_005e80c6,iVar7);
    pcVar10 = local_348;
    iVar7 = -1;
    pcVar11 = pcVar4;
    do {
      pcVar13 = pcVar11;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar13 = pcVar11 + (uint)bVar15 * -2 + 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar13;
    } while (cVar1 != '\0');
    pcVar13 = pcVar13 + -1;
    do {
      cVar1 = *pcVar10;
      *pcVar13 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar10[1];
      pcVar10 = pcVar10 + 2;
      pcVar13[1] = cVar1;
      pcVar13 = pcVar13 + 2;
    } while (cVar1 != '\0');
    pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_00531090(&DAT_005e80c9);
    iVar7 = -1;
    do {
      pcVar11 = pcVar4;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar11 = pcVar4 + (uint)bVar15 * -2 + 1;
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
    iVar7 = iVar3 + 2;
    uVar5 = sound_sndmain_cpp_FUN_00575240();
    local_24 = iVar7;
    if (((uVar5 == 0) || (uVar5 < 2)) || (uVar5 != 2)) {
      pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Output type : MONO");
      iVar3 = local_24 + 1;
      iVar7 = local_24;
    }
    else {
      pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Output type : STEREO");
      iVar3 = iVar3 + 3;
    }
    local_24 = iVar3;
    FUN_005bfb40(&DAT_01d20008 + iVar7 * 0x100,pcVar4);
    iVar3 = sound_sndmain_cpp_FUN_005756d0();
    if ((iVar3 < 0) ||
       (iVar7 = sound_sndmain_cpp_getSoundDeviceCount_FUN_005752c0(), iVar7 <= iVar3)) {
      local_570 = 0;
      local_678[0] = (SSoundDeviceInfo)0x0;
    }
    else {
      sound_sndmain_cpp_FUN_00575350(iVar3,local_678);
    }
    pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Device : ");
    iVar3 = local_24 * 0x100;
    pcVar4 = &DAT_01d20008 + iVar3;
    do {
      cVar1 = *pcVar10;
      *pcVar4 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar10[1];
      pcVar10 = pcVar10 + 2;
      pcVar4[1] = cVar1;
      pcVar4 = pcVar4 + 2;
    } while (cVar1 != '\0');
    pSVar9 = local_678;
    local_24 = local_24 + 1;
    iVar7 = -1;
    pcVar4 = &DAT_01d20008 + iVar3;
    do {
      pcVar10 = pcVar4;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar10 = pcVar4 + (uint)bVar15 * -2 + 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar10;
    } while (cVar1 != '\0');
    pSVar14 = (SSoundDeviceInfo *)(pcVar10 + -1);
    do {
      SVar2 = *pSVar9;
      *pSVar14 = SVar2;
      if (SVar2 == (SSoundDeviceInfo)0x0) break;
      SVar2 = pSVar9[1];
      pSVar9 = pSVar9 + 2;
      pSVar14[1] = SVar2;
      pSVar14 = pSVar14 + 2;
    } while (SVar2 != (SSoundDeviceInfo)0x0);
    if (0 < local_570) {
      iVar7 = local_24 * 0x100;
      iVar3 = sound_sndmain_cpp_FUN_00575570();
      pcVar4 = &DAT_01d20008 + iVar7;
      if (iVar3 < 1) {
        pcVar10 = "Hardware mixing: Off";
      }
      else {
        pcVar10 = "Hardware mixing: Enabled";
      }
      pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_00531090(pcVar10);
      do {
        cVar1 = *pcVar10;
        *pcVar4 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar10[1];
        pcVar10 = pcVar10 + 2;
        pcVar4[1] = cVar1;
        pcVar4 = pcVar4 + 2;
      } while (cVar1 != '\0');
      local_24 = local_24 + 1;
    }
    _DAT_01d1ee98 = _DAT_01d1ee98 + _DAT_01c43530 * 0x18;
    if (0x7ffff < _DAT_01d1ee98) {
      _DAT_01d1ee98 = _DAT_01d1ee98 + -0x80000;
    }
    iVar3 = sound_sndmain_cpp_FUN_00575550();
    if (iVar3 != 0) {
      iVar3 = sound_sndmain_cpp_FUN_00575240();
      local_18 = DAT_0061b498 / 0x14;
      local_1c = DAT_0061b498 / iVar3;
      iVar7 = local_1c + local_18 * -2;
      iVar12 = iVar7 >> 0x1f;
      fVar6 = (float)((int)((iVar7 + iVar12 * -4) - (uint)(iVar12 << 1 < 0)) >> 2);
      fVar16 = (float10)_DAT_005e8172;
      local_20 = iVar3;
      local_14 = fVar6;
      pow();
      iVar7 = 0;
      in_stack_fffff5a0 = (double)fVar16;
      if (0 < iVar3) {
        do {
          local_a58 = 0;
          uStack_a54 = 0x40690000;
          if (0 < (int)fVar6) {
            iVar3 = local_1c * iVar7 + local_18;
            iVar12 = (int)fVar6 * 4 + iVar3;
            do {
              fVar16 = (float10)__BITCAST_DOUBLE(CONCAT44(uStack_a54,local_a58)) * (float10)in_stack_fffff5a0;
              local_48 = (double)fVar16;
              local_14 = (float)sound_sndmain_cpp_FUN_00576590
                                          (iVar7,(float)__BITCAST_DOUBLE(CONCAT44(uStack_a54,local_a58)),
                                           (float)fVar16);
              fVar16 = (float10)DAT_0061b49c -
                       (float10)local_14 * (float10)DAT_0061b49c * (float10)_DAT_005e8162;
              uVar17 = round();
              local_14 = (float)(int)ROUND(fVar16);
              core_menu_cpp_renderAudioSpectrumBar_FUN_00509c90
                        (iVar3,(int)uVar17,((int)((ulonglong)uVar17 >> 0x20) - (int)local_14) + 1);
              local_a58 = (uint)local_48;
              uStack_a54 = local_48._4_4_;
              iVar3 = iVar3 + 4;
            } while (iVar3 < iVar12);
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < local_20);
      }
    }
    pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Sound Options");
    iVar3 = core_menu_cpp_renderMenuAndGetChoice_FUN_00509e20
                      ((char **)0x1d20a08,local_24,&local_40,0x19,pcVar4);
    wincore_wddvmem_cpp_FUN_005acff0();
    local_28 = 0.2;
    switch(iVar3) {
    case 0:
      iVar3 = sound_sndmain_cpp_isSoundMuted_FUN_005735f0();
      sound_sndmain_cpp_setSoundMuted_FUN_00573600((uint)(iVar3 == 0));
      iVar3 = sound_sndmain_cpp_isSoundMuted_FUN_005735f0();
      if (iVar3 == 0) goto LAB_0050c339;
      break;
    case 1:
      local_14 = (float)sound_sndmain_cpp_getSfxChannelVol_FUN_00573bc0(0);
      local_a48 = local_14 / _DAT_00603974;
      if (_DAT_01d1ee8c == 1) {
        iVar3 = sound_sndmain_cpp_FUN_00573cd0(0);
        if (iVar3 == 0) {
          sound_sndmain_cpp_enableSfxChannel_FUN_00573c50(0,1);
          local_a48 = 1.0;
        }
        else {
          local_a48 = local_a48 - local_28;
          if (local_a48 < (float)_DAT_005e8192) {
LAB_0050c485:
            local_a48 = 0.0;
            sound_sndmain_cpp_enableSfxChannel_FUN_00573c50(0,0);
          }
        }
      }
      else {
        iVar3 = sound_sndmain_cpp_FUN_00573cd0(0);
        if (iVar3 == 0) {
          sound_sndmain_cpp_enableSfxChannel_FUN_00573c50(0,1);
          local_a48 = 0.2;
        }
        else {
          local_a48 = local_a48 + local_28;
          if ((float)_DAT_005e8182 < local_a48) goto LAB_0050c485;
          if ((float)_DAT_005e818a < local_a48) {
            local_a48 = 1.0;
          }
        }
      }
      sound_sndmain_cpp_setSfxChannelVol_FUN_00573b30(0,local_a48 * _DAT_00603974);
      sound_sndmain_cpp_FUN_00572ac0();
      sound_sndmain_cpp_FUN_005729f0(1);
      sound_sndmain_cpp_startSfx_FUN_00572d20("colt45-0.wav");
      sound_sndmain_cpp_FUN_00572b40();
      break;
    case 2:
      local_14 = (float)sound_sndmain_cpp_getSfxChannelVol_FUN_00573bc0(2);
      local_a40 = local_14 / _DAT_00603978;
      if (_DAT_01d1ee8c == 1) {
        iVar3 = sound_sndmain_cpp_FUN_00573cd0(2);
        if (iVar3 == 0) {
          sound_sndmain_cpp_enableSfxChannel_FUN_00573c50(2,1);
          local_a40 = 1.0;
        }
        else {
          local_a40 = local_a40 - local_28;
          if (local_a40 < (float)_DAT_005e8192) {
LAB_0050c5aa:
            local_a40 = 0.0;
            sound_sndmain_cpp_enableSfxChannel_FUN_00573c50(2,0);
          }
        }
      }
      else {
        iVar3 = sound_sndmain_cpp_FUN_00573cd0(2);
        if (iVar3 == 0) {
          sound_sndmain_cpp_enableSfxChannel_FUN_00573c50(2,1);
          local_a40 = 0.2;
        }
        else {
          local_a40 = local_a40 + local_28;
          if ((float)_DAT_005e8182 < local_a40) goto LAB_0050c5aa;
          if ((float)_DAT_005e818a < local_a40) {
            local_a40 = 1.0;
          }
        }
      }
      sound_sndmain_cpp_setSfxChannelVol_FUN_00573b30(2,local_a40 * _DAT_00603978);
      break;
    case 3:
      local_14 = (float)sound_sndmain_cpp_getSfxChannelVol_FUN_00573bc0(1);
      local_a44 = local_14 / _DAT_00603970;
      if (_DAT_01d1ee8c == 1) {
        iVar3 = sound_sndmain_cpp_FUN_00573cd0(1);
        if (iVar3 == 0) {
          sound_sndmain_cpp_enableSfxChannel_FUN_00573c50(1,1);
          core_sound_cpp_FUN_0057d6a0(0x02C82A60);
          local_a44 = 1.0;
        }
        else {
          local_a44 = local_a44 - local_28;
          if (local_a44 < (float)_DAT_005e8192) {
LAB_0050c6ac:
            local_a44 = 0.0;
            sound_sndmain_cpp_enableSfxChannel_FUN_00573c50(1,0);
          }
        }
      }
      else {
        iVar3 = sound_sndmain_cpp_FUN_00573cd0(1);
        if (iVar3 == 0) {
          sound_sndmain_cpp_enableSfxChannel_FUN_00573c50(1,1);
          core_sound_cpp_FUN_0057d6a0(0x02C82A60);
          local_a44 = 0.2;
        }
        else {
          local_a44 = local_a44 + _DAT_005e817a;
          if ((float)_DAT_005e8182 < local_a44) goto LAB_0050c6ac;
          if (_DAT_005e818a < (double)local_a44) {
            local_a44 = 1.0;
          }
        }
      }
      sound_sndmain_cpp_setSfxChannelVol_FUN_00573b30(1,local_a44 * _DAT_00603970);
      break;
    case 4:
      iVar3 = sound_sndmain_cpp_FUN_00575220();
      if (_DAT_01d1ee8c == 1) {
        if (iVar3 == 0x5622) {
LAB_0050c78b:
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
        if (0xac43 < iVar3) goto LAB_0050c78b;
        iVar3 = 0xac44;
      }
      iVar7 = sound_sndmain_cpp_FUN_00575570();
      if (0 < iVar7) {
        iVar3 = 0xac44;
      }
      iVar7 = sound_sndmain_cpp_FUN_00575220();
      if (iVar3 != iVar7) {
        sound_sndmain_cpp_resetSoundDevice_FUN_005750e0();
        sound_sndmain_cpp_setAudioSampleRate_FUN_005752a0(iVar3);
        goto LAB_0050c339;
      }
      break;
    case 5:
      iVar3 = sound_sndmain_cpp_FUN_00575200();
      if (iVar3 == 0x10) {
        iVar3 = 8;
      }
      else {
        iVar3 = 0x10;
      }
      sound_sndmain_cpp_FUN_00575560(SUB84(in_stack_fffff5a0,0));
      if (0 < extraout_EAX) {
        iVar3 = 0x10;
      }
      iVar7 = sound_sndmain_cpp_FUN_00575200();
      if (iVar3 != iVar7) {
        sound_sndmain_cpp_resetSoundDevice_FUN_005750e0();
        sound_sndmain_cpp_setAudioBitDepth_FUN_00575260(iVar3);
        goto LAB_0050c339;
      }
      break;
    case 6:
      iVar3 = sound_sndmain_cpp_FUN_00575240();
      iVar3 = (iVar3 == 1) + 1;
      sound_sndmain_cpp_FUN_00575560(SUB84(in_stack_fffff5a0,0));
      if (0 < extraout_EAX_00) {
        iVar3 = 2;
      }
      iVar7 = sound_sndmain_cpp_FUN_00575240();
      if (iVar3 != iVar7) {
        sound_sndmain_cpp_resetSoundDevice_FUN_005750e0();
        sound_sndmain_cpp_setAudioChannelCount_FUN_00575280(iVar3);
        goto LAB_0050c339;
      }
      break;
    case 7:
      shape_edittool_cpp_CPickList_ctor_FUN_0049a620(&local_a38);
      for (iVar3 = 0; iVar7 = sound_sndmain_cpp_getSoundDeviceCount_FUN_005752c0(), iVar3 < iVar7;
          iVar3 = iVar3 + 1) {
        sound_sndmain_cpp_FUN_00575350(iVar3,local_560);
        shape_edittool_cpp_CStrList_add_FUN_004994d0((CStrList *)&local_a38,(char *)local_560);
      }
      uVar5 = 0;
      iVar3 = sound_sndmain_cpp_FUN_005756d0();
      iVar3 = shape_edittool_cpp_FUN_0049a8b0(&local_a38,"Select sound device",iVar3,uVar5)
      ;
      if (-1 < iVar3) {
        sound_sndmain_cpp_closeSoundDevice_FUN_00575670();
        sound_sndmain_cpp_selectSoundDevice_FUN_005754d0(iVar3);
        sound_sndmain_cpp_initializeSoundDevice_FUN_005755c0();
        sound_sndmain_cpp_FUN_00575560(SUB84(in_stack_fffff5a0,0));
        if (0 < extraout_EAX_01) {
          sound_sndmain_cpp_setSoundOutputMode_FUN_00575120(0x10,2,0xac44);
        }
        core_sound_cpp_FUN_0057d6a0(0x02C82A60);
      }
      shape_edittool_cpp_CPickList_dtor_FUN_0049a710(&local_a38,0);
      break;
    case 8:
      sound_sndmain_cpp_closeSoundDevice_FUN_00575670();
      iVar3 = sound_sndmain_cpp_FUN_00575570();
      if (iVar3 < 1) {
        sound_sndmain_cpp_FUN_00575580(2);
        sound_sndmain_cpp_initializeSoundDevice_FUN_005755c0();
      }
      else {
        sound_sndmain_cpp_FUN_00575580(0);
        sound_sndmain_cpp_initializeSoundDevice_FUN_005755c0();
      }
LAB_0050c339:
      core_sound_cpp_FUN_0057d6a0(0x02C82A60);
    }
    iVar3 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,1);
    if (iVar3 != 0) {
      return;
    }
  } while( true );
}
