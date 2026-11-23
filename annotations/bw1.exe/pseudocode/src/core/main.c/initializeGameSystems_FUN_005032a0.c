// Name: core_main.c_initializeGameSystems_FUN_005032a0
// Address: 005032a0
// Address Range: [[005032a0, 00503a2d]]
// Convention: __cdecl
// Signature: void __cdecl core_main_c_initializeGameSystems_FUN_005032a0(int argc,char **argv)

#include "nocturne.h"

void __cdecl core_main_c_initializeGameSystems_FUN_005032a0(int argc,char **argv)

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
  g_INT_006258d0 = 1;
  file_handle = _fopen("stderr.txt","rb");
  if (file_handle != (_FILE *)0x0) {
    _fclose(file_handle);
    iVar6 = _chmod("stderr.txt",0x1c0);
    if (iVar6 != 0) {
      g_CurrentFilename = "..\\core\\main.c";
      g_CurrentLineNumber = 952;
      core_main_c_displayErrorAndQuit_FUN_005030e0("Please copy Nocturne to your hard drive");
    }
  }
  pcVar11 = &stack0xfffff8d8;
  _freopen("stderr.txt","wt",&g_FILE_00626308);
  core_flattn_cpp_doNothing_FUN_004bf770();
  core_inivar_cpp_readIniData_FUN_004f4f50();
  g_INT_02c8337c = 2;
  engine_pod_cpp_CPod_init_FUN_0053c8a0(&g_CDemonPodPtr->base);
  engine_dosio_cpp_addGetFileInfoHook_FUN_00478e40(engine_pod_cpp_findFileInPod_FUN_0053d520);
  engine_dosio_cpp_addGetFileInfoHook_FUN_00478e40(engine_dosio_cpp_findFileNormally_FUN_00478ef0);
  support_newmsg_cpp_readMessageFile_FUN_00530bf0("msglist.txt");
  core_mmx_c_detectCPUFeatures_FUN_0051c450();
  if (g_MMXSupported == 0) {
    g_CurrentFilename = "..\\core\\main.c";
    g_CurrentLineNumber = 989;
    pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_00531090("This CPU does not have an MMX unit.")
    ;
    core_main_c_displayErrorAndQuit_FUN_005030e0(pcVar5);
  }
  core_marquee_cpp_initializeTrigTables_FUN_005072c0();
  engine_3d_c_initTextureCache_FUN_00403790();
  engine_2d_c_initGraphicsSystem_FUN_00401010();
  wincore_winrun_cpp_calibrateCPUSpeed_FUN_005b21e0();
  wincore_winrun_cpp_initJoystick_FUN_005b3aa0();
  iVar6 = wincore_wddvmem_cpp_setScreenResolution_FUN_005ac300(0x280,0x1e0,0x20);
  if (iVar6 == 0) {
    g_CurrentFilename = "..\\core\\main.c";
    g_CurrentLineNumber = 1013;
    core_main_c_displayErrorAndQuit_FUN_005030e0("Unable to set 640x480x32bpp.  Please make sure that you have a video card with a minimum of 2MB of RAM, and the latest DirectDraw video drivers.");
  }
  core_dfont_cpp_initFonts_FUN_0045e000();
  if (g_TotalPhysicalMemory < 0x3c00000) {
    pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Windows is reporting ");
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
    pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_00531090("MB of system RAM.");
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
    pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Nocturne requires at least 64MB of system RAM.")
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
    pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_00531090("If you think you have at least 64MB of system RAM")
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
    pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_00531090("then ignore this message.")
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
    pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_00531090("See README.TXT for more information.");
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
    shape_edittool_cpp_CEditorTools_showWarning_FUN_00494340(g_CEditorToolsPtr,acStack_528);
  }
  if (g_AvailableSwapSpace < 0xc800000) {
    pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Windows is reporting ");
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
    pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_00531090("MB of free swap disk space.")
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
    pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Nocturne runs best with at least 200MB free.");
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
    pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_00531090("See README.TXT for more information.");
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
    shape_edittool_cpp_CEditorTools_showWarning_FUN_00494340(g_CEditorToolsPtr,&stack0xfffff8d8);
  }
  pCVar4 = g_CGamePtr;
  if (g_INT_01d06d68 != 0) {
    g_INT_01d06d68 = 0;
    g_CGamePtr->game_pixx = 0x280;
    pCVar4->game_pixy = 0x1e0;
    g_INT_02c83370 = 0;
    pCVar4->game_bpp = 0x20;
    core_menu_cpp_showCalibrationTest_FUN_0050a9c0();
  }
  wincore_winvideo_cpp_playMovie_FUN_005b4cd0("video","opening.avi");
  engine_special_cpp_clearScreen_FUN_0057dc40();
  pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Loading...");
  pcVar11 = acStack_228;
  do {
    cVar2 = *pcVar5;
    *pcVar11 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar11[1] = cVar2;
    pcVar11 = pcVar11 + 2;
  } while (cVar2 != '\0');
  engine_font_cpp_CBitFont_getTextWidth_FUN_004c3ea0(g_ThemeFont,acStack_228);
  engine_font_cpp_CBitFont_getCharHeight_FUN_004c4510(g_ThemeFont,0x58);
  engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_0040d0a0(&CStack_28);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d220(&CStack_28,"fangs",0x280,0x1e0);
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d4b0(&CStack_28,0,0,0x8000);
  wincore_wddvmem_cpp_swapBuffers_FUN_005acff0();
  engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d0c0(&CStack_28,0);
  core_sound_cpp_CSound_findAllSoundFiles_FUN_0057cb30(g_CSound_PTR_006236b8);
  iVar6 = 0;
  core_mission_cpp_CDemonMission_reset_FUN_0051a2d0(g_CDemonMission_PTR_0061f650);
  iStack_14 = 0;
  do {
    puVar1 = (uint *)((int)&g_GlobalFilters + iVar6);
    iVar6 = iVar6 + 4;
    iVar8 = iStack_14 + 1;
    core_dfilter_cpp_CDemonFilter_init_FUN_0045dc30
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
    core_dfilter_cpp_CDemonFilter_init_FUN_0045dc30
              ((CDemonFilter *)*puVar1,(float)iVar6 * fVar3 + (float)0.25,0);
    iVar6 = iVar9;
  } while (iVar9 < 4);
  engine_ncursfx_cpp_CMouse_load_FUN_005312c0(g_CMousePtr);
  core_netgame_cpp_CNetGame_init_FUN_0052c520(g_CNetGamePtr);
  core_bmppuzzl_cpp_resetAllPuzzles_FUN_00415c20();
  wincore_winrun_cpp_setRegistryStringValue_FUN_005b3a10
            ("SOFTWARE\\Matrox\\PowerDesk\\Current Settings","Flip on VBlank","0");
  return;
}
