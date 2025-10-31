// Name: engine_fileio.cpp_CFileManager_closeExtractFile_FUN_004b7c60
// Address: 004b7c60
// Address Range: [[004b7c60, 004b7c87]]
// Convention: __cdecl
// Signature: void engine_fileio.cpp_CFileManager_closeExtractFile_FUN_004b7c60(CFileManager * this_ptr)
// Cross-references:
//   core_fileman.cpp_CDemonFileManager_createPodFromDirectory_FUN_004bda20 (004bda20) at 004be041 [UNCONDITIONAL_CALL]
//   core_fileman.cpp_CDemonFileManager_moveSetIntoPod_FUN_004bd930 (004bd930) at 004bd985 [UNCONDITIONAL_CALL]
//   core_fileman.cpp_CDemonFileManager_showEditorMenu_FUN_004be270 (004be270) at 004be541 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_engine_fileio_cpp_00628098
// Function calls:
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0

#include "nocturne.h"

void __cdecl engine_fileio_cpp_CFileManager_closeExtractFile_FUN_004b7c60(CFileManager *this_ptr)

{
  if (this_ptr->file_ptr == (FILE *)0x0) {
    return;
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(this_ptr->file_ptr,"..\\engine\\fileio.cpp",0xa9b);
  this_ptr->file_ptr = (FILE *)0x0;
  return;
}


// Assembly code:
// 004b7c60: PUSH EBX
//   Label: engine_fileio.cpp_CFileManager_closeExtractFile_FUN_004b7c60
// 004b7c61: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004b7c65: MOV EDX,dword ptr [EBX]
// 004b7c67: TEST EDX,EDX
// 004b7c69: JNZ 0x004b7c6d
//   XREF to: 004b7c6d (CONDITIONAL_JUMP)
// 004b7c6b: POP EBX
// 004b7c6c: RET
// 004b7c6d: PUSH 0xa9b
//   Label: LAB_004b7c6d
// 004b7c72: PUSH 0x628098
//   XREF to: 00628098 (DATA)
// 004b7c77: PUSH EDX
// 004b7c78: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004b7c7d: ADD ESP,0xc
// 004b7c80: MOV dword ptr [EBX],0x0
// 004b7c86: POP EBX
// 004b7c87: RET
