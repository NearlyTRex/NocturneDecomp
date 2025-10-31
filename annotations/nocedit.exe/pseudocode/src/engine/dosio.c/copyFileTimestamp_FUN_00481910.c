// Name: engine_dosio.c_copyFileTimestamp_FUN_00481910
// Address: 00481910
// Address Range: [[00481910, 0048195a]]
// Convention: __cdecl
// Signature: int engine_dosio.c_copyFileTimestamp_FUN_00481910(char * source_file, char * dest_file)
// Cross-references:
//   engine_fileio.cpp_CCheckOutItem_processFiles_FUN_004b4220 (004b4220) at 004b4a04 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_checkInPodFile_FUN_004baf00 (004baf00) at 004bbadc [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_managePodFiles_FUN_004b86b0 (004b86b0) at 004b9d26 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_copyFileTimestamp_FUN_004b31e0 (004b31e0) at 004b31ea [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_extractFileWithTimestamp_FUN_004b7d50 (004b7d50) at 004b7e75 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_getLatestFileFromRepository_FUN_004b3220 (004b3220) at 004b34d0 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_synchronizeFilesToDirectory_FUN_004bc650 (004bc650) at 004bc9b9 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_io.c_stat_thunk_00600c18
//   crt_io.c_utime_thunk_00600c1e

#include "nocturne.h"

int __cdecl engine_dosio_c_copyFileTimestamp_FUN_00481910(char *source_file,char *dest_file)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  char *pcStack_32;
  char *local_4;
  
  local_4 = dest_file;
  iVar1 = crt_io_c_stat_thunk_00600c18(source_file,(stat *)&stack0xffffffb0);
  if (iVar1 == 0) {
    local_4 = pcStack_32;
  }
  iVar1 = crt_io_c_utime_thunk_00600c1e(dest_file,(utimbuf *)&local_4);
  return (uint)(iVar1 == 0);
}


// Assembly code:
// 00481910: SUB ESP,0x50
//   Label: engine_dosio.c_copyFileTimestamp_FUN_00481910
// 00481913: MOV EAX,dword ptr [ESP + 0x58]
//   XREF to: Stack[0x8] (READ)
// 00481917: MOV dword ptr [ESP + 0x48],EAX
//   XREF to: Stack[-0x8] (WRITE)
// 0048191b: MOV dword ptr [ESP + 0x4c],EAX
//   XREF to: Stack[-0x4] (WRITE)
// 0048191f: MOV EAX,ESP
// 00481921: PUSH EAX
// 00481922: MOV EDX,dword ptr [ESP + 0x58]
//   XREF to: Stack[0x4] (READ)
// 00481926: PUSH EDX
// 00481927: CALL crt_io.c_stat_thunk_00600c18
//   XREF to: 00600c18 (UNCONDITIONAL_CALL)
// 0048192c: ADD ESP,0x8
// 0048192f: TEST EAX,EAX
// 00481931: JNZ 0x0048193b
//   XREF to: 0048193b (CONDITIONAL_JUMP)
// 00481933: MOV EAX,dword ptr [ESP + 0x1a]
//   XREF to: Stack[-0x36] (READ)
// 00481937: MOV dword ptr [ESP + 0x48],EAX
//   XREF to: Stack[-0x8] (WRITE)
// 0048193b: LEA EAX,[ESP + 0x48]
//   Label: LAB_0048193b
//   XREF to: Stack[-0x8] (DATA)
// 0048193f: PUSH EAX
// 00481940: MOV ECX,dword ptr [ESP + 0x58]
//   XREF to: Stack[0x4] (READ)
// 00481944: PUSH ECX
// 00481945: CALL crt_io.c_utime_thunk_00600c1e
//   XREF to: 00600c1e (UNCONDITIONAL_CALL)
// 0048194a: ADD ESP,0x8
// 0048194d: TEST EAX,EAX
// 0048194f: SETZ AL
// 00481952: AND EAX,0xff
// 00481957: ADD ESP,0x50
// 0048195a: RET
