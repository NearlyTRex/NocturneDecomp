// Name: FUN_004c85f0
// Address: 004c85f0
// Address Range: [[004c85f0, 004c8db1]]
// Convention: unknown
// Signature: void FUN_004c85f0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c85f0(void)

{
  uint *puVar1;
  char cVar2;
  float fVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  byte bVar11;
  char acStack_728 [512];
  char acStack_528 [512];
  char acStack_328 [256];
  char acStack_228 [256];
  char acStack_128 [256];
  byte auStack_28 [20];
  int iStack_14;
  
  bVar11 = 0;
  _DAT_01c0399c = 0;
  _DAT_005c0f8c = 0x10000;
  _DAT_005c0f80 = 1;
  iVar4 = getenv();
  if (iVar4 == 0) {
    DAT_006af628 = 3;
  }
  else {
    DAT_006af628 = 1;
    _DAT_01c038f0 = 1;
  }
  iVar4 = _fopen("stderr.txt",&DAT_00587b65);
  if (iVar4 != 0) {
    _fclose();
    iVar4 = engine_dosio_cpp_setReadonlyAttribute_FUN_00565dd0("stderr.txt",0x1c0);
    if (iVar4 != 0) {
      _DAT_01cc4800 = "..\\core\\main.c";
      _DAT_01cc4804 = 0x28c;
      FUN_004c8440();
    }
  }
  _freopen("stderr.txt",&DAT_00587bb5,&DAT_005c18c8);
  DAT_006af628 = 3;
  FUN_0048ee80();
  FUN_004bdb80();
  _DAT_02dc9d6c = 2;
  engine_pod_cpp_CPod_init_FUN_004f8af0();
  FUN_00456750();
  FUN_00456750();
  FUN_004edfc0();
  core_mmx_c_detectCPUFeatures_FUN_004d9e70();
  if (_DAT_01c03948 == 0) {
    _DAT_01cc4800 = "..\\core\\main.c";
    _DAT_01cc4804 = 0x2b7;
    support_newmsg_cpp_getLocalizedString_FUN_004ee370();
    FUN_004c8440();
  }
  pcVar10 = acStack_728;
  engine_matrix_c_initializeTrigTables_FUN_004cc9d0();
  thunk_FUN_005458a0();
  FUN_00401010();
  wincore_winrun_cpp_calibrateCPUSpeed_FUN_005587f0();
  wincore_winrun_cpp_initJoystick_FUN_00559e20();
  iVar4 = wincore_wddvmem_cpp_setScreenResolution_FUN_00552e00(0x280,0x1e0,0x20);
  if (iVar4 == 0) {
    _DAT_01cc4800 = "..\\core\\main.c";
    _DAT_01cc4804 = 0x2c8;
    FUN_004c8440();
  }
  FUN_0044c560();
  if (_DAT_02de20a8 < 0x3c00000) {
    pcVar5 = (char *)support_newmsg_cpp_getLocalizedString_FUN_004ee370();
    pcVar8 = acStack_528;
    do {
      cVar2 = *pcVar5;
      *pcVar8 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar5[1];
      pcVar5 = pcVar5 + 2;
      pcVar8[1] = cVar2;
      pcVar8 = pcVar8 + 2;
    } while (cVar2 != '\0');
    _sprintf(acStack_228,&DAT_00587cb8,(double)((float)_DAT_02de20a8 * _DAT_00587e64));
    pcVar8 = acStack_228;
    iVar4 = -1;
    pcVar5 = acStack_528;
    do {
      pcVar9 = pcVar5;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar9 = pcVar5 + (uint)bVar11 * -2 + 1;
      cVar2 = *pcVar5;
      pcVar5 = pcVar9;
    } while (cVar2 != '\0');
    pcVar9 = pcVar9 + -1;
    do {
      cVar2 = *pcVar8;
      *pcVar9 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar8[1];
      pcVar8 = pcVar8 + 2;
      pcVar9[1] = cVar2;
      pcVar9 = pcVar9 + 2;
    } while (cVar2 != '\0');
    pcVar5 = (char *)support_newmsg_cpp_getLocalizedString_FUN_004ee370();
    iVar4 = -1;
    pcVar8 = acStack_528;
    do {
      pcVar9 = pcVar8;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar9 = pcVar8 + (uint)bVar11 * -2 + 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar9;
    } while (cVar2 != '\0');
    pcVar9 = pcVar9 + -1;
    do {
      cVar2 = *pcVar5;
      *pcVar9 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar5[1];
      pcVar5 = pcVar5 + 2;
      pcVar9[1] = cVar2;
      pcVar9 = pcVar9 + 2;
    } while (cVar2 != '\0');
    pcVar5 = &DAT_00587ccf;
    iVar4 = -1;
    pcVar8 = acStack_528;
    do {
      pcVar9 = pcVar8;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar9 = pcVar8 + (uint)bVar11 * -2 + 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar9;
    } while (cVar2 != '\0');
    pcVar9 = pcVar9 + -1;
    do {
      cVar2 = *pcVar5;
      *pcVar9 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar5[1];
      pcVar5 = pcVar5 + 2;
      pcVar9[1] = cVar2;
      pcVar9 = pcVar9 + 2;
    } while (cVar2 != '\0');
    pcVar5 = (char *)support_newmsg_cpp_getLocalizedString_FUN_004ee370();
    iVar4 = -1;
    pcVar8 = acStack_528;
    do {
      pcVar9 = pcVar8;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar9 = pcVar8 + (uint)bVar11 * -2 + 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar9;
    } while (cVar2 != '\0');
    pcVar9 = pcVar9 + -1;
    do {
      cVar2 = *pcVar5;
      *pcVar9 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar5[1];
      pcVar5 = pcVar5 + 2;
      pcVar9[1] = cVar2;
      pcVar9 = pcVar9 + 2;
    } while (cVar2 != '\0');
    pcVar5 = &DAT_00587d00;
    iVar4 = -1;
    pcVar8 = acStack_528;
    do {
      pcVar9 = pcVar8;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar9 = pcVar8 + (uint)bVar11 * -2 + 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar9;
    } while (cVar2 != '\0');
    pcVar9 = pcVar9 + -1;
    do {
      cVar2 = *pcVar5;
      *pcVar9 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar5[1];
      pcVar5 = pcVar5 + 2;
      pcVar9[1] = cVar2;
      pcVar9 = pcVar9 + 2;
    } while (cVar2 != '\0');
    pcVar5 = (char *)support_newmsg_cpp_getLocalizedString_FUN_004ee370();
    iVar4 = -1;
    pcVar8 = acStack_528;
    do {
      pcVar9 = pcVar8;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar9 = pcVar8 + (uint)bVar11 * -2 + 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar9;
    } while (cVar2 != '\0');
    pcVar9 = pcVar9 + -1;
    do {
      cVar2 = *pcVar5;
      *pcVar9 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar5[1];
      pcVar5 = pcVar5 + 2;
      pcVar9[1] = cVar2;
      pcVar9 = pcVar9 + 2;
    } while (cVar2 != '\0');
    pcVar5 = &DAT_00587d34;
    iVar4 = -1;
    pcVar8 = acStack_528;
    do {
      pcVar9 = pcVar8;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar9 = pcVar8 + (uint)bVar11 * -2 + 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar9;
    } while (cVar2 != '\0');
    pcVar9 = pcVar9 + -1;
    do {
      cVar2 = *pcVar5;
      *pcVar9 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar5[1];
      pcVar5 = pcVar5 + 2;
      pcVar9[1] = cVar2;
      pcVar9 = pcVar9 + 2;
    } while (cVar2 != '\0');
    pcVar5 = (char *)support_newmsg_cpp_getLocalizedString_FUN_004ee370();
    iVar4 = -1;
    pcVar8 = acStack_528;
    do {
      pcVar9 = pcVar8;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar9 = pcVar8 + (uint)bVar11 * -2 + 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar9;
    } while (cVar2 != '\0');
    pcVar9 = pcVar9 + -1;
    do {
      cVar2 = *pcVar5;
      *pcVar9 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar5[1];
      pcVar5 = pcVar5 + 2;
      pcVar9[1] = cVar2;
      pcVar9 = pcVar9 + 2;
    } while (cVar2 != '\0');
    pcVar5 = &DAT_00587d50;
    iVar4 = -1;
    pcVar8 = acStack_528;
    do {
      pcVar9 = pcVar8;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar9 = pcVar8 + (uint)bVar11 * -2 + 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar9;
    } while (cVar2 != '\0');
    pcVar9 = pcVar9 + -1;
    do {
      cVar2 = *pcVar5;
      *pcVar9 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar5[1];
      pcVar5 = pcVar5 + 2;
      pcVar9[1] = cVar2;
      pcVar9 = pcVar9 + 2;
    } while (cVar2 != '\0');
    pcVar5 = (char *)support_newmsg_cpp_getLocalizedString_FUN_004ee370();
    iVar4 = -1;
    pcVar8 = acStack_528;
    do {
      pcVar9 = pcVar8;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar9 = pcVar8 + (uint)bVar11 * -2 + 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar9;
    } while (cVar2 != '\0');
    pcVar9 = pcVar9 + -1;
    do {
      cVar2 = *pcVar5;
      *pcVar9 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar5[1];
      pcVar5 = pcVar5 + 2;
      pcVar9[1] = cVar2;
      pcVar9 = pcVar9 + 2;
    } while (cVar2 != '\0');
    FUN_0046fb40(0x01BCD074,acStack_528);
  }
  if (_DAT_02de20ac < 0xc800000) {
    pcVar8 = (char *)support_newmsg_cpp_getLocalizedString_FUN_004ee370();
    do {
      cVar2 = *pcVar8;
      *pcVar10 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar8[1];
      pcVar8 = pcVar8 + 2;
      pcVar10[1] = cVar2;
      pcVar10 = pcVar10 + 2;
    } while (cVar2 != '\0');
    _sprintf(acStack_128,&DAT_00587d8d,(double)((float)_DAT_02de20ac * _DAT_00587e64));
    pcVar10 = acStack_128;
    iVar4 = -1;
    pcVar8 = acStack_728;
    do {
      pcVar5 = pcVar8;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar8 + (uint)bVar11 * -2 + 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar5;
    } while (cVar2 != '\0');
    pcVar5 = pcVar5 + -1;
    do {
      cVar2 = *pcVar10;
      *pcVar5 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar10[1];
      pcVar10 = pcVar10 + 2;
      pcVar5[1] = cVar2;
      pcVar5 = pcVar5 + 2;
    } while (cVar2 != '\0');
    pcVar8 = (char *)support_newmsg_cpp_getLocalizedString_FUN_004ee370();
    iVar4 = -1;
    pcVar10 = acStack_728;
    do {
      pcVar5 = pcVar10;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar10 + (uint)bVar11 * -2 + 1;
      cVar2 = *pcVar10;
      pcVar10 = pcVar5;
    } while (cVar2 != '\0');
    pcVar5 = pcVar5 + -1;
    do {
      cVar2 = *pcVar8;
      *pcVar5 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar8[1];
      pcVar8 = pcVar8 + 2;
      pcVar5[1] = cVar2;
      pcVar5 = pcVar5 + 2;
    } while (cVar2 != '\0');
    pcVar8 = &DAT_00587dae;
    iVar4 = -1;
    pcVar10 = acStack_728;
    do {
      pcVar5 = pcVar10;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar10 + (uint)bVar11 * -2 + 1;
      cVar2 = *pcVar10;
      pcVar10 = pcVar5;
    } while (cVar2 != '\0');
    pcVar5 = pcVar5 + -1;
    do {
      cVar2 = *pcVar8;
      *pcVar5 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar8[1];
      pcVar8 = pcVar8 + 2;
      pcVar5[1] = cVar2;
      pcVar5 = pcVar5 + 2;
    } while (cVar2 != '\0');
    pcVar8 = (char *)support_newmsg_cpp_getLocalizedString_FUN_004ee370();
    iVar4 = -1;
    pcVar10 = acStack_728;
    do {
      pcVar5 = pcVar10;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar10 + (uint)bVar11 * -2 + 1;
      cVar2 = *pcVar10;
      pcVar10 = pcVar5;
    } while (cVar2 != '\0');
    pcVar5 = pcVar5 + -1;
    do {
      cVar2 = *pcVar8;
      *pcVar5 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar8[1];
      pcVar8 = pcVar8 + 2;
      pcVar5[1] = cVar2;
      pcVar5 = pcVar5 + 2;
    } while (cVar2 != '\0');
    pcVar8 = &DAT_00587ddd;
    iVar4 = -1;
    pcVar10 = acStack_728;
    do {
      pcVar5 = pcVar10;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar10 + (uint)bVar11 * -2 + 1;
      cVar2 = *pcVar10;
      pcVar10 = pcVar5;
    } while (cVar2 != '\0');
    pcVar5 = pcVar5 + -1;
    do {
      cVar2 = *pcVar8;
      *pcVar5 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar8[1];
      pcVar8 = pcVar8 + 2;
      pcVar5[1] = cVar2;
      pcVar5 = pcVar5 + 2;
    } while (cVar2 != '\0');
    pcVar8 = (char *)support_newmsg_cpp_getLocalizedString_FUN_004ee370();
    iVar4 = -1;
    pcVar10 = acStack_728;
    do {
      pcVar5 = pcVar10;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar10 + (uint)bVar11 * -2 + 1;
      cVar2 = *pcVar10;
      pcVar10 = pcVar5;
    } while (cVar2 != '\0');
    pcVar5 = pcVar5 + -1;
    do {
      cVar2 = *pcVar8;
      *pcVar5 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar8[1];
      pcVar8 = pcVar8 + 2;
      pcVar5[1] = cVar2;
      pcVar5 = pcVar5 + 2;
    } while (cVar2 != '\0');
    FUN_0046fb40(0x01BCD074,acStack_728);
  }
  puVar1 = 0x01C775EC;
  if (_DAT_01cae37c != 0) {
    *0x01C775EC = 0x280;
    _DAT_01cae37c = 0;
    puVar1[1] = 0x1e0;
    _DAT_02dc9d60 = 0;
    puVar1[2] = 0x20;
    core_menu_cpp_showCalibrationTest_FUN_004cffa0();
  }
  wincore_winvideo_cpp_FUN_0055a510("video","opening.avi");
  wincore_windll_cpp_clearScreen_FUN_0052ee70();
  pcVar8 = (char *)support_newmsg_cpp_getLocalizedString_FUN_004ee370();
  pcVar10 = acStack_328;
  do {
    cVar2 = *pcVar8;
    *pcVar10 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar8[1];
    pcVar8 = pcVar8 + 2;
    pcVar10[1] = cVar2;
    pcVar10 = pcVar10 + 2;
  } while (cVar2 != '\0');
  engine_font_cpp_CBitFont_getTextWidth_FUN_00492da0(_DAT_014b9900,acStack_328);
  engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(_DAT_014b9900,0x58);
  engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_0040e320();
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040e3c0(auStack_28,"fangs",0x280,0x1e0);
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040e710(auStack_28,0,0,0x8000);
  wincore_wddvmem_cpp_swapBuffers_FUN_00553910();
  engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040e340(auStack_28,0);
  core_sound_cpp_CSound_findAllSoundFiles_FUN_0052dd20();
  iVar4 = 0;
  FUN_004d7e00();
  iStack_14 = 0;
  do {
    puVar1 = (uint *)((int)&DAT_005ad51c + iVar4);
    iVar4 = iVar4 + 4;
    iVar6 = iStack_14 + 1;
    core_dfilter_cpp_CDemonFilter_init_FUN_0044c190
              (*puVar1,(float)iStack_14 * (float)_DAT_00587e68 + (float)_DAT_00587e68,0);
    iStack_14 = iVar6;
  } while (iVar6 < 8);
  iVar6 = 0;
  iVar4 = 0;
  do {
    **(uint **)((int)&DAT_005ad53c + iVar6) = 0x100;
    fVar3 = (float)_DAT_00587e70;
    *(uint *)(*(int *)((int)&DAT_005ad53c + iVar6) + 4) = 0x100;
    puVar1 = (uint *)((int)&DAT_005ad53c + iVar6);
    iVar6 = iVar6 + 4;
    iVar7 = iVar4 + 1;
    iStack_14 = iVar4;
    core_dfilter_cpp_CDemonFilter_init_FUN_0044c190
              (*puVar1,(float)iVar4 * fVar3 + (float)_DAT_00587e70,0);
    iVar4 = iVar7;
  } while (iVar7 < 4);
  engine_ncursfx_cpp_CMouse_load_FUN_004ee5a0();
  FUN_004940d0();
  core_netgame_cpp_CNetGame_init_FUN_004e9910();
  wincore_winrun_cpp_setRegistryStringValue_FUN_00559da0
            ("SOFTWARE\\Matrox\\PowerDesk\\Current Settings","Flip on VBlank",&DAT_00587e27);
  return;
}
