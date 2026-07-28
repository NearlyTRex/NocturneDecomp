// Name: core_main.c_FUN_004c85f0
// Address: 004c85f0
// Address Range: [[004c85f0, 004c8db1]]
// Convention: unknown
// Signature: void core_main_c_FUN_004c85f0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_main_c_FUN_004c85f0(void)

{
  uint *puVar1;
  char cVar2;
  float fVar3;
  char *pcVar4;
  _FILE *file_handle;
  DWORD DVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  char *pcVar11;
  byte bVar12;
  char acStack_528 [512];
  char acStack_328 [256];
  char acStack_228 [256];
  char acStack_128 [256];
  CAlphaBitmap CStack_28;
  int iStack_14;
  
  bVar12 = 0;
  _DAT_01c0399c = 0;
  _DAT_005c0f8c = 0x10000;
  _DAT_005c0f80 = 1;
  pcVar4 = getenv("PROCESSOR_LEVEL");
  if (pcVar4 == (char *)0x0) {
    DAT_006af628 = 3;
  }
  else {
    DAT_006af628 = 1;
    _DAT_01c038f0 = 1;
  }
  file_handle = _fopen("stderr.txt","rb");
  if (file_handle != (_FILE *)0x0) {
    _fclose(file_handle);
    DVar5 = engine_dosio_cpp_setReadonlyAttribute_FUN_00565dd0("stderr.txt",0x1c0);
    if (DVar5 != 0) {
      PTR_01cc4800 = "..\\core\\main.c";
      INT_01cc4804 = 0x28c;
      core_main_c_FUN_004c8440();
    }
  }
  pcVar4 = &stack0xfffff8d8;
  _freopen("stderr.txt","wt",(_FILE *)&DAT_005c18c8);
  DAT_006af628 = 3;
  xxx_unk_c_FUN_0048ee80();
  core_inivar_cpp_FUN_004bdb80();
  _DAT_02dc9d6c = 2;
  engine_pod_cpp_CPod_init_FUN_004f8af0(0x01E528D0);
  engine_dosio_c_FUN_00456750();
  engine_dosio_c_FUN_00456750();
  support_newmsg_cpp_FUN_004edfc0();
  core_mmx_c_detectCPUFeatures_FUN_004d9e70();
  if (_DAT_01c03948 == 0) {
    PTR_01cc4800 = "..\\core\\main.c";
    INT_01cc4804 = 0x2b7;
    support_newmsg_cpp_getLocalizedString_FUN_004ee370("This CPU does not have an MMX unit.");
    core_main_c_FUN_004c8440();
  }
  engine_matrix_c_initializeTrigTables_FUN_004cc9d0();
  engine_3d_c_FUN_005458a0();
  engine_2d_c_FUN_00401010();
  wincore_winrun_cpp_calibrateCPUSpeed_FUN_005587f0();
  wincore_winrun_cpp_initJoystick_FUN_00559e20();
  iVar6 = wincore_wddvmem_cpp_setScreenResolution_FUN_00552e00(0x280,0x1e0,0x20);
  if (iVar6 == 0) {
    PTR_01cc4800 = "..\\core\\main.c";
    INT_01cc4804 = 0x2c8;
    core_main_c_FUN_004c8440();
  }
  core_dfont_cpp_FUN_0044c560();
  if (_DAT_02de20a8 < 0x3c00000) {
    pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Windows is reporting ");
    pcVar10 = acStack_528;
    do {
      cVar2 = *pcVar7;
      *pcVar10 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar7[1];
      pcVar7 = pcVar7 + 2;
      pcVar10[1] = cVar2;
      pcVar10 = pcVar10 + 2;
    } while (cVar2 != '\0');
    _sprintf(acStack_228,"%.1f",(double)((float)_DAT_02de20a8 * 9.536743e-07f));
    pcVar10 = acStack_228;
    iVar6 = -1;
    pcVar7 = acStack_528;
    do {
      pcVar11 = pcVar7;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar11 = pcVar7 + (uint)bVar12 * -2 + 1;
      cVar2 = *pcVar7;
      pcVar7 = pcVar11;
    } while (cVar2 != '\0');
    pcVar11 = pcVar11 + -1;
    do {
      cVar2 = *pcVar10;
      *pcVar11 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar10[1];
      pcVar10 = pcVar10 + 2;
      pcVar11[1] = cVar2;
      pcVar11 = pcVar11 + 2;
    } while (cVar2 != '\0');
    pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("MB of system RAM.");
    iVar6 = -1;
    pcVar10 = acStack_528;
    do {
      pcVar11 = pcVar10;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar11 = pcVar10 + (uint)bVar12 * -2 + 1;
      cVar2 = *pcVar10;
      pcVar10 = pcVar11;
    } while (cVar2 != '\0');
    pcVar11 = pcVar11 + -1;
    do {
      cVar2 = *pcVar7;
      *pcVar11 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar7[1];
      pcVar7 = pcVar7 + 2;
      pcVar11[1] = cVar2;
      pcVar11 = pcVar11 + 2;
    } while (cVar2 != '\0');
    pcVar7 = "\n";
    iVar6 = -1;
    pcVar10 = acStack_528;
    do {
      pcVar11 = pcVar10;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar11 = pcVar10 + (uint)bVar12 * -2 + 1;
      cVar2 = *pcVar10;
      pcVar10 = pcVar11;
    } while (cVar2 != '\0');
    pcVar11 = pcVar11 + -1;
    do {
      cVar2 = *pcVar7;
      *pcVar11 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar7[1];
      pcVar7 = pcVar7 + 2;
      pcVar11[1] = cVar2;
      pcVar11 = pcVar11 + 2;
    } while (cVar2 != '\0');
    pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Nocturne requires at least 64MB of system RAM.")
    ;
    iVar6 = -1;
    pcVar10 = acStack_528;
    do {
      pcVar11 = pcVar10;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar11 = pcVar10 + (uint)bVar12 * -2 + 1;
      cVar2 = *pcVar10;
      pcVar10 = pcVar11;
    } while (cVar2 != '\0');
    pcVar11 = pcVar11 + -1;
    do {
      cVar2 = *pcVar7;
      *pcVar11 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar7[1];
      pcVar7 = pcVar7 + 2;
      pcVar11[1] = cVar2;
      pcVar11 = pcVar11 + 2;
    } while (cVar2 != '\0');
    pcVar7 = "\n";
    iVar6 = -1;
    pcVar10 = acStack_528;
    do {
      pcVar11 = pcVar10;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar11 = pcVar10 + (uint)bVar12 * -2 + 1;
      cVar2 = *pcVar10;
      pcVar10 = pcVar11;
    } while (cVar2 != '\0');
    pcVar11 = pcVar11 + -1;
    do {
      cVar2 = *pcVar7;
      *pcVar11 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar7[1];
      pcVar7 = pcVar7 + 2;
      pcVar11[1] = cVar2;
      pcVar11 = pcVar11 + 2;
    } while (cVar2 != '\0');
    pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("If you think you have at least 64MB of system RAM")
    ;
    iVar6 = -1;
    pcVar10 = acStack_528;
    do {
      pcVar11 = pcVar10;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar11 = pcVar10 + (uint)bVar12 * -2 + 1;
      cVar2 = *pcVar10;
      pcVar10 = pcVar11;
    } while (cVar2 != '\0');
    pcVar11 = pcVar11 + -1;
    do {
      cVar2 = *pcVar7;
      *pcVar11 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar7[1];
      pcVar7 = pcVar7 + 2;
      pcVar11[1] = cVar2;
      pcVar11 = pcVar11 + 2;
    } while (cVar2 != '\0');
    pcVar7 = "\n";
    iVar6 = -1;
    pcVar10 = acStack_528;
    do {
      pcVar11 = pcVar10;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar11 = pcVar10 + (uint)bVar12 * -2 + 1;
      cVar2 = *pcVar10;
      pcVar10 = pcVar11;
    } while (cVar2 != '\0');
    pcVar11 = pcVar11 + -1;
    do {
      cVar2 = *pcVar7;
      *pcVar11 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar7[1];
      pcVar7 = pcVar7 + 2;
      pcVar11[1] = cVar2;
      pcVar11 = pcVar11 + 2;
    } while (cVar2 != '\0');
    pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("then ignore this message.")
    ;
    iVar6 = -1;
    pcVar10 = acStack_528;
    do {
      pcVar11 = pcVar10;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar11 = pcVar10 + (uint)bVar12 * -2 + 1;
      cVar2 = *pcVar10;
      pcVar10 = pcVar11;
    } while (cVar2 != '\0');
    pcVar11 = pcVar11 + -1;
    do {
      cVar2 = *pcVar7;
      *pcVar11 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar7[1];
      pcVar7 = pcVar7 + 2;
      pcVar11[1] = cVar2;
      pcVar11 = pcVar11 + 2;
    } while (cVar2 != '\0');
    pcVar7 = "\n";
    iVar6 = -1;
    pcVar10 = acStack_528;
    do {
      pcVar11 = pcVar10;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar11 = pcVar10 + (uint)bVar12 * -2 + 1;
      cVar2 = *pcVar10;
      pcVar10 = pcVar11;
    } while (cVar2 != '\0');
    pcVar11 = pcVar11 + -1;
    do {
      cVar2 = *pcVar7;
      *pcVar11 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar7[1];
      pcVar7 = pcVar7 + 2;
      pcVar11[1] = cVar2;
      pcVar11 = pcVar11 + 2;
    } while (cVar2 != '\0');
    pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("See README.TXT for more information.");
    iVar6 = -1;
    pcVar10 = acStack_528;
    do {
      pcVar11 = pcVar10;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar11 = pcVar10 + (uint)bVar12 * -2 + 1;
      cVar2 = *pcVar10;
      pcVar10 = pcVar11;
    } while (cVar2 != '\0');
    pcVar11 = pcVar11 + -1;
    do {
      cVar2 = *pcVar7;
      *pcVar11 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar7[1];
      pcVar7 = pcVar7 + 2;
      pcVar11[1] = cVar2;
      pcVar11 = pcVar11 + 2;
    } while (cVar2 != '\0');
    shape_edittool_cpp_FUN_0046fb40(0x01BCD074);
  }
  if (_DAT_02de20ac < 0xc800000) {
    pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Windows is reporting ");
    do {
      cVar2 = *pcVar10;
      *pcVar4 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar10[1];
      pcVar10 = pcVar10 + 2;
      pcVar4[1] = cVar2;
      pcVar4 = pcVar4 + 2;
    } while (cVar2 != '\0');
    _sprintf(acStack_128,"%.1f",(double)((float)_DAT_02de20ac * 9.536743e-07f));
    pcVar4 = acStack_128;
    iVar6 = -1;
    pcVar10 = &stack0xfffff8d8;
    do {
      pcVar7 = pcVar10;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar7 = pcVar10 + (uint)bVar12 * -2 + 1;
      cVar2 = *pcVar10;
      pcVar10 = pcVar7;
    } while (cVar2 != '\0');
    pcVar7 = pcVar7 + -1;
    do {
      cVar2 = *pcVar4;
      *pcVar7 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar4[1];
      pcVar4 = pcVar4 + 2;
      pcVar7[1] = cVar2;
      pcVar7 = pcVar7 + 2;
    } while (cVar2 != '\0');
    pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                        ("MB of free swap disk space.");
    iVar6 = -1;
    pcVar4 = &stack0xfffff8d8;
    do {
      pcVar7 = pcVar4;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar7 = pcVar4 + (uint)bVar12 * -2 + 1;
      cVar2 = *pcVar4;
      pcVar4 = pcVar7;
    } while (cVar2 != '\0');
    pcVar7 = pcVar7 + -1;
    do {
      cVar2 = *pcVar10;
      *pcVar7 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar10[1];
      pcVar10 = pcVar10 + 2;
      pcVar7[1] = cVar2;
      pcVar7 = pcVar7 + 2;
    } while (cVar2 != '\0');
    pcVar10 = "\n";
    iVar6 = -1;
    pcVar4 = &stack0xfffff8d8;
    do {
      pcVar7 = pcVar4;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar7 = pcVar4 + (uint)bVar12 * -2 + 1;
      cVar2 = *pcVar4;
      pcVar4 = pcVar7;
    } while (cVar2 != '\0');
    pcVar7 = pcVar7 + -1;
    do {
      cVar2 = *pcVar10;
      *pcVar7 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar10[1];
      pcVar10 = pcVar10 + 2;
      pcVar7[1] = cVar2;
      pcVar7 = pcVar7 + 2;
    } while (cVar2 != '\0');
    pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Nocturne runs best with at least 200MB free.")
    ;
    iVar6 = -1;
    pcVar4 = &stack0xfffff8d8;
    do {
      pcVar7 = pcVar4;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar7 = pcVar4 + (uint)bVar12 * -2 + 1;
      cVar2 = *pcVar4;
      pcVar4 = pcVar7;
    } while (cVar2 != '\0');
    pcVar7 = pcVar7 + -1;
    do {
      cVar2 = *pcVar10;
      *pcVar7 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar10[1];
      pcVar10 = pcVar10 + 2;
      pcVar7[1] = cVar2;
      pcVar7 = pcVar7 + 2;
    } while (cVar2 != '\0');
    pcVar10 = "\n";
    iVar6 = -1;
    pcVar4 = &stack0xfffff8d8;
    do {
      pcVar7 = pcVar4;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar7 = pcVar4 + (uint)bVar12 * -2 + 1;
      cVar2 = *pcVar4;
      pcVar4 = pcVar7;
    } while (cVar2 != '\0');
    pcVar7 = pcVar7 + -1;
    do {
      cVar2 = *pcVar10;
      *pcVar7 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar10[1];
      pcVar10 = pcVar10 + 2;
      pcVar7[1] = cVar2;
      pcVar7 = pcVar7 + 2;
    } while (cVar2 != '\0');
    pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("See README.TXT for more information.")
    ;
    iVar6 = -1;
    pcVar4 = &stack0xfffff8d8;
    do {
      pcVar7 = pcVar4;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar7 = pcVar4 + (uint)bVar12 * -2 + 1;
      cVar2 = *pcVar4;
      pcVar4 = pcVar7;
    } while (cVar2 != '\0');
    pcVar7 = pcVar7 + -1;
    do {
      cVar2 = *pcVar10;
      *pcVar7 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar10[1];
      pcVar10 = pcVar10 + 2;
      pcVar7[1] = cVar2;
      pcVar7 = pcVar7 + 2;
    } while (cVar2 != '\0');
    shape_edittool_cpp_FUN_0046fb40(0x01BCD074);
  }
  puVar1 = 0x01C775EC;
  if (_DAT_01cae37c != 0) {
    *0x01C775EC = 0x280;
    _DAT_01cae37c = 0;
    puVar1[1] = 0x1e0;
    INT_02dc9d60 = 0;
    puVar1[2] = 0x20;
    core_menu_cpp_showCalibrationTest_FUN_004cffa0();
  }
  wincore_winvideo_cpp_FUN_0055a510("video");
  engine_special_cpp_clearScreen_FUN_0052ee70();
  pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Loading...");
  pcVar4 = acStack_328;
  do {
    cVar2 = *pcVar10;
    *pcVar4 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar10[1];
    pcVar10 = pcVar10 + 2;
    pcVar4[1] = cVar2;
    pcVar4 = pcVar4 + 2;
  } while (cVar2 != '\0');
  engine_font_cpp_CBitFont_getTextWidth_FUN_00492da0(_DAT_014b9900);
  engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(_DAT_014b9900,0x58);
  engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_0040e320(&CStack_28);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040e3c0(&CStack_28,"fangs",0x280,0x1e0);
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040e710(&CStack_28,0,0,0x8000);
  wincore_wddvmem_cpp_swapBuffers_FUN_00553910();
  engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040e340(&CStack_28,0);
  core_sound_cpp_CSound_findAllSoundFiles_FUN_0052dd20(0x02DC9450);
  iVar6 = 0;
  core_mission_cpp_FUN_004d7e00();
  iStack_14 = 0;
  do {
    puVar1 = (uint *)((int)&DAT_005ad51c + iVar6);
    iVar6 = iVar6 + 4;
    iVar8 = iStack_14 + 1;
    core_dfilter_cpp_CDemonFilter_init_FUN_0044c190
              ((CDemonFilter *)*puVar1,
               (float)iStack_14 * (float)0.125 + (float)0.125,0);
    iStack_14 = iVar8;
  } while (iVar8 < 8);
  iVar8 = 0;
  iVar6 = 0;
  do {
    **(uint **)((int)&DAT_005ad53c + iVar8) = 0x100;
    fVar3 = (float)0.25;
    *(uint *)(*(int *)((int)&DAT_005ad53c + iVar8) + 4) = 0x100;
    puVar1 = (uint *)((int)&DAT_005ad53c + iVar8);
    iVar8 = iVar8 + 4;
    iVar9 = iVar6 + 1;
    iStack_14 = iVar6;
    core_dfilter_cpp_CDemonFilter_init_FUN_0044c190
              ((CDemonFilter *)*puVar1,(float)iVar6 * fVar3 + (float)0.25,0);
    iVar6 = iVar9;
  } while (iVar9 < 4);
  engine_ncursfx_cpp_CMouse_load_FUN_004ee5a0(0x01D465C0);
  xxx_unk_c_FUN_004940d0();
  core_netgame_cpp_CNetGame_init_FUN_004e9910(0x01CEA280);
  wincore_winrun_cpp_setRegistryStringValue_FUN_00559da0
            ("SOFTWARE\\Matrox\\PowerDesk\\Current Settings","Flip on VBlank","0");
  return;
}
