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
  SSoundDeviceInfo SVar2;
  CDemonSet *this_ptr;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  float fVar6;
  uint uVar7;
  int extraout_EAX;
  int extraout_EAX_00;
  int extraout_EAX_01;
  int iVar8;
  byte *puVar9;
  SSoundDeviceInfo *pSVar10;
  char *pcVar11;
  char *pcVar12;
  int iVar13;
  char *pcVar14;
  SSoundDeviceInfo *pSVar15;
  byte bVar16;
  float10 fVar17;
  ulonglong uVar18;
  double in_stack_fffff5a0;
  uint local_a58;
  uint uStack_a54;
  float local_a48;
  float local_a40;
  float local_a3c;
  CPickList local_a38;
  SSoundDeviceInfo local_678 [280];
  SSoundDeviceInfo local_560 [264];
  int local_458;
  char local_448 [256];
  char local_348 [256];
  char local_248 [256];
  char local_148 [256];
  ulonglong local_48;
  int local_40;
  uint local_3c [2];
  int local_34;
  int local_30;
  int local_2c;
  float local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  float local_14;
  
  bVar16 = 0;
  local_3c[0] = 0;
  core_game_cpp_FUN_004b3000(g_CGamePtr);
  puVar9 = &DAT_01d074a8;
  iVar3 = 0;
  do {
    *(byte **)(iVar3 + 0x1d07ea8) = puVar9;
    iVar3 = iVar3 + 4;
    puVar9 = puVar9 + 0x100;
  } while (iVar3 != 0x28);
  do {
    core_game_cpp_FUN_004b3010(g_CGamePtr);
    this_ptr = g_CDemonSetPtr;
    *(uint *)&g_CDemonSetPtr->field_0x15ae84 = 1;
    core_set_cpp_FUN_005344c0(this_ptr,50000,50000,0x10000);
    *(uint *)&g_CDemonSetPtr->field_0x15ae94 = 0xdac;
    core_moon_cpp_FUN_005024a0(&g_CMoonInstance,*(uint *)&g_CGamePtr->field_0x284);
    core_moon_cpp_FUN_00502510(&g_CMoonInstance);
    local_2c = 0;
    *(uint *)&g_CDemonSetPtr->field_0x15ae84 = 0;
    pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80(">Sound : " + 1);
    pcVar11 = &DAT_01d074a8;
    do {
      cVar1 = *pcVar4;
      *pcVar11 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar4[1];
      pcVar4 = pcVar4 + 2;
      pcVar11[1] = cVar1;
      pcVar11 = pcVar11 + 2;
    } while (cVar1 != '\0');
    iVar3 = sound_sndmain_cpp_isSoundMuted_FUN_00550bc0();
    if (iVar3 == 0) {
      pcVar4 = &DAT_005dd0c4;
    }
    else {
      pcVar4 = "Muted";
    }
    pcVar11 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80(pcVar4);
    iVar3 = local_2c;
    iVar8 = -1;
    pcVar4 = &DAT_01d074a8;
    do {
      pcVar12 = pcVar4;
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      pcVar12 = pcVar4 + (uint)bVar16 * -2 + 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar12;
    } while (cVar1 != '\0');
    pcVar12 = pcVar12 + -1;
    do {
      cVar1 = *pcVar11;
      *pcVar12 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar11[1];
      pcVar11 = pcVar11 + 2;
      pcVar12[1] = cVar1;
      pcVar12 = pcVar12 + 2;
    } while (cVar1 != '\0');
    iVar13 = local_2c + 1;
    iVar8 = sound_sndmain_cpp_FUN_005512a0(0);
    local_30 = iVar3 + 2;
    pcVar4 = &DAT_01d074a8 + iVar13 * 0x100;
    local_2c = iVar13;
    if (iVar8 == 0) {
      pcVar11 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Sound effects : Off");
      iVar3 = local_30;
      FUN_005b7790(pcVar4,pcVar11);
    }
    else {
      pcVar11 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Sound effects : ");
      FUN_005b7790(pcVar4,pcVar11);
      local_14 = (float)sound_sndmain_cpp_getSfxChannelVol_FUN_00551190(0);
      fVar17 = ((float10)local_14 * (float10)_DAT_005dd1f1) / (float10)_DAT_005f9e34 +
               (float10)_DAT_005dd1fd;
      round();
      local_14 = (float)(int)ROUND(fVar17);
      FUN_005b7790(local_248,&DAT_005dd0d8,local_14);
      pcVar11 = local_248;
      iVar3 = -1;
      pcVar12 = pcVar4;
      do {
        pcVar14 = pcVar12;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar14 = pcVar12 + (uint)bVar16 * -2 + 1;
        cVar1 = *pcVar12;
        pcVar12 = pcVar14;
      } while (cVar1 != '\0');
      pcVar14 = pcVar14 + -1;
      do {
        cVar1 = *pcVar11;
        *pcVar14 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar11[1];
        pcVar11 = pcVar11 + 2;
        pcVar14[1] = cVar1;
        pcVar14 = pcVar14 + 2;
      } while (cVar1 != '\0');
      pcVar11 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80(&DAT_005dd0db);
      iVar3 = -1;
      do {
        pcVar12 = pcVar4;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar12 = pcVar4 + (uint)bVar16 * -2 + 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar12;
      } while (cVar1 != '\0');
      pcVar12 = pcVar12 + -1;
      do {
        cVar1 = *pcVar11;
        *pcVar12 = cVar1;
        iVar3 = local_30;
        if (cVar1 == '\0') break;
        cVar1 = pcVar11[1];
        pcVar11 = pcVar11 + 2;
        pcVar12[1] = cVar1;
        pcVar12 = pcVar12 + 2;
      } while (cVar1 != '\0');
    }
    iVar13 = sound_sndmain_cpp_FUN_005512a0(2);
    iVar8 = iVar3 + 1;
    pcVar4 = &DAT_01d074a8 + iVar3 * 0x100;
    local_34 = iVar8;
    if (iVar13 == 0) {
      pcVar11 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Dialog : Off");
      FUN_005b7790(pcVar4,pcVar11);
    }
    else {
      pcVar12 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Dialog : ");
      pcVar11 = pcVar4;
      do {
        cVar1 = *pcVar12;
        *pcVar11 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar12[1];
        pcVar12 = pcVar12 + 2;
        pcVar11[1] = cVar1;
        pcVar11 = pcVar11 + 2;
      } while (cVar1 != '\0');
      local_14 = (float)sound_sndmain_cpp_getSfxChannelVol_FUN_00551190(2);
      fVar17 = ((float10)local_14 * (float10)_DAT_005dd1f1) / (float10)_DAT_005f9e38 +
               (float10)_DAT_005dd1fd;
      round();
      local_14 = (float)(int)ROUND(fVar17);
      FUN_005b7790(local_348,&DAT_005dd0fc,local_14);
      pcVar11 = local_348;
      iVar3 = -1;
      pcVar12 = pcVar4;
      do {
        pcVar14 = pcVar12;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar14 = pcVar12 + (uint)bVar16 * -2 + 1;
        cVar1 = *pcVar12;
        pcVar12 = pcVar14;
      } while (cVar1 != '\0');
      pcVar14 = pcVar14 + -1;
      do {
        cVar1 = *pcVar11;
        *pcVar14 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar11[1];
        pcVar11 = pcVar11 + 2;
        pcVar14[1] = cVar1;
        pcVar14 = pcVar14 + 2;
      } while (cVar1 != '\0');
      pcVar11 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80(&DAT_005dd0ff);
      iVar3 = -1;
      do {
        pcVar12 = pcVar4;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar12 = pcVar4 + (uint)bVar16 * -2 + 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar12;
      } while (cVar1 != '\0');
      pcVar12 = pcVar12 + -1;
      do {
        cVar1 = *pcVar11;
        *pcVar12 = cVar1;
        iVar8 = local_34;
        if (cVar1 == '\0') break;
        cVar1 = pcVar11[1];
        pcVar11 = pcVar11 + 2;
        pcVar12[1] = cVar1;
        pcVar12 = pcVar12 + 2;
      } while (cVar1 != '\0');
    }
    iVar3 = sound_sndmain_cpp_FUN_005512a0(1);
    iVar13 = iVar8 + 1;
    pcVar4 = &DAT_01d074a8 + iVar8 * 0x100;
    local_40 = iVar13;
    if (iVar3 == 0) {
      pcVar11 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Music Vol : Off");
      local_24 = iVar13;
      FUN_005b7790(pcVar4,pcVar11);
    }
    else {
      pcVar12 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Music Vol : ");
      pcVar11 = pcVar4;
      do {
        cVar1 = *pcVar12;
        *pcVar11 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar12[1];
        pcVar12 = pcVar12 + 2;
        pcVar11[1] = cVar1;
        pcVar11 = pcVar11 + 2;
      } while (cVar1 != '\0');
      local_14 = (float)sound_sndmain_cpp_getSfxChannelVol_FUN_00551190(1);
      fVar17 = ((float10)local_14 * (float10)_DAT_005dd1f1) / (float10)_DAT_005f9e30 +
               (float10)_DAT_005dd1fd;
      round();
      local_14 = (float)(int)ROUND(fVar17);
      FUN_005b7790(local_148,&DAT_005dd11c,local_14);
      pcVar11 = local_148;
      iVar3 = -1;
      pcVar12 = pcVar4;
      do {
        pcVar14 = pcVar12;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar14 = pcVar12 + (uint)bVar16 * -2 + 1;
        cVar1 = *pcVar12;
        pcVar12 = pcVar14;
      } while (cVar1 != '\0');
      pcVar14 = pcVar14 + -1;
      do {
        cVar1 = *pcVar11;
        *pcVar14 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar11[1];
        pcVar11 = pcVar11 + 2;
        pcVar14[1] = cVar1;
        pcVar14 = pcVar14 + 2;
      } while (cVar1 != '\0');
      pcVar11 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80(&DAT_005dd11f);
      iVar3 = -1;
      do {
        pcVar12 = pcVar4;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar12 = pcVar4 + (uint)bVar16 * -2 + 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar12;
      } while (cVar1 != '\0');
      pcVar12 = pcVar12 + -1;
      do {
        cVar1 = *pcVar11;
        *pcVar12 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar11[1];
        pcVar11 = pcVar11 + 2;
        pcVar12[1] = cVar1;
        pcVar12 = pcVar12 + 2;
      } while (cVar1 != '\0');
      local_24 = local_40;
    }
    pcVar12 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Output rate : ");
    pcVar4 = &DAT_01d074a8 + local_24 * 0x100;
    pcVar11 = pcVar4;
    do {
      cVar1 = *pcVar12;
      *pcVar11 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar12[1];
      pcVar12 = pcVar12 + 2;
      pcVar11[1] = cVar1;
      pcVar11 = pcVar11 + 2;
    } while (cVar1 != '\0');
    iVar3 = sound_sndmain_cpp_FUN_005527f0();
    FUN_005b7790(local_448,&DAT_005dd141,iVar3);
    pcVar11 = local_448;
    iVar3 = -1;
    pcVar12 = pcVar4;
    do {
      pcVar14 = pcVar12;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar14 = pcVar12 + (uint)bVar16 * -2 + 1;
      cVar1 = *pcVar12;
      pcVar12 = pcVar14;
    } while (cVar1 != '\0');
    pcVar14 = pcVar14 + -1;
    do {
      cVar1 = *pcVar11;
      *pcVar14 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar11[1];
      pcVar11 = pcVar11 + 2;
      pcVar14[1] = cVar1;
      pcVar14 = pcVar14 + 2;
    } while (cVar1 != '\0');
    pcVar11 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80(&DAT_005dd144);
    iVar3 = local_24;
    iVar8 = -1;
    do {
      pcVar12 = pcVar4;
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      pcVar12 = pcVar4 + (uint)bVar16 * -2 + 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar12;
    } while (cVar1 != '\0');
    pcVar12 = pcVar12 + -1;
    do {
      cVar1 = *pcVar11;
      *pcVar12 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar11[1];
      pcVar11 = pcVar11 + 2;
      pcVar12[1] = cVar1;
      pcVar12 = pcVar12 + 2;
    } while (cVar1 != '\0');
    iVar8 = local_24 + 1;
    pcVar12 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Output quality : ");
    pcVar4 = &DAT_01d074a8 + iVar8 * 0x100;
    pcVar11 = pcVar4;
    do {
      cVar1 = *pcVar12;
      *pcVar11 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar12[1];
      pcVar12 = pcVar12 + 2;
      pcVar11[1] = cVar1;
      pcVar11 = pcVar11 + 2;
    } while (cVar1 != '\0');
    local_24 = iVar8;
    iVar8 = sound_sndmain_cpp_FUN_005527d0();
    FUN_005b7790(local_448,&DAT_005dd159,iVar8);
    pcVar11 = local_448;
    iVar8 = -1;
    pcVar12 = pcVar4;
    do {
      pcVar14 = pcVar12;
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      pcVar14 = pcVar12 + (uint)bVar16 * -2 + 1;
      cVar1 = *pcVar12;
      pcVar12 = pcVar14;
    } while (cVar1 != '\0');
    pcVar14 = pcVar14 + -1;
    do {
      cVar1 = *pcVar11;
      *pcVar14 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar11[1];
      pcVar11 = pcVar11 + 2;
      pcVar14[1] = cVar1;
      pcVar14 = pcVar14 + 2;
    } while (cVar1 != '\0');
    pcVar11 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80(&DAT_005dd15c);
    iVar8 = -1;
    do {
      pcVar12 = pcVar4;
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      pcVar12 = pcVar4 + (uint)bVar16 * -2 + 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar12;
    } while (cVar1 != '\0');
    pcVar12 = pcVar12 + -1;
    do {
      cVar1 = *pcVar11;
      *pcVar12 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar11[1];
      pcVar11 = pcVar11 + 2;
      pcVar12[1] = cVar1;
      pcVar12 = pcVar12 + 2;
    } while (cVar1 != '\0');
    iVar8 = iVar3 + 2;
    uVar5 = sound_sndmain_cpp_FUN_00552810();
    local_24 = iVar8;
    if (((uVar5 == 0) || (uVar5 < 2)) || (uVar5 != 2)) {
      pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Output type : MONO");
      iVar3 = local_24 + 1;
      iVar8 = local_24;
    }
    else {
      pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Output type : STEREO");
      iVar3 = iVar3 + 3;
    }
    local_24 = iVar3;
    FUN_005b7790(&DAT_01d074a8 + iVar8 * 0x100,pcVar4);
    iVar3 = sound_sndmain_cpp_FUN_00552ca0();
    if ((iVar3 < 0) ||
       (iVar8 = sound_sndmain_cpp_getSoundDeviceCount_FUN_00552890(), iVar8 <= iVar3)) {
      local_458 = 0;
      local_560[0] = (SSoundDeviceInfo)0x0;
    }
    else {
      sound_sndmain_cpp_FUN_00552920(iVar3,local_560);
    }
    pcVar11 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Device : ");
    iVar3 = local_24 * 0x100;
    pcVar4 = &DAT_01d074a8 + iVar3;
    do {
      cVar1 = *pcVar11;
      *pcVar4 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar11[1];
      pcVar11 = pcVar11 + 2;
      pcVar4[1] = cVar1;
      pcVar4 = pcVar4 + 2;
    } while (cVar1 != '\0');
    pSVar10 = local_560;
    local_24 = local_24 + 1;
    iVar8 = -1;
    pcVar4 = &DAT_01d074a8 + iVar3;
    do {
      pcVar11 = pcVar4;
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      pcVar11 = pcVar4 + (uint)bVar16 * -2 + 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar11;
    } while (cVar1 != '\0');
    pSVar15 = (SSoundDeviceInfo *)(pcVar11 + -1);
    do {
      SVar2 = *pSVar10;
      *pSVar15 = SVar2;
      if (SVar2 == (SSoundDeviceInfo)0x0) break;
      SVar2 = pSVar10[1];
      pSVar10 = pSVar10 + 2;
      pSVar15[1] = SVar2;
      pSVar15 = pSVar15 + 2;
    } while (SVar2 != (SSoundDeviceInfo)0x0);
    if (0 < local_458) {
      iVar8 = local_24 * 0x100;
      iVar3 = sound_sndmain_cpp_FUN_00552b40();
      pcVar4 = &DAT_01d074a8 + iVar8;
      if (iVar3 < 1) {
        pcVar11 = "Hardware mixing: Off";
      }
      else {
        pcVar11 = "Hardware mixing: Enabled";
      }
      pcVar11 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80(pcVar11);
      do {
        cVar1 = *pcVar11;
        *pcVar4 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar11[1];
        pcVar11 = pcVar11 + 2;
        pcVar4[1] = cVar1;
        pcVar4 = pcVar4 + 2;
      } while (cVar1 != '\0');
      local_24 = local_24 + 1;
    }
    _DAT_01d06134 = _DAT_01d06134 + _DAT_01c2a370 * 0x18;
    if (0x7ffff < _DAT_01d06134) {
      _DAT_01d06134 = _DAT_01d06134 + -0x80000;
    }
    iVar3 = sound_sndmain_cpp_FUN_00552b20();
    if (iVar3 != 0) {
      iVar3 = sound_sndmain_cpp_FUN_00552810();
      local_1c = DAT_006141b8 / 0x14;
      local_18 = DAT_006141b8 / iVar3;
      iVar8 = local_18 + local_1c * -2;
      iVar13 = iVar8 >> 0x1f;
      fVar6 = (float)((int)((iVar8 + iVar13 * -4) - (uint)(iVar13 << 1 < 0)) >> 2);
      fVar17 = (float10)_DAT_005dd205;
      local_20 = iVar3;
      local_14 = fVar6;
      pow();
      iVar8 = 0;
      in_stack_fffff5a0 = (double)fVar17;
      if (0 < iVar3) {
        do {
          local_a58 = 0;
          uStack_a54 = 0x40690000;
          if (0 < (int)fVar6) {
            iVar3 = local_18 * iVar8 + local_1c;
            iVar13 = (int)fVar6 * 4 + iVar3;
            do {
              fVar17 = (float10)__BITCAST_DOUBLE(CONCAT44(uStack_a54,local_a58)) * (float10)in_stack_fffff5a0;
              local_48 = (double)fVar17;
              local_14 = (float)sound_sndmain_cpp_FUN_00553b60
                                          (iVar8,(float)__BITCAST_DOUBLE(CONCAT44(uStack_a54,local_a58)),
                                           (float)fVar17);
              fVar17 = (float10)DAT_006141bc -
                       (float10)local_14 * (float10)DAT_006141bc * (float10)_DAT_005dd1f5;
              uVar18 = round();
              local_14 = (float)(int)ROUND(fVar17);
              core_menu_cpp_FUN_004eaf30
                        (iVar3,(int)uVar18,((int)((ulonglong)uVar18 >> 0x20) - (int)local_14) + 1);
              local_a58 = (uint)local_48;
              uStack_a54 = local_48._4_4_;
              iVar3 = iVar3 + 4;
            } while (iVar3 < iVar13);
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 < local_20);
      }
    }
    pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Sound Options");
    uVar7 = core_menu_cpp_FUN_004eb0e0(0x1d07ea8,local_24,local_3c,0x122,pcVar4);
    wincore_wddvmem_cpp_FUN_00589560();
    local_28 = 0.2;
    switch(uVar7) {
    case 0:
      iVar3 = sound_sndmain_cpp_isSoundMuted_FUN_00550bc0();
      sound_sndmain_cpp_setSoundMuted_FUN_00550bd0((uint)(iVar3 == 0));
      iVar3 = sound_sndmain_cpp_isSoundMuted_FUN_00550bc0();
      if (iVar3 == 0) goto LAB_004edb4a;
      break;
    case 1:
      local_14 = (float)sound_sndmain_cpp_getSfxChannelVol_FUN_00551190(0);
      local_a48 = local_14 / _DAT_005f9e34;
      if (_DAT_01d0612c == 1) {
        iVar3 = sound_sndmain_cpp_FUN_005512a0(0);
        if (iVar3 == 0) {
          sound_sndmain_cpp_FUN_00551220(0,1);
          local_a48 = 1.0;
        }
        else {
          local_a48 = local_a48 - local_28;
          if (local_a48 < (float)_DAT_005dd225) {
LAB_004edc96:
            local_a48 = 0.0;
            sound_sndmain_cpp_FUN_00551220(0,0);
          }
        }
      }
      else {
        iVar3 = sound_sndmain_cpp_FUN_005512a0(0);
        if (iVar3 == 0) {
          sound_sndmain_cpp_FUN_00551220(0,1);
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
      sound_sndmain_cpp_FUN_00550450();
      sound_sndmain_cpp_setNextSfxFlags_FUN_00550380(1);
      sound_sndmain_cpp_FUN_005506b0("colt45-0.wav");
      sound_sndmain_cpp_FUN_005504d0();
      break;
    case 2:
      local_14 = (float)sound_sndmain_cpp_getSfxChannelVol_FUN_00551190(2);
      local_a3c = local_14 / _DAT_005f9e38;
      if (_DAT_01d0612c == 1) {
        iVar3 = sound_sndmain_cpp_FUN_005512a0(2);
        if (iVar3 == 0) {
          sound_sndmain_cpp_FUN_00551220(2,1);
          local_a3c = 1.0;
        }
        else {
          local_a3c = local_a3c - local_28;
          if (local_a3c < (float)_DAT_005dd225) {
LAB_004eddbb:
            local_a3c = 0.0;
            sound_sndmain_cpp_FUN_00551220(2,0);
          }
        }
      }
      else {
        iVar3 = sound_sndmain_cpp_FUN_005512a0(2);
        if (iVar3 == 0) {
          sound_sndmain_cpp_FUN_00551220(2,1);
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
      local_14 = (float)sound_sndmain_cpp_getSfxChannelVol_FUN_00551190(1);
      local_a40 = local_14 / _DAT_005f9e30;
      if (_DAT_01d0612c == 1) {
        iVar3 = sound_sndmain_cpp_FUN_005512a0(1);
        if (iVar3 == 0) {
          sound_sndmain_cpp_FUN_00551220(1,1);
          core_sound_cpp_FUN_0055ac50(0x0264B290);
          local_a40 = 1.0;
        }
        else {
          local_a40 = local_a40 - local_28;
          if (local_a40 < (float)_DAT_005dd225) {
LAB_004edebd:
            local_a40 = 0.0;
            sound_sndmain_cpp_FUN_00551220(1,0);
          }
        }
      }
      else {
        iVar3 = sound_sndmain_cpp_FUN_005512a0(1);
        if (iVar3 == 0) {
          sound_sndmain_cpp_FUN_00551220(1,1);
          core_sound_cpp_FUN_0055ac50(0x0264B290);
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
      iVar3 = sound_sndmain_cpp_FUN_005527f0();
      if (_DAT_01d0612c == 1) {
        if (iVar3 == 0x5622) {
LAB_004edf9c:
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
        if (0xac43 < iVar3) goto LAB_004edf9c;
        iVar3 = 0xac44;
      }
      iVar8 = sound_sndmain_cpp_FUN_00552b40();
      if (0 < iVar8) {
        iVar3 = 0xac44;
      }
      iVar8 = sound_sndmain_cpp_FUN_005527f0();
      if (iVar3 != iVar8) {
        sound_sndmain_cpp_resetSoundDevice_FUN_005526b0();
        sound_sndmain_cpp_setAudioSampleRate_FUN_00552870(iVar3);
        goto LAB_004edb4a;
      }
      break;
    case 5:
      iVar3 = sound_sndmain_cpp_FUN_005527d0();
      if (iVar3 == 0x10) {
        iVar3 = 8;
      }
      else {
        iVar3 = 0x10;
      }
      sound_sndmain_cpp_FUN_00552b30(SUB84(in_stack_fffff5a0,0));
      if (0 < extraout_EAX) {
        iVar3 = 0x10;
      }
      iVar8 = sound_sndmain_cpp_FUN_005527d0();
      if (iVar3 != iVar8) {
        sound_sndmain_cpp_resetSoundDevice_FUN_005526b0();
        sound_sndmain_cpp_setAudioBitDepth_FUN_00552830(iVar3);
        goto LAB_004edb4a;
      }
      break;
    case 6:
      iVar3 = sound_sndmain_cpp_FUN_00552810();
      iVar3 = (iVar3 == 1) + 1;
      sound_sndmain_cpp_FUN_00552b30(SUB84(in_stack_fffff5a0,0));
      if (0 < extraout_EAX_00) {
        iVar3 = 2;
      }
      iVar8 = sound_sndmain_cpp_FUN_00552810();
      if (iVar3 != iVar8) {
        sound_sndmain_cpp_resetSoundDevice_FUN_005526b0();
        sound_sndmain_cpp_setAudioChannelCount_FUN_00552850(iVar3);
        goto LAB_004edb4a;
      }
      break;
    case 7:
      shape_edittool_cpp_CPickList_ctor_FUN_00481fc0(&local_a38);
      for (iVar3 = 0; iVar8 = sound_sndmain_cpp_getSoundDeviceCount_FUN_00552890(), iVar3 < iVar8;
          iVar3 = iVar3 + 1) {
        sound_sndmain_cpp_FUN_00552920(iVar3,local_678);
        shape_edittool_cpp_CStrList_add_FUN_00480e70((CStrList *)&local_a38,(char *)local_678);
      }
      uVar5 = 0;
      iVar3 = sound_sndmain_cpp_FUN_00552ca0();
      iVar3 = shape_edittool_cpp_FUN_00482250(&local_a38,"Select sound device",iVar3,uVar5)
      ;
      if (-1 < iVar3) {
        sound_sndmain_cpp_closeSoundDevice_FUN_00552c40();
        sound_sndmain_cpp_selectSoundDevice_FUN_00552aa0(iVar3);
        sound_sndmain_cpp_initializeSoundDevice_FUN_00552b90();
        sound_sndmain_cpp_FUN_00552b30(SUB84(in_stack_fffff5a0,0));
        if (0 < extraout_EAX_01) {
          sound_sndmain_cpp_setSoundOutputMode_FUN_005526f0(0x10,2,0xac44);
        }
        core_sound_cpp_FUN_0055ac50(0x0264B290);
      }
      shape_edittool_cpp_CPickList_dtor_FUN_004820b0(&local_a38,0);
      break;
    case 8:
      sound_sndmain_cpp_closeSoundDevice_FUN_00552c40();
      iVar3 = sound_sndmain_cpp_FUN_00552b40();
      if (iVar3 < 1) {
        sound_sndmain_cpp_FUN_00552b50(2);
        sound_sndmain_cpp_initializeSoundDevice_FUN_00552b90();
      }
      else {
        sound_sndmain_cpp_FUN_00552b50(0);
        sound_sndmain_cpp_initializeSoundDevice_FUN_00552b90();
      }
LAB_004edb4a:
      core_sound_cpp_FUN_0055ac50(0x0264B290);
    }
    iVar3 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,1);
    if (iVar3 != 0) {
      return;
    }
  } while( true );
}
