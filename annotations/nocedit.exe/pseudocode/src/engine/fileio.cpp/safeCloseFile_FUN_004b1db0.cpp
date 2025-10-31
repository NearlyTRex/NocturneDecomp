// Name: engine_fileio.cpp_safeCloseFile_FUN_004b1db0
// Address: 004b1db0
// Address Range: [[004b1db0, 004b1dd7]]
// Convention: __cdecl
// Signature: void engine_fileio.cpp_safeCloseFile_FUN_004b1db0(FILE * * file_ptr)
// Globals:
//   TerminatedCString s_engine_fileio_cpp_0062604b
// Function calls:
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0

#include "nocturne.h"

void __cdecl engine_fileio_cpp_safeCloseFile_FUN_004b1db0(FILE **file_ptr)

{
  if (*file_ptr == (FILE *)0x0) {
    return;
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(*file_ptr,"..\\engine\\fileio.cpp",0xc4);
  *file_ptr = (FILE *)0x0;
  return;
}


// Assembly code:
// 004b1db0: PUSH EBX
//   Label: engine_fileio.cpp_safeCloseFile_FUN_004b1db0
// 004b1db1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004b1db5: MOV EDX,dword ptr [EBX]
// 004b1db7: TEST EDX,EDX
// 004b1db9: JNZ 0x004b1dbd
//   XREF to: 004b1dbd (CONDITIONAL_JUMP)
// 004b1dbb: POP EBX
// 004b1dbc: RET
// 004b1dbd: PUSH 0xc4
//   Label: LAB_004b1dbd
// 004b1dc2: PUSH 0x62604b
//   XREF to: 0062604b (DATA)
// 004b1dc7: PUSH EDX
// 004b1dc8: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004b1dcd: ADD ESP,0xc
// 004b1dd0: MOV dword ptr [EBX],0x0
// 004b1dd6: POP EBX
// 004b1dd7: RET
