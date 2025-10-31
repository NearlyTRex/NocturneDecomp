// Name: engine_dosio.c_splitPath_FUN_00481f20
// Address: 00481f20
// Address Range: [[00481f20, 00481f47]]
// Convention: __cdecl
// Signature: void engine_dosio.c_splitPath_FUN_00481f20(char * full_path, char * drive, char * directory, char * filename, char * extension)
// Cross-references:
//   core_msnedit.cpp_OpenAndCreateWorld_FUN_00537f60 (00537f60) at 00537fa1 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_ExportSomething_FUN_0057a0c0 (0057a0c0) at 0057a0e6 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_OpenAndProcessFileMaybe_FUN_00578a20 (00578a20) at 00578acb [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_importS3D_FUN_00578d80 (00578d80) at 005796b0 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_showEditorMenu_FUN_00584940 (00584940) at 00584de3 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_DefineTexturesMaybe_FUN_00578290 (00578290) at 005782ae [UNCONDITIONAL_CALL]
//   core_setedit.cpp_DementedCameraEditor_FUN_0057e7c0 (0057e7c0) at 0057ecbf [UNCONDITIONAL_CALL]
//   core_setedit.cpp_DementedFogEditor_FUN_00580730 (00580730) at 00580e77 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_EditingGroundTypesAndSaving_FUN_00578630 (00578630) at 00578743 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_FUN_005781a0 (005781a0) at 005781be [UNCONDITIONAL_CALL]
//   core_setedit.cpp_FUN_00578210 (00578210) at 0057822e [UNCONDITIONAL_CALL]
//   core_setedit.cpp_showDementedLightEditor_FUN_0057c5d0 (0057c5d0) at 0057cced [UNCONDITIONAL_CALL]
//   engine_dosio.c_changeFileExtension_FUN_00482050 (00482050) at 00482076 [UNCONDITIONAL_CALL]
//   engine_dosio.c_ensureTrailingSlash_FUN_00481f80 (00481f80) at 00481fb2 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_catalogPodFile_FUN_004b7460 (004b7460) at 004b7575 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_managePodFiles_FUN_004b86b0 (004b86b0) at 004b8959 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_registerFiles_FUN_004b5640 (004b5640) at 004b57d3 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_synchronizeFilesToDirectory_FUN_004bc650 (004bc650) at 004bc6d3 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_writeArtFileEntries_FUN_004bc9f0 (004bc9f0) at 004bca0a [UNCONDITIONAL_CALL]
//   engine_font.cpp_CBitFont_loadBitmap_FUN_004ccff0 (004ccff0) at 004cd140 [UNCONDITIONAL_CALL]
//   engine_pod.cpp_CPodFile_mountFromFile_FUN_0054f650 (0054f650) at 0054f748 [UNCONDITIONAL_CALL]
//   engine_pod.cpp_CPod_getPodIndexByFilename_FUN_00551820 (00551820) at 00551849 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420 (0049f420) at 0049f7ed [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CStrList_insertSortedFileRecord_FUN_004a3360 (004a3360) at 004a34e4 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CStrList_populateFromFileSearch_FUN_004a35b0 (004a35b0) at 004a363c [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CStrList_populateFromFilesNoDuplicates_FUN_004a37b0 (004a37b0) at 004a383c [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CStrList_populateWithFullPaths_FUN_004a39e0 (004a39e0) at 004a3a64 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_CalculateDistanceMaybe_FUN_005a45c0 (005a45c0) at 005a4636 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_FUN_005a5180 (005a5180) at 005a51bf [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_FUN_005a5200 (005a5200) at 005a5288 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_ReadingOrDecodingSoundFile_FUN_005a4c80 (005a4c80) at 005a4d8b [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_getSampleInfo_FUN_005aa3f0 (005aa3f0) at 005aa479 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_startSfx_FUN_005a8e90 (005a8e90) at 005a91c9 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_string.c_splitpath_FUN_005ff178

#include "nocturne.h"

void __cdecl
engine_dosio_c_splitPath_FUN_00481f20
          (char *full_path,char *drive,char *directory,char *filename,char *extension)

{
  crt_string_c_splitpath_FUN_005ff178(full_path,drive,directory,filename,extension);
  return;
}


// Assembly code:
// 00481f20: PUSH EBX
//   Label: engine_dosio.c_splitPath_FUN_00481f20
// 00481f21: PUSH ESI
// 00481f22: PUSH EDI
// 00481f23: MOV EDX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x14] (READ)
// 00481f27: PUSH EDX
// 00481f28: MOV ECX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 00481f2c: PUSH ECX
// 00481f2d: MOV EBX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0xc] (READ)
// 00481f31: PUSH EBX
// 00481f32: MOV ESI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 00481f36: PUSH ESI
// 00481f37: MOV EDI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 00481f3b: PUSH EDI
// 00481f3c: CALL crt_string.c_splitpath_FUN_005ff178
//   XREF to: 005ff178 (UNCONDITIONAL_CALL)
// 00481f41: ADD ESP,0x14
// 00481f44: POP EDI
// 00481f45: POP ESI
// 00481f46: POP EBX
// 00481f47: RET
