// Name: crt_io.c_register_handle_wrapper_FUN_0060a144
// Address: 0060a144
// Address Range: [[0060a144, 0060a151]]
// Convention: __cdecl
// Signature: int crt_io.c_register_handle_wrapper_FUN_0060a144(HANDLE handle)
// Cross-references:
//   crt_tls.c_initialize_tls_infrastructure_FUN_0060a3b4 (0060a3b4) at 0060a3c2 [DATA]
// Function calls:
//   crt_io.c_register_handle_FUN_00608990

#include "nocturne.h"

int __cdecl crt_io_c_register_handle_wrapper_FUN_0060a144(HANDLE handle)

{
  int iVar1;
  
  iVar1 = crt_io_c_register_handle_FUN_00608990(handle);
  return iVar1;
}


// Assembly code:
// 0060a144: MOV EDX,dword ptr [ESP + 0x4]
//   Label: crt_io.c_register_handle_wrapper_FUN_0060a144
//   XREF to: Stack[0x4] (READ)
// 0060a148: PUSH EDX
// 0060a149: CALL crt_io.c_register_handle_FUN_00608990
//   XREF to: 00608990 (UNCONDITIONAL_CALL)
// 0060a14e: ADD ESP,0x4
// 0060a151: RET
