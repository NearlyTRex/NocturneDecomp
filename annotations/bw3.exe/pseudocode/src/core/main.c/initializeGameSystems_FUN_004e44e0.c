// Name: core_main.c_initializeGameSystems_FUN_004e44e0
// Address: 004e44e0
// Address Range: [[004e44e0, 004e4c6d]]
// Convention: __cdecl
// Signature: void __cdecl core_main_c_initializeGameSystems_FUN_004e44e0(int argc,char **argv)

#include "nocturne.h"

void __cdecl core_main_c_initializeGameSystems_FUN_004e44e0(int argc,char **argv)

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
  g_INT_01c6e2b0 = 0;
  g_INT_0060683c = 0x10000;
  g_INT_00606830 = 1;
  file_handle = _fopen("stderr.txt","rb");
  if (file_handle != (_FILE *)0x0) {
    _fclose(file_handle);
    iVar6 = _chmod("stderr.txt",0x1c0);
    if (iVar6 != 0) {
      g_CurrentFilename = "..\\core\\main.c";
      g_CurrentLineNumber = 952;
      core_main_c_displayErrorAndQuit_FUN_004e4330("Please copy Blair Witch 3 to your hard drive");
    }
  }
  pcVar11 = &stack0xfffff8d8;
  _freopen("stderr.txt","wt",&g_FILE_006076ac);
  core_flattn_cpp_doNothing_FUN_004ad4c0();
  core_inivar_cpp_readIniData_FUN_004d8e70();
  g_INT_02cf5fd8 = 2;
  engine_pod_cpp_CPod_init_FUN_00514600(&g_CDemonPodPtr->base);
  engine_dosio_cpp_addGetFileInfoHook_FUN_00465680(engine_dosio_cpp_findFileNormally_FUN_00465730);
  engine_dosio_cpp_addGetFileInfoHook_FUN_00465680(engine_pod_cpp_findFileInPod_FUN_00515280);
  support_newmsg_cpp_readMessageFile_FUN_005084c0("msglist.txt");
  core_mmx_c_detectCPUFeatures_FUN_004f7c30();
  if (g_MMXSupported == 0) {
    g_CurrentFilename = "..\\core\\main.c";
    g_CurrentLineNumber = 991;
    pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_00508960("This CPU does not have an MMX unit.")
    ;
    core_main_c_displayErrorAndQuit_FUN_004e4330(pcVar5);
  }
  core_main_c_initializeTrigTables_FUN_004e4d00();
  engine_3d_c_initTextureCache_FUN_00403790();
  engine_2d_c_initGraphicsSystem_FUN_00401010();
  wincore_winrun_cpp_calibrateCPUSpeed_FUN_00580460();
  wincore_winrun_cpp_initJoystick_FUN_00581c80();
  iVar6 = wincore_wddvmem_cpp_setScreenResolution_FUN_00579bb0(0x280,0x1e0,0x20);
  if (iVar6 == 0) {
    g_CurrentFilename = "..\\core\\main.c";
    g_CurrentLineNumber = 1015;
    core_main_c_displayErrorAndQuit_FUN_004e4330("Unable to set 640x480x32bpp.  Please make sure that you have a video card with a minimum of 2MB of RAM, and the latest DirectDraw video drivers.");
  }
  core_dfont_cpp_initFonts_FUN_00459f50();
  if (g_TotalPhysicalMemory < 0x3c00000) {
    pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Windows is reporting ");
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
    pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_00508960("MB of system RAM.");
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
    pcVar7 = &DAT_005c6d08;
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
    pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Blair Witch 3 requires at least 64MB of system RAM.")
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
    pcVar7 = &DAT_005c6d3e;
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
    pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_00508960("If you think you have at least 64MB of system RAM")
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
    pcVar7 = &DAT_005c6d72;
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
    pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_00508960("then ignore this message.")
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
    pcVar7 = &DAT_005c6d8e;
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
    pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_00508960("See README.TXT for more information.");
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
    shape_edittool_cpp_CEditorTools_showWarning_FUN_0047cee0(g_CEditorToolsPtr,acStack_528);
  }
  if (g_AvailableSwapSpace < 0xc800000) {
    pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Windows is reporting ");
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
    pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_00508960("MB of free swap disk space.")
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
    pcVar5 = &DAT_005c6dec;
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
    pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Blair Witch 3 runs best with at least 200MB free.");
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
    pcVar5 = &DAT_005c6e20;
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
    pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_00508960("See README.TXT for more information.");
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
    shape_edittool_cpp_CEditorTools_showWarning_FUN_0047cee0(g_CEditorToolsPtr,&stack0xfffff8d8);
  }
  pCVar4 = g_CGamePtr;
  if (g_INT_01d5bc7c != 0) {
    g_INT_01d5bc7c = 0;
    g_CGamePtr->game_pixx = 0x280;
    pCVar4->game_pixy = 0x1e0;
    g_INT_02cf5fcc = 0;
    pCVar4->game_bpp = 0x20;
    core_menu_cpp_showCalibrationTest_FUN_004e84d0();
  }
  wincore_winvideo_cpp_playMovie_FUN_00582eb0("video","opening.avi");
  engine_special_cpp_clearScreen_FUN_00560d70();
  pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Loading...");
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
  engine_font_cpp_CBitFont_getTextWidth_FUN_004b2a80(g_CBitFont_PTR_01549aa8,acStack_228);
  engine_font_cpp_CBitFont_getCharHeight_FUN_004b30f0(g_CBitFont_PTR_01549aa8,0x58);
  engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_0040d2e0(&CStack_28);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d460(&CStack_28,"fangs",0x280,0x1e0);
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d6f0(&CStack_28,0,0,0x8000);
  wincore_wddvmem_cpp_swapBuffers_FUN_0057a8a0();
  engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d300(&CStack_28,0);
  core_sound_cpp_CSound_findAllSoundFiles_FUN_0055fc60(g_CSound_PTR_006045f8);
  iVar6 = 0;
  core_mission_cpp_CDemonMission_reset_FUN_004f5aa0(g_CDemonMission_PTR_00600530);
  iStack_14 = 0;
  do {
    puVar1 = (uint *)((int)&g_GlobalFilters + iVar6);
    iVar6 = iVar6 + 4;
    iVar8 = iStack_14 + 1;
    core_dfilter_cpp_CDemonFilter_init_FUN_00459b80
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
    core_dfilter_cpp_CDemonFilter_init_FUN_00459b80
              ((CDemonFilter *)*puVar1,(float)iVar6 * fVar3 + (float)0.25,0);
    iVar6 = iVar9;
  } while (iVar9 < 4);
  engine_ncursfx_cpp_CMouse_load_FUN_00508b90(g_CMousePtr);
  core_netgame_cpp_CNetGame_init_FUN_00503e20(g_CNetGamePtr);
  core_bmppuzzl_cpp_resetAllPuzzles_FUN_004119e0();
  wincore_winrun_cpp_setRegistryStringValue_FUN_00581bf0
            ("SOFTWARE\\Matrox\\PowerDesk\\Current Settings","Flip on VBlank","0");
  return;
}
