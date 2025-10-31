// Name: core_main.c_initializeGameSystems_FUN_00507a60
// Address: 00507a60
// Address Range: [[00507a60, 00508244]]
// Convention: __cdecl
// Signature: void core_main.c_initializeGameSystems_FUN_00507a60(void)
// Cross-references:
//   wincore_winrun.cpp_winMain_FUN_005f3680 (005f3680) at 005f38f8 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_PROCESSOR_LEVEL_00635290
//   TerminatedCString s_core_main_c_006352a0
//   TerminatedCString s_rb_006352af
//   TerminatedCString s_stderr_txt_006352b2
//   TerminatedCString s_core_main_c_006352bd
//   TerminatedCString s_stderr_txt_006352cc
//   TerminatedCString s_core_main_c_006352d7
//   TerminatedCString s_Please_copy_Nocturne_to__006352e6
//   TerminatedCString s_wt_0063530e
//   TerminatedCString s_stderr_txt_00635311
//   TerminatedCString s_msglist_txt_0063531c
//   TerminatedCString s_core_main_c_00635328
//   TerminatedCString s_This_CPU_does_not_have_a_00635337
//   TerminatedCString s_core_main_c_0063535b
//   TerminatedCString s_Unable_to_set_640x480x32_0063536a
//   TerminatedCString s_Windows_is_reporting_006353fb
//   TerminatedCString s_s_1f_00635411
//   TerminatedCString s_MB_of_system_RAM_00635416
//   undefined1 DAT_00635428
//   undefined1 DAT_00635429
//   TerminatedCString s_Nocturne_requires_at_lea_0063542a
//   undefined4 s_octurne_requires_at_least_64MB_o_0063542b
//   undefined1 DAT_00635459
//   undefined1 DAT_0063545a
//   TerminatedCString s_If_you_think_you_have_at_0063545b
//   undefined4 s_f_you_think_you_have_at_least_64_0063545c
//   undefined1 DAT_0063548d
//   undefined1 DAT_0063548e
//   TerminatedCString s_then_ignore_this_message_0063548f
//   undefined4 s_hen_ignore_this_message._00635490
//   undefined1 DAT_006354a9
//   undefined1 DAT_006354aa
//   TerminatedCString s_See_README_TXT_for_more__006354ab
//   undefined4 s_ee_README.TXT_for_more_informati_006354ac
//   TerminatedCString s_Windows_is_reporting_006354d0
//   TerminatedCString s_s_1f_006354e6
//   TerminatedCString s_MB_of_free_swap_disk_spa_006354eb
//   undefined1 DAT_00635507
//   undefined1 DAT_00635508
//   TerminatedCString s_Nocturne_runs_best_with__00635509
//   undefined4 s_octurne_runs_best_with_at_least_2_0063550a
//   undefined1 DAT_00635536
//   undefined1 DAT_00635537
//   TerminatedCString s_See_README_TXT_for_more__00635538
//   undefined4 s_ee_README.TXT_for_more_informati_00635539
//   TerminatedCString s_opening_avi_0063555d
//   TerminatedCString s_video_00635569
//   TerminatedCString s_Loading_0063556f
//   TerminatedCString s_fangs_0063557a
//   TerminatedCString s_s_0_00635580
//   TerminatedCString s_Flip_on_VBlank_00635582
//   TerminatedCString s_SOFTWARE_Matrox_PowerDes_00635591
//   TerminatedCString s_core_main_c_006355bc
//   float g_AvailableMemMultiplier = 9.536743E-7
//   double DOUBLE_006355d6 = 0.125
//   double DOUBLE_006355de = 0.25
//   CDemonFilter* g_GlobalFilters = 020a4878
//   undefined4 DAT_0066efa0
//   CDemonFilter* g_PlayerFilters = 020a4878
//   undefined4 DAT_0066efc0
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CGame* g_CGamePtr = 02d81a9c
//   CDemonMission* g_CDemonMissionPtr = 02f33740
//   CNetGame* g_CNetGameInstance = 02f7c740
//   void* PTR_g_SpecialBitmapsInstance_00680b80 = 02fd8a80
//   CDemonPod* g_CDemonPodPtr = 030e5090
//   CSound* g_CSoundPtr = 03f6af64
//   int g_SystemInitialized = 0x1
//   int g_SystemMemorySize = 0x3c000
//   FILE* g_StderrLogFile = 00000000
//   int g_RenderingMode
//   CDemonFilter[8] CDemonFilter_ARRAY_020a4878
//   undefined4 DAT_020a487c
//   undefined4 CDemonFilter_ARRAY_020a4878[1].size
//   undefined4 DAT_020a48c8
//   CBitFont* g_ThemeFont
//   CEditorTools g_CEditorToolsPtr
//   int g_SoftwareRenderingForced
//   BOOL g_MMXSupported
//   int g_ProcessorType
//   CGame g_CGameInstance
//   undefined4 g_CGameInstance.game_pixy
//   undefined4 DAT_02d81aa4
//   int g_SkipIntroVideo
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   CDemonMission g_CDemonMissionInstance
//   undefined4 DAT_02f7c740
//   CMouse g_CMouseInstance
//   CDemonPod g_CDemonPodInstance
//   undefined4 DAT_03c00000
//   CSound g_CSoundInstance
//   int g_FullscreenMode
//   int g_PodSystemVersion
//   int g_TotalPhysicalMemory
//   int[513] g_MessageFlags
// Function calls:
//   core_dfilter.cpp_CDemonFilter_init_FUN_004705a0
//   core_dfont.cpp_initFonts_FUN_004709a0
//   core_flamegun.cpp_initializeFlamegun_FUN_004cbce0
//   core_inivar.cpp_readIniData_FUN_004fbd90
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_menu.cpp_RunCalibrationTest_FUN_00510ba0
//   core_mission.cpp_CDemonMission_clearMaybe_FUN_00522c80
//   core_mmx.c_detectCPUFeatures_FUN_00524f10
//   core_netgame.cpp_CNetGame_FUN_0053f780
//   core_sound.cpp_findAllSoundFiles_FUN_005b2d00
//   crt_env.c_getenv_FUN_006013f0
//   crt_file.c_setReadonlyAttribute_FUN_00600c30
//   crt_stdio.c_fopenThreadSafe_FUN_00601b14
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   engine_2d.c_initGraphicsSystem_FUN_00401010
//   engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520
//   engine_alphabit.cpp_CAlphaBitmap_display_FUN_00410950
//   engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_00410540
//   engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0
//   engine_dosio.c_addGetFileInfoHook_FUN_00481710
//   engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0
//   engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80
//   engine_matrix.c_initializeTrigTables_FUN_0050c530
//   engine_pod.cpp_CPod_init_FUN_00550c30
//   shape_edittool.cpp_CEditorTools_showWarning_FUN_0049e6f0
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   shape_memdbg.cpp_openFile_FUN_0050f7a0
//   shape_memdbg.cpp_SMemHead_checkAllMemory_FUN_0050efe0
//   support_newmsg.cpp_CMouse_load_FUN_00544420
//   support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   support_newmsg.cpp_readMessageFile_FUN_00543e40
//   wincore_wddvmem.cpp_initTextureCache_FUN_005dd760
//   wincore_wddvmem.cpp_setScreenResolution_FUN_005ecef0
//   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   wincore_windll.cpp_clearScreen_FUN_005b3e70
//   wincore_winrun.cpp_calibrateCPUSpeed_FUN_005f2b80
//   wincore_winrun.cpp_initJoystick_FUN_005f4310
//   wincore_winrun.cpp_setRegistryStringValue_FUN_005f4290
//   wincore_winvideo.cpp_playMovie_FUN_005f4a00

