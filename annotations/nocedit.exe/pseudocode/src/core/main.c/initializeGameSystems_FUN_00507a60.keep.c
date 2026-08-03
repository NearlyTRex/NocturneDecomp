// Name: core_main.c_initializeGameSystems_FUN_00507a60
// Address: 00507a60
// MANUAL RECONSTRUCTION
// Address Range: [[00507a60, 00508244]]
// Convention: __cdecl
// Signature: void __cdecl core_main_c_initializeGameSystems_FUN_00507a60(int argc,char **argv)

#include "nocturne.h"
#include "debug_log.h"

void __cdecl core_main_c_initializeGameSystems_FUN_00507a60(int argc,char **argv)

{
  CGame *pCVar5;
  _FILE *file_ptr;
  DWORD DVar7;
  char *pcVar8;
  int iVar9;
  char acStack_728 [512];
  char low_memory_message [512];
  char temp_buffer [256];
  char loading_text [256];
  char memory_amount_str [256];
  CAlphaBitmap loading_bitmap;

  g_ProcessorType = 0;
  g_SystemMemorySize = 0x10000;
  g_SystemInitialized = 1;
  pcVar8 = getenv("PROCESSOR_LEVEL");
  if (pcVar8 == (char *)0x0) {
    g_RenderingMode = 4;
  }
  else {
    g_RenderingMode = 1;
    g_SoftwareRenderingForced = 1;
  }
  file_ptr = shape_memdbg_cpp_openFile_FUN_0050f7a0
                       ("stderr.txt",(char *)0x0,"rb","..\\core\\main.c",956
                       );
  if (file_ptr != (_FILE *)0x0) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_ptr,"..\\core\\main.c",958);
    DVar7 = engine_dosio_cpp_setReadonlyAttribute_FUN_00600c30("stderr.txt",0x1c0);
    if (DVar7 != 0) {
      g_CurrentFilename = "..\\core\\main.c";
      g_CurrentLineNumber = 960;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Please copy Nocturne to your hard drive");
    }
  }
  _freopen("stderr.txt","wt",&g_StderrLogFile);
  g_RenderingMode = 4;
  core_flattn_cpp_doNothing_FUN_004cbce0();
  core_inivar_cpp_readIniData_FUN_004fbd90();
  g_AGPTextureMode = 2;
  engine_pod_cpp_CPod_init_FUN_00550c30((CPod *)g_CDemonPodPtr);
  DLOG("registering search handlers (count before=%d)", g_NumSearchHandlers);
  engine_dosio_cpp_addGetFileInfoHook_FUN_00481710((FileSearchHandlerFunc *)engine_pod_cpp_findFileInPod_FUN_00551960);
  engine_dosio_cpp_addGetFileInfoHook_FUN_00481710((FileSearchHandlerFunc *)engine_dosio_cpp_findFileNormally_FUN_004817c0);
  DLOG("handlers registered (count after=%d)", g_NumSearchHandlers);
  support_newmsg_cpp_readMessageFile_FUN_00543e40("msglist.txt");
  core_mmx_c_detectCPUFeatures_FUN_00524f10();
  if (g_MMXSupported == 0) {
    g_CurrentFilename = "..\\core\\main.c";
    g_CurrentLineNumber = 1003;
    pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("This CPU does not have an MMX unit.")
    ;
    core_main_c_displayErrorAndQuit_FUN_00506f10(pcVar8);
  }
  engine_matrix_c_initializeTrigTables_FUN_0050c530();
  wincore_wddvmem_cpp_initTextureCache_FUN_00403790();
  engine_2d_c_initGraphicsSystem_FUN_00401010();
  wincore_winrun_cpp_calibrateCPUSpeed_FUN_005f2b80();
  wincore_winrun_cpp_initJoystick_FUN_005f4310();
#if NOCTURNE_AUTHENTIC_D3D_OPTIONS
  g_UseDirect3D = 0;
