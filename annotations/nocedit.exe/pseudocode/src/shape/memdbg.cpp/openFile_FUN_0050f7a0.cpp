// Name: shape_memdbg.cpp_openFile_FUN_0050f7a0
// Address: 0050f7a0
// Address Range: [[0050f7a0, 0050f9a2]]
// Convention: __cdecl
// Signature: FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, int line_number)
// Cross-references:
//   cockpit_pkbitmap.cpp_CPackedBitmap_saveToPBMFile_FUN_0054b520 (0054b520) at 0054b53e [UNCONDITIONAL_CALL]
//   core_course.cpp_OpeningCourseFile2_FUN_00442d70 (00442d70) at 00442d92 [UNCONDITIONAL_CALL]
//   core_course.cpp_OpeningCourseFileMaybe_FUN_00442bc0 (00442bc0) at 00442be3 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_backupModel_FUN_00479260 (00479260) at 00479279 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_exportToS3D_FUN_00479f30 (00479f30) at 00479f52 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_export_FUN_00478e10 (00478e10) at 00478e75 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_importFromS3D_FUN_00479330 (00479330) at 00479901 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_copyFile_FUN_0047c930 (0047c930) at 0047c9a1 [UNCONDITIONAL_CALL]
//   core_dtrace.cpp_CDemonRaytrace_loadAndSyncWithGeoFile_FUN_00494de0 (00494de0) at 00494eba [UNCONDITIONAL_CALL]
//   core_fileman.cpp_CDemonFileManager_createPodFromDirectory_FUN_004bda20 (004bda20) at 004bdb14 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_loadSaveGame_FUN_004e12b0 (004e12b0) at 004e167b [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_showChapterSelect_FUN_004e1cb0 (004e1cb0) at 004e1d4a [UNCONDITIONAL_CALL]
//   core_main.c_displayErrorAndQuit_FUN_00506f10 (00506f10) at 00507000 [UNCONDITIONAL_CALL]
//   core_main.c_initializeGameSystems_FUN_00507a60 (00507a60) at 00507ac2 [UNCONDITIONAL_CALL]
//   core_main.c_showDeveloperToolsMenu_FUN_005073a0 (005073a0) at 00507948 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_DuplicateActorCheckMaybe_FUN_0053bd80 (0053bd80) at 0053be40 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_UndoChangeMaybe_FUN_0053c0b0 (0053c0b0) at 0053c0da [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_UndoTmp_BuildActorList_CreateTmp_FUN_0053c140 (0053c140) at 0053c1bd [UNCONDITIONAL_CALL]
//   core_podmain.cpp_CDemonPod_load_FUN_005519c0 (005519c0) at 005519e2 [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_ScriptErrorStartNotepad_FUN_00559f80 (00559f80) at 0055a0e4 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_OpenAndProcessFileMaybe_FUN_00578a20 (00578a20) at 00578aa2 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_importS3D_FUN_00578d80 (00578d80) at 0057995a [UNCONDITIONAL_CALL]
//   core_setedit.cpp_EditingGroundTypesAndSaving_FUN_00578630 (00578630) at 005788df [UNCONDITIONAL_CALL]
//   core_setedit.cpp_ImportingGroundTextures_FUN_00578420 (00578420) at 0057845d [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CBoneStructure_importBON_FUN_0058a3d0 (0058a3d0) at 0058a3fb [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CDeformableModel_determinePartsFromS3D_FUN_0058f810 (0058f810) at 0058f8bd [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CDeformableModel_exportModelToS3D_FUN_00595fc0 (00595fc0) at 00595ff1 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_005897b0 (005897b0) at 005897d6 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_00589a40 (00589a40) at 00589a61 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058b660 (0058b660) at 0058b6a9 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058bd00 (0058bd00) at 0058bd46 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058c190 (0058c190) at 0058c1cc [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_00592690 (00592690) at 005926d0 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_viewModel_FUN_00598fc0 (00598fc0) at 00598fea [UNCONDITIONAL_CALL]
//   core_sound.cpp_PlaySfxByStringMaybe_FUN_005b1fd0 (005b1fd0) at 005b24a0 [UNCONDITIONAL_CALL]
//   engine_console.cpp_CConsole_printf_FUN_00441890 (00441890) at 00441930 [UNCONDITIONAL_CALL]
//   engine_dosio.c_getFile_FUN_00481a50 (00481a50) at 00481ab6 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CCheckOutItem_checkOutFileFromRepository_FUN_004b3920 (004b3920) at 004b3aa2 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CCheckOutItem_processFiles_FUN_004b4220 (004b4220) at 004b460b [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CCheckOutItem_removeCheckOutBookkeeping_FUN_004b35a0 (004b35a0) at 004b3690 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CCheckOutList_load_FUN_004b2890 (004b2890) at 004b2937 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_buildPodFromResponseFile_FUN_004b7ac0 (004b7ac0) at 004b7b08 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_checkInPodFile_FUN_004baf00 (004baf00) at 004bb6e2 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_checkOutAndExtractPod_FUN_004ba740 (004ba740) at 004ba9e5 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_createPodConfigWizard_FUN_004bccf0 (004bccf0) at 004bcd0d [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_extractFilesToDirectory_FUN_004b76d0 (004b76d0) at 004b774d [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_extractPodFile_FUN_004b6e10 (004b6e10) at 004b6f18 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_load_FUN_004b6c00 (004b6c00) at 004b6c2e [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_managePodFiles_FUN_004b86b0 (004b86b0) at 004b9b33 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_openExtractFileForBuilding_FUN_004b7c10 (004b7c10) at 004b7c26 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_parsePodConfigFile_FUN_004ba4f0 (004ba4f0) at 004ba50d [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_rebuildLastPod_FUN_004b5a50 (004b5a50) at 004b6540 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_removeAuditRecords_FUN_004bd190 (004bd190) at 004bd465 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_writePodConfigFile_FUN_004ba620 (004ba620) at 004ba63d [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_extractFileWithTimestamp_FUN_004b7d50 (004b7d50) at 004b7de6 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_findMaxFieldInTimestampFile_FUN_004b2640 (004b2640) at 004b265f [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_getLatestFileFromRepository_FUN_004b3220 (004b3220) at 004b32ae [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_openFileWithRetry_FUN_004b2200 (004b2200) at 004b221c [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_synchronizeFilesToDirectory_FUN_004bc650 (004bc650) at 004bc86d [UNCONDITIONAL_CALL]
//   engine_ini.cpp_CIni_findLineNumberOfVariable_FUN_004fb470 (004fb470) at 004fb4a3 [UNCONDITIONAL_CALL]
//   engine_ini.cpp_CIni_getProfileString_FUN_004fb250 (004fb250) at 004fb271 [UNCONDITIONAL_CALL]
//   engine_ini.cpp_CIni_writeProfileString_FUN_004fb660 (004fb660) at 004fb6cd [UNCONDITIONAL_CALL]
//   engine_pcx.c_saveScreenRaw16_FUN_00548d20 (00548d20) at 00548d9f [UNCONDITIONAL_CALL]
//   engine_pcx.c_saveScreenRaw32_FUN_00548f00 (00548f00) at 00548f82 [UNCONDITIONAL_CALL]
//   engine_pcx.c_saveScreenshotGeneral_FUN_005490c0 (005490c0) at 005491a1 [UNCONDITIONAL_CALL]
//   engine_pod.cpp_CPodFile_computeFileCRC_FUN_005507f0 (005507f0) at 00550843 [UNCONDITIONAL_CALL]
//   engine_pod.cpp_CPodFile_getAuditRecord_FUN_00550590 (00550590) at 005505ed [UNCONDITIONAL_CALL]
//   engine_pod.cpp_CPodFile_getDependencyRecord_FUN_005506c0 (005506c0) at 0055071d [UNCONDITIONAL_CALL]
//   engine_pod.cpp_CPodFile_mountFromFile_FUN_0054f650 (0054f650) at 0054f6e9 [UNCONDITIONAL_CALL]
//   engine_pod.cpp_CPodFile_verifyChecksum_FUN_00550230 (00550230) at 005502a0 [UNCONDITIONAL_CALL]
//   engine_pod.cpp_CPod_computeAndStoreCRC_FUN_00551000 (00551000) at 005511ca [UNCONDITIONAL_CALL]
//   engine_pod.cpp_crc32ComputeFileRange_FUN_0054f490 (0054f490) at 0054f4c1 [UNCONDITIONAL_CALL]
//   shape_cramtex.cpp_generateTextureAtlasLayout_FUN_00444d90 (00444d90) at 00445326 [UNCONDITIONAL_CALL]
//   shape_cramtex.cpp_generateTextureAtlas_FUN_00445820 (00445820) at 0044591e [UNCONDITIONAL_CALL]
//   shape_cramtex.cpp_runInteractiveAtlasGeneration_FUN_00446160 (00446160) at 0044633a [UNCONDITIONAL_CALL]
//   shape_design.c_combineTextureMaps_FUN_00469ee0 (00469ee0) at 00469f3f [UNCONDITIONAL_CALL]
//   shape_design.c_cramTextureList_FUN_0046bb80 (0046bb80) at 0046bc47 [UNCONDITIONAL_CALL]
//   shape_design.c_loadTextureData_FUN_0046b060 (0046b060) at 0046b0a9 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_FUN_005173f0 (005173f0) at 00517428 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_FUN_0051a9d0 (0051a9d0) at 0051a9fe [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_FUN_0051ad60 (0051ad60) at 0051ad8e [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_FUN_0051b770 (0051b770) at 0051b850 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_FUN_0051c070 (0051c070) at 0051c09e [UNCONDITIONAL_CALL]
//   shape_superopt.cpp_SomethingAboutLogTXTCreate_FUN_005c7910 (005c7910) at 005c7948 [UNCONDITIONAL_CALL]
//   shape_superopt.cpp_TriListSomething_FUN_005d77a0 (005d77a0) at 005d77fe [UNCONDITIONAL_CALL]
//   sound_mp3.cpp_testMP3DecoderBenchmark_FUN_00534210 (00534210) at 005342e6 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_HandleSoundError_FUN_005adba0 (005adba0) at 005adc09 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_convertMp3ToSfxMetadata_FUN_005acf20 (005acf20) at 005ad088 [UNCONDITIONAL_CALL]
//   wincore_winvideo.cpp_playMovie_FUN_005f4a00 (005f4a00) at 005f4a45 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Opening_s_for_s_in_s_lin_00636201
//   TerminatedCString s_Opening_s_in_s_for_s_in__00636221
//   TerminatedCString s_Open_failed_00636247
//   TerminatedCString s_shape_memdbg_cpp_00636255
//   TerminatedCString s_Too_many_open_files_tryi_00636269
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   BOOL g_RecursiveCallFlag
//   HANDLE g_FileMutex
//   int g_OpenFileCount
//   FileTrackingEntry[100] g_FileRegistry
//   undefined4 g_FileRegistry[0].filename[1]
//   undefined4 g_FileRegistry[0].filename[2]
//   undefined4 g_FileRegistry[0].filename[3]
//   undefined4 g_FileRegistry[0].directory[0]
//   undefined4 g_FileRegistry[0].directory[1]
//   undefined4 g_FileRegistry[0].directory[2]
//   undefined4 g_FileRegistry[0].directory[3]
//   undefined4 g_FileRegistry[0].mode[0]
//   undefined4 g_FileRegistry[0].mode[1]
//   undefined4 g_FileRegistry[0].mode[2]
//   undefined4 g_FileRegistry[0].mode[3]
//   undefined4 g_FileRegistry[0].source_file[0]
//   undefined4 g_FileRegistry[0].source_file[1]
//   undefined4 g_FileRegistry[0].source_file[2]
//   undefined4 g_FileRegistry[0].source_file[3]
//   undefined4 g_FileRegistry[0].line_number
//   undefined4 g_FileRegistry[0].file_ptr
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_stdio.c_fopen_FUN_00601a7c
//   shape_memdbg.cpp_traceFile_FUN_0050f180
//   wincore_winrun.cpp_createMutex_FUN_005f3fe0
//   wincore_winrun.cpp_releaseMutex_FUN_005f4050
//   wincore_winrun.cpp_waitForMutex_FUN_005f3ff0