#include "nocturne.h"

void __cdecl core_main_c_initializeGameSystems_FUN_00507a60(void)

{
  undefined4 *puVar1;
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
               (double)((float)g_TotalPhysicalMemory * g_AvailableMemMultiplier));
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
               (double)((float)g_MessageFlags[0] * g_AvailableMemMultiplier));
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
    core_menu_cpp_RunCalibrationTest_FUN_00510ba0();
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
  core_sound_cpp_findAllSoundFiles_FUN_005b2d00();
  core_mission_cpp_CDemonMission_clearMaybe_FUN_00522c80(g_CDemonMissionPtr);
  iVar7 = 0;
  iStack00000098 = 0;
  do {
    puVar1 = (undefined4 *)((int)&g_GlobalFilters + iVar7);
    iVar7 = iVar7 + 4;
    iVar9 = iStack00000098 + 1;
    core_dfilter_cpp_CDemonFilter_init_FUN_004705a0
              ((CDemonFilter *)*puVar1,
               (float)iStack00000098 * (float)DOUBLE_006355d6 + (float)DOUBLE_006355d6,0);
    iStack00000098 = iVar9;
  } while (iVar9 < 8);
  iVar9 = 0;
  iVar7 = 0;
  do {
    **(undefined4 **)((int)&g_PlayerFilters + iVar9) = 0x100;
    fVar3 = (float)DOUBLE_006355de;
    *(undefined4 *)(*(int *)((int)&g_PlayerFilters + iVar9) + 4) = 0x100;
    puVar1 = (undefined4 *)((int)&g_PlayerFilters + iVar9);
    iVar9 = iVar9 + 4;
    iVar10 = iVar7 + 1;
    iStack00000098 = iVar7;
    core_dfilter_cpp_CDemonFilter_init_FUN_004705a0
              ((CDemonFilter *)*puVar1,(float)iVar7 * fVar3 + (float)DOUBLE_006355de,0);
    iVar7 = iVar10;
  } while (iVar10 < 4);
  support_newmsg_cpp_CMouse_load_FUN_00544420((CMouse *)PTR_g_SpecialBitmapsInstance_00680b80);
  core_netgame_cpp_CNetGame_FUN_0053f780();
  wincore_winrun_cpp_setRegistryStringValue_FUN_005f4290
            ("SOFTWARE\\Matrox\\PowerDesk\\Current Settings","Flip on VBlank","0");
  shape_memdbg_cpp_SMemHead_checkAllMemory_FUN_0050efe0("..\\core\\main.c",0x49b);
  return;
}