#endif
  iVar9 = wincore_wddvmem_cpp_setScreenResolution_FUN_005ecef0(0x280,0x1e0,0x20);
  if (iVar9 == 0) {
    g_CurrentFilename = "..\\core\\main.c";
    g_CurrentLineNumber = 1027;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Unable to set 640x480x32bpp.  Please make sure that you have a video card with a minimum of 2MB of RAM, and the latest DirectDraw video drivers.");
  }
  core_dfont_cpp_initFonts_FUN_004709a0();
  if (g_TotalPhysicalMemory < 0x3c00000) {
    strcpy(low_memory_message,
           support_newmsg_cpp_getLocalizedString_FUN_005441f0("Windows is reporting "));
    _sprintf(memory_amount_str,"%.1f",
             (double)((float)g_TotalPhysicalMemory * 9.536743e-07f));
    strcat(low_memory_message, memory_amount_str);
    strcat(low_memory_message,
           support_newmsg_cpp_getLocalizedString_FUN_005441f0("MB of system RAM."));
    strcat(low_memory_message, "\n");
    strcat(low_memory_message,
           support_newmsg_cpp_getLocalizedString_FUN_005441f0
                       ("Nocturne requires at least 64MB of system RAM."));
    strcat(low_memory_message, "\n");
    strcat(low_memory_message,
           support_newmsg_cpp_getLocalizedString_FUN_005441f0
                       ("If you think you have at least 64MB of system RAM"));
    strcat(low_memory_message, "\n");
    strcat(low_memory_message,
           support_newmsg_cpp_getLocalizedString_FUN_005441f0
                       ("then ignore this message."));
    strcat(low_memory_message, "\n");
    strcat(low_memory_message,
           support_newmsg_cpp_getLocalizedString_FUN_005441f0
                       ("See README.TXT for more information."));
    shape_edittool_cpp_CEditorTools_showWarning_FUN_0049e6f0(g_CEditorToolsPtr,low_memory_message);
  }
  if (g_AvailableSwapSpace < 0xc800000) {
    strcpy(acStack_728,
           support_newmsg_cpp_getLocalizedString_FUN_005441f0("Windows is reporting "));
    _sprintf(temp_buffer,"%.1f",
             (double)((float)g_AvailableSwapSpace * 9.536743e-07f));
    strcat(acStack_728, temp_buffer);
    strcat(acStack_728,
           support_newmsg_cpp_getLocalizedString_FUN_005441f0("MB of free swap disk space."));
    strcat(acStack_728, "\n");
    strcat(acStack_728,
           support_newmsg_cpp_getLocalizedString_FUN_005441f0("Nocturne runs best with at least 200MB free."));
    strcat(acStack_728, "\n");
    strcat(acStack_728,
           support_newmsg_cpp_getLocalizedString_FUN_005441f0("See README.TXT for more information."));
    shape_edittool_cpp_CEditorTools_showWarning_FUN_0049e6f0(g_CEditorToolsPtr,acStack_728);
  }
  pCVar5 = g_CGamePtr;
  if (g_FirstTimeFlag != 0) {
    g_CGamePtr->game_pixx = GAME_WINDOW_RESOLUTION_640;
    g_FirstTimeFlag = 0;
    pCVar5->game_pixy = GAME_WINDOW_RESOLUTION_480;
    g_UseDirect3D = 0;
    pCVar5->game_bpp = 0x20;
    core_menu_cpp_showCalibrationTest_FUN_00510ba0();
  }
  wincore_winvideo_cpp_playMovie_FUN_005f4a00("video","opening.avi");
  engine_special_cpp_clearScreen_FUN_005b3e70();
  strcpy(loading_text,
         support_newmsg_cpp_getLocalizedString_FUN_005441f0("Loading..."));
  engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80(g_ThemeFont,loading_text);
  engine_font_cpp_CBitFont_getCharHeight_FUN_004d01d0(g_ThemeFont,0x58);
  engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_00410520(&loading_bitmap);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_004105d0(&loading_bitmap,"fangs",0x280,0x1e0);
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_00410950(&loading_bitmap,0,0,0x8000);
  wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_00410540(&loading_bitmap,0);
  core_sound_cpp_CSound_findAllSoundFiles_FUN_005b2d00(g_CSoundPtr);
  core_mission_cpp_CDemonMission_reset_FUN_00522c80(g_CDemonMissionPtr);
  for (iVar9 = 0; iVar9 < 8; iVar9++) {
    core_dfilter_cpp_CDemonFilter_init_FUN_004705a0(
              g_GlobalFilters[iVar9], (float)iVar9 * 0.125f + 0.125f, 0);
  }
  for (iVar9 = 0; iVar9 < 4; iVar9++) {
    g_PlayerFilters[iVar9]->size = 0x100;
    g_PlayerFilters[iVar9]->count = 0x100;
    core_dfilter_cpp_CDemonFilter_init_FUN_004705a0(
              g_PlayerFilters[iVar9], (float)iVar9 * 0.25f + 0.25f, 0);
  }
  engine_ncursfx_cpp_CMouse_load_FUN_00544420(g_CMousePtr);
  core_netgame_cpp_CNetGame_init_FUN_0053f780(g_CNetGamePtr);
  wincore_winrun_cpp_setRegistryStringValue_FUN_005f4290
            ("SOFTWARE\\Matrox\\PowerDesk\\Current Settings","Flip on VBlank","0");
  shape_memdbg_cpp_checkAllMemory_FUN_0050efe0("..\\core\\main.c",1179);
  return;
}
