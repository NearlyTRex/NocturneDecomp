// Name: shape_edittool.cpp_CStrList_sort_FUN_004a2ec0
// Address: 004a2ec0
// Address Range: [[004a2ec0, 004a2ed4]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_CStrList_sort_FUN_004a2ec0(CStrList * this_ptr)
// Cross-references:
//   core_actor.cpp_AnotherActorParser_FUN_0040eed0 (0040eed0) at 0040f749 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_DeleteActors_FUN_0053df90 (0053df90) at 0053e05f [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_0053b510 (0053b510) at 0053b753 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_0053b9f0 (0053b9f0) at 0053ba3f [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_0053c210 (0053c210) at 0053c28f [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_0053d8b0 (0053d8b0) at 0053d951 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_0053ec80 (0053ec80) at 0053edc1 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_HideActors_FUN_0053dcf0 (0053dcf0) at 0053dda4 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0 (005390f0) at 0053ac1a [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_RelevantActorsToTesting_FUN_0053b030 (0053b030) at 0053b273 [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_00562920 (00562920) at 00562b4b [UNCONDITIONAL_CALL]
//   core_setedit.cpp_EditingGroundTypesAndSaving_FUN_00578630 (00578630) at 005786ec [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_searchMountedPods_FUN_004bcb70 (004bcb70) at 004bcca9 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420 (0049f420) at 0049f548 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270 (0049f270) at 0049f2b6 [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CStrList_sort_FUN_004a2ec0(CStrList *this_ptr)

{
  (*this_ptr->vtable->sort)(this_ptr,0,this_ptr->item_count + -1);
  return;
}


// Assembly code:
// 004a2ec0: MOV ECX,dword ptr [ESP + 0x4]
//   Label: shape_edittool.cpp_CStrList_sort_FUN_004a2ec0
//   XREF to: Stack[0x4] (READ)
// 004a2ec4: MOV EAX,dword ptr [ECX]
// 004a2ec6: DEC EAX
// 004a2ec7: PUSH EAX
// 004a2ec8: PUSH 0x0
// 004a2eca: MOV EDX,dword ptr [ECX + 0xc]
// 004a2ecd: PUSH ECX
// 004a2ece: CALL dword ptr [EDX + 0x8]
// 004a2ed1: ADD ESP,0xc
// 004a2ed4: RET