#include "nocturne.h"

/* WARNING: Variable defined which should be unmapped: opened_file */

FILE * __cdecl
shape_memdbg_cpp_openFile_FUN_0050f7a0
          (char *filename,char *directory,char *mode,char *source_file,int line_number)

{
  char cVar1;
  int iVar2;
  FILE *pFVar3;
  char *pcVar4;
  char *pcVar5;
  FileTrackingEntry *pFVar6;
  char *in_stack_00000018;
  undefined4 in_stack_0000001c;
  char *in_stack_00000024;
  undefined4 in_stack_00000028;
  int in_stack_0000002c;
  FILE *opened_file;
  
  if (g_RecursiveCallFlag == 0) {
    if (g_FileMutex == (HANDLE)0x0) {
      g_FileMutex = wincore_winrun_cpp_createMutex_FUN_005f3fe0();
    }
    wincore_winrun_cpp_waitForMutex_FUN_005f3ff0(g_FileMutex);
  }
  if (directory == (char *)0x0) {
    shape_memdbg_cpp_traceFile_FUN_0050f180
              ("Opening %s for %s in %s line %d",filename,line_number,source_file,
               in_stack_0000001c);
  }
  else {
    shape_memdbg_cpp_traceFile_FUN_0050f180
              ("Opening %s in %s for %s in %s line %d",directory,filename,line_number,source_file,
               in_stack_0000001c);
  }
  pFVar3 = crt_stdio_c_fopen_FUN_00601a7c(filename,in_stack_00000018);
  if (pFVar3 == (FILE *)0x0) {
    wincore_winrun_cpp_releaseMutex_FUN_005f4050(g_FileMutex);
    shape_memdbg_cpp_traceFile_FUN_0050f180("  Open failed");
    return (FILE *)0x0;
  }
  if (99 < g_OpenFileCount) {
    wincore_winrun_cpp_releaseMutex_FUN_005f4050(g_FileMutex);
    if (g_RecursiveCallFlag != 0) {
      return (FILE *)0x0;
    }
    g_CurrentFilename = "..\\shape\\memdbg.cpp";
    g_CurrentLineNumber = 0x1f0;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("Too many open files trying to open %s, %s line %d",filename,source_file,in_stack_00000028);
  }
  iVar2 = g_OpenFileCount;
  pFVar6 = g_FileRegistry + g_OpenFileCount;
  g_OpenFileCount = g_OpenFileCount + 1;
  pcVar4 = filename;
  do {
    cVar1 = *pcVar4;
    pFVar6->filename[0] = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pFVar6->filename[1] = cVar1;
    pFVar6 = (FileTrackingEntry *)(pFVar6->filename + 2);
  } while (cVar1 != '\0');
  pcVar4 = g_FileRegistry[iVar2].mode;
  do {
    cVar1 = *in_stack_00000024;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = in_stack_00000024[1];
    in_stack_00000024 = in_stack_00000024 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar4 = g_FileRegistry[iVar2].source_file;
  do {
    cVar1 = *source_file;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = source_file[1];
    source_file = source_file + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  if (directory == (char *)0x0) {
    g_FileRegistry[iVar2].directory[0] = '\0';
  }
  else {
    pcVar4 = g_FileRegistry[iVar2].directory;
    pcVar5 = directory;
    do {
      cVar1 = *pcVar5;
      *pcVar4 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar5[1];
      pcVar5 = pcVar5 + 2;
      pcVar4[1] = cVar1;
      pcVar4 = pcVar4 + 2;
    } while (cVar1 != '\0');
  }
  g_FileRegistry[iVar2].line_number = in_stack_0000002c;
  g_FileRegistry[iVar2].file_ptr = (FILE *)filename;
  wincore_winrun_cpp_releaseMutex_FUN_005f4050(g_FileMutex);
  return (FILE *)directory;
}


// Assembly code:
// 0050f7a0: PUSH EBX
//   Label: shape_memdbg.cpp_openFile_FUN_0050f7a0
// 0050f7a1: PUSH ESI
// 0050f7a2: PUSH EDI
// 0050f7a3: PUSH EBP
// 0050f7a4: SUB ESP,0x4
// 0050f7a7: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 0050f7ab: MOV EBP,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 0050f7af: MOV EBX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x10] (READ)
// 0050f7b3: CMP dword ptr [0x02f0ca50],0x0
//   XREF to: 02f0ca50 (READ)
// 0050f7ba: JZ 0x0050f8bf
//   XREF to: 0050f8bf (CONDITIONAL_JUMP)
// 0050f7c0: TEST EBP,EBP
//   Label: LAB_0050f7c0
// 0050f7c2: JNZ 0x0050f8e6
//   XREF to: 0050f8e6 (CONDITIONAL_JUMP)
// 0050f7c8: MOV ECX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x14] (READ)
// 0050f7cc: PUSH ECX
// 0050f7cd: PUSH EBX
// 0050f7ce: MOV EDI,dword ptr [ESP + 0x28]
//   XREF to: Stack[0xc] (READ)
// 0050f7d2: PUSH EDI
// 0050f7d3: PUSH ESI
// 0050f7d4: PUSH 0x636201
//   XREF to: 00636201 (DATA)
// 0050f7d9: CALL shape_memdbg.cpp_traceFile_FUN_0050f180
//   XREF to: 0050f180 (UNCONDITIONAL_CALL)
// 0050f7de: ADD ESP,0x14
// 0050f7e1: MOV EAX,dword ptr [ESP + 0x20]
//   Label: LAB_0050f7e1
//   XREF to: Stack[0xc] (READ)
// 0050f7e5: PUSH EAX
// 0050f7e6: PUSH ESI
// 0050f7e7: CALL crt_stdio.c_fopen_FUN_00601a7c
//   XREF to: 00601a7c (UNCONDITIONAL_CALL)
// 0050f7ec: ADD ESP,0x8
// 0050f7ef: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x14] (DATA)
// 0050f7f2: TEST EAX,EAX
// 0050f7f4: JZ 0x0050f905
//   XREF to: 0050f905 (CONDITIONAL_JUMP)
// 0050f7fa: CMP dword ptr [0x02f0d948],0x64
//   XREF to: 02f0d948 (READ)
// 0050f801: JGE 0x0050f92b
//   XREF to: 0050f92b (CONDITIONAL_JUMP)
// 0050f807: MOV EDI,dword ptr [0x02f0d948]
//   Label: LAB_0050f807
//   XREF to: 02f0d948 (READ)
// 0050f80d: IMUL EDX,EDI,0x328
// 0050f813: ADD EDX,0x2f0d94c
//   XREF to: 02f0d94c (DATA)
// 0050f819: LEA EAX,[EDI + 0x1]
// 0050f81c: MOV EDI,EDX
// 0050f81e: MOV [0x02f0d948],EAX
//   XREF to: 02f0d948 (WRITE)
// 0050f823: PUSH EDI
// 0050f824: MOV AL,byte ptr [ESI]
//   Label: LAB_0050f824
// 0050f826: MOV byte ptr [EDI],AL
//   XREF to: 02f0d94c (DATA)
//   XREF to: 02f0d94e (DATA)
// 0050f828: CMP AL,0x0
// 0050f82a: JZ 0x0050f83c
//   XREF to: 0050f83c (CONDITIONAL_JUMP)
// 0050f82c: MOV AL,byte ptr [ESI + 0x1]
// 0050f82f: ADD ESI,0x2
// 0050f832: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 02f0d94d (DATA)
//   XREF to: 02f0d94f (DATA)
// 0050f835: ADD EDI,0x2
// 0050f838: CMP AL,0x0
// 0050f83a: JNZ 0x0050f824
//   XREF to: 0050f824 (CONDITIONAL_JUMP)
// 0050f83c: POP EDI
//   Label: LAB_0050f83c
// 0050f83d: MOV ESI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0xc] (READ)
// 0050f841: LEA EDI,[EDX + 0x208]
// 0050f847: PUSH EDI
// 0050f848: MOV AL,byte ptr [ESI]
//   Label: LAB_0050f848
// 0050f84a: MOV byte ptr [EDI],AL
//   XREF to: 02f0db54 (DATA)
//   XREF to: 02f0db56 (DATA)
// 0050f84c: CMP AL,0x0
// 0050f84e: JZ 0x0050f860
//   XREF to: 0050f860 (CONDITIONAL_JUMP)
// 0050f850: MOV AL,byte ptr [ESI + 0x1]
// 0050f853: ADD ESI,0x2
// 0050f856: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 02f0db55 (DATA)
//   XREF to: 02f0db57 (DATA)
// 0050f859: ADD EDI,0x2
// 0050f85c: CMP AL,0x0
// 0050f85e: JNZ 0x0050f848
//   XREF to: 0050f848 (CONDITIONAL_JUMP)
// 0050f860: POP EDI
//   Label: LAB_0050f860
// 0050f861: LEA EDI,[EDX + 0x21c]
// 0050f867: MOV ESI,EBX
// 0050f869: PUSH EDI
// 0050f86a: MOV AL,byte ptr [ESI]
//   Label: LAB_0050f86a
// 0050f86c: MOV byte ptr [EDI],AL
//   XREF to: 02f0db68 (DATA)
//   XREF to: 02f0db6a (DATA)
// 0050f86e: CMP AL,0x0
// 0050f870: JZ 0x0050f882
//   XREF to: 0050f882 (CONDITIONAL_JUMP)
// 0050f872: MOV AL,byte ptr [ESI + 0x1]
// 0050f875: ADD ESI,0x2
// 0050f878: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 02f0db69 (DATA)
//   XREF to: 02f0db6b (DATA)
// 0050f87b: ADD EDI,0x2
// 0050f87e: CMP AL,0x0
// 0050f880: JNZ 0x0050f86a
//   XREF to: 0050f86a (CONDITIONAL_JUMP)
// 0050f882: POP EDI
//   Label: LAB_0050f882
// 0050f883: TEST EBP,EBP
// 0050f885: JNZ 0x0050f97c
//   XREF to: 0050f97c (CONDITIONAL_JUMP)
// 0050f88b: MOV byte ptr [EDX + 0x104],0x0
//   XREF to: 02f0da50 (DATA)
// 0050f892: MOV EAX,dword ptr [ESP + 0x28]
//   Label: LAB_0050f892
//   XREF to: Stack[0x14] (READ)
// 0050f896: MOV dword ptr [EDX + 0x320],EAX
//   XREF to: 02f0dc6c (DATA)
// 0050f89c: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 0050f89f: MOV dword ptr [EDX + 0x324],EAX
//   XREF to: 02f0dc70 (DATA)
// 0050f8a5: MOV EDX,dword ptr [0x02f0d93c]
//   XREF to: 02f0d93c (READ)
// 0050f8ab: PUSH EDX
// 0050f8ac: CALL wincore_winrun.cpp_releaseMutex_FUN_005f4050
//   XREF to: 005f4050 (UNCONDITIONAL_CALL)
// 0050f8b1: ADD ESP,0x4
// 0050f8b4: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 0050f8b7: ADD ESP,0x4
// 0050f8ba: POP EBP
// 0050f8bb: POP EDI
// 0050f8bc: POP ESI
// 0050f8bd: POP EBX
// 0050f8be: RET
// 0050f8bf: CMP dword ptr [0x02f0d93c],0x0
//   Label: LAB_0050f8bf
//   XREF to: 02f0d93c (READ)
// 0050f8c6: JNZ 0x0050f8d2
//   XREF to: 0050f8d2 (CONDITIONAL_JUMP)
// 0050f8c8: CALL wincore_winrun.cpp_createMutex_FUN_005f3fe0
//   XREF to: 005f3fe0 (UNCONDITIONAL_CALL)
// 0050f8cd: MOV [0x02f0d93c],EAX
//   XREF to: 02f0d93c (WRITE)
// 0050f8d2: MOV EDI,dword ptr [0x02f0d93c]
//   Label: LAB_0050f8d2
//   XREF to: 02f0d93c (READ)
// 0050f8d8: PUSH EDI
// 0050f8d9: CALL wincore_winrun.cpp_waitForMutex_FUN_005f3ff0
//   XREF to: 005f3ff0 (UNCONDITIONAL_CALL)
// 0050f8de: ADD ESP,0x4
// 0050f8e1: JMP 0x0050f7c0
//   XREF to: 0050f7c0 (UNCONDITIONAL_JUMP)
// 0050f8e6: MOV EAX,dword ptr [ESP + 0x28]
//   Label: LAB_0050f8e6
//   XREF to: Stack[0x14] (READ)
// 0050f8ea: PUSH EAX
// 0050f8eb: PUSH EBX
// 0050f8ec: MOV EDX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0xc] (READ)
// 0050f8f0: PUSH EDX
// 0050f8f1: PUSH ESI
// 0050f8f2: PUSH EBP
// 0050f8f3: PUSH 0x636221
//   XREF to: 00636221 (DATA)
// 0050f8f8: CALL shape_memdbg.cpp_traceFile_FUN_0050f180
//   XREF to: 0050f180 (UNCONDITIONAL_CALL)
// 0050f8fd: ADD ESP,0x18
// 0050f900: JMP 0x0050f7e1
//   XREF to: 0050f7e1 (UNCONDITIONAL_JUMP)
// 0050f905: MOV ECX,dword ptr [0x02f0d93c]
//   Label: LAB_0050f905
//   XREF to: 02f0d93c (READ)
// 0050f90b: PUSH ECX
// 0050f90c: CALL wincore_winrun.cpp_releaseMutex_FUN_005f4050
//   XREF to: 005f4050 (UNCONDITIONAL_CALL)
// 0050f911: ADD ESP,0x4
// 0050f914: PUSH 0x636247
//   XREF to: 00636247 (DATA)
// 0050f919: CALL shape_memdbg.cpp_traceFile_FUN_0050f180
//   XREF to: 0050f180 (UNCONDITIONAL_CALL)
// 0050f91e: ADD ESP,0x4
// 0050f921: XOR EAX,EAX
// 0050f923: ADD ESP,0x4
// 0050f926: POP EBP
// 0050f927: POP EDI
// 0050f928: POP ESI
// 0050f929: POP EBX
// 0050f92a: RET
// 0050f92b: MOV ECX,dword ptr [0x02f0d93c]
//   Label: LAB_0050f92b
//   XREF to: 02f0d93c (READ)
// 0050f931: PUSH ECX
// 0050f932: CALL wincore_winrun.cpp_releaseMutex_FUN_005f4050
//   XREF to: 005f4050 (UNCONDITIONAL_CALL)
// 0050f937: MOV EDI,dword ptr [0x02f0ca50]
//   XREF to: 02f0ca50 (READ)
// 0050f93d: ADD ESP,0x4
// 0050f940: TEST EDI,EDI
// 0050f942: JZ 0x0050f94e
//   XREF to: 0050f94e (CONDITIONAL_JUMP)
// 0050f944: XOR EAX,EAX
// 0050f946: ADD ESP,0x4
// 0050f949: POP EBP
// 0050f94a: POP EDI
// 0050f94b: POP ESI
// 0050f94c: POP EBX
// 0050f94d: RET
// 0050f94e: MOV ECX,dword ptr [ESP + 0x28]
//   Label: LAB_0050f94e
//   XREF to: Stack[0x14] (READ)
// 0050f952: PUSH ECX
// 0050f953: PUSH EBX
// 0050f954: PUSH ESI
// 0050f955: MOV EAX,0x636255
//   XREF to: 00636255 (PARAM)
// 0050f95a: MOV EDX,0x1f0
// 0050f95f: PUSH 0x636269
//   XREF to: 00636269 (DATA)
// 0050f964: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 0050f969: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 0050f96f: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0050f974: ADD ESP,0x10
// 0050f977: JMP 0x0050f807
//   XREF to: 0050f807 (UNCONDITIONAL_JUMP)
// 0050f97c: LEA EDI,[EDX + 0x104]
//   Label: LAB_0050f97c
// 0050f982: MOV ESI,EBP
// 0050f984: PUSH EDI
// 0050f985: MOV AL,byte ptr [ESI]
//   Label: LAB_0050f985
// 0050f987: MOV byte ptr [EDI],AL
//   XREF to: 02f0da50 (DATA)
//   XREF to: 02f0da52 (DATA)
// 0050f989: CMP AL,0x0
// 0050f98b: JZ 0x0050f99d
//   XREF to: 0050f99d (CONDITIONAL_JUMP)
// 0050f98d: MOV AL,byte ptr [ESI + 0x1]
// 0050f990: ADD ESI,0x2
// 0050f993: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 02f0da51 (DATA)
//   XREF to: 02f0da53 (DATA)
// 0050f996: ADD EDI,0x2
// 0050f999: CMP AL,0x0
// 0050f99b: JNZ 0x0050f985
//   XREF to: 0050f985 (CONDITIONAL_JUMP)
// 0050f99d: POP EDI
//   Label: LAB_0050f99d
// 0050f99e: JMP 0x0050f892
//   XREF to: 0050f892 (UNCONDITIONAL_JUMP)
