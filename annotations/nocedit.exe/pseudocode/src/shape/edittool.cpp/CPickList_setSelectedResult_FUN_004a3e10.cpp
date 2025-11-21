// Name: shape_edittool.cpp_CPickList_setSelectedResult_FUN_004a3e10
// Address: 004a3e10
// Address Range: [[004a3e10, 004a3e1b]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_CPickList_setSelectedResult_FUN_004a3e10(CPickList * this_ptr, int result_value)
// Cross-references:
//   core_menu.cpp_configureCustomKeyBindings_FUN_005138e0 (005138e0) at 0051475e [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_CDemonMission_showEditorMenu_FUN_005381e0 (005381e0) at 005388d1 [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_005677a0 (005677a0) at 00567954 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_EditingGroundTypesAndSaving_FUN_00578630 (00578630) at 00578677 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CCheckOutItem_findFileToCheckOut_FUN_004b5030 (004b5030) at 004b5107 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_catalogPodFile_FUN_004b7460 (004b7460) at 004b7508 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_compareLocalVsPod_FUN_004b82a0 (004b82a0) at 004b8505 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_crossReferencePodDuplicates_FUN_004b9f40 (004b9f40) at 004ba494 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_managePodFiles_FUN_004b86b0 (004b86b0) at 004b8d75 [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl
shape_edittool_cpp_CPickList_setSelectedResult_FUN_004a3e10(CPickList *this_ptr,int result_value)

{
  this_ptr->selected_index = result_value;
  return;
}


// Assembly code:
// 004a3e10: MOV EDX,dword ptr [ESP + 0x4]
//   Label: shape_edittool.cpp_CPickList_setSelectedResult_FUN_004a3e10
//   XREF to: Stack[0x4] (READ)
// 004a3e14: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 004a3e18: MOV dword ptr [EDX + 0x3c],EAX
// 004a3e1b: RET
