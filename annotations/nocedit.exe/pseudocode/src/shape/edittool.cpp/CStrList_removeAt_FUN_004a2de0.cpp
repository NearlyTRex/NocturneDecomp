// Name: shape_edittool.cpp_CStrList_removeAt_FUN_004a2de0
// Address: 004a2de0
// Address Range: [[004a2de0, 004a2df4]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_CStrList_removeAt_FUN_004a2de0(CStrList * this_ptr, int index)
// Cross-references:
//   core_msnedit.cpp_DeleteActors_FUN_0053df90 (0053df90) at 0053e0b3 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_HideActors_FUN_0053dcf0 (0053dcf0) at 0053de02 [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_editorAction_FUN_00564820 (00564820) at 00564fd9 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_checkOutAndExtractPod_FUN_004ba740 (004ba740) at 004bae7d [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_extractFilesToDirectory_FUN_004b76d0 (004b76d0) at 004b79ac [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_extractPodFile_FUN_004b6e10 (004b6e10) at 004b7190 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_managePodFiles_FUN_004b86b0 (004b86b0) at 004b9a2a [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_managePodMounts_FUN_004bcec0 (004bcec0) at 004bd061 [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CStrList_removeAt_FUN_004a2de0(CStrList *this_ptr,int index)

{
  (*this_ptr->vtable->remove)(this_ptr,index,index);
  return;
}


// Assembly code:
// 004a2de0: MOV EDX,dword ptr [ESP + 0x4]
//   Label: shape_edittool.cpp_CStrList_removeAt_FUN_004a2de0
//   XREF to: Stack[0x4] (READ)
// 004a2de4: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 004a2de8: PUSH ECX
// 004a2de9: PUSH ECX
// 004a2dea: MOV EAX,dword ptr [EDX + 0xc]
// 004a2ded: PUSH EDX
// 004a2dee: CALL dword ptr [EAX + 0x4]
// 004a2df1: ADD ESP,0xc
// 004a2df4: RET
