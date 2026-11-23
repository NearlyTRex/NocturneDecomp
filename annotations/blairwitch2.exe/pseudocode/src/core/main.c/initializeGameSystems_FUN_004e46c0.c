// Name: core_main.c_initializeGameSystems_FUN_004e46c0
// Address: 004e46c0
// Address Range: [[004e46c0, 004e4e1d]]
// Convention: __cdecl
// Signature: void __cdecl core_main_c_initializeGameSystems_FUN_004e46c0(int argc,char **argv)

#include "nocturne.h"

void __cdecl core_main_c_initializeGameSystems_FUN_004e46c0(int argc,char **argv)

{
  uint *puVar1;
  char cVar2;
  float fVar3;
  CGame *pCVar4;
  _FILE *file_handle;
  char *pcVar5;
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
  g_ProcessorType = 0;
  g_FullScreenQuadDepth = 0x10000;
  g_SystemInitialized = 1;
  file_handle = _fopen("stderr.txt","rb");
  if (file_handle != (_FILE *)0x0) {
    _fclose(file_handle);
    iVar6 = _chmod("stderr.txt",0x1c0);
    if (iVar6 != 0) {
      g_CurrentFilename = "..\\core\\main.c";
      g_CurrentLineNumber = 949;
      core_main_c_displayErrorAndQuit_FUN_004e4500("Please copy Nocturne to your hard drive");
    }
  }
  pcVar11 = &stack0xfffff8d8;
  _freopen("stderr.txt","wt",&g_FILE_0061ef88);
  core_flattn_cpp_doNothing_FUN_004a67a0();
  core_inivar_cpp_readIniData_FUN_004d8d60();
  g_INT_0264bbac = 2;
  engine_pod_cpp_CPod_init_FUN_0051b320(&g_CDemonPodPtr->base);
  engine_dosio_cpp_addGetFileInfoHook_FUN_00460930(engine_pod_cpp_findFileInPod_FUN_0051bfa0);
  engine_dosio_cpp_addGetFileInfoHook_FUN_00460930(engine_dosio_cpp_findFileNormally_FUN_004609e0);
  support_newmsg_cpp_readMessageFile_FUN_0050f9e0("msglist.txt");
  core_mmx_c_detectCPUFeatures_FUN_004fd490();
  if (g_MMXSupported == 0) {
    g_CurrentFilename = "..\\core\\main.c";
    g_CurrentLineNumber = 986;
    pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("This CPU does not have an MMX unit.")
    ;
    core_main_c_displayErrorAndQuit_FUN_004e4500(pcVar5);
  }
  core_marquee_cpp_initializeTrigTables_FUN_004e8620();
  engine_3d_c_initTextureCache_FUN_004037e0();
  engine_2d_c_initGraphicsSystem_FUN_00401010();
  wincore_winrun_cpp_calibrateCPUSpeed_FUN_0058e7a0();
  wincore_winrun_cpp_initJoystick_FUN_0058ffd0();
  iVar6 = wincore_wddvmem_cpp_setScreenResolution_FUN_00588a50(0x280,0x1e0,0x20);
  if (iVar6 == 0) {
    g_CurrentFilename = "..\\core\\main.c";
    g_CurrentLineNumber = 1010;
    core_main_c_displayErrorAndQuit_FUN_004e4500("Unable to set 640x480x32bpp.  Please make sure that you have a video card with a minimum of 2MB of RAM, and the latest DirectDraw video drivers.");
  }
  core_dfont_cpp_initFonts_FUN_00447ea0();
  if (g_TotalPhysicalMemory < 0x3c00000) {
    pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Windows is reporting ");
    pcVar5 = acStack_528;
    do {
      cVar2 = *pcVar7;
      *pcVar5 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar7[1];
      pcVar7 = pcVar7 + 2;
      pcVar5[1] = cVar2;
      pcVar5 = pcVar5 + 2;
    } while (cVar2 != '\0');
    _sprintf(acStack_328,"%.1f");
    pcVar5 = acStack_328;
    iVar6 = -1;
    pcVar7 = acStack_528;
    do {
      pcVar10 = pcVar7;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar10 = pcVar7 + (uint)bVar12 * -2 + 1;
      cVar2 = *pcVar7;
      pcVar7 = pcVar10;
    } while (cVar2 != '\0');
    pcVar10 = pcVar10 + -1;
    do {
      cVar2 = *pcVar5;
      *pcVar10 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar5[1];
      pcVar5 = pcVar5 + 2;
      pcVar10[1] = cVar2;
      pcVar10 = pcVar10 + 2;
    } while (cVar2 != '\0');
    pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("MB of system RAM.");
    iVar6 = -1;
    pcVar5 = acStack_528;
    do {
      pcVar10 = pcVar5;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar10 = pcVar5 + (uint)bVar12 * -2 + 1;
      cVar2 = *pcVar5;
      pcVar5 = pcVar10;
    } while (cVar2 != '\0');
    pcVar10 = pcVar10 + -1;
    do {
      cVar2 = *pcVar7;
      *pcVar10 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar7[1];
      pcVar7 = pcVar7 + 2;
      pcVar10[1] = cVar2;
      pcVar10 = pcVar10 + 2;
    } while (cVar2 != '\0');
    pcVar7 = "\n";
    iVar6 = -1;
    pcVar5 = acStack_528;
    do {
      pcVar10 = pcVar5;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar10 = pcVar5 + (uint)bVar12 * -2 + 1;
      cVar2 = *pcVar5;
      pcVar5 = pcVar10;
    } while (cVar2 != '\0');
    pcVar10 = pcVar10 + -1;
    do {
      cVar2 = *pcVar7;
      *pcVar10 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar7[1];
      pcVar7 = pcVar7 + 2;
      pcVar10[1] = cVar2;
      pcVar10 = pcVar10 + 2;
    } while (cVar2 != '\0');
    pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Nocturne requires at least 64MB of system RAM.")
    ;
    iVar6 = -1;
    pcVar5 = acStack_528;
    do {
      pcVar10 = pcVar5;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar10 = pcVar5 + (uint)bVar12 * -2 + 1;
      cVar2 = *pcVar5;
      pcVar5 = pcVar10;
    } while (cVar2 != '\0');
    pcVar10 = pcVar10 + -1;
    do {
      cVar2 = *pcVar7;
      *pcVar10 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar7[1];
      pcVar7 = pcVar7 + 2;
      pcVar10[1] = cVar2;
      pcVar10 = pcVar10 + 2;
    } while (cVar2 != '\0');
    pcVar7 = "\n";
    iVar6 = -1;
    pcVar5 = acStack_528;
    do {
      pcVar10 = pcVar5;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar10 = pcVar5 + (uint)bVar12 * -2 + 1;
      cVar2 = *pcVar5;
      pcVar5 = pcVar10;
    } while (cVar2 != '\0');
    pcVar10 = pcVar10 + -1;
    do {
      cVar2 = *pcVar7;
      *pcVar10 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar7[1];
      pcVar7 = pcVar7 + 2;
      pcVar10[1] = cVar2;
      pcVar10 = pcVar10 + 2;
    } while (cVar2 != '\0');
    pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("If you think you have at least 64MB of system RAM")
    ;
    iVar6 = -1;
    pcVar5 = acStack_528;
    do {
      pcVar10 = pcVar5;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar10 = pcVar5 + (uint)bVar12 * -2 + 1;
      cVar2 = *pcVar5;
      pcVar5 = pcVar10;
    } while (cVar2 != '\0');
    pcVar10 = pcVar10 + -1;
    do {
      cVar2 = *pcVar7;
      *pcVar10 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar7[1];
      pcVar7 = pcVar7 + 2;
      pcVar10[1] = cVar2;
      pcVar10 = pcVar10 + 2;
    } while (cVar2 != '\0');
    pcVar7 = "\n";
    iVar6 = -1;
    pcVar5 = acStack_528;
    do {
      pcVar10 = pcVar5;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar10 = pcVar5 + (uint)bVar12 * -2 + 1;
      cVar2 = *pcVar5;
      pcVar5 = pcVar10;
    } while (cVar2 != '\0');
    pcVar10 = pcVar10 + -1;
    do {
      cVar2 = *pcVar7;
      *pcVar10 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar7[1];
      pcVar7 = pcVar7 + 2;
      pcVar10[1] = cVar2;
      pcVar10 = pcVar10 + 2;
    } while (cVar2 != '\0');
    pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("then ignore this message.")
    ;
    iVar6 = -1;
    pcVar5 = acStack_528;
    do {
      pcVar10 = pcVar5;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar10 = pcVar5 + (uint)bVar12 * -2 + 1;
      cVar2 = *pcVar5;
      pcVar5 = pcVar10;
    } while (cVar2 != '\0');
    pcVar10 = pcVar10 + -1;
    do {
      cVar2 = *pcVar7;
      *pcVar10 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar7[1];
      pcVar7 = pcVar7 + 2;
      pcVar10[1] = cVar2;
      pcVar10 = pcVar10 + 2;
    } while (cVar2 != '\0');
    pcVar7 = "\n";
    iVar6 = -1;
    pcVar5 = acStack_528;
    do {
      pcVar10 = pcVar5;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar10 = pcVar5 + (uint)bVar12 * -2 + 1;
      cVar2 = *pcVar5;
      pcVar5 = pcVar10;
    } while (cVar2 != '\0');
    pcVar10 = pcVar10 + -1;
    do {
      cVar2 = *pcVar7;
      *pcVar10 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar7[1];
      pcVar7 = pcVar7 + 2;
      pcVar10[1] = cVar2;
      pcVar10 = pcVar10 + 2;
    } while (cVar2 != '\0');
    pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("See README.TXT for more information.");
    iVar6 = -1;
    pcVar5 = acStack_528;
    do {
      pcVar10 = pcVar5;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar10 = pcVar5 + (uint)bVar12 * -2 + 1;
      cVar2 = *pcVar5;
      pcVar5 = pcVar10;
    } while (cVar2 != '\0');
    pcVar10 = pcVar10 + -1;
    do {
      cVar2 = *pcVar7;
      *pcVar10 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar7[1];
      pcVar7 = pcVar7 + 2;
      pcVar10[1] = cVar2;
      pcVar10 = pcVar10 + 2;
    } while (cVar2 != '\0');
    shape_edittool_cpp_CEditorTools_showWarning_FUN_0047bdf0(g_CEditorToolsPtr,acStack_528);
  }
  if (g_INT_0266463c < 0xc800000) {
    pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Windows is reporting ");
    do {
      cVar2 = *pcVar5;
      *pcVar11 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar5[1];
      pcVar5 = pcVar5 + 2;
      pcVar11[1] = cVar2;
      pcVar11 = pcVar11 + 2;
    } while (cVar2 != '\0');
    _sprintf(acStack_128,"%.1f");
    pcVar11 = acStack_128;
    iVar6 = -1;
    pcVar5 = &stack0xfffff8d8;
    do {
      pcVar7 = pcVar5;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar7 = pcVar5 + (uint)bVar12 * -2 + 1;
      cVar2 = *pcVar5;
      pcVar5 = pcVar7;
    } while (cVar2 != '\0');
    pcVar7 = pcVar7 + -1;
    do {
      cVar2 = *pcVar11;
      *pcVar7 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar11[1];
      pcVar11 = pcVar11 + 2;
      pcVar7[1] = cVar2;
      pcVar7 = pcVar7 + 2;
    } while (cVar2 != '\0');
    pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("MB of free swap disk space.")
    ;
    iVar6 = -1;
    pcVar11 = &stack0xfffff8d8;
    do {
      pcVar7 = pcVar11;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar7 = pcVar11 + (uint)bVar12 * -2 + 1;
      cVar2 = *pcVar11;
      pcVar11 = pcVar7;
    } while (cVar2 != '\0');
    pcVar7 = pcVar7 + -1;
    do {
      cVar2 = *pcVar5;
      *pcVar7 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar5[1];
      pcVar5 = pcVar5 + 2;
      pcVar7[1] = cVar2;
      pcVar7 = pcVar7 + 2;
    } while (cVar2 != '\0');
    pcVar5 = "\n";
    iVar6 = -1;
    pcVar11 = &stack0xfffff8d8;
    do {
      pcVar7 = pcVar11;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar7 = pcVar11 + (uint)bVar12 * -2 + 1;
      cVar2 = *pcVar11;
      pcVar11 = pcVar7;
    } while (cVar2 != '\0');
    pcVar7 = pcVar7 + -1;
    do {
      cVar2 = *pcVar5;
      *pcVar7 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar5[1];
      pcVar5 = pcVar5 + 2;
      pcVar7[1] = cVar2;
      pcVar7 = pcVar7 + 2;
    } while (cVar2 != '\0');
    pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Nocturne runs best with at least 200MB free.");
    iVar6 = -1;
    pcVar11 = &stack0xfffff8d8;
    do {
      pcVar7 = pcVar11;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar7 = pcVar11 + (uint)bVar12 * -2 + 1;
      cVar2 = *pcVar11;
      pcVar11 = pcVar7;
    } while (cVar2 != '\0');
    pcVar7 = pcVar7 + -1;
    do {
      cVar2 = *pcVar5;
      *pcVar7 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar5[1];
      pcVar5 = pcVar5 + 2;
      pcVar7[1] = cVar2;
      pcVar7 = pcVar7 + 2;
    } while (cVar2 != '\0');
    pcVar5 = "\n";
    iVar6 = -1;
    pcVar11 = &stack0xfffff8d8;
    do {
      pcVar7 = pcVar11;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar7 = pcVar11 + (uint)bVar12 * -2 + 1;
      cVar2 = *pcVar11;
      pcVar11 = pcVar7;
    } while (cVar2 != '\0');
    pcVar7 = pcVar7 + -1;
    do {
      cVar2 = *pcVar5;
      *pcVar7 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar5[1];
      pcVar5 = pcVar5 + 2;
      pcVar7[1] = cVar2;
      pcVar7 = pcVar7 + 2;
    } while (cVar2 != '\0');
    pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("See README.TXT for more information.");
    iVar6 = -1;
    pcVar11 = &stack0xfffff8d8;
    do {
      pcVar7 = pcVar11;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar7 = pcVar11 + (uint)bVar12 * -2 + 1;
      cVar2 = *pcVar11;
      pcVar11 = pcVar7;
    } while (cVar2 != '\0');
    pcVar7 = pcVar7 + -1;
    do {
      cVar2 = *pcVar5;
      *pcVar7 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar5[1];
      pcVar5 = pcVar5 + 2;
      pcVar7[1] = cVar2;
      pcVar7 = pcVar7 + 2;
    } while (cVar2 != '\0');
    shape_edittool_cpp_CEditorTools_showWarning_FUN_0047bdf0(g_CEditorToolsPtr,&stack0xfffff8d8);
  }
  pCVar4 = g_CGamePtr;
  if (g_INT_01cee1a8 != 0) {
    g_INT_01cee1a8 = 0;
    g_CGamePtr->game_pixx = 0x280;
    pCVar4->game_pixy = 0x1e0;
    g_INT_0264bba0 = 0;
    pCVar4->game_bpp = 0x20;
    core_menu_cpp_showCalibrationTest_FUN_004ebe30();
  }
  wincore_winvideo_cpp_playMovie_FUN_00591190("video","opening.avi");
  engine_special_cpp_clearScreen_FUN_0055b1f0();
  engine_font_cpp_CBitFont_getTextWidth_FUN_004aaf00(g_ThemeFont,acStack_228);
  engine_font_cpp_CBitFont_getCharHeight_FUN_004ab560(g_ThemeFont,0x58);
  engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_0040d420(&CStack_28);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d5a0(&CStack_28,"test_logo",0x280,0x1e0);
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d900(&CStack_28,0,0,0xffff);
  wincore_wddvmem_cpp_swapBuffers_FUN_00589560();
  engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d440(&CStack_28,0);
  core_sound_cpp_CSound_findAllSoundFiles_FUN_0055a100(g_CSound_PTR_0061c068);
  iVar6 = 0;
  core_mission_cpp_CDemonMission_reset_FUN_004fb380(g_CDemonMission_PTR_00618170);
  iStack_14 = 0;
  do {
    puVar1 = (uint *)((int)&g_GlobalFilters + iVar6);
    iVar6 = iVar6 + 4;
    iVar8 = iStack_14 + 1;
    core_dfilter_cpp_CDemonFilter_init_FUN_00447ad0
              ((CDemonFilter *)*puVar1,
               (float)iStack_14 * (float)0.125 + (float)0.125,0);
    iStack_14 = iVar8;
  } while (iVar8 < 8);
  iVar8 = 0;
  iVar6 = 0;
  do {
    **(uint **)((int)&g_PlayerFilters + iVar8) = 0x100;
    fVar3 = (float)0.25;
    *(uint *)(*(int *)((int)&g_PlayerFilters + iVar8) + 4) = 0x100;
    puVar1 = (uint *)((int)&g_PlayerFilters + iVar8);
    iVar8 = iVar8 + 4;
    iVar9 = iVar6 + 1;
    iStack_14 = iVar6;
    core_dfilter_cpp_CDemonFilter_init_FUN_00447ad0
              ((CDemonFilter *)*puVar1,(float)iVar6 * fVar3 + (float)0.25,0);
    iVar6 = iVar9;
  } while (iVar9 < 4);
  engine_ncursfx_cpp_CMouse_load_FUN_005100b0(g_CMousePtr);
  core_netgame_cpp_CNetGame_init_FUN_0050b340(g_CNetGamePtr);
  core_bmppuzzl_cpp_resetAllPuzzles_FUN_0059abb0();
  wincore_winrun_cpp_setRegistryStringValue_FUN_0058ff40
            ("SOFTWARE\\Matrox\\PowerDesk\\Current Settings","Flip on VBlank","0");
  return;
}