// Assembly code:
// 00507a60: PUSH EBX
//   Label: core_main.c_initializeGameSystems_FUN_00507a60
// 00507a61: PUSH ESI
// 00507a62: PUSH EDI
// 00507a63: PUSH EBP
// 00507a64: MOV EBP,ESP
// 00507a66: SUB ESP,0x718
// 00507a6c: AND ESP,0xfffffff8
// 00507a6f: MOV ECX,0x10000
// 00507a74: MOV EBX,0x1
// 00507a79: XOR EDX,EDX
// 00507a7b: PUSH 0x635290
//   XREF to: 00635290 (DATA)
// 00507a80: MOV dword ptr [0x02d0529c],EDX
//   XREF to: 02d0529c (WRITE)
// 00507a86: MOV dword ptr [0x0068411c],ECX
//   XREF to: 0068411c (WRITE)
// 00507a8c: MOV dword ptr [0x00684110],EBX
//   XREF to: 00684110 (WRITE)
// 00507a92: CALL crt_env.c_getenv_FUN_006013f0
//   XREF to: 006013f0 (UNCONDITIONAL_CALL)
// 00507a97: ADD ESP,0x4
// 00507a9a: TEST EAX,EAX
// 00507a9c: JNZ 0x00508203
//   XREF to: 00508203 (CONDITIONAL_JUMP)
// 00507aa2: MOV dword ptr [0x00772628],0x4
//   XREF to: 00772628 (WRITE)
// 00507aac: PUSH 0x3bc
//   Label: LAB_00507aac
// 00507ab1: PUSH 0x6352a0
//   XREF to: 006352a0 (DATA)
// 00507ab6: PUSH 0x6352af
//   XREF to: 006352af (DATA)
// 00507abb: PUSH 0x0
// 00507abd: PUSH 0x6352b2
//   XREF to: 006352b2 (DATA)
// 00507ac2: CALL shape_memdbg.cpp_openFile_FUN_0050f7a0
//   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
// 00507ac7: ADD ESP,0x14
// 00507aca: TEST EAX,EAX
// 00507acc: JZ 0x00507b1a
//   XREF to: 00507b1a (CONDITIONAL_JUMP)
// 00507ace: PUSH 0x3be
// 00507ad3: PUSH 0x6352bd
//   XREF to: 006352bd (DATA)
// 00507ad8: PUSH EAX
// 00507ad9: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 00507ade: ADD ESP,0xc
// 00507ae1: PUSH 0x1c0
// 00507ae6: PUSH 0x6352cc
//   XREF to: 006352cc (DATA)
// 00507aeb: CALL crt_file.c_setReadonlyAttribute_FUN_00600c30
//   XREF to: 00600c30 (UNCONDITIONAL_CALL)
// 00507af0: ADD ESP,0x8
// 00507af3: TEST EAX,EAX
// 00507af5: JZ 0x00507b1a
//   XREF to: 00507b1a (CONDITIONAL_JUMP)
// 00507af7: MOV EDX,0x6352d7
//   XREF to: 006352d7 (PARAM)
// 00507afc: MOV ECX,0x3c0
// 00507b01: PUSH 0x6352e6
//   XREF to: 006352e6 (DATA)
// 00507b06: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 00507b0c: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 00507b12: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00507b17: ADD ESP,0x4
// 00507b1a: PUSH 0x684cf8
//   Label: LAB_00507b1a
//   XREF to: 00684cf8 (DATA)
// 00507b1f: PUSH 0x63530e
//   XREF to: 0063530e (DATA)
// 00507b24: PUSH 0x635311
//   XREF to: 00635311 (DATA)
// 00507b29: MOV EBX,0x4
// 00507b2e: CALL crt_stdio.c_fopenThreadSafe_FUN_00601b14
//   XREF to: 00601b14 (UNCONDITIONAL_CALL)
// 00507b33: ADD ESP,0xc
// 00507b36: MOV dword ptr [0x00772628],EBX
//   XREF to: 00772628 (WRITE)
// 00507b3c: CALL core_flamegun.cpp_initializeFlamegun_FUN_004cbce0
//   XREF to: 004cbce0 (UNCONDITIONAL_CALL)
// 00507b41: CALL core_inivar.cpp_readIniData_FUN_004fbd90
//   XREF to: 004fbd90 (UNCONDITIONAL_CALL)
// 00507b46: MOV EDI,dword ptr [0x00680cdc]
//   XREF to: 00680cdc (READ)
// 00507b4c: MOV ESI,0x2
// 00507b51: PUSH EDI
//   XREF to: 030e5090 (DATA)
// 00507b52: MOV dword ptr [0x03f6b884],ESI
//   XREF to: 03f6b884 (WRITE)
// 00507b58: CALL engine_pod.cpp_CPod_init_FUN_00550c30
//   XREF to: 00550c30 (UNCONDITIONAL_CALL)
// 00507b5d: ADD ESP,0x4
// 00507b60: PUSH 0x551960
//   XREF to: 00551960 (DATA)
// 00507b65: CALL engine_dosio.c_addGetFileInfoHook_FUN_00481710
//   XREF to: 00481710 (UNCONDITIONAL_CALL)
// 00507b6a: ADD ESP,0x4
// 00507b6d: PUSH 0x4817c0
//   XREF to: 004817c0 (DATA)
// 00507b72: CALL engine_dosio.c_addGetFileInfoHook_FUN_00481710
//   XREF to: 00481710 (UNCONDITIONAL_CALL)
// 00507b77: ADD ESP,0x4
// 00507b7a: PUSH 0x63531c
//   XREF to: 0063531c (DATA)
// 00507b7f: CALL support_newmsg.cpp_readMessageFile_FUN_00543e40
//   XREF to: 00543e40 (UNCONDITIONAL_CALL)
// 00507b84: ADD ESP,0x4
// 00507b87: CALL core_mmx.c_detectCPUFeatures_FUN_00524f10
//   XREF to: 00524f10 (UNCONDITIONAL_CALL)
// 00507b8c: CMP dword ptr [0x02d05248],0x0
//   XREF to: 02d05248 (READ)
// 00507b93: JNZ 0x00507bc1
//   XREF to: 00507bc1 (CONDITIONAL_JUMP)
// 00507b95: MOV EDX,0x635328
//   XREF to: 00635328 (PARAM)
// 00507b9a: MOV ECX,0x3eb
// 00507b9f: PUSH 0x635337
//   XREF to: 00635337 (DATA)
// 00507ba4: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 00507baa: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 00507bb0: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 00507bb5: ADD ESP,0x4
// 00507bb8: PUSH EAX
// 00507bb9: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00507bbe: ADD ESP,0x4
// 00507bc1: CALL engine_matrix.c_initializeTrigTables_FUN_0050c530
//   Label: LAB_00507bc1
//   XREF to: 0050c530 (UNCONDITIONAL_CALL)
// 00507bc6: CALL wincore_wddvmem.cpp_initTextureCache_FUN_005dd760
//   XREF to: 00403790 (UNCONDITIONAL_CALL)
// 00507bcb: CALL engine_2d.c_initGraphicsSystem_FUN_00401010
//   XREF to: 00401010 (UNCONDITIONAL_CALL)
// 00507bd0: CALL wincore_winrun.cpp_calibrateCPUSpeed_FUN_005f2b80
//   XREF to: 005f2b80 (UNCONDITIONAL_CALL)
// 00507bd5: CALL wincore_winrun.cpp_initJoystick_FUN_005f4310
//   XREF to: 005f4310 (UNCONDITIONAL_CALL)
// 00507bda: PUSH 0x20
// 00507bdc: PUSH 0x1e0
// 00507be1: XOR EBX,EBX
// 00507be3: PUSH 0x280
// 00507be8: MOV dword ptr [0x03f6b878],EBX
//   XREF to: 03f6b878 (WRITE)
// 00507bee: CALL wincore_wddvmem.cpp_setScreenResolution_FUN_005ecef0
//   XREF to: 005ecef0 (UNCONDITIONAL_CALL)
// 00507bf3: ADD ESP,0xc
// 00507bf6: TEST EAX,EAX
// 00507bf8: JNZ 0x00507c1d
//   XREF to: 00507c1d (CONDITIONAL_JUMP)
// 00507bfa: MOV ESI,0x63535b
//   XREF to: 0063535b (DATA)
// 00507bff: MOV EDI,0x403
// 00507c04: PUSH 0x63536a
//   XREF to: 0063536a (DATA)
// 00507c09: MOV dword ptr [0x02f0ca48],ESI
//   XREF to: 02f0ca48 (WRITE)
// 00507c0f: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 00507c15: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00507c1a: ADD ESP,0x4
// 00507c1d: CALL core_dfont.cpp_initFonts_FUN_004709a0
//   Label: LAB_00507c1d
//   XREF to: 004709a0 (UNCONDITIONAL_CALL)
// 00507c22: CMP dword ptr [0x03f98474],0x3c00000
//   XREF to: 03f98474 (READ)
//   XREF to: 03c00000 (DATA)
// 00507c2c: JGE 0x00507ea0
//   XREF to: 00507ea0 (CONDITIONAL_JUMP)
// 00507c32: PUSH 0x6353fb
//   XREF to: 006353fb (DATA)
// 00507c37: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 00507c3c: ADD ESP,0x4
// 00507c3f: LEA EDI,[ESP + 0x200]
// 00507c46: MOV ESI,EAX
// 00507c48: PUSH EDI
// 00507c49: MOV AL,byte ptr [ESI]
//   Label: LAB_00507c49
// 00507c4b: MOV byte ptr [EDI],AL
// 00507c4d: CMP AL,0x0
// 00507c4f: JZ 0x00507c61
//   XREF to: 00507c61 (CONDITIONAL_JUMP)
// 00507c51: MOV AL,byte ptr [ESI + 0x1]
// 00507c54: ADD ESI,0x2
// 00507c57: MOV byte ptr [EDI + 0x1],AL
// 00507c5a: ADD EDI,0x2
// 00507c5d: CMP AL,0x0
// 00507c5f: JNZ 0x00507c49
//   XREF to: 00507c49 (CONDITIONAL_JUMP)
// 00507c61: POP EDI
//   Label: LAB_00507c61
// 00507c62: FILD dword ptr [0x03f98474]
//   XREF to: 03f98474 (READ)
// 00507c68: FMUL float ptr [0x006355ce]
//   XREF to: 006355ce (READ)
// 00507c6e: SUB ESP,0x8
// 00507c71: FSTP double ptr [ESP]
// 00507c74: PUSH 0x635411
//   XREF to: 00635411 (DATA)
// 00507c79: LEA EAX,[ESP + 0x60c]
// 00507c80: PUSH EAX
// 00507c81: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00507c86: ADD ESP,0x10
// 00507c89: LEA ESI,[ESP + 0x600]
// 00507c90: LEA EDI,[ESP + 0x200]
// 00507c97: PUSH EDI
// 00507c98: SUB ECX,ECX
// 00507c9a: DEC ECX
// 00507c9b: MOV AL,0x0
// 00507c9d: SCASB.REPNE ES:EDI
// 00507c9f: DEC EDI
// 00507ca0: MOV AL,byte ptr [ESI]
//   Label: LAB_00507ca0
// 00507ca2: MOV byte ptr [EDI],AL
// 00507ca4: CMP AL,0x0
// 00507ca6: JZ 0x00507cb8
//   XREF to: 00507cb8 (CONDITIONAL_JUMP)
// 00507ca8: MOV AL,byte ptr [ESI + 0x1]
// 00507cab: ADD ESI,0x2
// 00507cae: MOV byte ptr [EDI + 0x1],AL
// 00507cb1: ADD EDI,0x2
// 00507cb4: CMP AL,0x0
// 00507cb6: JNZ 0x00507ca0
//   XREF to: 00507ca0 (CONDITIONAL_JUMP)
// 00507cb8: POP EDI
//   Label: LAB_00507cb8
// 00507cb9: PUSH 0x635416
//   XREF to: 00635416 (DATA)
// 00507cbe: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 00507cc3: ADD ESP,0x4
// 00507cc6: LEA EDI,[ESP + 0x200]
// 00507ccd: MOV ESI,EAX
// 00507ccf: PUSH EDI
// 00507cd0: SUB ECX,ECX
// 00507cd2: DEC ECX
// 00507cd3: MOV AL,0x0
// 00507cd5: SCASB.REPNE ES:EDI
// 00507cd7: DEC EDI
// 00507cd8: MOV AL,byte ptr [ESI]
//   Label: LAB_00507cd8
// 00507cda: MOV byte ptr [EDI],AL
// 00507cdc: CMP AL,0x0
// 00507cde: JZ 0x00507cf0
//   XREF to: 00507cf0 (CONDITIONAL_JUMP)
// 00507ce0: MOV AL,byte ptr [ESI + 0x1]
// 00507ce3: ADD ESI,0x2
// 00507ce6: MOV byte ptr [EDI + 0x1],AL
// 00507ce9: ADD EDI,0x2
// 00507cec: CMP AL,0x0
// 00507cee: JNZ 0x00507cd8
//   XREF to: 00507cd8 (CONDITIONAL_JUMP)
// 00507cf0: POP EDI
//   Label: LAB_00507cf0
// 00507cf1: MOV ESI,0x635428
//   XREF to: 00635428 (DATA)
// 00507cf6: LEA EDI,[ESP + 0x200]
// 00507cfd: PUSH EDI
// 00507cfe: SUB ECX,ECX
// 00507d00: DEC ECX
// 00507d01: MOV AL,0x0
// 00507d03: SCASB.REPNE ES:EDI
// 00507d05: DEC EDI
// 00507d06: MOV AL,byte ptr [ESI]
//   Label: LAB_00507d06
//   XREF to: 00635428 (READ)
//   XREF to: 0063542a (READ)
// 00507d08: MOV byte ptr [EDI],AL
// 00507d0a: CMP AL,0x0
// 00507d0c: JZ 0x00507d1e
//   XREF to: 00507d1e (CONDITIONAL_JUMP)
// 00507d0e: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 00635429 (READ)
//   XREF to: 0063542b (READ)
// 00507d11: ADD ESI,0x2
// 00507d14: MOV byte ptr [EDI + 0x1],AL
// 00507d17: ADD EDI,0x2
// 00507d1a: CMP AL,0x0
// 00507d1c: JNZ 0x00507d06
//   XREF to: 00507d06 (CONDITIONAL_JUMP)
// 00507d1e: POP EDI
//   Label: LAB_00507d1e
// 00507d1f: PUSH 0x63542a
//   XREF to: 0063542a (DATA)
// 00507d24: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 00507d29: ADD ESP,0x4
// 00507d2c: LEA EDI,[ESP + 0x200]
// 00507d33: MOV ESI,EAX
// 00507d35: PUSH EDI
// 00507d36: SUB ECX,ECX
// 00507d38: DEC ECX
// 00507d39: MOV AL,0x0
// 00507d3b: SCASB.REPNE ES:EDI
// 00507d3d: DEC EDI
// 00507d3e: MOV AL,byte ptr [ESI]
//   Label: LAB_00507d3e
// 00507d40: MOV byte ptr [EDI],AL
// 00507d42: CMP AL,0x0
// 00507d44: JZ 0x00507d56
//   XREF to: 00507d56 (CONDITIONAL_JUMP)
// 00507d46: MOV AL,byte ptr [ESI + 0x1]
// 00507d49: ADD ESI,0x2
// 00507d4c: MOV byte ptr [EDI + 0x1],AL
// 00507d4f: ADD EDI,0x2
// 00507d52: CMP AL,0x0
// 00507d54: JNZ 0x00507d3e
//   XREF to: 00507d3e (CONDITIONAL_JUMP)
// 00507d56: POP EDI
//   Label: LAB_00507d56
// 00507d57: MOV ESI,0x635459
//   XREF to: 00635459 (DATA)
// 00507d5c: LEA EDI,[ESP + 0x200]
// 00507d63: PUSH EDI
// 00507d64: SUB ECX,ECX
// 00507d66: DEC ECX
// 00507d67: MOV AL,0x0
// 00507d69: SCASB.REPNE ES:EDI
// 00507d6b: DEC EDI
// 00507d6c: MOV AL,byte ptr [ESI]
//   Label: LAB_00507d6c
//   XREF to: 00635459 (READ)
//   XREF to: 0063545b (READ)
// 00507d6e: MOV byte ptr [EDI],AL
// 00507d70: CMP AL,0x0
// 00507d72: JZ 0x00507d84
//   XREF to: 00507d84 (CONDITIONAL_JUMP)
// 00507d74: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 0063545a (READ)
//   XREF to: 0063545c (READ)
// 00507d77: ADD ESI,0x2
// 00507d7a: MOV byte ptr [EDI + 0x1],AL
// 00507d7d: ADD EDI,0x2
// 00507d80: CMP AL,0x0
// 00507d82: JNZ 0x00507d6c
//   XREF to: 00507d6c (CONDITIONAL_JUMP)
// 00507d84: POP EDI
//   Label: LAB_00507d84
// 00507d85: PUSH 0x63545b
//   XREF to: 0063545b (DATA)
// 00507d8a: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 00507d8f: ADD ESP,0x4
// 00507d92: LEA EDI,[ESP + 0x200]
// 00507d99: MOV ESI,EAX
// 00507d9b: PUSH EDI
// 00507d9c: SUB ECX,ECX
// 00507d9e: DEC ECX
// 00507d9f: MOV AL,0x0
// 00507da1: SCASB.REPNE ES:EDI
// 00507da3: DEC EDI
// 00507da4: MOV AL,byte ptr [ESI]
//   Label: LAB_00507da4
// 00507da6: MOV byte ptr [EDI],AL
// 00507da8: CMP AL,0x0
// 00507daa: JZ 0x00507dbc
//   XREF to: 00507dbc (CONDITIONAL_JUMP)
// 00507dac: MOV AL,byte ptr [ESI + 0x1]
// 00507daf: ADD ESI,0x2
// 00507db2: MOV byte ptr [EDI + 0x1],AL
// 00507db5: ADD EDI,0x2
// 00507db8: CMP AL,0x0
// 00507dba: JNZ 0x00507da4
//   XREF to: 00507da4 (CONDITIONAL_JUMP)
// 00507dbc: POP EDI
//   Label: LAB_00507dbc
// 00507dbd: MOV ESI,0x63548d
//   XREF to: 0063548d (DATA)
// 00507dc2: LEA EDI,[ESP + 0x200]
// 00507dc9: PUSH EDI
// 00507dca: SUB ECX,ECX
// 00507dcc: DEC ECX
// 00507dcd: MOV AL,0x0
// 00507dcf: SCASB.REPNE ES:EDI
// 00507dd1: DEC EDI
// 00507dd2: MOV AL,byte ptr [ESI]
//   Label: LAB_00507dd2
//   XREF to: 0063548d (READ)
//   XREF to: 0063548f (READ)
// 00507dd4: MOV byte ptr [EDI],AL
// 00507dd6: CMP AL,0x0
// 00507dd8: JZ 0x00507dea
//   XREF to: 00507dea (CONDITIONAL_JUMP)
// 00507dda: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 0063548e (READ)
//   XREF to: 00635490 (READ)
// 00507ddd: ADD ESI,0x2
// 00507de0: MOV byte ptr [EDI + 0x1],AL
// 00507de3: ADD EDI,0x2
// 00507de6: CMP AL,0x0
// 00507de8: JNZ 0x00507dd2
//   XREF to: 00507dd2 (CONDITIONAL_JUMP)
// 00507dea: POP EDI
//   Label: LAB_00507dea
// 00507deb: PUSH 0x63548f
//   XREF to: 0063548f (DATA)
// 00507df0: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 00507df5: ADD ESP,0x4
// 00507df8: LEA EDI,[ESP + 0x200]
// 00507dff: MOV ESI,EAX
// 00507e01: PUSH EDI
// 00507e02: SUB ECX,ECX
// 00507e04: DEC ECX
// 00507e05: MOV AL,0x0
// 00507e07: SCASB.REPNE ES:EDI
// 00507e09: DEC EDI
// 00507e0a: MOV AL,byte ptr [ESI]
//   Label: LAB_00507e0a
// 00507e0c: MOV byte ptr [EDI],AL
// 00507e0e: CMP AL,0x0
// 00507e10: JZ 0x00507e22
//   XREF to: 00507e22 (CONDITIONAL_JUMP)
// 00507e12: MOV AL,byte ptr [ESI + 0x1]
// 00507e15: ADD ESI,0x2
// 00507e18: MOV byte ptr [EDI + 0x1],AL
// 00507e1b: ADD EDI,0x2
// 00507e1e: CMP AL,0x0
// 00507e20: JNZ 0x00507e0a
//   XREF to: 00507e0a (CONDITIONAL_JUMP)
// 00507e22: POP EDI
//   Label: LAB_00507e22
// 00507e23: MOV ESI,0x6354a9
//   XREF to: 006354a9 (DATA)
// 00507e28: LEA EDI,[ESP + 0x200]
// 00507e2f: PUSH EDI
// 00507e30: SUB ECX,ECX
// 00507e32: DEC ECX
// 00507e33: MOV AL,0x0
// 00507e35: SCASB.REPNE ES:EDI
// 00507e37: DEC EDI
// 00507e38: MOV AL,byte ptr [ESI]
//   Label: LAB_00507e38
//   XREF to: 006354a9 (READ)
//   XREF to: 006354ab (READ)
// 00507e3a: MOV byte ptr [EDI],AL
// 00507e3c: CMP AL,0x0
// 00507e3e: JZ 0x00507e50
//   XREF to: 00507e50 (CONDITIONAL_JUMP)
// 00507e40: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 006354aa (READ)
//   XREF to: 006354ac (READ)
// 00507e43: ADD ESI,0x2
// 00507e46: MOV byte ptr [EDI + 0x1],AL
// 00507e49: ADD EDI,0x2
// 00507e4c: CMP AL,0x0
// 00507e4e: JNZ 0x00507e38
//   XREF to: 00507e38 (CONDITIONAL_JUMP)
// 00507e50: POP EDI
//   Label: LAB_00507e50
// 00507e51: PUSH 0x6354ab
//   XREF to: 006354ab (DATA)
// 00507e56: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 00507e5b: ADD ESP,0x4
// 00507e5e: LEA EDI,[ESP + 0x200]
// 00507e65: MOV ESI,EAX
// 00507e67: PUSH EDI
// 00507e68: SUB ECX,ECX
// 00507e6a: DEC ECX
// 00507e6b: MOV AL,0x0
// 00507e6d: SCASB.REPNE ES:EDI
// 00507e6f: DEC EDI
// 00507e70: MOV AL,byte ptr [ESI]
//   Label: LAB_00507e70
// 00507e72: MOV byte ptr [EDI],AL
// 00507e74: CMP AL,0x0
// 00507e76: JZ 0x00507e88
//   XREF to: 00507e88 (CONDITIONAL_JUMP)
// 00507e78: MOV AL,byte ptr [ESI + 0x1]
// 00507e7b: ADD ESI,0x2
// 00507e7e: MOV byte ptr [EDI + 0x1],AL
// 00507e81: ADD EDI,0x2
// 00507e84: CMP AL,0x0
// 00507e86: JNZ 0x00507e70
//   XREF to: 00507e70 (CONDITIONAL_JUMP)
// 00507e88: POP EDI
//   Label: LAB_00507e88
// 00507e89: LEA EAX,[ESP + 0x200]
// 00507e90: PUSH EAX
// 00507e91: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 00507e97: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 00507e98: CALL shape_edittool.cpp_CEditorTools_showWarning_FUN_0049e6f0
//   XREF to: 0049e6f0 (UNCONDITIONAL_CALL)
// 00507e9d: ADD ESP,0x8
// 00507ea0: CMP dword ptr [0x03f98478],0xc800000
//   Label: LAB_00507ea0
//   XREF to: 03f98478 (READ)
// 00507eaa: JGE 0x0050802a
//   XREF to: 0050802a (CONDITIONAL_JUMP)
// 00507eb0: PUSH 0x6354d0
//   XREF to: 006354d0 (DATA)
// 00507eb5: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 00507eba: ADD ESP,0x4
// 00507ebd: MOV EDI,ESP
// 00507ebf: MOV ESI,EAX
// 00507ec1: PUSH EDI
// 00507ec2: MOV AL,byte ptr [ESI]
//   Label: LAB_00507ec2
// 00507ec4: MOV byte ptr [EDI],AL
// 00507ec6: CMP AL,0x0
// 00507ec8: JZ 0x00507eda
//   XREF to: 00507eda (CONDITIONAL_JUMP)
// 00507eca: MOV AL,byte ptr [ESI + 0x1]
// 00507ecd: ADD ESI,0x2
// 00507ed0: MOV byte ptr [EDI + 0x1],AL
// 00507ed3: ADD EDI,0x2
// 00507ed6: CMP AL,0x0
// 00507ed8: JNZ 0x00507ec2
//   XREF to: 00507ec2 (CONDITIONAL_JUMP)
// 00507eda: POP EDI
//   Label: LAB_00507eda
// 00507edb: FILD dword ptr [0x03f98478]
//   XREF to: 03f98478 (READ)
// 00507ee1: FMUL float ptr [0x006355ce]
//   XREF to: 006355ce (READ)
// 00507ee7: SUB ESP,0x8
// 00507eea: FSTP double ptr [ESP]
// 00507eed: PUSH 0x6354e6
//   XREF to: 006354e6 (DATA)
// 00507ef2: LEA EAX,[ESP + 0x40c]
// 00507ef9: PUSH EAX
// 00507efa: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00507eff: ADD ESP,0x10
// 00507f02: LEA ESI,[ESP + 0x400]
// 00507f09: MOV EDI,ESP
// 00507f0b: PUSH EDI
// 00507f0c: SUB ECX,ECX
// 00507f0e: DEC ECX
// 00507f0f: MOV AL,0x0
// 00507f11: SCASB.REPNE ES:EDI
// 00507f13: DEC EDI
// 00507f14: MOV AL,byte ptr [ESI]
//   Label: LAB_00507f14
// 00507f16: MOV byte ptr [EDI],AL
// 00507f18: CMP AL,0x0
// 00507f1a: JZ 0x00507f2c
//   XREF to: 00507f2c (CONDITIONAL_JUMP)
// 00507f1c: MOV AL,byte ptr [ESI + 0x1]
// 00507f1f: ADD ESI,0x2
// 00507f22: MOV byte ptr [EDI + 0x1],AL
// 00507f25: ADD EDI,0x2
// 00507f28: CMP AL,0x0
// 00507f2a: JNZ 0x00507f14
//   XREF to: 00507f14 (CONDITIONAL_JUMP)
// 00507f2c: POP EDI
//   Label: LAB_00507f2c
// 00507f2d: PUSH 0x6354eb
//   XREF to: 006354eb (DATA)
// 00507f32: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 00507f37: ADD ESP,0x4
// 00507f3a: MOV EDI,ESP
// 00507f3c: MOV ESI,EAX
// 00507f3e: PUSH EDI
// 00507f3f: SUB ECX,ECX
// 00507f41: DEC ECX
// 00507f42: MOV AL,0x0
// 00507f44: SCASB.REPNE ES:EDI
// 00507f46: DEC EDI
// 00507f47: MOV AL,byte ptr [ESI]
//   Label: LAB_00507f47
// 00507f49: MOV byte ptr [EDI],AL
// 00507f4b: CMP AL,0x0
// 00507f4d: JZ 0x00507f5f
//   XREF to: 00507f5f (CONDITIONAL_JUMP)
// 00507f4f: MOV AL,byte ptr [ESI + 0x1]
// 00507f52: ADD ESI,0x2
// 00507f55: MOV byte ptr [EDI + 0x1],AL
// 00507f58: ADD EDI,0x2
// 00507f5b: CMP AL,0x0
// 00507f5d: JNZ 0x00507f47
//   XREF to: 00507f47 (CONDITIONAL_JUMP)
// 00507f5f: POP EDI
//   Label: LAB_00507f5f
// 00507f60: MOV ESI,0x635507
//   XREF to: 00635507 (DATA)
// 00507f65: MOV EDI,ESP
// 00507f67: PUSH EDI
// 00507f68: SUB ECX,ECX
// 00507f6a: DEC ECX
// 00507f6b: MOV AL,0x0
// 00507f6d: SCASB.REPNE ES:EDI
// 00507f6f: DEC EDI
// 00507f70: MOV AL,byte ptr [ESI]
//   Label: LAB_00507f70
//   XREF to: 00635507 (READ)
//   XREF to: 00635509 (READ)
// 00507f72: MOV byte ptr [EDI],AL
// 00507f74: CMP AL,0x0
// 00507f76: JZ 0x00507f88
//   XREF to: 00507f88 (CONDITIONAL_JUMP)
// 00507f78: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 00635508 (READ)
//   XREF to: 0063550a (READ)
// 00507f7b: ADD ESI,0x2
// 00507f7e: MOV byte ptr [EDI + 0x1],AL
// 00507f81: ADD EDI,0x2
// 00507f84: CMP AL,0x0
// 00507f86: JNZ 0x00507f70
//   XREF to: 00507f70 (CONDITIONAL_JUMP)
// 00507f88: POP EDI
//   Label: LAB_00507f88
// 00507f89: PUSH 0x635509
//   XREF to: 00635509 (DATA)
// 00507f8e: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 00507f93: ADD ESP,0x4
// 00507f96: MOV EDI,ESP
// 00507f98: MOV ESI,EAX
// 00507f9a: PUSH EDI
// 00507f9b: SUB ECX,ECX
// 00507f9d: DEC ECX
// 00507f9e: MOV AL,0x0
// 00507fa0: SCASB.REPNE ES:EDI
// 00507fa2: DEC EDI
// 00507fa3: MOV AL,byte ptr [ESI]
//   Label: LAB_00507fa3
// 00507fa5: MOV byte ptr [EDI],AL
// 00507fa7: CMP AL,0x0
// 00507fa9: JZ 0x00507fbb
//   XREF to: 00507fbb (CONDITIONAL_JUMP)
// 00507fab: MOV AL,byte ptr [ESI + 0x1]
// 00507fae: ADD ESI,0x2
// 00507fb1: MOV byte ptr [EDI + 0x1],AL
// 00507fb4: ADD EDI,0x2
// 00507fb7: CMP AL,0x0
// 00507fb9: JNZ 0x00507fa3
//   XREF to: 00507fa3 (CONDITIONAL_JUMP)
// 00507fbb: POP EDI
//   Label: LAB_00507fbb
// 00507fbc: MOV ESI,0x635536
//   XREF to: 00635536 (DATA)
// 00507fc1: MOV EDI,ESP
// 00507fc3: PUSH EDI
// 00507fc4: SUB ECX,ECX
// 00507fc6: DEC ECX
// 00507fc7: MOV AL,0x0
// 00507fc9: SCASB.REPNE ES:EDI
// 00507fcb: DEC EDI
// 00507fcc: MOV AL,byte ptr [ESI]
//   Label: LAB_00507fcc
//   XREF to: 00635536 (READ)
//   XREF to: 00635538 (READ)
// 00507fce: MOV byte ptr [EDI],AL
// 00507fd0: CMP AL,0x0
// 00507fd2: JZ 0x00507fe4
//   XREF to: 00507fe4 (CONDITIONAL_JUMP)
// 00507fd4: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 00635537 (READ)
//   XREF to: 00635539 (READ)
// 00507fd7: ADD ESI,0x2
// 00507fda: MOV byte ptr [EDI + 0x1],AL
// 00507fdd: ADD EDI,0x2
// 00507fe0: CMP AL,0x0
// 00507fe2: JNZ 0x00507fcc
//   XREF to: 00507fcc (CONDITIONAL_JUMP)
// 00507fe4: POP EDI
//   Label: LAB_00507fe4
// 00507fe5: PUSH 0x635538
//   XREF to: 00635538 (DATA)
// 00507fea: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 00507fef: ADD ESP,0x4
// 00507ff2: MOV EDI,ESP
// 00507ff4: MOV ESI,EAX
// 00507ff6: PUSH EDI
// 00507ff7: SUB ECX,ECX
// 00507ff9: DEC ECX
// 00507ffa: MOV AL,0x0
// 00507ffc: SCASB.REPNE ES:EDI
// 00507ffe: DEC EDI
// 00507fff: MOV AL,byte ptr [ESI]
//   Label: LAB_00507fff
// 00508001: MOV byte ptr [EDI],AL
// 00508003: CMP AL,0x0
// 00508005: JZ 0x00508017
//   XREF to: 00508017 (CONDITIONAL_JUMP)
// 00508007: MOV AL,byte ptr [ESI + 0x1]
// 0050800a: ADD ESI,0x2
// 0050800d: MOV byte ptr [EDI + 0x1],AL
// 00508010: ADD EDI,0x2
// 00508013: CMP AL,0x0
// 00508015: JNZ 0x00507fff
//   XREF to: 00507fff (CONDITIONAL_JUMP)
// 00508017: POP EDI
//   Label: LAB_00508017
// 00508018: MOV EAX,ESP
// 0050801a: PUSH EAX
// 0050801b: MOV EBX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 00508021: PUSH EBX
//   XREF to: 02cf1cd4 (DATA)
// 00508022: CALL shape_edittool.cpp_CEditorTools_showWarning_FUN_0049e6f0
//   XREF to: 0049e6f0 (UNCONDITIONAL_CALL)
// 00508027: ADD ESP,0x8
// 0050802a: CMP dword ptr [0x02db8a64],0x0
//   Label: LAB_0050802a
//   XREF to: 02db8a64 (READ)
// 00508031: JNZ 0x00508214
//   XREF to: 00508214 (CONDITIONAL_JUMP)
// 00508037: PUSH 0x63555d
//   Label: LAB_00508037
//   XREF to: 0063555d (DATA)
// 0050803c: PUSH 0x635569
//   XREF to: 00635569 (DATA)
// 00508041: CALL wincore_winvideo.cpp_playMovie_FUN_005f4a00
//   XREF to: 005f4a00 (UNCONDITIONAL_CALL)
// 00508046: ADD ESP,0x8
// 00508049: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 0050804e: PUSH 0x63556f
//   XREF to: 0063556f (DATA)
// 00508053: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 00508058: ADD ESP,0x4
// 0050805b: LEA EDI,[ESP + 0x500]
// 00508062: MOV ESI,EAX
// 00508064: PUSH EDI
// 00508065: MOV AL,byte ptr [ESI]
//   Label: LAB_00508065
// 00508067: MOV byte ptr [EDI],AL
// 00508069: CMP AL,0x0
// 0050806b: JZ 0x0050807d
//   XREF to: 0050807d (CONDITIONAL_JUMP)
// 0050806d: MOV AL,byte ptr [ESI + 0x1]
// 00508070: ADD ESI,0x2
// 00508073: MOV byte ptr [EDI + 0x1],AL
// 00508076: ADD EDI,0x2
// 00508079: CMP AL,0x0
// 0050807b: JNZ 0x00508065
//   XREF to: 00508065 (CONDITIONAL_JUMP)
// 0050807d: POP EDI
//   Label: LAB_0050807d
// 0050807e: LEA EAX,[ESP + 0x500]
// 00508085: PUSH EAX
// 00508086: MOV EDX,dword ptr [0x020a5720]
//   XREF to: 020a5720 (READ)
// 0050808c: PUSH EDX
// 0050808d: CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80
//   XREF to: 004cfe80 (UNCONDITIONAL_CALL)
// 00508092: ADD ESP,0x8
// 00508095: PUSH 0x58
// 00508097: MOV ECX,dword ptr [0x020a5720]
//   XREF to: 020a5720 (READ)
// 0050809d: PUSH ECX
// 0050809e: CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0
//   XREF to: 004d01d0 (UNCONDITIONAL_CALL)
// 005080a3: ADD ESP,0x8
// 005080a6: LEA EAX,[ESP + 0x700]
// 005080ad: PUSH EAX
// 005080ae: CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520
//   XREF to: 00410520 (UNCONDITIONAL_CALL)
// 005080b3: ADD ESP,0x4
// 005080b6: PUSH 0x1e0
// 005080bb: PUSH 0x280
// 005080c0: PUSH 0x63557a
//   XREF to: 0063557a (DATA)
// 005080c5: LEA EAX,[ESP + 0x70c]
// 005080cc: PUSH EAX
// 005080cd: CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0
//   XREF to: 004105d0 (UNCONDITIONAL_CALL)
// 005080d2: ADD ESP,0x10
// 005080d5: PUSH 0x8000
// 005080da: PUSH 0x0
// 005080dc: PUSH 0x0
// 005080de: LEA EAX,[ESP + 0x70c]
// 005080e5: PUSH EAX
// 005080e6: CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_00410950
//   XREF to: 00410950 (UNCONDITIONAL_CALL)
// 005080eb: ADD ESP,0x10
// 005080ee: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 005080f3: PUSH 0x0
// 005080f5: LEA EAX,[ESP + 0x704]
// 005080fc: PUSH EAX
// 005080fd: CALL engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_00410540
//   XREF to: 00410540 (UNCONDITIONAL_CALL)
// 00508102: ADD ESP,0x8
// 00508105: MOV EBX,dword ptr [0x00681ef8]
//   XREF to: 03f6af64 (PARAM)
//   XREF to: 00681ef8 (READ)
// 0050810b: PUSH EBX
//   XREF to: 03f6af64 (DATA)
// 0050810c: CALL core_sound.cpp_findAllSoundFiles_FUN_005b2d00
//   XREF to: 005b2d00 (UNCONDITIONAL_CALL)
// 00508111: ADD ESP,0x4
// 00508114: MOV ESI,dword ptr [0x0067d550]
//   XREF to: 0067d550 (READ)
// 0050811a: PUSH ESI
//   XREF to: 02f33740 (DATA)
// 0050811b: XOR EBX,EBX
// 0050811d: CALL core_mission.cpp_CDemonMission_clearMaybe_FUN_00522c80
//   XREF to: 00522c80 (UNCONDITIONAL_CALL)
// 00508122: ADD ESP,0x4
// 00508125: XOR ESI,ESI
// 00508127: MOV dword ptr [ESP + 0x714],EBX
//   Label: LAB_00508127
// 0050812e: FILD dword ptr [ESP + 0x714]
// 00508135: FMUL double ptr [0x006355d6]
//   XREF to: 006355d6 (READ)
// 0050813b: PUSH 0x0
// 0050813d: FADD double ptr [0x006355d6]
//   XREF to: 006355d6 (READ)
// 00508143: SUB ESP,0x4
// 00508146: FSTP float ptr [ESP]
// 00508149: MOV EDI,dword ptr [ESI + 0x66ef9c]
//   XREF to: 0066ef9c (READ)
//   XREF to: 0066efa0 (READ)
// 0050814f: PUSH EDI
//   XREF to: 020a4878 (DATA)
//   XREF to: 020a48c4 (DATA)
// 00508150: ADD ESI,0x4
// 00508153: INC EBX
// 00508154: CALL core_dfilter.cpp_CDemonFilter_init_FUN_004705a0
//   XREF to: 004705a0 (UNCONDITIONAL_CALL)
// 00508159: ADD ESP,0xc
// 0050815c: CMP EBX,0x8
// 0050815f: JL 0x00508127
//   XREF to: 00508127 (CONDITIONAL_JUMP)
// 00508161: MOV EDI,0x100
// 00508166: XOR ESI,ESI
// 00508168: XOR EBX,EBX
// 0050816a: MOV dword ptr [ESP + 0x714],ESI
//   Label: LAB_0050816a
// 00508171: MOV EAX,dword ptr [EBX + 0x66efbc]
//   XREF to: 0066efbc (READ)
//   XREF to: 0066efc0 (READ)
// 00508177: FILD dword ptr [ESP + 0x714]
// 0050817e: MOV dword ptr [EAX],EDI
//   XREF to: 020a4878 (WRITE)
//   XREF to: 020a48c4 (WRITE)
// 00508180: FMUL double ptr [0x006355de]
//   XREF to: 006355de (READ)
// 00508186: MOV EAX,dword ptr [EBX + 0x66efbc]
//   XREF to: 0066efbc (READ)
//   XREF to: 0066efc0 (READ)
// 0050818c: PUSH 0x0
// 0050818e: MOV dword ptr [EAX + 0x4],EDI
//   XREF to: 020a487c (WRITE)
//   XREF to: 020a48c8 (WRITE)
// 00508191: FADD double ptr [0x006355de]
//   XREF to: 006355de (READ)
// 00508197: SUB ESP,0x4
// 0050819a: FSTP float ptr [ESP]
// 0050819d: MOV EAX,dword ptr [EBX + 0x66efbc]
//   XREF to: 020a4878 (PARAM)
//   XREF to: 020a48c4 (PARAM)
//   XREF to: 0066efbc (READ)
//   XREF to: 0066efc0 (READ)
// 005081a3: PUSH EAX
//   XREF to: 020a4878 (DATA)
//   XREF to: 020a48c4 (DATA)
// 005081a4: ADD EBX,0x4
// 005081a7: INC ESI
// 005081a8: CALL core_dfilter.cpp_CDemonFilter_init_FUN_004705a0
//   XREF to: 004705a0 (UNCONDITIONAL_CALL)
// 005081ad: ADD ESP,0xc
// 005081b0: CMP ESI,0x4
// 005081b3: JL 0x0050816a
//   XREF to: 0050816a (CONDITIONAL_JUMP)
// 005081b5: MOV EDX,dword ptr [0x00680b80]
//   XREF to: 00680b80 (READ)
// 005081bb: PUSH EDX
//   XREF to: 02fd8a80 (DATA)
// 005081bc: CALL support_newmsg.cpp_CMouse_load_FUN_00544420
//   XREF to: 00544420 (UNCONDITIONAL_CALL)
// 005081c1: ADD ESP,0x4
// 005081c4: MOV ECX,dword ptr [0x00680a00]
//   XREF to: 02f7c740 (PARAM)
//   XREF to: 00680a00 (READ)
// 005081ca: PUSH ECX
//   XREF to: 02f7c740 (DATA)
// 005081cb: CALL core_netgame.cpp_CNetGame_FUN_0053f780
//   XREF to: 0053f780 (UNCONDITIONAL_CALL)
// 005081d0: ADD ESP,0x4
// 005081d3: PUSH 0x635580
//   XREF to: 00635580 (DATA)
// 005081d8: PUSH 0x635582
//   XREF to: 00635582 (DATA)
// 005081dd: PUSH 0x635591
//   XREF to: 00635591 (DATA)
// 005081e2: CALL wincore_winrun.cpp_setRegistryStringValue_FUN_005f4290
//   XREF to: 005f4290 (UNCONDITIONAL_CALL)
// 005081e7: ADD ESP,0xc
// 005081ea: PUSH 0x49b
// 005081ef: PUSH 0x6355bc
//   XREF to: 006355bc (DATA)
// 005081f4: CALL shape_memdbg.cpp_SMemHead_checkAllMemory_FUN_0050efe0
//   XREF to: 0050efe0 (UNCONDITIONAL_CALL)
// 005081f9: ADD ESP,0x8
// 005081fc: MOV ESP,EBP
// 005081fe: POP EBP
// 005081ff: POP EDI
// 00508200: POP ESI
// 00508201: POP EBX
// 00508202: RET
// 00508203: MOV dword ptr [0x00772628],EBX
//   Label: LAB_00508203
//   XREF to: 00772628 (WRITE)
// 00508209: MOV dword ptr [0x02d051f0],EBX
//   XREF to: 02d051f0 (WRITE)
// 0050820f: JMP 0x00507aac
//   XREF to: 00507aac (UNCONDITIONAL_JUMP)
// 00508214: MOV EAX,[0x0067b654]
//   Label: LAB_00508214
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 00508219: XOR EDI,EDI
// 0050821b: MOV dword ptr [EAX],0x280
//   XREF to: 02d81a9c (WRITE)
// 00508221: MOV dword ptr [0x02db8a64],EDI
//   XREF to: 02db8a64 (WRITE)
// 00508227: MOV dword ptr [EAX + 0x4],0x1e0
//   XREF to: 02d81aa0 (WRITE)
// 0050822e: MOV dword ptr [0x03f6b878],EDI
//   XREF to: 03f6b878 (WRITE)
// 00508234: MOV dword ptr [EAX + 0x8],0x20
//   XREF to: 02d81aa4 (WRITE)
// 0050823b: CALL core_menu.cpp_RunCalibrationTest_FUN_00510ba0
//   XREF to: 00510ba0 (UNCONDITIONAL_CALL)
// 00508240: JMP 0x00508037
//   XREF to: 00508037 (UNCONDITIONAL_JUMP)
