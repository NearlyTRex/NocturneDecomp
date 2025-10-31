// Name: engine_dosio.c_CFileFinder_ctor_FUN_00481c30
// Address: 00481c30
// Address Range: [[00481c30, 00481c4b]]
// Convention: __cdecl
// Signature: CFileFinder * engine_dosio.c_CFileFinder_ctor_FUN_00481c30(CFileFinder * this_ptr)
// Cross-references:
//   core_msnedit.cpp_CDemonMission_showEditorMenu_FUN_005381e0 (005381e0) at 00538940 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_00537230 (00537230) at 0053723d [UNCONDITIONAL_CALL]
//   core_podmain.cpp_CDemonPod_load_FUN_005519c0 (005519c0) at 005519f7 [UNCONDITIONAL_CALL]
//   engine_dosio.c_getFileTimestamp_FUN_00481960 (00481960) at 0048198c [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CCheckOutItem_findFileToCheckOut_FUN_004b5030 (004b5030) at 004b5117 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_createPodConfigWizard_FUN_004bccf0 (004bccf0) at 004bcda7 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420 (0049f420) at 0049f4dc [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CStrList_populateFromFileSearch_FUN_004a35b0 (004a35b0) at 004a36e9 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CStrList_populateFromFilesNoDuplicates_FUN_004a37b0 (004a37b0) at 004a38dc [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CStrList_populateWithFullPaths_FUN_004a39e0 (004a39e0) at 004a3a9f [UNCONDITIONAL_CALL]
// Function calls:
//   engine_dosio.c_CFileFinder_reset_FUN_00481db0

#include "nocturne.h"

CFileFinder * __cdecl engine_dosio_c_CFileFinder_ctor_FUN_00481c30(CFileFinder *this_ptr)

{
  this_ptr->has_results = 0;
  engine_dosio_c_CFileFinder_reset_FUN_00481db0(this_ptr);
  return this_ptr;
}


// Assembly code:
// 00481c30: PUSH EBX
//   Label: engine_dosio.c_CFileFinder_ctor_FUN_00481c30
// 00481c31: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00481c35: PUSH EBX
// 00481c36: MOV dword ptr [EBX + 0x10c],0x0
// 00481c40: CALL engine_dosio.c_CFileFinder_reset_FUN_00481db0
//   XREF to: 00481db0 (UNCONDITIONAL_CALL)
// 00481c45: ADD ESP,0x4
// 00481c48: MOV EAX,EBX
// 00481c4a: POP EBX
// 00481c4b: RET
