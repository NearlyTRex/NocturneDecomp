// Name: crt_io.c_get_handle_FUN_006109f0
// Address: 006109f0
// Address Range: [[006109f0, 00610a1f]]
// Convention: __cdecl
// Signature: undefined crt_io.c_get_handle_FUN_006109f0(int fd)
// Cross-references:
//   crt_process.c_build_file_info_env_FUN_0060ffd0 (0060ffd0) at 00610053 [UNCONDITIONAL_CALL]
// Globals:
//   uint g_MaxHandleCount = 0x14
//   SIOControlBlock* g_IOControlBlock = 00000000
// Function calls:
//   crt_errno.c_setErrno_FUN_00602790

#include "nocturne.h"

HANDLE __cdecl crt_io_c_get_handle_FUN_006109f0(int fd)

{
  if ((-1 < fd) && ((uint)fd <= g_MaxHandleCount)) {
    return g_IOControlBlock->standard_handles[fd];
  }
  crt_errno_c_setErrno_FUN_00602790(4);
  return (HANDLE)0xffffffff;
}


// Assembly code:
// 006109f0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: crt_io.c_get_handle_FUN_006109f0
//   XREF to: Stack[0x4] (READ)
// 006109f4: TEST EAX,EAX
// 006109f6: JL 0x00610a00
//   XREF to: 00610a00 (CONDITIONAL_JUMP)
// 006109f8: CMP EAX,dword ptr [0x00685214]
//   XREF to: 00685214 (READ)
// 006109fe: JBE 0x00610a10
//   XREF to: 00610a10 (CONDITIONAL_JUMP)
// 00610a00: PUSH 0x4
//   Label: LAB_00610a00
// 00610a02: CALL crt_errno.c_setErrno_FUN_00602790
//   XREF to: 00602790 (UNCONDITIONAL_CALL)
// 00610a07: MOV EAX,0xffffffff
// 00610a0c: ADD ESP,0x4
// 00610a0f: RET
// 00610a10: LEA EDX,[EAX*0x4 + 0x0]
//   Label: LAB_00610a10
// 00610a17: MOV EAX,[0x0068526c]
//   XREF to: 0068526c (READ)
// 00610a1c: MOV EAX,dword ptr [EDX + EAX*0x1]
// 00610a1f: RET
