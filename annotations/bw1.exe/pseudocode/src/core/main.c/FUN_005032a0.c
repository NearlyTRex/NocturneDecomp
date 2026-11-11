// Name: core_main.c_FUN_005032a0
// Address: 005032a0
// Address Range: [[005032a0, 00503a2d]]
// Convention: __cdecl
// Signature: void __cdecl core_main_c_FUN_005032a0(int argc,char **argv)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_main_c_FUN_005032a0(int argc,char **argv)

{
  uint *puVar1;
  char cVar2;
  float fVar3;
  CGame *pCVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
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
  _DAT_01c51d10 = 0;
  _DAT_006258dc = 0x10000;
  _DAT_006258d0 = 1;
  iVar5 = _fopen("stderr.txt");
  if (iVar5 != 0) {
    _fclose();
    iVar5 = _chmod("stderr.txt",0x1c0);
    if (iVar5 != 0) {
      _DAT_01d1d400 = "..\\core\\main.c";
      _DAT_01d1d404 = 0x3b8;
      core_main_c_FUN_005030e0();
    }
  }
  _freopen("stderr.txt","wt");
  unkafter_flattn_cpp_FUN_004bf770();
  core_inivar_cpp_readIniData_FUN_004f4f50();
  _DAT_02c8337c = 2;
  engine_pod_cpp_CPod_init_FUN_0053c8a0(&g_CDemonPodPtr->base);
  engine_dosio_cpp_addGetFileInfoHook_FUN_00478e40();
  engine_dosio_cpp_addGetFileInfoHook_FUN_00478e40();
  support_newmsg_cpp_readMessageFile_FUN_00530bf0("msglist.txt");
  core_mmx_c_detectCPUFeatures_FUN_0051c450();
  if (_DAT_01c51d00 == 0) {
    _DAT_01d1d400 = "..\\core\\main.c";
    _DAT_01d1d404 = 0x3dd;
    support_newmsg_cpp_getLocalizedString_FUN_00531090("This CPU does not have an MMX unit.");
    core_main_c_FUN_005030e0();
  }
  pcVar11 = &stack0xfffff8d8;
  unkafter_marquee_cpp_FUN_005072c0();
  engine_3d_c_initTextureCache_FUN_00403790();
  engine_2d_c_initGraphicsSystem_FUN_00401010();
  wincore_winrun_cpp_calibrateCPUSpeed_FUN_005b21e0();
  wincore_winrun_cpp_initJoystick_FUN_005b3aa0();
  iVar5 = wincore_wddvmem_cpp_FUN_005ac300(0x280,0x1e0);
  if (iVar5 == 0) {
    _DAT_01d1d400 = "..\\core\\main.c";
    _DAT_01d1d404 = 0x3f5;
    core_main_c_FUN_005030e0();
  }
  core_dfont_cpp_FUN_0045e000();
  if (_DAT_02c9be78 < 0x3c00000) {
    pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Windows is reporting ");
    pcVar9 = acStack_528;
    do {
      cVar2 = *pcVar6;
      *pcVar9 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar6[1];
      pcVar6 = pcVar6 + 2;
      pcVar9[1] = cVar2;
      pcVar9 = pcVar9 + 2;
    } while (cVar2 != '\0');
    _sprintf(acStack_328,"%.1f");
    pcVar9 = acStack_328;
    iVar5 = -1;
    pcVar6 = acStack_528;
    do {
      pcVar10 = pcVar6;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar10 = pcVar6 + (uint)bVar12 * -2 + 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar10;
    } while (cVar2 != '\0');
    pcVar10 = pcVar10 + -1;
    do {
      cVar2 = *pcVar9;
      *pcVar10 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar9[1];
      pcVar9 = pcVar9 + 2;
      pcVar10[1] = cVar2;
      pcVar10 = pcVar10 + 2;
    } while (cVar2 != '\0');
    pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_00531090("MB of system RAM.");
    iVar5 = -1;
    pcVar9 = acStack_528;
    do {
      pcVar10 = pcVar9;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar10 = pcVar9 + (uint)bVar12 * -2 + 1;
      cVar2 = *pcVar9;
      pcVar9 = pcVar10;
    } while (cVar2 != '\0');
    pcVar10 = pcVar10 + -1;
    do {
      cVar2 = *pcVar6;
      *pcVar10 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar6[1];
      pcVar6 = pcVar6 + 2;
      pcVar10[1] = cVar2;
      pcVar10 = pcVar10 + 2;
    } while (cVar2 != '\0');
    pcVar6 = "\n";
    iVar5 = -1;
    pcVar9 = acStack_528;
    do {
      pcVar10 = pcVar9;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar10 = pcVar9 + (uint)bVar12 * -2 + 1;
      cVar2 = *pcVar9;
      pcVar9 = pcVar10;
    } while (cVar2 != '\0');
    pcVar10 = pcVar10 + -1;
    do {
      cVar2 = *pcVar6;
      *pcVar10 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar6[1];
      pcVar6 = pcVar6 + 2;
      pcVar10[1] = cVar2;
      pcVar10 = pcVar10 + 2;
    } while (cVar2 != '\0');
    pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Nocturne requires at least 64MB of system RAM.")
    ;
    iVar5 = -1;
    pcVar9 = acStack_528;
    do {
      pcVar10 = pcVar9;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar10 = pcVar9 + (uint)bVar12 * -2 + 1;
      cVar2 = *pcVar9;
      pcVar9 = pcVar10;
    } while (cVar2 != '\0');
    pcVar10 = pcVar10 + -1;
    do {
      cVar2 = *pcVar6;
      *pcVar10 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar6[1];
      pcVar6 = pcVar6 + 2;
      pcVar10[1] = cVar2;
      pcVar10 = pcVar10 + 2;
    } while (cVar2 != '\0');
    pcVar6 = "\n";
    iVar5 = -1;
    pcVar9 = acStack_528;
    do {
      pcVar10 = pcVar9;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar10 = pcVar9 + (uint)bVar12 * -2 + 1;
      cVar2 = *pcVar9;
      pcVar9 = pcVar10;
    } while (cVar2 != '\0');
    pcVar10 = pcVar10 + -1;
    do {
      cVar2 = *pcVar6;
      *pcVar10 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar6[1];
      pcVar6 = pcVar6 + 2;
      pcVar10[1] = cVar2;
      pcVar10 = pcVar10 + 2;
    } while (cVar2 != '\0');
    pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_00531090("If you think you have at least 64MB of system RAM")
    ;
    iVar5 = -1;
    pcVar9 = acStack_528;
    do {
      pcVar10 = pcVar9;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar10 = pcVar9 + (uint)bVar12 * -2 + 1;
      cVar2 = *pcVar9;
      pcVar9 = pcVar10;
    } while (cVar2 != '\0');
    pcVar10 = pcVar10 + -1;
    do {
      cVar2 = *pcVar6;
      *pcVar10 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar6[1];
      pcVar6 = pcVar6 + 2;
      pcVar10[1] = cVar2;
      pcVar10 = pcVar10 + 2;
    } while (cVar2 != '\0');
    pcVar6 = "\n";
    iVar5 = -1;
    pcVar9 = acStack_528;
    do {
      pcVar10 = pcVar9;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar10 = pcVar9 + (uint)bVar12 * -2 + 1;
      cVar2 = *pcVar9;
      pcVar9 = pcVar10;
    } while (cVar2 != '\0');
    pcVar10 = pcVar10 + -1;
    do {
      cVar2 = *pcVar6;
      *pcVar10 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar6[1];
      pcVar6 = pcVar6 + 2;
      pcVar10[1] = cVar2;
      pcVar10 = pcVar10 + 2;
    } while (cVar2 != '\0');
    pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_00531090("then ignore this message.")
    ;
    iVar5 = -1;
    pcVar9 = acStack_528;
    do {
      pcVar10 = pcVar9;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar10 = pcVar9 + (uint)bVar12 * -2 + 1;
      cVar2 = *pcVar9;
      pcVar9 = pcVar10;
    } while (cVar2 != '\0');
    pcVar10 = pcVar10 + -1;
    do {
      cVar2 = *pcVar6;
      *pcVar10 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar6[1];
      pcVar6 = pcVar6 + 2;
      pcVar10[1] = cVar2;
      pcVar10 = pcVar10 + 2;
    } while (cVar2 != '\0');
    pcVar6 = "\n";
    iVar5 = -1;
    pcVar9 = acStack_528;
    do {
      pcVar10 = pcVar9;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar10 = pcVar9 + (uint)bVar12 * -2 + 1;
      cVar2 = *pcVar9;
      pcVar9 = pcVar10;
    } while (cVar2 != '\0');
    pcVar10 = pcVar10 + -1;
    do {
      cVar2 = *pcVar6;
      *pcVar10 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar6[1];
      pcVar6 = pcVar6 + 2;
      pcVar10[1] = cVar2;
      pcVar10 = pcVar10 + 2;
    } while (cVar2 != '\0');
    pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_00531090("See README.TXT for more information.");
    iVar5 = -1;
    pcVar9 = acStack_528;
    do {
      pcVar10 = pcVar9;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar10 = pcVar9 + (uint)bVar12 * -2 + 1;
      cVar2 = *pcVar9;
      pcVar9 = pcVar10;
    } while (cVar2 != '\0');
    pcVar10 = pcVar10 + -1;
    do {
      cVar2 = *pcVar6;
      *pcVar10 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar6[1];
      pcVar6 = pcVar6 + 2;
      pcVar10[1] = cVar2;
      pcVar10 = pcVar10 + 2;
    } while (cVar2 != '\0');
    shape_edittool_cpp_FUN_00494340(g_CEditorToolsPtr);
  }
  if (_DAT_02c9be7c < 0xc800000) {
    pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Windows is reporting ");
    do {
      cVar2 = *pcVar9;
      *pcVar11 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar9[1];
      pcVar9 = pcVar9 + 2;
      pcVar11[1] = cVar2;
      pcVar11 = pcVar11 + 2;
    } while (cVar2 != '\0');
    _sprintf(acStack_128,"%.1f");
    pcVar11 = acStack_128;
    iVar5 = -1;
    pcVar9 = &stack0xfffff8d8;
    do {
      pcVar6 = pcVar9;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar6 = pcVar9 + (uint)bVar12 * -2 + 1;
      cVar2 = *pcVar9;
      pcVar9 = pcVar6;
    } while (cVar2 != '\0');
    pcVar6 = pcVar6 + -1;
    do {
      cVar2 = *pcVar11;
      *pcVar6 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar11[1];
      pcVar11 = pcVar11 + 2;
      pcVar6[1] = cVar2;
      pcVar6 = pcVar6 + 2;
    } while (cVar2 != '\0');
    pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_00531090("MB of free swap disk space.")
    ;
    iVar5 = -1;
    pcVar11 = &stack0xfffff8d8;
    do {
      pcVar6 = pcVar11;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar6 = pcVar11 + (uint)bVar12 * -2 + 1;
      cVar2 = *pcVar11;
      pcVar11 = pcVar6;
    } while (cVar2 != '\0');
    pcVar6 = pcVar6 + -1;
    do {
      cVar2 = *pcVar9;
      *pcVar6 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar9[1];
      pcVar9 = pcVar9 + 2;
      pcVar6[1] = cVar2;
      pcVar6 = pcVar6 + 2;
    } while (cVar2 != '\0');
    pcVar9 = "\n";
    iVar5 = -1;
    pcVar11 = &stack0xfffff8d8;
    do {
      pcVar6 = pcVar11;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar6 = pcVar11 + (uint)bVar12 * -2 + 1;
      cVar2 = *pcVar11;
      pcVar11 = pcVar6;
    } while (cVar2 != '\0');
    pcVar6 = pcVar6 + -1;
    do {
      cVar2 = *pcVar9;
      *pcVar6 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar9[1];
      pcVar9 = pcVar9 + 2;
      pcVar6[1] = cVar2;
      pcVar6 = pcVar6 + 2;
    } while (cVar2 != '\0');
    pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Nocturne runs best with at least 200MB free.");
    iVar5 = -1;
    pcVar11 = &stack0xfffff8d8;
    do {
      pcVar6 = pcVar11;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar6 = pcVar11 + (uint)bVar12 * -2 + 1;
      cVar2 = *pcVar11;
      pcVar11 = pcVar6;
    } while (cVar2 != '\0');
    pcVar6 = pcVar6 + -1;
    do {
      cVar2 = *pcVar9;
      *pcVar6 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar9[1];
      pcVar9 = pcVar9 + 2;
      pcVar6[1] = cVar2;
      pcVar6 = pcVar6 + 2;
    } while (cVar2 != '\0');
    pcVar9 = "\n";
    iVar5 = -1;
    pcVar11 = &stack0xfffff8d8;
    do {
      pcVar6 = pcVar11;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar6 = pcVar11 + (uint)bVar12 * -2 + 1;
      cVar2 = *pcVar11;
      pcVar11 = pcVar6;
    } while (cVar2 != '\0');
    pcVar6 = pcVar6 + -1;
    do {
      cVar2 = *pcVar9;
      *pcVar6 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar9[1];
      pcVar9 = pcVar9 + 2;
      pcVar6[1] = cVar2;
      pcVar6 = pcVar6 + 2;
    } while (cVar2 != '\0');
    pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_00531090("See README.TXT for more information.");
    iVar5 = -1;
    pcVar11 = &stack0xfffff8d8;
    do {
      pcVar6 = pcVar11;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar6 = pcVar11 + (uint)bVar12 * -2 + 1;
      cVar2 = *pcVar11;
      pcVar11 = pcVar6;
    } while (cVar2 != '\0');
    pcVar6 = pcVar6 + -1;
    do {
      cVar2 = *pcVar9;
      *pcVar6 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar9[1];
      pcVar9 = pcVar9 + 2;
      pcVar6[1] = cVar2;
      pcVar6 = pcVar6 + 2;
    } while (cVar2 != '\0');
    shape_edittool_cpp_FUN_00494340(g_CEditorToolsPtr);
  }
  pCVar4 = g_CGamePtr;
  if (_DAT_01d06d68 != 0) {
    _DAT_01d06d68 = 0;
    g_CGamePtr->game_pixx = 0x280;
    pCVar4->game_pixy = 0x1e0;
    _DAT_02c83370 = 0;
    pCVar4->game_bpp = 0x20;
    core_menu_cpp_showCalibrationTest_FUN_0050a9c0();
  }
  wincore_winvideo_cpp_playMovie_FUN_005b4cd0("video","opening.avi");
  engine_special_cpp_clearScreen_FUN_0057dc40();
  pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Loading...");
  pcVar11 = acStack_228;
  do {
    cVar2 = *pcVar9;
    *pcVar11 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar9[1];
    pcVar9 = pcVar9 + 2;
    pcVar11[1] = cVar2;
    pcVar11 = pcVar11 + 2;
  } while (cVar2 != '\0');
  engine_font_cpp_CBitFont_getTextWidth_FUN_004c3ea0(_DAT_0152d244,acStack_228);
  engine_font_cpp_CBitFont_getCharHeight_FUN_004c4510(_DAT_0152d244,0x58);
  engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_0040d0a0(&CStack_28);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d220(&CStack_28,"fangs",0x280,0x1e0);
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d4b0(&CStack_28,0,0,0x8000);
  wincore_wddvmem_cpp_swapBuffers_FUN_005acff0();
  engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d0c0(&CStack_28,0);
  core_sound_cpp_FUN_0057cb30(0x02C82A60);
  iVar5 = 0;
  core_mission_cpp_FUN_0051a2d0();
  iStack_14 = 0;
  do {
    puVar1 = (uint *)((int)&g_GlobalFilters + iVar5);
    iVar5 = iVar5 + 4;
    iVar7 = iStack_14 + 1;
    core_dfilter_cpp_CDemonFilter_init_FUN_0045dc30
              ((CDemonFilter *)*puVar1,
               (float)iStack_14 * (float)_DAT_005e73d5 + (float)_DAT_005e73d5,0);
    iStack_14 = iVar7;
  } while (iVar7 < 8);
  iVar7 = 0;
  iVar5 = 0;
  do {
    **(uint **)((int)&g_PlayerFilters + iVar7) = 0x100;
    fVar3 = (float)_DAT_005e73dd;
    *(uint *)(*(int *)((int)&g_PlayerFilters + iVar7) + 4) = 0x100;
    puVar1 = (uint *)((int)&g_PlayerFilters + iVar7);
    iVar7 = iVar7 + 4;
    iVar8 = iVar5 + 1;
    iStack_14 = iVar5;
    core_dfilter_cpp_CDemonFilter_init_FUN_0045dc30
              ((CDemonFilter *)*puVar1,(float)iVar5 * fVar3 + (float)_DAT_005e73dd,0);
    iVar5 = iVar8;
  } while (iVar8 < 4);
  engine_ncursfx_cpp_CMouse_load_FUN_005312c0(g_CMousePtr);
  core_netgame_cpp_CNetGame_init_FUN_0052c520(g_CNetGamePtr);
  unkafter_alphabit_cpp_FUN_00415c20();
  wincore_winrun_cpp_setRegistryStringValue_FUN_005b3a10
            ("SOFTWARE\\Matrox\\PowerDesk\\Current Settings","Flip on VBlank","0");
  return;
}
