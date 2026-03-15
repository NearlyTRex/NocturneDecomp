// Name: core_main.c_initializeGameSystems_FUN_00507a60
// Address: 00507a60
// Address Range: [[00507a60, 00508244]]
// Convention: __cdecl
// Signature: void __cdecl core_main_c_initializeGameSystems_FUN_00507a60(void)

#include "nocturne.h"

void __cdecl core_main_c_initializeGameSystems_FUN_00507a60(void)

{
  uint *puVar1;
  char cVar2;
  float fVar3;
  float fVar4;
  CGame *pCVar5;
  char *pcVar6;
  _FILE *file_ptr;
  DWORD DVar7;
  char *pcVar8;
  int iVar9;
  char *pcVar10;
  int iVar11;
  char *pcVar12;
  byte bVar13;
  char acStack_728 [512];
  char low_memory_message [512];
  char temp_buffer [256];
  char loading_text [256];
  char memory_amount_str [256];
  CAlphaBitmap loading_bitmap;
  
  bVar13 = 0;
  g_ProcessorType = 0;
  g_SystemMemorySize = 0x10000;
  g_SystemInitialized = 1;
  pcVar6 = getenv("PROCESSOR_LEVEL");
  if (pcVar6 == (char *)0x0) {
    g_RenderingMode = 4;
  }
  else {
    g_RenderingMode = 1;
    g_SoftwareRenderingForced = 1;
  }
  file_ptr = shape_memdbg_cpp_openFile_FUN_0050f7a0
                       ("stderr.txt",(char *)0x0,"rb","..\\core\\main.c",0x3bc
                       );
  if (file_ptr != (_FILE *)0x0) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_ptr,"..\\core\\main.c",0x3be);
    DVar7 = engine_dosio_c_setReadonlyAttribute_FUN_00600c30("stderr.txt",0x1c0);
    if (DVar7 != 0) {
      g_CurrentFilename = "..\\core\\main.c";
      g_CurrentLineNumber = 0x3c0;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Please copy Nocturne to your hard drive");
    }
  }
  pcVar6 = acStack_728;
  _freopen("stderr.txt","wt",&g_StderrLogFile);
  g_RenderingMode = 4;
  core_flattn_cpp_doNothing_FUN_004cbce0();
  core_inivar_cpp_readIniData_FUN_004fbd90();
  g_PodSystemVersion = 2;
  engine_pod_cpp_CPod_init_FUN_00550c30((CPod *)g_CDemonPodPtr);
  engine_dosio_c_addGetFileInfoHook_FUN_00481710(engine_pod_cpp_findFileInPod_FUN_00551960);
  engine_dosio_c_addGetFileInfoHook_FUN_00481710(engine_dosio_c_findFileNormally_FUN_004817c0);
  support_newmsg_cpp_readMessageFile_FUN_00543e40("msglist.txt");
  core_mmx_c_detectCPUFeatures_FUN_00524f10();
  if (g_MMXSupported == 0) {
    g_CurrentFilename = "..\\core\\main.c";
    g_CurrentLineNumber = 0x3eb;
    pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("This CPU does not have an MMX unit.")
    ;
    core_main_c_displayErrorAndQuit_FUN_00506f10(pcVar8);
  }
  engine_matrix_c_initializeTrigTables_FUN_0050c530();
  wincore_wddvmem_cpp_initTextureCache_FUN_005dd760();
  engine_2d_c_initGraphicsSystem_FUN_00401010();
  wincore_winrun_cpp_calibrateCPUSpeed_FUN_005f2b80();
  wincore_winrun_cpp_initJoystick_FUN_005f4310();
  g_FullscreenMode = 0;
  iVar9 = wincore_wddvmem_cpp_setScreenResolution_FUN_005ecef0(0x280,0x1e0,0x20);
  if (iVar9 == 0) {
    g_CurrentFilename = "..\\core\\main.c";
    g_CurrentLineNumber = 0x403;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Unable to set 640x480x32bpp.  Please make sure that you have a video card with a minimum of 2MB of RAM, and the latest DirectDraw video drivers.");
  }
  core_dfont_cpp_initFonts_FUN_004709a0();
  if (g_TotalPhysicalMemory < 0x3c00000) {
    pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Windows is reporting ");
    pcVar8 = low_memory_message;
    do {
      cVar2 = *pcVar10;
      *pcVar8 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar10[1];
      pcVar10 = pcVar10 + 2;
      pcVar8[1] = cVar2;
      pcVar8 = pcVar8 + 2;
    } while (cVar2 != '\0');
    _sprintf
              (memory_amount_str,"%.1f",
               (double)((float)g_TotalPhysicalMemory * 9.536743e-07f));
    pcVar8 = memory_amount_str;
    iVar9 = -1;
    pcVar10 = low_memory_message;
    do {
      pcVar12 = pcVar10;
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pcVar12 = pcVar10 + (uint)bVar13 * -2 + 1;
      cVar2 = *pcVar10;
      pcVar10 = pcVar12;
    } while (cVar2 != '\0');
    pcVar12 = pcVar12 + -1;
    do {
      cVar2 = *pcVar8;
      *pcVar12 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar8[1];
      pcVar8 = pcVar8 + 2;
      pcVar12[1] = cVar2;
      pcVar12 = pcVar12 + 2;
    } while (cVar2 != '\0');
    pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("MB of system RAM.");
    iVar9 = -1;
    pcVar8 = low_memory_message;
    do {
      pcVar12 = pcVar8;
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pcVar12 = pcVar8 + (uint)bVar13 * -2 + 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar12;
    } while (cVar2 != '\0');
    pcVar12 = pcVar12 + -1;
    do {
      cVar2 = *pcVar10;
      *pcVar12 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar10[1];
      pcVar10 = pcVar10 + 2;
      pcVar12[1] = cVar2;
      pcVar12 = pcVar12 + 2;
    } while (cVar2 != '\0');
    pcVar10 = "\n";
    iVar9 = -1;
    pcVar8 = low_memory_message;
    do {
      pcVar12 = pcVar8;
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pcVar12 = pcVar8 + (uint)bVar13 * -2 + 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar12;
    } while (cVar2 != '\0');
    pcVar12 = pcVar12 + -1;
    do {
      cVar2 = *pcVar10;
      *pcVar12 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar10[1];
      pcVar10 = pcVar10 + 2;
      pcVar12[1] = cVar2;
      pcVar12 = pcVar12 + 2;
    } while (cVar2 != '\0');
    pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                        ("Nocturne requires at least 64MB of system RAM.");
    iVar9 = -1;
    pcVar8 = low_memory_message;
    do {
      pcVar12 = pcVar8;
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pcVar12 = pcVar8 + (uint)bVar13 * -2 + 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar12;
    } while (cVar2 != '\0');
    pcVar12 = pcVar12 + -1;
    do {
      cVar2 = *pcVar10;
      *pcVar12 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar10[1];
      pcVar10 = pcVar10 + 2;
      pcVar12[1] = cVar2;
      pcVar12 = pcVar12 + 2;
    } while (cVar2 != '\0');
    pcVar10 = "\n";
    iVar9 = -1;
    pcVar8 = low_memory_message;
    do {
      pcVar12 = pcVar8;
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pcVar12 = pcVar8 + (uint)bVar13 * -2 + 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar12;
    } while (cVar2 != '\0');
    pcVar12 = pcVar12 + -1;
    do {
      cVar2 = *pcVar10;
      *pcVar12 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar10[1];
      pcVar10 = pcVar10 + 2;
      pcVar12[1] = cVar2;
      pcVar12 = pcVar12 + 2;
    } while (cVar2 != '\0');
    pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                        ("If you think you have at least 64MB of system RAM");
    iVar9 = -1;
    pcVar8 = low_memory_message;
    do {
      pcVar12 = pcVar8;
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pcVar12 = pcVar8 + (uint)bVar13 * -2 + 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar12;
    } while (cVar2 != '\0');
    pcVar12 = pcVar12 + -1;
    do {
      cVar2 = *pcVar10;
      *pcVar12 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar10[1];
      pcVar10 = pcVar10 + 2;
      pcVar12[1] = cVar2;
      pcVar12 = pcVar12 + 2;
    } while (cVar2 != '\0');
    pcVar10 = "\n";
    iVar9 = -1;
    pcVar8 = low_memory_message;
    do {
      pcVar12 = pcVar8;
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pcVar12 = pcVar8 + (uint)bVar13 * -2 + 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar12;
    } while (cVar2 != '\0');
    pcVar12 = pcVar12 + -1;
    do {
      cVar2 = *pcVar10;
      *pcVar12 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar10[1];
      pcVar10 = pcVar10 + 2;
      pcVar12[1] = cVar2;
      pcVar12 = pcVar12 + 2;
    } while (cVar2 != '\0');
    pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                        ("then ignore this message.");
    iVar9 = -1;
    pcVar8 = low_memory_message;
    do {
      pcVar12 = pcVar8;
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pcVar12 = pcVar8 + (uint)bVar13 * -2 + 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar12;
    } while (cVar2 != '\0');
    pcVar12 = pcVar12 + -1;
    do {
      cVar2 = *pcVar10;
      *pcVar12 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar10[1];
      pcVar10 = pcVar10 + 2;
      pcVar12[1] = cVar2;
      pcVar12 = pcVar12 + 2;
    } while (cVar2 != '\0');
    pcVar10 = "\n";
    iVar9 = -1;
    pcVar8 = low_memory_message;
    do {
      pcVar12 = pcVar8;
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pcVar12 = pcVar8 + (uint)bVar13 * -2 + 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar12;
    } while (cVar2 != '\0');
    pcVar12 = pcVar12 + -1;
    do {
      cVar2 = *pcVar10;
      *pcVar12 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar10[1];
      pcVar10 = pcVar10 + 2;
      pcVar12[1] = cVar2;
      pcVar12 = pcVar12 + 2;
    } while (cVar2 != '\0');
    pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                        ("See README.TXT for more information.");
    iVar9 = -1;
    pcVar8 = low_memory_message;
    do {
      pcVar12 = pcVar8;
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pcVar12 = pcVar8 + (uint)bVar13 * -2 + 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar12;
    } while (cVar2 != '\0');
    pcVar12 = pcVar12 + -1;
    do {
      cVar2 = *pcVar10;
      *pcVar12 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar10[1];
      pcVar10 = pcVar10 + 2;
      pcVar12[1] = cVar2;
      pcVar12 = pcVar12 + 2;
    } while (cVar2 != '\0');
    shape_edittool_cpp_CEditorTools_showWarning_FUN_0049e6f0(g_CEditorToolsPtr,low_memory_message);
  }
  if (g_MessageFlags[0] < 0xc800000) {
    pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Windows is reporting ");
    do {
      cVar2 = *pcVar8;
      *pcVar6 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar8[1];
      pcVar8 = pcVar8 + 2;
      pcVar6[1] = cVar2;
      pcVar6 = pcVar6 + 2;
    } while (cVar2 != '\0');
    _sprintf
              (temp_buffer,"%.1f",
               (double)((float)g_MessageFlags[0] * 9.536743e-07f));
    pcVar6 = temp_buffer;
    iVar9 = -1;
    pcVar8 = acStack_728;
    do {
      pcVar10 = pcVar8;
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pcVar10 = pcVar8 + (uint)bVar13 * -2 + 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar10;
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
    pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("MB of free swap disk space.")
    ;
    iVar9 = -1;
    pcVar6 = acStack_728;
    do {
      pcVar10 = pcVar6;
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pcVar10 = pcVar6 + (uint)bVar13 * -2 + 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar10;
    } while (cVar2 != '\0');
    pcVar10 = pcVar10 + -1;
    do {
      cVar2 = *pcVar8;
      *pcVar10 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar8[1];
      pcVar8 = pcVar8 + 2;
      pcVar10[1] = cVar2;
      pcVar10 = pcVar10 + 2;
    } while (cVar2 != '\0');
    pcVar8 = "\n";
    iVar9 = -1;
    pcVar6 = acStack_728;
    do {
      pcVar10 = pcVar6;
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pcVar10 = pcVar6 + (uint)bVar13 * -2 + 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar10;
    } while (cVar2 != '\0');
    pcVar10 = pcVar10 + -1;
    do {
      cVar2 = *pcVar8;
      *pcVar10 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar8[1];
      pcVar8 = pcVar8 + 2;
      pcVar10[1] = cVar2;
      pcVar10 = pcVar10 + 2;
    } while (cVar2 != '\0');
    pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Nocturne runs best with at least 200MB free.")
    ;
    iVar9 = -1;
    pcVar6 = acStack_728;
    do {
      pcVar10 = pcVar6;
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pcVar10 = pcVar6 + (uint)bVar13 * -2 + 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar10;
    } while (cVar2 != '\0');
    pcVar10 = pcVar10 + -1;
    do {
      cVar2 = *pcVar8;
      *pcVar10 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar8[1];
      pcVar8 = pcVar8 + 2;
      pcVar10[1] = cVar2;
      pcVar10 = pcVar10 + 2;
    } while (cVar2 != '\0');
    pcVar8 = "\n";
    iVar9 = -1;
    pcVar6 = acStack_728;
    do {
      pcVar10 = pcVar6;
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pcVar10 = pcVar6 + (uint)bVar13 * -2 + 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar10;
    } while (cVar2 != '\0');
    pcVar10 = pcVar10 + -1;
    do {
      cVar2 = *pcVar8;
      *pcVar10 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar8[1];
      pcVar8 = pcVar8 + 2;
      pcVar10[1] = cVar2;
      pcVar10 = pcVar10 + 2;
    } while (cVar2 != '\0');
    pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("See README.TXT for more information.")
    ;
    iVar9 = -1;
    pcVar6 = acStack_728;
    do {
      pcVar10 = pcVar6;
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pcVar10 = pcVar6 + (uint)bVar13 * -2 + 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar10;
    } while (cVar2 != '\0');
    pcVar10 = pcVar10 + -1;
    do {
      cVar2 = *pcVar8;
      *pcVar10 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar8[1];
      pcVar8 = pcVar8 + 2;
      pcVar10[1] = cVar2;
      pcVar10 = pcVar10 + 2;
    } while (cVar2 != '\0');
    shape_edittool_cpp_CEditorTools_showWarning_FUN_0049e6f0(g_CEditorToolsPtr,acStack_728);
  }
  pCVar5 = g_CGamePtr;
  if (g_SkipIntroVideo != 0) {
    g_CGamePtr->game_pixx = GAME_WINDOW_RESOLUTION_640;
    g_SkipIntroVideo = 0;
    pCVar5->game_pixy = GAME_WINDOW_RESOLUTION_480;
    g_FullscreenMode = 0;
    pCVar5->game_bpp = 0x20;
    core_menu_cpp_showCalibrationTest_FUN_00510ba0();
  }
  wincore_winvideo_cpp_playMovie_FUN_005f4a00("video","opening.avi");
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Loading...");
  pcVar6 = loading_text;
  do {
    cVar2 = *pcVar8;
    *pcVar6 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar8[1];
    pcVar8 = pcVar8 + 2;
    pcVar6[1] = cVar2;
    pcVar6 = pcVar6 + 2;
  } while (cVar2 != '\0');
  engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80(g_ThemeFont,loading_text);
  engine_font_cpp_CBitFont_getCharHeight_FUN_004d01d0(g_ThemeFont,0x58);
  engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_00410520(&loading_bitmap);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_004105d0(&loading_bitmap,"fangs",0x280,0x1e0);
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_00410950(&loading_bitmap,0,0,0x8000);
  wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_00410540(&loading_bitmap,0);
  core_sound_cpp_CSound_findAllSoundFiles_FUN_005b2d00(g_CSoundPtr);
  iVar9 = 0;
  core_mission_cpp_CDemonMission_reset_FUN_00522c80(g_CDemonMissionPtr);
  iVar11 = 0;
  do {
    fVar3 = (float)iVar9;
    puVar1 = (uint *)((int)g_GlobalFilters + iVar11);
    iVar11 = iVar11 + 4;
    iVar9 = iVar9 + 1;
    core_dfilter_cpp_CDemonFilter_init_FUN_004705a0
              ((CDemonFilter *)*puVar1,fVar3 * (float)0.125 + (float)0.125,0);
  } while (iVar9 < 8);
  iVar11 = 0;
  iVar9 = 0;
  do {
    fVar4 = (float)iVar11;
    **(uint **)((int)g_PlayerFilters + iVar9) = 0x100;
    fVar3 = (float)0.25;
    *(uint *)(*(int *)((int)g_PlayerFilters + iVar9) + 4) = 0x100;
    puVar1 = (uint *)((int)g_PlayerFilters + iVar9);
    iVar9 = iVar9 + 4;
    iVar11 = iVar11 + 1;
    core_dfilter_cpp_CDemonFilter_init_FUN_004705a0
              ((CDemonFilter *)*puVar1,fVar4 * fVar3 + (float)0.25,0);
  } while (iVar11 < 4);
  engine_ncursfx_cpp_CMouse_load_FUN_00544420(g_CMousePtr);
  core_netgame_cpp_CNetGame_init_FUN_0053f780(g_CNetGamePtr);
  wincore_winrun_cpp_setRegistryStringValue_FUN_005f4290
            ("SOFTWARE\\Matrox\\PowerDesk\\Current Settings","Flip on VBlank","0");
  shape_memdbg_cpp_SMemHead_checkAllMemory_FUN_0050efe0("..\\core\\main.c",0x49b);
  return;
}
