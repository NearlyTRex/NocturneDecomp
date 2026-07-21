// Name: core_menu.cpp_configureSoundOptions_FUN_004d12e0
// Address: 004d12e0
// Address Range: [[004d12e0, 004d21a9]]
// Convention: __cdecl
// Signature: void __cdecl core_menu_cpp_configureSoundOptions_FUN_004d12e0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_menu_cpp_configureSoundOptions_FUN_004d12e0(void)

{
  double dVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  byte *puVar12;
  int iVar13;
  char *pcVar14;
  char *pcVar15;
  int iVar16;
  char *pcVar17;
  byte bVar18;
  float10 fVar19;
  ulonglong in_stack_fffff7ec;
  ulonglong uVar20;
  double dVar21;
  longlong lVar22;
  uint uStack_80c;
  uint local_808;
  uint uStack_804;
  uint local_800;
  float local_7f8;
  float local_7f0;
  float local_7ec;
  byte local_7e8 [368];
  char local_678 [264];
  int local_570;
  byte local_560 [276];
  char acStack_44c [256];
  char acStack_34c [260];
  char local_248 [252];
  char acStack_14c [260];
  uint local_48;
  ulonglong uStack_44;
  uint local_3c;
  int iStack_38;
  int local_34;
  int local_30;
  int local_2c;
  float local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  float local_14;
  
  dVar1 = (double)(ulonglong)local_800;
  bVar18 = 0;
  uVar20 = CONCAT44((int)((ulonglong)in_stack_fffff7ec >> 0x20),0x01C775EC);
  local_3c = 0;
  core_game_cpp_CGame_saveClockTime_FUN_0049a890(0x01C775EC);
  puVar12 = &DAT_01cc6ed8;
  iVar3 = 0;
  do {
    *(byte **)(iVar3 + 0x1cc78d8) = puVar12;
    iVar3 = iVar3 + 4;
    puVar12 = puVar12 + 0x100;
  } while (iVar3 != 0x28);
  do {
    local_800 = SUB84(__BITCAST_UINT64(dVar1),0);
    uVar10 = (uint)((ulonglong)uVar20 >> 0x20);
    core_game_cpp_CGame_updateDT_FUN_0049a8a0(0x01C775EC);
    core_moon_cpp_CMoon_update_FUN_004deae0(0x1cc5780,*(uint *)(0x01C775EC + 0x264));
    core_moon_cpp_CMoon_render_FUN_004dec50(0x1cc5780);
    local_2c = 0;
    pcVar4 = (char *)support_newmsg_cpp_getLocalizedString_FUN_004ee370(">Sound : " + 1);
    pcVar14 = &DAT_01cc6ed8;
    do {
      cVar2 = *pcVar4;
      *pcVar14 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar4[1];
      pcVar4 = pcVar4 + 2;
      pcVar14[1] = cVar2;
      pcVar14 = pcVar14 + 2;
    } while (cVar2 != '\0');
    iVar3 = sound_sndmain_cpp_isSoundEnabled_FUN_00526ca0();
    if (iVar3 == 0) {
      pcVar4 = &DAT_00588b5a;
    }
    else {
      pcVar4 = "Muted";
    }
    uVar20 = CONCAT44(uVar10,pcVar4);
    pcVar14 = (char *)support_newmsg_cpp_getLocalizedString_FUN_004ee370(uVar20);
    iVar3 = local_2c;
    iVar11 = -1;
    pcVar4 = &DAT_01cc6ed8;
    do {
      pcVar15 = pcVar4;
      if (iVar11 == 0) break;
      iVar11 = iVar11 + -1;
      pcVar15 = pcVar4 + (uint)bVar18 * -2 + 1;
      cVar2 = *pcVar4;
      pcVar4 = pcVar15;
    } while (cVar2 != '\0');
    pcVar15 = pcVar15 + -1;
    do {
      cVar2 = *pcVar14;
      *pcVar15 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar14[1];
      pcVar14 = pcVar14 + 2;
      pcVar15[1] = cVar2;
      pcVar15 = pcVar15 + 2;
    } while (cVar2 != '\0');
    uVar10 = (uint)((ulonglong)uVar20 >> 0x20);
    iVar16 = local_2c + 1;
    iVar11 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_00527490(0);
    local_34 = iVar3 + 2;
    pcVar4 = &DAT_01cc6ed8 + iVar16 * 0x100;
    local_2c = iVar16;
    if (iVar11 == 0) {
      uVar5 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Sound effects : Off");
      iVar3 = local_34;
      _sprintf(pcVar4,uVar5);
    }
    else {
      uVar5 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Sound effects : ");
      _sprintf(pcVar4,uVar5);
      local_14 = (float)sound_sndmain_cpp_getSfxChannelVol_FUN_00527380(0);
      uVar20 = CONCAT44(uVar10,0x4d144d);
      fVar19 = (float10)round
                                  (((float10)local_14 * (float10)_DAT_00588c83) /
                                   (float10)_DAT_005a0574 + (float10)_DAT_00588c8b);
      local_18 = (int)ROUND(fVar19);
      _sprintf(acStack_34c,&DAT_00588b6e,local_18,uVar20);
      uVar10 = (uint)((ulonglong)uVar20 >> 0x20);
      pcVar14 = acStack_34c;
      iVar3 = -1;
      pcVar15 = pcVar4;
      do {
        pcVar17 = pcVar15;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar17 = pcVar15 + (uint)bVar18 * -2 + 1;
        cVar2 = *pcVar15;
        pcVar15 = pcVar17;
      } while (cVar2 != '\0');
      pcVar17 = pcVar17 + -1;
      do {
        cVar2 = *pcVar14;
        *pcVar17 = cVar2;
        if (cVar2 == '\0') break;
        cVar2 = pcVar14[1];
        pcVar14 = pcVar14 + 2;
        pcVar17[1] = cVar2;
        pcVar17 = pcVar17 + 2;
      } while (cVar2 != '\0');
      pcVar14 = (char *)support_newmsg_cpp_getLocalizedString_FUN_004ee370(&DAT_00588b71);
      iVar3 = -1;
      do {
        pcVar15 = pcVar4;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar15 = pcVar4 + (uint)bVar18 * -2 + 1;
        cVar2 = *pcVar4;
        pcVar4 = pcVar15;
      } while (cVar2 != '\0');
      pcVar15 = pcVar15 + -1;
      do {
        cVar2 = *pcVar14;
        *pcVar15 = cVar2;
        iVar3 = iStack_38;
        if (cVar2 == '\0') break;
        cVar2 = pcVar14[1];
        pcVar14 = pcVar14 + 2;
        pcVar15[1] = cVar2;
        pcVar15 = pcVar15 + 2;
      } while (cVar2 != '\0');
    }
    iVar16 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_00527490(2);
    iVar11 = iVar3 + 1;
    pcVar4 = &DAT_01cc6ed8 + iVar3 * 0x100;
    local_30 = iVar11;
    if (iVar16 == 0) {
      uVar5 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Dialog : Off");
      _sprintf(pcVar4,uVar5);
    }
    else {
      pcVar15 = (char *)support_newmsg_cpp_getLocalizedString_FUN_004ee370("Dialog : ");
      pcVar14 = pcVar4;
      do {
        cVar2 = *pcVar15;
        *pcVar14 = cVar2;
        if (cVar2 == '\0') break;
        cVar2 = pcVar15[1];
        pcVar15 = pcVar15 + 2;
        pcVar14[1] = cVar2;
        pcVar14 = pcVar14 + 2;
      } while (cVar2 != '\0');
      local_14 = (float)sound_sndmain_cpp_getSfxChannelVol_FUN_00527380(2);
      uVar20 = CONCAT44(uVar10,0x4d1553);
      fVar19 = (float10)round
                                  (((float10)local_14 * (float10)_DAT_00588c83) /
                                   (float10)_DAT_005a0578 + (float10)_DAT_00588c8b);
      local_18 = (int)ROUND(fVar19);
      _sprintf(acStack_14c,&DAT_00588b92,local_18,uVar20);
      uVar10 = (uint)((ulonglong)uVar20 >> 0x20);
      pcVar14 = acStack_14c;
      iVar3 = -1;
      pcVar15 = pcVar4;
      do {
        pcVar17 = pcVar15;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar17 = pcVar15 + (uint)bVar18 * -2 + 1;
        cVar2 = *pcVar15;
        pcVar15 = pcVar17;
      } while (cVar2 != '\0');
      pcVar17 = pcVar17 + -1;
      do {
        cVar2 = *pcVar14;
        *pcVar17 = cVar2;
        if (cVar2 == '\0') break;
        cVar2 = pcVar14[1];
        pcVar14 = pcVar14 + 2;
        pcVar17[1] = cVar2;
        pcVar17 = pcVar17 + 2;
      } while (cVar2 != '\0');
      pcVar14 = (char *)support_newmsg_cpp_getLocalizedString_FUN_004ee370(&DAT_00588b95);
      iVar3 = -1;
      do {
        pcVar15 = pcVar4;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar15 = pcVar4 + (uint)bVar18 * -2 + 1;
        cVar2 = *pcVar4;
        pcVar4 = pcVar15;
      } while (cVar2 != '\0');
      pcVar15 = pcVar15 + -1;
      do {
        cVar2 = *pcVar14;
        *pcVar15 = cVar2;
        iVar11 = local_34;
        if (cVar2 == '\0') break;
        cVar2 = pcVar14[1];
        pcVar14 = pcVar14 + 2;
        pcVar15[1] = cVar2;
        pcVar15 = pcVar15 + 2;
      } while (cVar2 != '\0');
    }
    iVar3 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_00527490(1);
    pcVar4 = &DAT_01cc6ed8 + iVar11 * 0x100;
    uStack_44 = __BITCAST_DOUBLE(CONCAT44(iVar11 + 1,(float)uStack_44));
    if (iVar3 == 0) {
      uVar5 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Music Vol : Off");
      local_24 = iVar11 + 1;
      _sprintf(pcVar4,uVar5);
    }
    else {
      pcVar15 = (char *)support_newmsg_cpp_getLocalizedString_FUN_004ee370("Music Vol : ");
      pcVar14 = pcVar4;
      do {
        cVar2 = *pcVar15;
        *pcVar14 = cVar2;
        if (cVar2 == '\0') break;
        cVar2 = pcVar15[1];
        pcVar15 = pcVar15 + 2;
        pcVar14[1] = cVar2;
        pcVar14 = pcVar14 + 2;
      } while (cVar2 != '\0');
      local_14 = (float)sound_sndmain_cpp_getSfxChannelVol_FUN_00527380(1);
      uVar20 = CONCAT44(uVar10,0x4d1657);
      fVar19 = (float10)round
                                  (((float10)local_14 * (float10)_DAT_00588c83) /
                                   (float10)_DAT_005a0570 + (float10)_DAT_00588c8b);
      local_18 = (int)ROUND(fVar19);
      _sprintf(acStack_44c,&DAT_00588bb2,local_18,uVar20);
      uVar10 = (uint)((ulonglong)uVar20 >> 0x20);
      pcVar14 = acStack_44c;
      iVar3 = -1;
      pcVar15 = pcVar4;
      do {
        pcVar17 = pcVar15;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar17 = pcVar15 + (uint)bVar18 * -2 + 1;
        cVar2 = *pcVar15;
        pcVar15 = pcVar17;
      } while (cVar2 != '\0');
      pcVar17 = pcVar17 + -1;
      do {
        cVar2 = *pcVar14;
        *pcVar17 = cVar2;
        if (cVar2 == '\0') break;
        cVar2 = pcVar14[1];
        pcVar14 = pcVar14 + 2;
        pcVar17[1] = cVar2;
        pcVar17 = pcVar17 + 2;
      } while (cVar2 != '\0');
      pcVar14 = (char *)support_newmsg_cpp_getLocalizedString_FUN_004ee370(&DAT_00588bb5);
      iVar3 = -1;
      do {
        pcVar15 = pcVar4;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar15 = pcVar4 + (uint)bVar18 * -2 + 1;
        cVar2 = *pcVar4;
        pcVar4 = pcVar15;
      } while (cVar2 != '\0');
      pcVar15 = pcVar15 + -1;
      do {
        cVar2 = *pcVar14;
        *pcVar15 = cVar2;
        if (cVar2 == '\0') break;
        cVar2 = pcVar14[1];
        pcVar14 = pcVar14 + 2;
        pcVar15[1] = cVar2;
        pcVar15 = pcVar15 + 2;
      } while (cVar2 != '\0');
      local_28 = (float)uStack_44;
    }
    pcVar15 = (char *)support_newmsg_cpp_getLocalizedString_FUN_004ee370("Output rate : ");
    pcVar4 = &DAT_01cc6ed8 + local_24 * 0x100;
    pcVar14 = pcVar4;
    do {
      cVar2 = *pcVar15;
      *pcVar14 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar15[1];
      pcVar15 = pcVar15 + 2;
      pcVar14[1] = cVar2;
      pcVar14 = pcVar14 + 2;
    } while (cVar2 != '\0');
    uVar5 = sound_sndmain_cpp_getAudioSampleRate_FUN_005281b0();
    _sprintf(local_248,&DAT_00588bd7,uVar5);
    pcVar14 = local_248;
    iVar3 = -1;
    pcVar15 = pcVar4;
    do {
      pcVar17 = pcVar15;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar17 = pcVar15 + (uint)bVar18 * -2 + 1;
      cVar2 = *pcVar15;
      pcVar15 = pcVar17;
    } while (cVar2 != '\0');
    pcVar17 = pcVar17 + -1;
    do {
      cVar2 = *pcVar14;
      *pcVar17 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar14[1];
      pcVar14 = pcVar14 + 2;
      pcVar17[1] = cVar2;
      pcVar17 = pcVar17 + 2;
    } while (cVar2 != '\0');
    pcVar14 = (char *)support_newmsg_cpp_getLocalizedString_FUN_004ee370(&DAT_00588bda);
    iVar3 = local_24;
    iVar11 = -1;
    do {
      pcVar15 = pcVar4;
      if (iVar11 == 0) break;
      iVar11 = iVar11 + -1;
      pcVar15 = pcVar4 + (uint)bVar18 * -2 + 1;
      cVar2 = *pcVar4;
      pcVar4 = pcVar15;
    } while (cVar2 != '\0');
    pcVar15 = pcVar15 + -1;
    do {
      cVar2 = *pcVar14;
      *pcVar15 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar14[1];
      pcVar14 = pcVar14 + 2;
      pcVar15[1] = cVar2;
      pcVar15 = pcVar15 + 2;
    } while (cVar2 != '\0');
    iVar11 = local_24 + 1;
    pcVar15 = (char *)support_newmsg_cpp_getLocalizedString_FUN_004ee370
                                ("Output quality : ");
    pcVar4 = &DAT_01cc6ed8 + iVar11 * 0x100;
    pcVar14 = pcVar4;
    do {
      cVar2 = *pcVar15;
      *pcVar14 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar15[1];
      pcVar15 = pcVar15 + 2;
      pcVar14[1] = cVar2;
      pcVar14 = pcVar14 + 2;
    } while (cVar2 != '\0');
    local_24 = iVar11;
    uVar5 = sound_sndmain_cpp_getAudioBitDepth_FUN_005281a0();
    _sprintf(local_248,&DAT_00588bef,uVar5);
    pcVar14 = local_248;
    iVar11 = -1;
    pcVar15 = pcVar4;
    do {
      pcVar17 = pcVar15;
      if (iVar11 == 0) break;
      iVar11 = iVar11 + -1;
      pcVar17 = pcVar15 + (uint)bVar18 * -2 + 1;
      cVar2 = *pcVar15;
      pcVar15 = pcVar17;
    } while (cVar2 != '\0');
    pcVar17 = pcVar17 + -1;
    do {
      cVar2 = *pcVar14;
      *pcVar17 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar14[1];
      pcVar14 = pcVar14 + 2;
      pcVar17[1] = cVar2;
      pcVar17 = pcVar17 + 2;
    } while (cVar2 != '\0');
    pcVar14 = (char *)support_newmsg_cpp_getLocalizedString_FUN_004ee370(&DAT_00588bf2);
    iVar11 = -1;
    do {
      pcVar15 = pcVar4;
      if (iVar11 == 0) break;
      iVar11 = iVar11 + -1;
      pcVar15 = pcVar4 + (uint)bVar18 * -2 + 1;
      cVar2 = *pcVar4;
      pcVar4 = pcVar15;
    } while (cVar2 != '\0');
    pcVar15 = pcVar15 + -1;
    do {
      cVar2 = *pcVar14;
      *pcVar15 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar14[1];
      pcVar14 = pcVar14 + 2;
      pcVar15[1] = cVar2;
      pcVar15 = pcVar15 + 2;
    } while (cVar2 != '\0');
    iVar11 = iVar3 + 2;
    uVar6 = sound_sndmain_cpp_getAudioChannelCount_FUN_005281c0();
    local_24 = iVar11;
    if (((uVar6 == 0) || (uVar6 < 2)) || (uVar6 != 2)) {
      uVar5 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Output type : MONO");
      uVar20 = CONCAT44(uVar10,uVar5);
      iVar3 = local_24 + 1;
      iVar11 = local_24;
    }
    else {
      uVar5 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Output type : STEREO");
      uVar20 = CONCAT44(uVar10,uVar5);
      iVar3 = iVar3 + 3;
    }
    local_24 = iVar3;
    _sprintf(&DAT_01cc6ed8 + iVar11 * 0x100,uVar20);
    uVar6 = (uint)((ulonglong)uVar20 >> 0x20);
    iVar3 = sound_sndmain_cpp_getCurrentSoundDevice_FUN_00528610();
    if ((iVar3 < 0) ||
       (iVar11 = sound_sndmain_cpp_getSoundDeviceCount_FUN_00528230(), iVar11 <= iVar3)) {
      local_570 = 0;
      local_678[0] = '\0';
    }
    else {
      sound_sndmain_cpp_getSoundDeviceInfo_FUN_005282c0(iVar3,local_678);
    }
    pcVar14 = (char *)support_newmsg_cpp_getLocalizedString_FUN_004ee370("Device : ");
    iVar3 = local_24 * 0x100;
    pcVar4 = &DAT_01cc6ed8 + iVar3;
    do {
      cVar2 = *pcVar14;
      *pcVar4 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar14[1];
      pcVar14 = pcVar14 + 2;
      pcVar4[1] = cVar2;
      pcVar4 = pcVar4 + 2;
    } while (cVar2 != '\0');
    pcVar4 = local_678;
    local_24 = local_24 + 1;
    iVar11 = -1;
    pcVar14 = &DAT_01cc6ed8 + iVar3;
    do {
      pcVar15 = pcVar14;
      if (iVar11 == 0) break;
      iVar11 = iVar11 + -1;
      pcVar15 = pcVar14 + (uint)bVar18 * -2 + 1;
      cVar2 = *pcVar14;
      pcVar14 = pcVar15;
    } while (cVar2 != '\0');
    pcVar15 = pcVar15 + -1;
    do {
      cVar2 = *pcVar4;
      *pcVar15 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar4[1];
      pcVar4 = pcVar4 + 2;
      pcVar15[1] = cVar2;
      pcVar15 = pcVar15 + 2;
    } while (cVar2 != '\0');
    if (local_570 != 0) {
      iVar11 = local_24 * 0x100;
      iVar3 = sound_sndmain_cpp_isHardwareMixingEnabled_FUN_005284e0();
      pcVar4 = &DAT_01cc6ed8 + iVar11;
      if (iVar3 == 0) {
        pcVar14 = "Hardware mixing: Off";
      }
      else {
        pcVar14 = "Hardware mixing: On";
      }
      uVar20 = CONCAT44(uVar6,pcVar14);
      pcVar14 = (char *)support_newmsg_cpp_getLocalizedString_FUN_004ee370(uVar20);
      uVar6 = (uint)((ulonglong)uVar20 >> 0x20);
      do {
        cVar2 = *pcVar14;
        *pcVar4 = cVar2;
        if (cVar2 == '\0') break;
        cVar2 = pcVar14[1];
        pcVar14 = pcVar14 + 2;
        pcVar4[1] = cVar2;
        pcVar4 = pcVar4 + 2;
      } while (cVar2 != '\0');
      local_24 = local_24 + 1;
    }
    _DAT_01cc5b64 = _DAT_01cc5b64 + _DAT_01bd1d80 * 0x18;
    if (0x7ffff < _DAT_01cc5b64) {
      _DAT_01cc5b64 = _DAT_01cc5b64 + -0x80000;
    }
    iVar3 = sound_sndmain_cpp_isSoundBusy_FUN_00528490();
    if (iVar3 != 0) {
      iVar3 = sound_sndmain_cpp_getAudioChannelCount_FUN_005281c0();
      local_1c = DAT_005b761c / 0x14;
      local_18 = DAT_005b761c / iVar3;
      iVar11 = local_18 + local_1c * -2;
      iVar16 = iVar11 >> 0x1f;
      fVar7 = (float)((int)((iVar11 + iVar16 * -4) - (uint)(iVar16 << 1 < 0)) >> 2);
      local_20 = iVar3;
      local_14 = fVar7;
      fVar19 = (float10)pow
                                  ((float10)_DAT_00588c93,(float10)1 / (float10)(int)fVar7);
      iVar11 = 0;
      dVar21 = (double)fVar19;
      uVar6 = (uint)((ulonglong)dVar21 >> 0x20);
      if (0 < iVar3) {
        do {
          local_808 = 0;
          uStack_804 = 0x40690000;
          if (0 < (int)fVar7) {
            iVar3 = local_18 * iVar11 + local_1c;
            iVar16 = (int)fVar7 * 4 + iVar3;
            do {
              uStack_44 = __BITCAST_DOUBLE(CONCAT44(local_800,uStack_804)) *
                          __BITCAST_DOUBLE(CONCAT44(local_808,uStack_80c));
              fVar8 = (float)sound_sndmain_cpp_analyzeFrequencyBand_FUN_00528e60
                                       (iVar11,(float)__BITCAST_DOUBLE(CONCAT44(local_800,uStack_804)));
              iVar9 = DAT_005b7620 + -1;
              uVar10 = 0x4d1ac4;
              fVar19 = (float10)round
                                          ((float10)DAT_005b7620 -
                                           (float10)fVar8 * (float10)DAT_005b7620 *
                                           (float10)_DAT_00588c87);
              local_14 = (float)(int)ROUND(fVar19);
              iVar13 = (iVar9 - (int)local_14) + 1;
              dVar21 = __BITCAST_DOUBLE(CONCAT44(uVar10,iVar13));
              core_menu_cpp_renderAudioSpectrumBar_FUN_004cf2b0(iVar3,iVar9,iVar13);
              local_808 = local_48;
              uStack_804 = (float)uStack_44;
              iVar3 = iVar3 + 4;
            } while (iVar3 < iVar16);
          }
          uVar6 = (uint)((ulonglong)dVar21 >> 0x20);
          iVar11 = iVar11 + 1;
        } while (iVar11 < local_20);
      }
    }
    uVar10 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Sound Options",uVar6);
    uVar10 = core_menu_cpp_renderMenuAndGetChoice_FUN_004cf440
                       (0x1cc78d8,local_24,&local_3c,0xe1,uVar10);
    wincore_wddvmem_cpp_swapBuffers_FUN_00553910();
    local_28 = 0.2;
    switch(uVar10) {
    case 0:
      iVar3 = sound_sndmain_cpp_isSoundEnabled_FUN_00526ca0();
      sound_sndmain_cpp_setSoundEnabled_FUN_00526cb0(iVar3 == 0);
      iVar3 = sound_sndmain_cpp_isSoundEnabled_FUN_00526ca0();
      if (iVar3 == 0) goto LAB_004d1b7f;
      break;
    case 1:
      local_14 = (float)sound_sndmain_cpp_getSfxChannelVol_FUN_00527380(0);
      local_7ec = local_14 / _DAT_005a0574;
      if (_DAT_01cc5b5c == 1) {
        iVar3 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_00527490(0);
        if (iVar3 == 0) {
          sound_sndmain_cpp_enableSfxChannel_FUN_00527410(0,1);
          local_7ec = 1.0;
        }
        else {
          local_7ec = local_7ec - local_28;
          if (local_7ec < (float)_DAT_00588cbb) {
LAB_004d1cd1:
            lVar22 = (ulonglong)uVar6 << 0x20;
            local_7ec = 0.0;
            sound_sndmain_cpp_enableSfxChannel_FUN_00527410(0,lVar22);
            uVar6 = (uint)((ulonglong)lVar22 >> 0x20);
          }
        }
      }
      else {
        iVar3 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_00527490(0);
        if (iVar3 == 0) {
          sound_sndmain_cpp_enableSfxChannel_FUN_00527410(0,1);
          local_7ec = 0.2;
        }
        else {
          local_7ec = local_7ec + local_28;
          if ((float)_DAT_00588ca3 < local_7ec) goto LAB_004d1cd1;
          if ((float)_DAT_00588cab < local_7ec) {
            local_7ec = 1.0;
          }
        }
      }
      sound_sndmain_cpp_setSfxChannelVol_FUN_005272e0(0,local_7ec * _DAT_005a0574);
      sound_sndmain_cpp_pushSfxOptions_FUN_00526340();
      sound_sndmain_cpp_setNextSfxFlags_FUN_00526240(1);
      sound_sndmain_cpp_startSfx_FUN_005265a0("colt45-0.wav");
      sound_sndmain_cpp_popSfxOptions_FUN_005263c0();
      break;
    case 2:
      local_14 = (float)sound_sndmain_cpp_getSfxChannelVol_FUN_00527380(2);
      local_7f8 = local_14 / _DAT_005a0578;
      if (_DAT_01cc5b5c == 1) {
        iVar3 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_00527490(2);
        if (iVar3 == 0) {
          sound_sndmain_cpp_enableSfxChannel_FUN_00527410(2,1);
          local_7f8 = 1.0;
        }
        else {
          local_7f8 = local_7f8 - local_28;
          if (local_7f8 < (float)_DAT_00588cbb) {
LAB_004d1df6:
            lVar22 = (ulonglong)uVar6 << 0x20;
            local_7f8 = 0.0;
            sound_sndmain_cpp_enableSfxChannel_FUN_00527410(2,lVar22);
            uVar6 = (uint)((ulonglong)lVar22 >> 0x20);
          }
        }
      }
      else {
        iVar3 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_00527490(2);
        if (iVar3 == 0) {
          sound_sndmain_cpp_enableSfxChannel_FUN_00527410(2,1);
          local_7f8 = 0.2;
        }
        else {
          local_7f8 = local_7f8 + local_28;
          if ((float)_DAT_00588ca3 < local_7f8) goto LAB_004d1df6;
          if ((float)_DAT_00588cab < local_7f8) {
            local_7f8 = 1.0;
          }
        }
      }
      sound_sndmain_cpp_setSfxChannelVol_FUN_005272e0(2,local_7f8 * _DAT_005a0578);
      break;
    case 3:
      local_14 = (float)sound_sndmain_cpp_getSfxChannelVol_FUN_00527380(1);
      local_7f0 = local_14 / _DAT_005a0570;
      if (_DAT_01cc5b5c == 1) {
        iVar3 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_00527490(1);
        if (iVar3 == 0) {
          sound_sndmain_cpp_enableSfxChannel_FUN_00527410(1,1);
          core_sound_cpp_CSound_configure_FUN_0052e850(0x02DC9450);
          local_7f0 = 1.0;
        }
        else {
          local_7f0 = local_7f0 + _DAT_00588cb3;
          if (local_7f0 < (float)_DAT_00588cbb) {
LAB_004d1ef7:
            lVar22 = (ulonglong)uVar6 << 0x20;
            local_7f0 = 0.0;
            sound_sndmain_cpp_enableSfxChannel_FUN_00527410(1,lVar22);
            uVar6 = (uint)((ulonglong)lVar22 >> 0x20);
          }
        }
      }
      else {
        iVar3 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_00527490(1);
        if (iVar3 == 0) {
          sound_sndmain_cpp_enableSfxChannel_FUN_00527410(1,1);
          core_sound_cpp_CSound_configure_FUN_0052e850(0x02DC9450);
          local_7f0 = 0.2;
        }
        else {
          local_7f0 = local_7f0 + _DAT_00588c9b;
          dVar1 = (double)local_7f0;
          if ((float)_DAT_00588ca3 < local_7f0) goto LAB_004d1ef7;
          if (_DAT_00588cab < dVar1) {
            local_7f0 = 1.0;
          }
        }
      }
      sound_sndmain_cpp_setSfxChannelVol_FUN_005272e0(1,local_7f0 * _DAT_005a0570);
      break;
    case 4:
      iVar3 = sound_sndmain_cpp_getAudioSampleRate_FUN_005281b0();
      if (_DAT_01cc5b5c == 1) {
        if (iVar3 == 0x5622) {
LAB_004d1fd6:
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
        if (0xac43 < iVar3) goto LAB_004d1fd6;
        iVar3 = 0xac44;
      }
      iVar11 = sound_sndmain_cpp_hasHardware3DSound_FUN_005284f0();
      if (iVar11 != 0) {
        iVar3 = 0xac44;
      }
      iVar11 = sound_sndmain_cpp_getAudioSampleRate_FUN_005281b0();
      if (iVar3 != iVar11) {
        sound_sndmain_cpp_resetSoundDevice_FUN_00528080();
        sound_sndmain_cpp_setAudioSampleRate_FUN_00528210(iVar3);
        uVar20 = CONCAT44(uVar6,0x02DC9450);
        goto LAB_004d1b85;
      }
      break;
    case 5:
      iVar3 = sound_sndmain_cpp_getAudioBitDepth_FUN_005281a0();
      if (iVar3 == 0x10) {
        iVar3 = 8;
      }
      else {
        iVar3 = 0x10;
      }
      iVar11 = sound_sndmain_cpp_hasHardware3DSound_FUN_005284f0();
      if (iVar11 != 0) {
        iVar3 = 0x10;
      }
      iVar11 = sound_sndmain_cpp_getAudioBitDepth_FUN_005281a0();
      if (iVar3 != iVar11) {
        sound_sndmain_cpp_resetSoundDevice_FUN_00528080();
        sound_sndmain_cpp_setAudioBitDepth_FUN_005281d0(iVar3);
        uVar20 = CONCAT44(uVar6,0x02DC9450);
        goto LAB_004d1b85;
      }
      break;
    case 6:
      iVar3 = sound_sndmain_cpp_getAudioChannelCount_FUN_005281c0();
      iVar3 = (iVar3 == 1) + 1;
      iVar11 = sound_sndmain_cpp_hasHardware3DSound_FUN_005284f0();
      if (iVar11 != 0) {
        iVar3 = 2;
      }
      iVar11 = sound_sndmain_cpp_getAudioChannelCount_FUN_005281c0();
      if (iVar3 != iVar11) {
        sound_sndmain_cpp_resetSoundDevice_FUN_00528080();
        sound_sndmain_cpp_setAudioChannelCount_FUN_005281f0(iVar3);
        uVar20 = CONCAT44(uVar6,0x02DC9450);
        goto LAB_004d1b85;
      }
      break;
    case 7:
      uVar20 = CONCAT44(uVar6,local_7e8);
      iVar3 = 0;
      FUN_00474c90(local_7e8);
      while( true ) {
        uVar6 = (uint)((ulonglong)uVar20 >> 0x20);
        iVar11 = sound_sndmain_cpp_getSoundDeviceCount_FUN_00528230();
        if (iVar11 <= iVar3) break;
        sound_sndmain_cpp_getSoundDeviceInfo_FUN_005282c0(iVar3,local_560);
        uVar20 = CONCAT44(uVar6,local_560);
        iVar3 = iVar3 + 1;
        shape_edittool_cpp_CStrList_add_FUN_00473cb0(local_7e8,local_560);
      }
      uVar10 = sound_sndmain_cpp_getCurrentSoundDevice_FUN_00528610();
      iVar3 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_00474d70
                        (local_7e8,"Select sound device",uVar10);
      if (-1 < iVar3) {
        sound_sndmain_cpp_closeSoundDevice_FUN_005285b0();
        sound_sndmain_cpp_selectSoundDevice_FUN_00528410(iVar3);
        sound_sndmain_cpp_initializeSoundDevice_FUN_00528500();
        iVar3 = sound_sndmain_cpp_hasHardware3DSound_FUN_005284f0();
        if (iVar3 != 0) {
          sound_sndmain_cpp_setSoundOutputMode_FUN_005280c0(0x10,2,0xac44);
        }
        core_sound_cpp_CSound_configure_FUN_0052e850(0x02DC9450);
      }
      shape_edittool_cpp_CPickList_dtor_FUN_00474cf0(local_7e8,0);
      break;
    case 8:
      sound_sndmain_cpp_closeSoundDevice_FUN_005285b0();
      iVar3 = sound_sndmain_cpp_isHardwareMixingEnabled_FUN_005284e0();
      sound_sndmain_cpp_enableHwSoundMixing_FUN_005284a0(iVar3 == 0);
      sound_sndmain_cpp_initializeSoundDevice_FUN_00528500();
LAB_004d1b7f:
      uVar20 = CONCAT44(uVar6,0x02DC9450);
LAB_004d1b85:
      core_sound_cpp_CSound_configure_FUN_0052e850(uVar20);
      uVar6 = (uint)((ulonglong)uVar20 >> 0x20);
    }
    uVar20 = CONCAT44(uVar6,1);
    iVar3 = (**(code **)(*0x01CC30E4 + 4))(0x01CC30E4,1);
    if (iVar3 != 0) {
      return;
    }
  } while( true );
}
