// Name: crt_stdio.c_fflush_FUN_00601540
// Address: 00601540
// Address Range: [[00601540, 00601559]]
// Convention: __cdecl
// Signature: int crt_stdio.c_fflush_FUN_00601540(FILE * stream)
// Cross-references:
//   crt_stdio.c_ftell_FUN_00601560 (00601560) at 00601575 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CCheckOutItem_processFiles_FUN_004b4220 (004b4220) at 004b4eb8 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CCheckOutList_write_FUN_004b2eb0 (004b2eb0) at 004b2f14 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_checkInPodFile_FUN_004baf00 (004baf00) at 004bbf8d [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_removeAuditRecords_FUN_004bd190 (004bd190) at 004bd69a [UNCONDITIONAL_CALL]
// Function calls:
//   crt_stdio.c_fflushInternal_FUN_006039d0
//   crt_unknown.c_FUN_00605950

#include "nocturne.h"

int __cdecl crt_stdio_c_fflush_FUN_00601540(FILE *stream)

{
  int iVar1;
  
  if (stream == (FILE *)0x0) {
    crt_unknown_c_FUN_00605950();
    return 0;
  }
  iVar1 = crt_stdio_c_fflushInternal_FUN_006039d0(stream);
  return iVar1;
}


// Assembly code:
// 00601540: MOV EAX,dword ptr [ESP + 0x4]
//   Label: crt_stdio.c_fflush_FUN_00601540
//   XREF to: Stack[0x4] (READ)
// 00601544: TEST EAX,EAX
// 00601546: JNZ 0x00601550
//   XREF to: 00601550 (CONDITIONAL_JUMP)
// 00601548: CALL crt_unknown.c_FUN_00605950
//   XREF to: 00605950 (UNCONDITIONAL_CALL)
// 0060154d: XOR EAX,EAX
// 0060154f: RET
// 00601550: PUSH EAX
//   Label: LAB_00601550
// 00601551: CALL crt_stdio.c_fflushInternal_FUN_006039d0
//   XREF to: 006039d0 (UNCONDITIONAL_CALL)
// 00601556: ADD ESP,0x4
// 00601559: RET
