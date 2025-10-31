// Name: crt_io.c_check_file_access_FUN_0060c9f0
// Address: 0060c9f0
// Address Range: [[0060c9f0, 0060ca1d]]
// Convention: __watcallStack
// Signature: int crt_io.c_check_file_access_FUN_0060c9f0(char * filename, int access_mode)
// Cross-references:
//   crt_io.c_file_exists_FUN_0060f380 (0060f380) at 0060f387 [UNCONDITIONAL_CALL]
// Globals:
//   GetFileAttributesA* PTR_GetFileAttributesA_00611594 = 00211edc
// Function calls:
//   crt_errno.c_convertWindowsErrorToErrno_FUN_00608390
//   GetFileAttributesA

#include "nocturne.h"

int __watcallStack crt_io_c_check_file_access_FUN_0060c9f0(char *filename,int access_mode)

{
  DWORD DVar1;
  int iVar2;
  
  DVar1 = (*PTR_GetFileAttributesA_00611594)(filename);
  if (DVar1 == 0xffffffff) {
    DVar1 = (*GetLastError)();
    iVar2 = crt_errno_c_convertWindowsErrorToErrno_FUN_00608390(DVar1);
    return iVar2;
  }
  if (((access_mode & 2U) != 0) && ((DVar1 & 1) != 0)) {
    iVar2 = crt_errno_c_convertWindowsErrorToErrno_FUN_00608390(5);
    return iVar2;
  }
  return 0;
}


// Assembly code:
// 0060c9f0: MOV EDX,dword ptr [ESP + 0x4]
//   Label: crt_io.c_check_file_access_FUN_0060c9f0
//   XREF to: Stack[0x4] (READ)
// 0060c9f4: PUSH EDX
// 0060c9f5: CALL dword ptr CS:[0x611594]
//   XREF to: EXTERNAL:00000070 (COMPUTED_CALL)
//   XREF to: 00611594 (READ)
// 0060c9fc: CMP EAX,-0x1
// 0060c9ff: JZ 0x006083fc
//   XREF to: 006083fc (CONDITIONAL_JUMP)
// 0060ca05: TEST byte ptr [ESP + 0x8],0x2
// 0060ca0a: JZ 0x0060ca1b
//   XREF to: 0060ca1b (CONDITIONAL_JUMP)
// 0060ca0c: TEST AL,0x1
// 0060ca0e: JZ 0x0060ca1b
//   XREF to: 0060ca1b (CONDITIONAL_JUMP)
// 0060ca10: PUSH 0x5
// 0060ca12: CALL crt_errno.c_convertWindowsErrorToErrno_FUN_00608390
//   XREF to: 00608390 (UNCONDITIONAL_CALL)
// 0060ca17: ADD ESP,0x4
// 0060ca1a: RET
// 0060ca1b: XOR EAX,EAX
//   Label: LAB_0060ca1b
// 0060ca1d: RET
