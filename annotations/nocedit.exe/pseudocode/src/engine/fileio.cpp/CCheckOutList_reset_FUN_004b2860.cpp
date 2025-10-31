// Name: engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860
// Address: 004b2860
// Address Range: [[004b2860, 004b288f]]
// Convention: __cdecl
// Signature: void engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860(CCheckOutList * this_ptr)
// Cross-references:
//   engine_fileio.cpp_CCheckOutItem_checkOutFileFromRepository_FUN_004b3920 (004b3920) at 004b3b2c [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CCheckOutItem_findFileToCheckOut_FUN_004b5030 (004b5030) at 004b5290 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CCheckOutItem_processFiles_FUN_004b4220 (004b4220) at 004b4a5f [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CCheckOutItem_removeCheckOutBookkeeping_FUN_004b35a0 (004b35a0) at 004b3844 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CCheckOutItem_selectCheckedOutFile_FUN_004b3f50 (004b3f50) at 004b3ffd [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CCheckOutList_dtor_FUN_004bd730 (004bd730) at 004bd736 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CCheckOutList_load_FUN_004b2890 (004b2890) at 004b28a2 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CCheckOutList_parse_FUN_004b2a60 (004b2a60) at 004b2a79 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CCheckOutList_remove_FUN_004b2d70 (004b2d70) at 004b2e48 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_checkInPodFile_FUN_004baf00 (004baf00) at 004bbbc6 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_checkOutAndExtractPod_FUN_004ba740 (004ba740) at 004ba89d [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_managePodFiles_FUN_004b86b0 (004b86b0) at 004b9044 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_engine_fileio_cpp_0062627e
// Function calls:
//   shape_memdbg.cpp_debugFree_FUN_0050f460

#include "nocturne.h"

void __cdecl engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860(CCheckOutList *this_ptr)

{
  this_ptr->count = 0;
  if (this_ptr->items == (CCheckOutItem *)0x0) {
    return;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f460(this_ptr->items,"..\\engine\\fileio.cpp",0x277);
  this_ptr->items = (CCheckOutItem *)0x0;
  return;
}


// Assembly code:
// 004b2860: PUSH EBX
//   Label: engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860
// 004b2861: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004b2865: MOV EDX,dword ptr [EBX + 0x4]
// 004b2868: MOV dword ptr [EBX],0x0
// 004b286e: TEST EDX,EDX
// 004b2870: JNZ 0x004b2874
//   XREF to: 004b2874 (CONDITIONAL_JUMP)
// 004b2872: POP EBX
// 004b2873: RET
// 004b2874: PUSH 0x277
//   Label: LAB_004b2874
// 004b2879: PUSH 0x62627e
//   XREF to: 0062627e (DATA)
// 004b287e: PUSH EDX
// 004b287f: CALL shape_memdbg.cpp_debugFree_FUN_0050f460
//   XREF to: 0050f460 (UNCONDITIONAL_CALL)
// 004b2884: ADD ESP,0xc
// 004b2887: MOV dword ptr [EBX + 0x4],0x0
// 004b288e: POP EBX
// 004b288f: RET
