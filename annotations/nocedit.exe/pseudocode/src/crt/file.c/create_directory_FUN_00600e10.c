// Name: crt_file.c_create_directory_FUN_00600e10
// Address: 00600e10
// Address Range: [[00600e10, 00600e28]]
// Convention: __cdecl
// Signature: int crt_file.c_create_directory_FUN_00600e10(char * path)
// Cross-references:
//   core_fileman.cpp_refreshSoundDirectory_FUN_004be590 (004be590) at 004be59f [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_saveGame_FUN_004e0cd0 (004e0cd0) at 004e0d86 [UNCONDITIONAL_CALL]
//   engine_dosio.c_getFile_FUN_00481a50 (00481a50) at 00481a9c [UNCONDITIONAL_CALL]
//   engine_dosio.c_reopenFileStream_FUN_00481b50 (00481b50) at 00481ba7 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_extractFileWithTimestamp_FUN_004b7d50 (004b7d50) at 004b7dc9 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_initializeLodGeneration_FUN_00516d50 (00516d50) at 00516d64 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_initializeLodGeneration_FUN_0051b8a0 (0051b8a0) at 0051b8af [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_initializeLogDirectory_FUN_00515190 (00515190) at 00515195 [UNCONDITIONAL_CALL]
// Globals:
//   CreateDirectoryA* PTR_CreateDirectoryA_00611508 = 00211c46
// Function calls:
//   CreateDirectoryA

#include "nocturne.h"

int __cdecl crt_file_c_create_directory_FUN_00600e10(char *path)

{
  BOOL BVar1;
  DWORD windows_error;
  int iVar2;
  
  BVar1 = (*PTR_CreateDirectoryA_00611508)(path,(LPSECURITY_ATTRIBUTES)0x0);
  if (BVar1 != 0) {
    return 0;
  }
  windows_error = (*GetLastError)();
  iVar2 = crt_errno_c_convertWindowsErrorToErrno_FUN_00608390(windows_error);
  return iVar2;
}


// Assembly code:
// 00600e10: PUSH 0x0
//   Label: crt_file.c_create_directory_FUN_00600e10
// 00600e12: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00600e16: PUSH EDX
// 00600e17: CALL dword ptr CS:[0x611508]
//   XREF to: EXTERNAL:0000004d (COMPUTED_CALL)
//   XREF to: 00611508 (READ)
// 00600e1e: TEST EAX,EAX
// 00600e20: JZ 0x006083fc
//   XREF to: 006083fc (CONDITIONAL_JUMP)
// 00600e26: XOR EAX,EAX
// 00600e28: RET
