// Name: crt_io.c_register_handler_wrapper_FUN_00602438
// Address: 00602438
// Address Range: [[00602438, 00602445]]
// Convention: __cdecl
// Signature: int crt_io.c_register_handler_wrapper_FUN_00602438(HANDLE file_handle)
// Cross-references:
//   crt_stdio.c_CreateFileImpl_FUN_006090a0 (006090a0) at 00609141 [COMPUTED_CALL]
// Function calls:
//   crt_io.c_register_handle_FUN_00608990

#include "nocturne.h"

int __cdecl crt_io_c_register_handler_wrapper_FUN_00602438(HANDLE file_handle)

{
  int iVar1;
  
  iVar1 = crt_io_c_register_handle_FUN_00608990(file_handle);
  return iVar1;
}


// Assembly code:
// 00602438: MOV EDX,dword ptr [ESP + 0x4]
//   Label: crt_io.c_register_handler_wrapper_FUN_00602438
//   XREF to: Stack[0x4] (READ)
// 0060243c: PUSH EDX
// 0060243d: CALL crt_io.c_register_handle_FUN_00608990
//   XREF to: 00608990 (UNCONDITIONAL_CALL)
// 00602442: ADD ESP,0x4
// 00602445: RET
