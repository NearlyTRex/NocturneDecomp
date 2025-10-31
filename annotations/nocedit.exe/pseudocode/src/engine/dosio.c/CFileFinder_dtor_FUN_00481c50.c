// Name: engine_dosio.c_CFileFinder_dtor_FUN_00481c50
// Address: 00481c50
// Address Range: [[00481c50, 00481c61]]
// Convention: __cdecl
// Signature: CFileFinder * engine_dosio.c_CFileFinder_dtor_FUN_00481c50(CFileFinder * this_ptr, uint d1)
// Cross-references:
//   core_msnedit.cpp_CDemonMission_showEditorMenu_FUN_005381e0 (005381e0) at 00538a20 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_00537230 (00537230) at 005372f6 [UNCONDITIONAL_CALL]
//   core_podmain.cpp_CDemonPod_load_FUN_005519c0 (005519c0) at 00551a52 [UNCONDITIONAL_CALL]
//   engine_dosio.c_getFileTimestamp_FUN_00481960 (00481960) at 004819bc [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CCheckOutItem_findFileToCheckOut_FUN_004b5030 (004b5030) at 004b52ef [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_createPodConfigWizard_FUN_004bccf0 (004bccf0) at 004bce0a [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420 (0049f420) at 0049f983 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CStrList_populateFromFileSearch_FUN_004a35b0 (004a35b0) at 004a376a [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CStrList_populateFromFilesNoDuplicates_FUN_004a37b0 (004a37b0) at 004a3969 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CStrList_populateWithFullPaths_FUN_004a39e0 (004a39e0) at 004a3b72 [UNCONDITIONAL_CALL]
// Function calls:
//   engine_dosio.c_CFileFinder_closeSearch_FUN_00481d70

#include "nocturne.h"

CFileFinder * __cdecl engine_dosio_c_CFileFinder_dtor_FUN_00481c50(CFileFinder *this_ptr,uint d1)

{
  engine_dosio_c_CFileFinder_closeSearch_FUN_00481d70(this_ptr);
  return this_ptr;
}


// Assembly code:
// 00481c50: PUSH EBX
//   Label: engine_dosio.c_CFileFinder_dtor_FUN_00481c50
// 00481c51: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00481c55: PUSH EBX
// 00481c56: CALL engine_dosio.c_CFileFinder_closeSearch_FUN_00481d70
//   XREF to: 00481d70 (UNCONDITIONAL_CALL)
// 00481c5b: ADD ESP,0x4
// 00481c5e: MOV EAX,EBX
// 00481c60: POP EBX
// 00481c61: RET
