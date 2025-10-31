// Name: engine_dosio.c_CFileFinder_closeSearch_FUN_00481d70
// Address: 00481d70
// Address Range: [[00481d70, 00481dab]]
// Convention: __cdecl
// Signature: void engine_dosio.c_CFileFinder_closeSearch_FUN_00481d70(CFileFinder * this_ptr)
// Cross-references:
//   core_podmain.cpp_CDemonPod_load_FUN_005519c0 (005519c0) at 00551a43 [UNCONDITIONAL_CALL]
//   engine_dosio.c_CFileFinder_dtor_FUN_00481c50 (00481c50) at 00481c56 [UNCONDITIONAL_CALL]
//   engine_dosio.c_CFileFinder_openSearch_FUN_00481c70 (00481c70) at 00481c7f [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CCheckOutItem_findFileToCheckOut_FUN_004b5030 (004b5030) at 004b51e6 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CStrList_populateFromFileSearch_FUN_004a35b0 (004a35b0) at 004a3758 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CStrList_populateFromFilesNoDuplicates_FUN_004a37b0 (004a37b0) at 004a3957 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CStrList_populateWithFullPaths_FUN_004a39e0 (004a39e0) at 004a3b63 [UNCONDITIONAL_CALL]
// Globals:
//   FindClose* PTR_FindClose_00611548 = 00211d78
// Function calls:
//   engine_dosio.c_CFileFinder_reset_FUN_00481db0
//   FindClose

#include "nocturne.h"

void __cdecl engine_dosio_c_CFileFinder_closeSearch_FUN_00481d70(CFileFinder *this_ptr)

{
  if (this_ptr->has_results == 0) {
    engine_dosio_c_CFileFinder_reset_FUN_00481db0(this_ptr);
    return;
  }
  (*PTR_FindClose_00611548)(this_ptr->search_handle);
  this_ptr->has_results = 0;
  engine_dosio_c_CFileFinder_reset_FUN_00481db0(this_ptr);
  return;
}


// Assembly code:
// 00481d70: PUSH EBX
//   Label: engine_dosio.c_CFileFinder_closeSearch_FUN_00481d70
// 00481d71: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00481d75: CMP dword ptr [EBX + 0x10c],0x0
// 00481d7c: JNZ 0x00481d89
//   XREF to: 00481d89 (CONDITIONAL_JUMP)
// 00481d7e: PUSH EBX
// 00481d7f: CALL engine_dosio.c_CFileFinder_reset_FUN_00481db0
//   XREF to: 00481db0 (UNCONDITIONAL_CALL)
// 00481d84: ADD ESP,0x4
// 00481d87: POP EBX
// 00481d88: RET
// 00481d89: MOV ECX,dword ptr [EBX + 0x110]
//   Label: LAB_00481d89
// 00481d8f: PUSH ECX
// 00481d90: CALL dword ptr CS:[0x611548]
//   XREF to: EXTERNAL:0000005d (COMPUTED_CALL)
//   XREF to: 00611548 (READ)
// 00481d97: MOV dword ptr [EBX + 0x10c],0x0
// 00481da1: PUSH EBX
// 00481da2: CALL engine_dosio.c_CFileFinder_reset_FUN_00481db0
//   XREF to: 00481db0 (UNCONDITIONAL_CALL)
// 00481da7: ADD ESP,0x4
// 00481daa: POP EBX
// 00481dab: RET
