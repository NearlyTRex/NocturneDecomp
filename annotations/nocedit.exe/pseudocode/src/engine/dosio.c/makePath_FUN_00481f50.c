// Name: engine_dosio.c_makePath_FUN_00481f50
// Address: 00481f50
// Address Range: [[00481f50, 00481f77]]
// Convention: __cdecl
// Signature: void engine_dosio.c_makePath_FUN_00481f50(char * full_path, char * drive, char * directory, char * filename, char * extension)
// Cross-references:
//   core_msnedit.cpp_OpenAndCreateWorld_FUN_00537f60 (00537f60) at 0053801a [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_ExportSomething_FUN_0057a0c0 (0057a0c0) at 0057a104 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_OpenAndProcessFileMaybe_FUN_00578a20 (00578a20) at 00578b81 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_importS3D_FUN_00578d80 (00578d80) at 005796dd [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_showEditorMenu_FUN_00584940 (00584940) at 00584cf9 [UNCONDITIONAL_CALL]
//   engine_dosio.c_changeFileExtension_FUN_00482050 (00482050) at 004820a3 [UNCONDITIONAL_CALL]
//   engine_dosio.c_ensureTrailingSlash_FUN_00481f80 (00481f80) at 00481fd0 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CCheckOutItem_checkOutFileFromRepository_FUN_004b3920 (004b3920) at 004b3a43 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CCheckOutItem_findFileToCheckOut_FUN_004b5030 (004b5030) at 004b50c4 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CCheckOutItem_processFiles_FUN_004b4220 (004b4220) at 004b42d7 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CCheckOutItem_removeCheckOutBookkeeping_FUN_004b35a0 (004b35a0) at 004b364b [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CCheckOutList_load_FUN_004b2890 (004b2890) at 004b28f2 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_checkInPodFile_FUN_004baf00 (004baf00) at 004bb0e4 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_checkOutAndExtractPod_FUN_004ba740 (004ba740) at 004ba986 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_managePodFiles_FUN_004b86b0 (004b86b0) at 004b8975 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_registerFiles_FUN_004b5640 (004b5640) at 004b586e [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_buildCheckoutFilePath_FUN_004b1e60 (004b1e60) at 004b1ea2 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_buildFilePath_FUN_004b1de0 (004b1de0) at 004b1e1c [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_buildHistoryFilePath_FUN_004b1f10 (004b1f10) at 004b1f81 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_getLatestFileFromRepository_FUN_004b3220 (004b3220) at 004b326a [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_synchronizeFilesToDirectory_FUN_004bc650 (004bc650) at 004bc6fd [UNCONDITIONAL_CALL]
//   engine_font.cpp_CBitFont_loadBitmap_FUN_004ccff0 (004ccff0) at 004cd167 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420 (0049f420) at 0049f780 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270 (0049f270) at 0049f324 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CStrList_insertSortedFileRecord_FUN_004a3360 (004a3360) at 004a34c0 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CStrList_populateFromFileSearch_FUN_004a35b0 (004a35b0) at 004a3694 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CStrList_populateFromFilesNoDuplicates_FUN_004a37b0 (004a37b0) at 004a3894 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CStrList_populateWithFullPaths_FUN_004a39e0 (004a39e0) at 004a3a40 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_CalculateDistanceMaybe_FUN_005a45c0 (005a45c0) at 005a4657 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_file.c_makepath_FUN_005febfc

#include "nocturne.h"

void __cdecl
engine_dosio_c_makePath_FUN_00481f50
          (char *full_path,char *drive,char *directory,char *filename,char *extension)

{
  crt_file_c_makepath_FUN_005febfc(full_path,drive,directory,filename,extension);
  return;
}


// Assembly code:
// 00481f50: PUSH EBX
//   Label: engine_dosio.c_makePath_FUN_00481f50
// 00481f51: PUSH ESI
// 00481f52: PUSH EDI
// 00481f53: MOV EDX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x14] (READ)
// 00481f57: PUSH EDX
// 00481f58: MOV ECX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 00481f5c: PUSH ECX
// 00481f5d: MOV EBX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0xc] (READ)
// 00481f61: PUSH EBX
// 00481f62: MOV ESI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 00481f66: PUSH ESI
// 00481f67: MOV EDI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 00481f6b: PUSH EDI
// 00481f6c: CALL crt_file.c_makepath_FUN_005febfc
//   XREF to: 005febfc (UNCONDITIONAL_CALL)
// 00481f71: ADD ESP,0x14
// 00481f74: POP EDI
// 00481f75: POP ESI
// 00481f76: POP EBX
// 00481f77: RET
