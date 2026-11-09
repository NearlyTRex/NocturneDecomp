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
  SSoundDeviceInfo SVar2;
  CDemonSet *this_ptr;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  int extraout_EAX;
  int extraout_EAX_00;
  int extraout_EAX_01;
  int extraout_EAX_02;
  int iVar7;
  SSoundDeviceInfo *pSVar8;
  char *pcVar9;
  SSoundDeviceInfo *pSVar10;
  char *pcVar11;
  char *pcVar12;
  byte bVar13;
  float10 fVar14;
  uint uVar15;
  double in_stack_fffff5d0;
  float local_a28;
  float local_a24;
  float local_a20;
  CPickList local_a1c;
  SSoundDeviceInfo local_65c [264];
  int local_554;
  SSoundDeviceInfo local_544 [280];
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
  
  bVar13 = 0;
  local_2c = 0;
  core_game_cpp_FUN_004b4430(g_CGamePtr);
  iVar7 = 0x1d74a50;
  iVar3 = 0;
  do {
    *(int *)(iVar3 + 0x1d75450) = iVar7;
    iVar3 = iVar3 + 4;
    iVar7 = iVar7 + 0x100;
  } while (iVar3 != 0x28);
  do {
    core_game_cpp_FUN_004b4440(g_CGamePtr);
    this_ptr = g_CDemonSetPtr;
    *(uint *)&g_CDemonSetPtr->field_0x15ae84 = 1;
    core_set_cpp_FUN_0053b100(this_ptr,50000,50000,0x10000);
    *(uint *)&g_CDemonSetPtr->field_0x15ae94 = 0xdac;
    core_moon_cpp_FUN_004f9670(&g_CMoonInstance);
    *(uint *)&g_CDemonSetPtr->field_0x15ae84 = 0;
    iVar3 = sound_sndmain_cpp_FUN_00558840();
    if ((iVar3 < 0) ||
       (iVar7 = sound_sndmain_cpp_getSoundDeviceCount_FUN_00558430(), iVar7 <= iVar3)) {
      local_554 = 0;
      local_65c[0] = (SSoundDeviceInfo)0x0;
    }
    else {
      sound_sndmain_cpp_FUN_005584c0(iVar3,local_65c);
    }
    pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_00508960(">Device : " + 1);
    pcVar9 = (char *)0x1d74a50;
    do {
      cVar1 = *pcVar4;
      *pcVar9 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar4[1];
      pcVar4 = pcVar4 + 2;
      pcVar9[1] = cVar1;
      pcVar9 = pcVar9 + 2;
    } while (cVar1 != '\0');
    pSVar8 = local_65c;
    iVar3 = -1;
    pcVar4 = (char *)0x1d74a50;
    do {
      pcVar9 = pcVar4;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar9 = pcVar4 + (uint)bVar13 * -2 + 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar9;
    } while (cVar1 != '\0');
    pSVar10 = (SSoundDeviceInfo *)(pcVar9 + -1);
    do {
      SVar2 = *pSVar8;
      *pSVar10 = SVar2;
      if (SVar2 == (SSoundDeviceInfo)0x0) break;
      SVar2 = pSVar8[1];
      pSVar8 = pSVar8 + 2;
      pSVar10[1] = SVar2;
      pSVar10 = pSVar10 + 2;
    } while (SVar2 != (SSoundDeviceInfo)0x0);
    pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Sound : ");
    local_24 = 0x1d74b50;
    pcVar4 = (char *)0x1d74b50;
    do {
      cVar1 = *pcVar9;
      *pcVar4 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar9[1];
      pcVar9 = pcVar9 + 2;
      pcVar4[1] = cVar1;
      pcVar4 = pcVar4 + 2;
    } while (cVar1 != '\0');
    iVar3 = sound_sndmain_cpp_FUN_00556750();
    if (iVar3 == 0) {
      pcVar4 = &DAT_005c776f;
    }
    else {
      pcVar4 = "Muted";
    }
    pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_00508960(pcVar4);
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
      cVar1 = *pcVar9;
      *pcVar11 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar9[1];
      pcVar9 = pcVar9 + 2;
      pcVar11[1] = cVar1;
      pcVar11 = pcVar11 + 2;
    } while (cVar1 != '\0');
    iVar3 = sound_sndmain_cpp_FUN_00556e30(0);
    local_1c = (char *)0x1d74c50;
    if (iVar3 == 0) {
      pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_00508960
                         ("Sound Effects Volume : Off");
      FUN_005a28c0(local_1c,pcVar4);
    }
    else {
      pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Sound Effects Volume : ");
      FUN_005a28c0(0x1d74c50,pcVar4);
      local_14 = (char *)sound_sndmain_cpp_getSfxChannelVol_FUN_00556d20(0);
      fVar14 = ((float10)(float)local_14 * (float10)_DAT_005c78b2) / (float10)_DAT_005e2924 +
               (float10)_DAT_005c78b6;
      round();
      local_14 = (char *)(int)ROUND(fVar14);
      FUN_005a28c0(local_42c,&DAT_005c778a,local_14);
      pcVar9 = local_1c;
      pcVar4 = local_42c;
      iVar3 = -1;
      pcVar11 = local_1c;
      do {
        pcVar12 = pcVar11;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
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
      pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_00508960(&DAT_005c778d);
      iVar3 = -1;
      do {
        pcVar11 = pcVar9;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar11 = pcVar9 + (uint)bVar13 * -2 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar11;
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
    iVar3 = sound_sndmain_cpp_FUN_00556e30(2);
    pcVar4 = (char *)0x1d74d50;
    local_28 = 4;
    if (iVar3 == 0) {
      pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Dialog Volume : Off");
      FUN_005a28c0(0x1d74d50,pcVar4);
      iVar3 = 4;
    }
    else {
      pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Dialog Volume : ");
      do {
        cVar1 = *pcVar9;
        *pcVar4 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar9[1];
        pcVar9 = pcVar9 + 2;
        pcVar4[1] = cVar1;
        pcVar4 = pcVar4 + 2;
      } while (cVar1 != '\0');
      local_14 = (char *)sound_sndmain_cpp_getSfxChannelVol_FUN_00556d20(2);
      fVar14 = ((float10)(float)local_14 * (float10)_DAT_005c78b2) / (float10)_DAT_005e2928 +
               (float10)_DAT_005c78b6;
      round();
      local_14 = (char *)(int)ROUND(fVar14);
      FUN_005a28c0(local_12c,&DAT_005c77bc,local_14);
      pcVar4 = local_12c;
      iVar3 = -1;
      pcVar9 = (char *)0x1d74d50;
      do {
        pcVar11 = pcVar9;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar11 = pcVar9 + (uint)bVar13 * -2 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar11;
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
      pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_00508960(&DAT_005c77bf);
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
        cVar1 = *pcVar9;
        *pcVar11 = cVar1;
        iVar3 = local_28;
        if (cVar1 == '\0') break;
        cVar1 = pcVar9[1];
        pcVar9 = pcVar9 + 2;
        pcVar11[1] = cVar1;
        pcVar11 = pcVar11 + 2;
      } while (cVar1 != '\0');
    }
    iVar7 = sound_sndmain_cpp_FUN_00556e30(1);
    local_20 = (char *)(iVar3 * 0x100 + 0x1d74a50);
    if (iVar7 == 0) {
      pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Music Volume : Off");
      FUN_005a28c0(local_20,pcVar4);
    }
    else {
      pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Music Volume : ");
      pcVar4 = local_20;
      do {
        cVar1 = *pcVar9;
        *pcVar4 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar9[1];
        pcVar9 = pcVar9 + 2;
        pcVar4[1] = cVar1;
        pcVar4 = pcVar4 + 2;
      } while (cVar1 != '\0');
      local_14 = (char *)sound_sndmain_cpp_getSfxChannelVol_FUN_00556d20(1);
      fVar14 = ((float10)(float)local_14 * (float10)_DAT_005c78b2) / (float10)_DAT_005e2920 +
               (float10)_DAT_005c78b6;
      round();
      local_14 = (char *)(int)ROUND(fVar14);
      FUN_005a28c0(local_32c,&DAT_005c77e6,local_14);
      pcVar9 = local_20;
      pcVar4 = local_32c;
      iVar7 = -1;
      pcVar11 = local_20;
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
      pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_00508960(&DAT_005c77e9);
      iVar7 = -1;
      do {
        pcVar11 = pcVar9;
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        pcVar11 = pcVar9 + (uint)bVar13 * -2 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar11;
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
    pcVar9 = pcVar4;
    do {
      cVar1 = *pcVar11;
      *pcVar9 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar11[1];
      pcVar11 = pcVar11 + 2;
      pcVar9[1] = cVar1;
      pcVar9 = pcVar9 + 2;
    } while (cVar1 != '\0');
    local_14 = pcVar4;
    iVar7 = sound_sndmain_cpp_FUN_00558390();
    FUN_005a28c0(local_22c,&DAT_005c780e,iVar7);
    pcVar9 = local_22c;
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
      cVar1 = *pcVar9;
      *pcVar12 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar9[1];
      pcVar9 = pcVar9 + 2;
      pcVar12[1] = cVar1;
      pcVar12 = pcVar12 + 2;
    } while (cVar1 != '\0');
    pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_00508960(&DAT_005c7811);
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
      cVar1 = *pcVar9;
      *pcVar11 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar9[1];
      pcVar9 = pcVar9 + 2;
      pcVar11[1] = cVar1;
      pcVar11 = pcVar11 + 2;
    } while (cVar1 != '\0');
    pcVar11 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Output Quality : ");
    pcVar4 = (char *)((iVar3 + 2) * 0x100 + 0x1d74a50);
    pcVar9 = pcVar4;
    do {
      cVar1 = *pcVar11;
      *pcVar9 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar11[1];
      pcVar11 = pcVar11 + 2;
      pcVar9[1] = cVar1;
      pcVar9 = pcVar9 + 2;
    } while (cVar1 != '\0');
    local_14 = pcVar4;
    iVar7 = sound_sndmain_cpp_FUN_00558370();
    FUN_005a28c0(local_22c,&DAT_005c7826,iVar7);
    pcVar9 = local_22c;
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
      cVar1 = *pcVar9;
      *pcVar12 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar9[1];
      pcVar9 = pcVar9 + 2;
      pcVar12[1] = cVar1;
      pcVar12 = pcVar12 + 2;
    } while (cVar1 != '\0');
    pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_00508960(&DAT_005c7829);
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
      cVar1 = *pcVar9;
      *pcVar11 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar9[1];
      pcVar9 = pcVar9 + 2;
      pcVar11[1] = cVar1;
      pcVar11 = pcVar11 + 2;
    } while (cVar1 != '\0');
    uVar5 = sound_sndmain_cpp_FUN_005583b0();
    if (((uVar5 == 0) || (uVar5 < 2)) || (uVar5 != 2)) {
      pcVar4 = "Output Type : Mono";
    }
    else {
      pcVar4 = "Output Type : Stereo";
    }
    pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_00508960(pcVar4);
    iVar7 = iVar3 + 4;
    FUN_005a28c0((iVar3 + 3) * 0x100 + 0x1d74a50,pcVar4);
    if (0 < local_554) {
      iVar6 = sound_sndmain_cpp_FUN_005586e0();
      pcVar4 = (char *)(iVar7 * 0x100 + 0x1d74a50);
      if (iVar6 < 1) {
        pcVar9 = "Hardware Mixing: Off";
      }
      else {
        pcVar9 = "Hardware Mixing: Enabled";
      }
      pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_00508960(pcVar9);
      do {
        cVar1 = *pcVar9;
        *pcVar4 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar9[1];
        pcVar9 = pcVar9 + 2;
        pcVar4[1] = cVar1;
        pcVar4 = pcVar4 + 2;
      } while (cVar1 != '\0');
      iVar7 = iVar3 + 5;
    }
    _DAT_01d737e0 = _DAT_01d737e0 + _DAT_01c5fad0 * 0x18;
    if (0x7ffff < _DAT_01d737e0) {
      _DAT_01d737e0 = _DAT_01d737e0 + -0x80000;
    }
    pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Sound Options");
    iVar3 = core_menu_cpp_FUN_004e7860((char **)0x1d75450,iVar7,&local_2c,200,pcVar4);
    wincore_wddvmem_cpp_FUN_0057a8a0();
    local_18 = 0.2;
    switch(iVar3) {
    case 0:
      shape_edittool_cpp_CPickList_ctor_FUN_004831c0(&local_a1c);
      for (iVar3 = 0; iVar7 = sound_sndmain_cpp_getSoundDeviceCount_FUN_00558430(), iVar3 < iVar7;
          iVar3 = iVar3 + 1) {
        sound_sndmain_cpp_FUN_005584c0(iVar3,local_544);
        shape_edittool_cpp_CStrList_add_FUN_00482070((CStrList *)&local_a1c,(char *)local_544);
      }
      uVar5 = 0;
      iVar3 = sound_sndmain_cpp_FUN_00558840();
      iVar3 = shape_edittool_cpp_FUN_00483450(&local_a1c,"Select sound device",iVar3,uVar5)
      ;
      if (-1 < iVar3) {
        sound_sndmain_cpp_closeSoundDevice_FUN_005587e0();
        sound_sndmain_cpp_selectSoundDevice_FUN_00558640(iVar3);
        sound_sndmain_cpp_initializeSoundDevice_FUN_00558730();
        sound_sndmain_cpp_FUN_005586d0(SUB84(in_stack_fffff5d0,0));
        if (0 < extraout_EAX) {
          sound_sndmain_cpp_setSoundOutputMode_FUN_00558290(0x10,2,0xac44);
        }
        core_sound_cpp_FUN_005607d0(0x02CF5680);
      }
      shape_edittool_cpp_CPickList_dtor_FUN_004832b0(&local_a1c,0);
      break;
    case 1:
      iVar3 = sound_sndmain_cpp_FUN_00556750();
      sound_sndmain_cpp_setSoundMuted_FUN_00556760((uint)(iVar3 == 0));
      iVar3 = sound_sndmain_cpp_FUN_00556750();
      if (iVar3 == 0) {
        core_sound_cpp_FUN_005607d0(0x02CF5680);
      }
      break;
    case 2:
      local_14 = (char *)sound_sndmain_cpp_getSfxChannelVol_FUN_00556d20(0);
      local_a28 = (float)local_14 / _DAT_005e2924;
      if (_DAT_01d737d4 == 1) {
        iVar3 = sound_sndmain_cpp_FUN_00556e30(0);
        if (iVar3 == 0) {
          sound_sndmain_cpp_FUN_00556db0(0,1);
          local_a28 = 1.0;
        }
        else {
          local_a28 = local_a28 - local_18;
          if (local_a28 < (float)_DAT_005c78de) {
LAB_004e9e11:
            local_a28 = 0.0;
            sound_sndmain_cpp_FUN_00556db0(0,0);
          }
        }
      }
      else {
        iVar3 = sound_sndmain_cpp_FUN_00556e30(0);
        if (iVar3 == 0) {
          sound_sndmain_cpp_FUN_00556db0(0,1);
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
      sound_sndmain_cpp_FUN_00555fd0();
      sound_sndmain_cpp_FUN_00555f00(1);
      sound_sndmain_cpp_FUN_00556240("colt45-0.wav");
      sound_sndmain_cpp_FUN_00556050();
      break;
    case 3:
      local_14 = (char *)sound_sndmain_cpp_getSfxChannelVol_FUN_00556d20(2);
      local_a20 = (float)local_14 / _DAT_005e2928;
      if (_DAT_01d737d4 == 1) {
        iVar3 = sound_sndmain_cpp_FUN_00556e30(2);
        if (iVar3 == 0) {
          sound_sndmain_cpp_FUN_00556db0(2,1);
          local_a20 = 1.0;
        }
        else {
          local_a20 = local_a20 - local_18;
          if (local_a20 < (float)_DAT_005c78de) {
LAB_004e9f3d:
            local_a20 = 0.0;
            sound_sndmain_cpp_FUN_00556db0(2,0);
          }
        }
      }
      else {
        iVar3 = sound_sndmain_cpp_FUN_00556e30(2);
        if (iVar3 == 0) {
          sound_sndmain_cpp_FUN_00556db0(2,1);
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
        iVar3 = sound_sndmain_cpp_FUN_00556e30(1);
        if (iVar3 == 0) {
          sound_sndmain_cpp_FUN_00556db0(1,1);
          core_sound_cpp_FUN_005607d0(0x02CF5680);
          local_a24 = 1.0;
        }
        else {
          local_a24 = local_a24 + _DAT_005c78d6;
          if (local_a24 < (float)_DAT_005c78de) {
LAB_004ea042:
            local_a24 = 0.0;
            sound_sndmain_cpp_FUN_00556db0(1,0);
          }
        }
      }
      else {
        iVar3 = sound_sndmain_cpp_FUN_00556e30(1);
        if (iVar3 == 0) {
          sound_sndmain_cpp_FUN_00556db0(1,1);
          core_sound_cpp_FUN_005607d0(0x02CF5680);
          local_a24 = 0.2;
        }
        else {
          local_a24 = local_a24 + _DAT_005c78be;
          in_stack_fffff5d0 = (double)local_a24;
          if ((float)_DAT_005c78c6 < local_a24) goto LAB_004ea042;
          if (_DAT_005c78ce < in_stack_fffff5d0) {
            local_a24 = 1.0;
          }
        }
      }
      sound_sndmain_cpp_setSfxChannelVol_FUN_00556c90(1,local_a24 * _DAT_005e2920);
      break;
    case 5:
      iVar3 = sound_sndmain_cpp_FUN_00558390();
      if (_DAT_01d737d4 == 1) {
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
      sound_sndmain_cpp_FUN_005586d0(SUB84(in_stack_fffff5d0,0));
      if (0 < extraout_EAX_00) {
        iVar3 = 0xac44;
      }
      iVar7 = sound_sndmain_cpp_FUN_00558390();
      if (iVar3 != iVar7) {
        sound_sndmain_cpp_resetSoundDevice_FUN_00558250();
        sound_sndmain_cpp_setAudioSampleRate_FUN_00558410(iVar3);
        core_sound_cpp_FUN_005607d0(0x02CF5680);
      }
      break;
    case 6:
      iVar3 = sound_sndmain_cpp_FUN_00558370();
      if (iVar3 == 0x10) {
        iVar3 = 8;
      }
      else {
        iVar3 = 0x10;
      }
      sound_sndmain_cpp_FUN_005586d0(SUB84(in_stack_fffff5d0,0));
      if (0 < extraout_EAX_01) {
        iVar3 = 0x10;
      }
      iVar7 = sound_sndmain_cpp_FUN_00558370();
      if (iVar3 != iVar7) {
        sound_sndmain_cpp_resetSoundDevice_FUN_00558250();
        sound_sndmain_cpp_setAudioBitDepth_FUN_005583d0(iVar3);
        core_sound_cpp_FUN_005607d0(0x02CF5680);
      }
      break;
    case 7:
      iVar3 = sound_sndmain_cpp_FUN_005583b0();
      iVar3 = (iVar3 == 1) + 1;
      sound_sndmain_cpp_FUN_005586d0(SUB84(in_stack_fffff5d0,0));
      if (0 < extraout_EAX_02) {
        iVar3 = 2;
      }
      iVar7 = sound_sndmain_cpp_FUN_005583b0();
      if (iVar3 != iVar7) {
        sound_sndmain_cpp_resetSoundDevice_FUN_00558250();
        sound_sndmain_cpp_setAudioChannelCount_FUN_005583f0(iVar3);
        core_sound_cpp_FUN_005607d0(0x02CF5680);
      }
      break;
    case 8:
      sound_sndmain_cpp_closeSoundDevice_FUN_005587e0();
      iVar3 = sound_sndmain_cpp_FUN_005586e0();
      if (iVar3 < 1) {
        uVar15 = 2;
      }
      else {
        uVar15 = 0;
      }
      sound_sndmain_cpp_FUN_005586f0(uVar15);
      sound_sndmain_cpp_initializeSoundDevice_FUN_00558730();
      core_sound_cpp_FUN_005607d0(0x02CF5680);
    }
    iVar3 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,1);
    if (iVar3 != 0) {
      return;
    }
  } while( true );
}
