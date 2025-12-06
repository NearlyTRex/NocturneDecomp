// Name: core_main.c_initializeGameSystems_FUN_00507a60
// Address: 00507a60
// Address Range: [[00507a60, 00508244]]
// Convention: __cdecl
// Signature: void core_main.c_initializeGameSystems_FUN_00507a60(void)

#include "nocturne.h"

void __cdecl core_main_c_initializeGameSystems_FUN_00507a60(void)

{
  uint *puVar1;
  char cVar2;
  float fVar3;
  CGame *pCVar4;
  char *pcVar5;
  FILE *file_ptr;
  DWORD DVar6;
  int iVar7;
  char *pcVar8;
  int iVar9;
  BADSPACEBASE *in_ESP;
  int iVar10;
  char *pcVar11;
  byte bVar12;
  int iStack00000098;
  char low_memory_message [512];
  char temp_buffer [256];
  char loading_text [256];
  char memory_amount_str [256];
  CAlphaBitmap loading_bitmap;
  
  bVar12 = 0;
  g_ProcessorType = 0;
  g_SystemMemorySize = 0x10000;
  g_SystemInitialized = 1;
  pcVar5 = crt_env_c_getenv_FUN_006013f0("PROCESSOR_LEVEL");
  if (pcVar5 == (char *)0x0) {
    g_RenderingMode = 4;
  }
  else {
    g_RenderingMode = 1;
    g_SoftwareRenderingForced = 1;
  }
  file_ptr = shape_memdbg_cpp_openFile_FUN_0050f7a0
                       ("stderr.txt",(char *)0x0,"rb","..\\core\\main.c",0x3bc
                       );
  if (file_ptr != (FILE *)0x0) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_ptr,"..\\core\\main.c",0x3be);
    DVar6 = crt_file_c_setReadonlyAttribute_FUN_00600c30("stderr.txt",0x1c0);
    if (DVar6 != 0) {
      g_CurrentFilename = "..\\core\\main.c";
      g_CurrentLineNumber = 0x3c0;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Please copy Nocturne to your hard drive");
    }
  }
  crt_stdio_c_fopenThreadSafe_FUN_00601b14("stderr.txt","wt",&g_StderrLogFile);
  g_RenderingMode = 4;
  core_flamegun_cpp_initializeFlamegun_FUN_004cbce0();
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
    pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("This CPU does not have an MMX unit.")
    ;
    core_main_c_displayErrorAndQuit_FUN_00506f10(pcVar5);
  }
  engine_matrix_c_initializeTrigTables_FUN_0050c530();
  wincore_wddvmem_cpp_initTextureCache_FUN_005dd760();
  engine_2d_c_initGraphicsSystem_FUN_00401010();
  wincore_winrun_cpp_calibrateCPUSpeed_FUN_005f2b80();
  wincore_winrun_cpp_initJoystick_FUN_005f4310();
  g_FullscreenMode = 0;
  iVar7 = wincore_wddvmem_cpp_setScreenResolution_FUN_005ecef0(0x280,0x1e0,0x20);
  if (iVar7 == 0) {
    g_CurrentFilename = "..\\core\\main.c";
    g_CurrentLineNumber = 0x403;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Unable to set 640x480x32bpp.  Please make sure that you have a video card with a minimum of 2MB of RAM, and the latest DirectDraw video drivers.");
  }
  core_dfont_cpp_initFonts_FUN_004709a0();
  if (g_TotalPhysicalMemory < 0x3c00000) {
    pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Windows is reporting ");
    pcVar5 = low_memory_message + 0x60;
    do {
      cVar2 = *pcVar8;
      *pcVar5 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar8[1];
      pcVar8 = pcVar8 + 2;
      pcVar5[1] = cVar2;
      pcVar5 = pcVar5 + 2;
    } while (cVar2 != '\0');
    crt_stdio_c_sprintf_FUN_005fdbd0
              (memory_amount_str + 0x60,"%.1f",
               (double)((float)g_TotalPhysicalMemory * 9.536743e-07f));
    pcVar5 = memory_amount_str + 100;
    iVar7 = -1;
    pcVar8 = low_memory_message + 100;
    do {
      pcVar11 = pcVar8;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar11 = pcVar8 + (uint)bVar12 * -2 + 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar11;
    } while (cVar2 != '\0');
    pcVar11 = pcVar11 + -1;
    do {
      cVar2 = *pcVar5;
      *pcVar11 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar5[1];
      pcVar5 = pcVar5 + 2;
      pcVar11[1] = cVar2;
      pcVar11 = pcVar11 + 2;
    } while (cVar2 != '\0');
    pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("MB of system RAM.");
    iVar7 = -1;
    pcVar5 = low_memory_message + 0x68;
    do {
      pcVar11 = pcVar5;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar11 = pcVar5 + (uint)bVar12 * -2 + 1;
      cVar2 = *pcVar5;
      pcVar5 = pcVar11;
    } while (cVar2 != '\0');
    pcVar11 = pcVar11 + -1;
    do {
      cVar2 = *pcVar8;
      *pcVar11 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar8[1];
      pcVar8 = pcVar8 + 2;
      pcVar11[1] = cVar2;
      pcVar11 = pcVar11 + 2;
    } while (cVar2 != '\0');
    pcVar8 = &DAT_00635428;
    iVar7 = -1;
    pcVar5 = low_memory_message + 0x68;
    do {
      pcVar11 = pcVar5;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar11 = pcVar5 + (uint)bVar12 * -2 + 1;
      cVar2 = *pcVar5;
      pcVar5 = pcVar11;
    } while (cVar2 != '\0');
    pcVar11 = pcVar11 + -1;
    do {
      cVar2 = *pcVar8;
      *pcVar11 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar8[1];
      pcVar8 = pcVar8 + 2;
      pcVar11[1] = cVar2;
      pcVar11 = pcVar11 + 2;
    } while (cVar2 != '\0');
    pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Nocturne requires at least 64MB of system RAM.")
    ;
    iVar7 = -1;
    pcVar5 = low_memory_message + 0x6c;
    do {
      pcVar11 = pcVar5;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar11 = pcVar5 + (uint)bVar12 * -2 + 1;
      cVar2 = *pcVar5;
      pcVar5 = pcVar11;
    } while (cVar2 != '\0');
    pcVar11 = pcVar11 + -1;
    do {
      cVar2 = *pcVar8;
      *pcVar11 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar8[1];
      pcVar8 = pcVar8 + 2;
      pcVar11[1] = cVar2;
      pcVar11 = pcVar11 + 2;
    } while (cVar2 != '\0');
    pcVar8 = &DAT_00635459;
    iVar7 = -1;
    pcVar5 = low_memory_message + 0x6c;
    do {
      pcVar11 = pcVar5;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar11 = pcVar5 + (uint)bVar12 * -2 + 1;
      cVar2 = *pcVar5;
      pcVar5 = pcVar11;
    } while (cVar2 != '\0');
    pcVar11 = pcVar11 + -1;
    do {
      cVar2 = *pcVar8;
      *pcVar11 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar8[1];
      pcVar8 = pcVar8 + 2;
      pcVar11[1] = cVar2;
      pcVar11 = pcVar11 + 2;
    } while (cVar2 != '\0');
    pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("If you think you have at least 64MB of system RAM")
    ;
    iVar7 = -1;
    pcVar5 = low_memory_message + 0x70;
    do {
      pcVar11 = pcVar5;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar11 = pcVar5 + (uint)bVar12 * -2 + 1;
      cVar2 = *pcVar5;
      pcVar5 = pcVar11;
    } while (cVar2 != '\0');
    pcVar11 = pcVar11 + -1;
    do {
      cVar2 = *pcVar8;
      *pcVar11 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar8[1];
      pcVar8 = pcVar8 + 2;
      pcVar11[1] = cVar2;
      pcVar11 = pcVar11 + 2;
    } while (cVar2 != '\0');
    pcVar8 = &DAT_0063548d;
    iVar7 = -1;
    pcVar5 = low_memory_message + 0x70;
    do {
      pcVar11 = pcVar5;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar11 = pcVar5 + (uint)bVar12 * -2 + 1;
      cVar2 = *pcVar5;
      pcVar5 = pcVar11;
    } while (cVar2 != '\0');
    pcVar11 = pcVar11 + -1;
    do {
      cVar2 = *pcVar8;
      *pcVar11 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar8[1];
      pcVar8 = pcVar8 + 2;
      pcVar11[1] = cVar2;
      pcVar11 = pcVar11 + 2;
    } while (cVar2 != '\0');
    pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("then ignore this message.")
    ;
    iVar7 = -1;
    pcVar5 = low_memory_message + 0x74;
    do {
      pcVar11 = pcVar5;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar11 = pcVar5 + (uint)bVar12 * -2 + 1;
      cVar2 = *pcVar5;
      pcVar5 = pcVar11;
    } while (cVar2 != '\0');
    pcVar11 = pcVar11 + -1;
    do {
      cVar2 = *pcVar8;
      *pcVar11 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar8[1];
      pcVar8 = pcVar8 + 2;
      pcVar11[1] = cVar2;
      pcVar11 = pcVar11 + 2;
    } while (cVar2 != '\0');
    pcVar8 = &DAT_006354a9;
    iVar7 = -1;
    pcVar5 = low_memory_message + 0x74;
    do {
      pcVar11 = pcVar5;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar11 = pcVar5 + (uint)bVar12 * -2 + 1;
      cVar2 = *pcVar5;
      pcVar5 = pcVar11;
    } while (cVar2 != '\0');
    pcVar11 = pcVar11 + -1;
    do {
      cVar2 = *pcVar8;
      *pcVar11 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar8[1];
      pcVar8 = pcVar8 + 2;
      pcVar11[1] = cVar2;
      pcVar11 = pcVar11 + 2;
    } while (cVar2 != '\0');
    pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("See README.TXT for more information.")
    ;
    iVar7 = -1;
    pcVar5 = low_memory_message + 0x78;
    do {
      pcVar11 = pcVar5;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar11 = pcVar5 + (uint)bVar12 * -2 + 1;
      cVar2 = *pcVar5;
      pcVar5 = pcVar11;
    } while (cVar2 != '\0');
    pcVar11 = pcVar11 + -1;
    do {
      cVar2 = *pcVar8;
      *pcVar11 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar8[1];
      pcVar8 = pcVar8 + 2;
      pcVar11[1] = cVar2;
      pcVar11 = pcVar11 + 2;
    } while (cVar2 != '\0');
    shape_edittool_cpp_CEditorTools_showWarning_FUN_0049e6f0
              (g_CEditorToolsPtr,low_memory_message + 0x78);
  }
  if (g_MessageFlags[0] < 0xc800000) {
    pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Windows is reporting ");
    pcVar8 = &stack0xfffff940;
    do {
      cVar2 = *pcVar5;
      *pcVar8 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar5[1];
      pcVar5 = pcVar5 + 2;
      pcVar8[1] = cVar2;
      pcVar8 = pcVar8 + 2;
    } while (cVar2 != '\0');
    crt_stdio_c_sprintf_FUN_005fdbd0
              (temp_buffer + 0x68,"%.1f",
               (double)((float)g_MessageFlags[0] * 9.536743e-07f));
    pcVar5 = temp_buffer + 0x6c;
    iVar7 = -1;
    pcVar8 = &stack0xfffff944;
    do {
      pcVar11 = pcVar8;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar11 = pcVar8 + (uint)bVar12 * -2 + 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar11;
    } while (cVar2 != '\0');
    pcVar11 = pcVar11 + -1;
    do {
      cVar2 = *pcVar5;
      *pcVar11 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar5[1];
      pcVar5 = pcVar5 + 2;
      pcVar11[1] = cVar2;
      pcVar11 = pcVar11 + 2;
    } while (cVar2 != '\0');
    pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("MB of free swap disk space.")
    ;
    iVar7 = -1;
    pcVar5 = &stack0xfffff948;
    do {
      pcVar11 = pcVar5;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar11 = pcVar5 + (uint)bVar12 * -2 + 1;
      cVar2 = *pcVar5;
      pcVar5 = pcVar11;
    } while (cVar2 != '\0');
    pcVar11 = pcVar11 + -1;
    do {
      cVar2 = *pcVar8;
      *pcVar11 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar8[1];
      pcVar8 = pcVar8 + 2;
      pcVar11[1] = cVar2;
      pcVar11 = pcVar11 + 2;
    } while (cVar2 != '\0');
    pcVar8 = &DAT_00635507;
    iVar7 = -1;
    pcVar5 = &stack0xfffff948;
    do {
      pcVar11 = pcVar5;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar11 = pcVar5 + (uint)bVar12 * -2 + 1;
      cVar2 = *pcVar5;
      pcVar5 = pcVar11;
    } while (cVar2 != '\0');
    pcVar11 = pcVar11 + -1;
    do {
      cVar2 = *pcVar8;
      *pcVar11 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar8[1];
      pcVar8 = pcVar8 + 2;
      pcVar11[1] = cVar2;
      pcVar11 = pcVar11 + 2;
    } while (cVar2 != '\0');
    pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Nocturne runs best with at least 200MB free.")
    ;
    iVar7 = -1;
    pcVar5 = &stack0xfffff94c;
    do {
      pcVar11 = pcVar5;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar11 = pcVar5 + (uint)bVar12 * -2 + 1;
      cVar2 = *pcVar5;
      pcVar5 = pcVar11;
    } while (cVar2 != '\0');
    pcVar11 = pcVar11 + -1;
    do {
      cVar2 = *pcVar8;
      *pcVar11 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar8[1];
      pcVar8 = pcVar8 + 2;
      pcVar11[1] = cVar2;
      pcVar11 = pcVar11 + 2;
    } while (cVar2 != '\0');
    pcVar8 = &DAT_00635536;
    iVar7 = -1;
    pcVar5 = &stack0xfffff94c;
    do {
      pcVar11 = pcVar5;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar11 = pcVar5 + (uint)bVar12 * -2 + 1;
      cVar2 = *pcVar5;
      pcVar5 = pcVar11;
    } while (cVar2 != '\0');
    pcVar11 = pcVar11 + -1;
    do {
      cVar2 = *pcVar8;
      *pcVar11 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar8[1];
      pcVar8 = pcVar8 + 2;
      pcVar11[1] = cVar2;
      pcVar11 = pcVar11 + 2;
    } while (cVar2 != '\0');
    pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("See README.TXT for more information.")
    ;
    iVar7 = -1;
    pcVar5 = &stack0xfffff950;
    do {
      pcVar11 = pcVar5;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar11 = pcVar5 + (uint)bVar12 * -2 + 1;
      cVar2 = *pcVar5;
      pcVar5 = pcVar11;
    } while (cVar2 != '\0');
    pcVar11 = pcVar11 + -1;
    do {
      cVar2 = *pcVar8;
      *pcVar11 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar8[1];
      pcVar8 = pcVar8 + 2;
      pcVar11[1] = cVar2;
      pcVar11 = pcVar11 + 2;
    } while (cVar2 != '\0');
    shape_edittool_cpp_CEditorTools_showWarning_FUN_0049e6f0(g_CEditorToolsPtr,&stack0xfffff950);
  }
  pCVar4 = g_CGamePtr;
  if (g_SkipIntroVideo != 0) {
    g_CGamePtr->game_pixx = GAME_WINDOW_RESOLUTION_640;
    g_SkipIntroVideo = 0;
    pCVar4->game_pixy = GAME_WINDOW_RESOLUTION_480;
    g_FullscreenMode = 0;
    pCVar4->game_bpp = 0x20;
    core_menu_cpp_showCalibrationTest_FUN_00510ba0();
  }
  wincore_winvideo_cpp_playMovie_FUN_005f4a00("video","opening.avi");
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Loading...");
  pcVar5 = loading_text + 0x88;
  do {
    cVar2 = *pcVar8;
    *pcVar5 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar8[1];
    pcVar8 = pcVar8 + 2;
    pcVar5[1] = cVar2;
    pcVar5 = pcVar5 + 2;
  } while (cVar2 != '\0');
  engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80(g_ThemeFont,loading_text + 0x88);
  engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(g_ThemeFont,0x58);
  engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_00410520((CAlphaBitmap *)&stack0x00000068);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_004105d0
            ((CAlphaBitmap *)&stack0x0000006c,"fangs",0x280,0x1e0);
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_00410950((CAlphaBitmap *)&stack0x00000070,0,0,0x8000)
  ;
  wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_00410540((CAlphaBitmap *)&stack0x00000078);
  core_sound_cpp_CSound_findAllSoundFiles_FUN_005b2d00(g_CSoundPtr);
  core_mission_cpp_CDemonMission_clearMaybe_FUN_00522c80(g_CDemonMissionPtr);
  iVar7 = 0;
  iStack00000098 = 0;
  do {
    puVar1 = (uint *)((int)&g_GlobalFilters + iVar7);
    iVar7 = iVar7 + 4;
    iVar9 = iStack00000098 + 1;
    core_dfilter_cpp_CDemonFilter_init_FUN_004705a0
              ((CDemonFilter *)*puVar1,
               (float)iStack00000098 * (float)0.125 + (float)0.125,0);
    iStack00000098 = iVar9;
  } while (iVar9 < 8);
  iVar9 = 0;
  iVar7 = 0;
  do {
    **(uint **)((int)&g_PlayerFilters + iVar9) = 0x100;
    fVar3 = (float)0.25;
    *(uint *)(*(int *)((int)&g_PlayerFilters + iVar9) + 4) = 0x100;
    puVar1 = (uint *)((int)&g_PlayerFilters + iVar9);
    iVar9 = iVar9 + 4;
    iVar10 = iVar7 + 1;
    iStack00000098 = iVar7;
    core_dfilter_cpp_CDemonFilter_init_FUN_004705a0
              ((CDemonFilter *)*puVar1,(float)iVar7 * fVar3 + (float)0.25,0);
    iVar7 = iVar10;
  } while (iVar10 < 4);
  support_newmsg_cpp_CMouse_load_FUN_00544420((CMouse *)PTR_g_SpecialBitmapsInstance_00680b80);
  core_netgame_cpp_CNetGame_FUN_0053f780();
  wincore_winrun_cpp_setRegistryStringValue_FUN_005f4290
            ("SOFTWARE\\Matrox\\PowerDesk\\Current Settings","Flip on VBlank","0");
  shape_memdbg_cpp_SMemHead_checkAllMemory_FUN_0050efe0("..\\core\\main.c",0x49b);
  return;
}
