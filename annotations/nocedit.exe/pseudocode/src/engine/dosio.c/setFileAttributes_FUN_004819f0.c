// Name: engine_dosio.c_setFileAttributes_FUN_004819f0
// Address: 004819f0
// Address Range: [[004819f0, 00481a1b]]
// Convention: __cdecl
// Signature: bool engine_dosio.c_setFileAttributes_FUN_004819f0(char * filename, byte flags)
// Cross-references:
//   engine_fileio.cpp_CCheckOutItem_checkOutFileFromRepository_FUN_004b3920 (004b3920) at 004b3f00 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CCheckOutItem_processFiles_FUN_004b4220 (004b4220) at 004b46fb [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_checkInPodFile_FUN_004baf00 (004baf00) at 004bb7da [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_checkOutAndExtractPod_FUN_004ba740 (004ba740) at 004bada6 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_managePodFiles_FUN_004b86b0 (004b86b0) at 004b99b7 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_getLatestFileFromRepository_FUN_004b3220 (004b3220) at 004b33ea [UNCONDITIONAL_CALL]
// Function calls:
//   crt_file.c_setReadonlyAttribute_FUN_00600c30

#include "nocturne.h"

bool __cdecl engine_dosio_c_setFileAttributes_FUN_004819f0(char *filename,byte flags)

{
  DWORD DVar1;
  
  DVar1 = 0x180;
  if ((flags & 8) != 0) {
    DVar1 = 0x100;
  }
  DVar1 = crt_file_c_setReadonlyAttribute_FUN_00600c30(filename,DVar1);
  return DVar1 == 0;
}


// Assembly code:
// 004819f0: MOV DL,byte ptr [ESP + 0x8]
//   Label: engine_dosio.c_setFileAttributes_FUN_004819f0
//   XREF to: Stack[0x8] (READ)
// 004819f4: MOV EAX,0x180
// 004819f9: TEST DL,0x8
// 004819fc: JZ 0x00481a03
//   XREF to: 00481a03 (CONDITIONAL_JUMP)
// 004819fe: MOV EAX,0x100
// 00481a03: PUSH EAX
//   Label: LAB_00481a03
// 00481a04: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00481a08: PUSH EDX
// 00481a09: CALL crt_file.c_setReadonlyAttribute_FUN_00600c30
//   XREF to: 00600c30 (UNCONDITIONAL_CALL)
// 00481a0e: ADD ESP,0x8
// 00481a11: TEST EAX,EAX
// 00481a13: SETZ AL
// 00481a16: AND EAX,0xff
// 00481a1b: RET
