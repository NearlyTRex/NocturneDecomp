// Name: crt_stdio.c_remove_FUN_00606600
// Address: 00606600
// Address Range: [[00606600, 00606616]]
// Convention: __watcallStack
// Signature: int crt_stdio.c_remove_FUN_00606600(char * filename)
// Cross-references:
//   crt_io.c_deleteFile_FUN_005ff9d0 (005ff9d0) at 005ff9d5 [UNCONDITIONAL_CALL]
// Globals:
//   DeleteFileA* PTR_DeleteFileA_00611524 = 00211cc2
// Function calls:
//   DeleteFileA

#include "nocturne.h"

int __watcallStack crt_stdio_c_remove_FUN_00606600(char *filename)

{
  BOOL BVar1;
  DWORD windows_error;
  int iVar2;
  
  BVar1 = (*PTR_DeleteFileA_00611524)(filename);
  if (BVar1 != 0) {
    return 0;
  }
  windows_error = (*GetLastError)();
  iVar2 = crt_errno_c_convertWindowsErrorToErrno_FUN_00608390(windows_error);
  return iVar2;
}


// Assembly code:
// 00606600: MOV EDX,dword ptr [ESP + 0x4]
//   Label: crt_stdio.c_remove_FUN_00606600
//   XREF to: Stack[0x4] (READ)
// 00606604: PUSH EDX
// 00606605: CALL dword ptr CS:[0x611524]
//   XREF to: EXTERNAL:00000054 (COMPUTED_CALL)
//   XREF to: 00611524 (READ)
// 0060660c: TEST EAX,EAX
// 0060660e: JZ 0x006083fc
//   XREF to: 006083fc (CONDITIONAL_JUMP)
// 00606614: XOR EAX,EAX
// 00606616: RET
