// Name: engine_dosio.c_getFileTimestamp_FUN_00481960
// Address: 00481960
// Address Range: [[00481960, 004819ed]]
// Convention: __cdecl
// Signature: int engine_dosio.c_getFileTimestamp_FUN_00481960(char * directory, char * filename)
// Cross-references:
//   engine_fileio.cpp_CCheckOutItem_checkOutFileFromRepository_FUN_004b3920 (004b3920) at 004b39a6 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CCheckOutItem_processFiles_FUN_004b4220 (004b4220) at 004b4fcd [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_checkInPodFile_FUN_004baf00 (004baf00) at 004bc06b [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_checkOutAndExtractPod_FUN_004ba740 (004ba740) at 004ba8e7 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_managePodFiles_FUN_004b86b0 (004b86b0) at 004b8f1e [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_rebuildLastPod_FUN_004b5a50 (004b5a50) at 004b5b47 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_checkFileOverwriteCondition_FUN_004b3120 (004b3120) at 004b313a [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_getLatestFileFromRepository_FUN_004b3220 (004b3220) at 004b34ff [UNCONDITIONAL_CALL]
// Function calls:
//   engine_dosio.c_CFileFinder_ctor_FUN_00481c30
//   engine_dosio.c_CFileFinder_dtor_FUN_00481c50
//   engine_dosio.c_CFileFinder_openSearch_FUN_00481c70
//   engine_dosio.c_getRelativeFilePath_FUN_004816c0

#include "nocturne.h"

int __cdecl engine_dosio_c_getFileTimestamp_FUN_00481960(char *directory,char *filename)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  uint uStack_c;
  
  engine_dosio_c_getRelativeFilePath_FUN_004816c0(&stack0xfffffcd4,directory,filename);
  engine_dosio_c_CFileFinder_ctor_FUN_00481c30((CFileFinder *)&stack0xfffffeec);
  iVar1 = engine_dosio_c_CFileFinder_openSearch_FUN_00481c70
                    ((CFileFinder *)&stack0xfffffef0,&stack0xfffffcdc);
  if (iVar1 != 0) {
    engine_dosio_c_CFileFinder_dtor_FUN_00481c50((CFileFinder *)&stack0xfffffef4,0);
    return uStack_c;
  }
  engine_dosio_c_CFileFinder_dtor_FUN_00481c50((CFileFinder *)&stack0xfffffef4,0);
  return -1;
}


// Assembly code:
// 00481960: PUSH EBX
//   Label: engine_dosio.c_getFileTimestamp_FUN_00481960
// 00481961: SUB ESP,0x328
// 00481967: MOV EDX,dword ptr [ESP + 0x334]
//   XREF to: Stack[0x8] (READ)
// 0048196e: PUSH EDX
// 0048196f: MOV ECX,dword ptr [ESP + 0x334]
//   XREF to: Stack[0x4] (READ)
// 00481976: PUSH ECX
// 00481977: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x32c] (DATA)
// 0048197b: PUSH EAX
// 0048197c: CALL engine_dosio.c_getRelativeFilePath_FUN_004816c0
//   XREF to: 004816c0 (UNCONDITIONAL_CALL)
// 00481981: ADD ESP,0xc
// 00481984: LEA EAX,[ESP + 0x214]
//   XREF to: Stack[-0x118] (DATA)
// 0048198b: PUSH EAX
// 0048198c: CALL engine_dosio.c_CFileFinder_ctor_FUN_00481c30
//   XREF to: 00481c30 (UNCONDITIONAL_CALL)
// 00481991: ADD ESP,0x4
// 00481994: MOV EAX,ESP
// 00481996: PUSH EAX
// 00481997: LEA EAX,[ESP + 0x218]
//   XREF to: Stack[-0x118] (DATA)
// 0048199e: PUSH EAX
// 0048199f: CALL engine_dosio.c_CFileFinder_openSearch_FUN_00481c70
//   XREF to: 00481c70 (UNCONDITIONAL_CALL)
// 004819a4: ADD ESP,0x8
// 004819a7: TEST EAX,EAX
// 004819a9: JZ 0x004819ce
//   XREF to: 004819ce (CONDITIONAL_JUMP)
// 004819ab: PUSH 0x0
// 004819ad: LEA EAX,[ESP + 0x218]
//   XREF to: Stack[-0x118] (DATA)
// 004819b4: PUSH EAX
// 004819b5: MOV EBX,dword ptr [ESP + 0x31c]
//   XREF to: Stack[-0x18] (READ)
// 004819bc: CALL engine_dosio.c_CFileFinder_dtor_FUN_00481c50
//   XREF to: 00481c50 (UNCONDITIONAL_CALL)
// 004819c1: ADD ESP,0x8
// 004819c4: MOV EAX,EBX
// 004819c6: ADD ESP,0x328
// 004819cc: POP EBX
// 004819cd: RET
// 004819ce: PUSH EAX
//   Label: LAB_004819ce
// 004819cf: LEA EAX,[ESP + 0x218]
//   XREF to: Stack[-0x118] (DATA)
// 004819d6: PUSH EAX
// 004819d7: MOV EBX,0xffffffff
// 004819dc: CALL engine_dosio.c_CFileFinder_dtor_FUN_00481c50
//   XREF to: 00481c50 (UNCONDITIONAL_CALL)
// 004819e1: ADD ESP,0x8
// 004819e4: MOV EAX,EBX
// 004819e6: ADD ESP,0x328
// 004819ec: POP EBX
// 004819ed: RET
