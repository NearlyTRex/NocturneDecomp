// Name: crt_io.c_deleteFile_FUN_005ff9d0
// Address: 005ff9d0
// Address Range: [[005ff9d0, 005ff9dd]]
// Convention: __watcallStack
// Signature: int crt_io.c_deleteFile_FUN_005ff9d0(char * filename)
// Cross-references:
//   core_game.cpp_CGame_loadSaveGame_FUN_004e12b0 (004e12b0) at 004e17ce [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_saveGame_FUN_004e0cd0 (004e0cd0) at 004e1116 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_CDemonMission_showEditorMenu_FUN_005381e0 (005381e0) at 0053850e [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_DuplicateActorCheckMaybe_FUN_0053bd80 (0053bd80) at 0053be9e [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0 (005390f0) at 00539104 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_UndoTmp_BuildActorList_CreateTmp_FUN_0053c140 (0053c140) at 0053c14c [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_WalkAroundOnSet_FUN_00538ba0 (00538ba0) at 00538d1f [UNCONDITIONAL_CALL]
//   core_netgame.cpp_CNetGame_FUN_0053f780 (0053f780) at 0053f787 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_BackdropMaybe_FUN_005805a0 (005805a0) at 005805e0 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_OpenAndProcessFileMaybe_FUN_00578a20 (00578a20) at 00578b91 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_importS3D_FUN_00578d80 (00578d80) at 00579473 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_DementedCameraEditor_FUN_0057e7c0 (0057e7c0) at 0057f4f0 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_FUN_00581320 (00581320) at 005813a1 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_005897b0 (005897b0) at 0058996e [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_viewModel_FUN_00598fc0 (00598fc0) at 005992c0 [UNCONDITIONAL_CALL]
//   crt_stdio.c_fclose_FUN_00601fd0 (00601fd0) at 00602089 [UNCONDITIONAL_CALL]
//   engine_console.cpp_CConsole_reset_FUN_00441a40 (00441a40) at 00441a71 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CCheckOutItem_processFiles_FUN_004b4220 (004b4220) at 004b470b [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_checkInPodFile_FUN_004baf00 (004baf00) at 004bb7ea [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_deleteLocalFilesFromPod_FUN_004bca50 (004bca50) at 004bcab0 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_managePodFiles_FUN_004b86b0 (004b86b0) at 004b99dc [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_getLatestFileFromRepository_FUN_004b3220 (004b3220) at 004b33fa [UNCONDITIONAL_CALL]
//   engine_ini.cpp_CIni_writeProfileString_FUN_004fb660 (004fb660) at 004fb865 [UNCONDITIONAL_CALL]
//   shape_cramtex.cpp_generateTextureAtlasLayout_FUN_00444d90 (00444d90) at 00444e49 [UNCONDITIONAL_CALL]
//   shape_cramtex.cpp_generateTextureAtlas_FUN_00445820 (00445820) at 0044582c [UNCONDITIONAL_CALL]
//   shape_design.c_cramTextureList_FUN_0046bb80 (0046bb80) at 0046de5b [UNCONDITIONAL_CALL]
//   shape_memdbg.cpp_traceFile_FUN_0050f180 (0050f180) at 0050f18f [UNCONDITIONAL_CALL]
//   shape_memdbg.cpp_traceMemory_FUN_0050f150 (0050f150) at 0050f15f [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_initializeLodGeneration_FUN_00516d50 (00516d50) at 00516d71 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_initializeLodGeneration_FUN_0051b8a0 (0051b8a0) at 0051b8bc [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_initializeLogDirectory_FUN_00515190 (00515190) at 005151a2 [UNCONDITIONAL_CALL]
//   shape_superopt.cpp_TriListSomething_FUN_005d77a0 (005d77a0) at 005d7d14 [UNCONDITIONAL_CALL]
//   shape_superopt.cpp_logToFile_FUN_005c7910 (005c7910) at 005c7922 [UNCONDITIONAL_CALL]
//   sound_mp3.cpp_testMP3DecoderBenchmark_FUN_00534210 (00534210) at 00534221 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_stdio.c_remove_FUN_00606600

#include "nocturne.h"

int __watcallStack crt_io_c_deleteFile_FUN_005ff9d0(char *filename)

{
  int iVar1;
  
  iVar1 = crt_stdio_c_remove_FUN_00606600(filename);
  return iVar1;
}


// Assembly code:
// 005ff9d0: MOV EDX,dword ptr [ESP + 0x4]
//   Label: crt_io.c_deleteFile_FUN_005ff9d0
//   XREF to: Stack[0x4] (READ)
// 005ff9d4: PUSH EDX
// 005ff9d5: CALL crt_stdio.c_remove_FUN_00606600
//   XREF to: 00606600 (UNCONDITIONAL_CALL)
// 005ff9da: ADD ESP,0x4
// 005ff9dd: RET
