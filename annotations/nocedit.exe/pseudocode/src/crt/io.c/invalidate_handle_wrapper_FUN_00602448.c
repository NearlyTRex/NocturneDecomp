// Name: crt_io.c_invalidate_handle_wrapper_FUN_00602448
// Address: 00602448
// Address Range: [[00602448, 00602457]]
// Convention: __cdecl
// Signature: void crt_io.c_invalidate_handle_wrapper_FUN_00602448(int handle_index)
// Cross-references:
//   crt_io.c_close_handle_safe_FUN_0060c2e0 (0060c2e0) at 0060c324 [COMPUTED_CALL]
//   crt_stdio.c_fclose_FUN_00601fd0 (00601fd0) at 006020ac [COMPUTED_CALL]
// Function calls:
//   crt_io.c_invalidate_handle_FUN_00608af4

#include "nocturne.h"

void __cdecl crt_io_c_invalidate_handle_wrapper_FUN_00602448(int handle_index)

{
  crt_io_c_invalidate_handle_FUN_00608af4(handle_index);
  return;
}


// Assembly code:
// 00602448: MOV EDX,dword ptr [ESP + 0x4]
//   Label: crt_io.c_invalidate_handle_wrapper_FUN_00602448
//   XREF to: Stack[0x4] (READ)
// 0060244c: PUSH EDX
// 0060244d: CALL crt_io.c_invalidate_handle_FUN_00608af4
//   XREF to: 00608af4 (UNCONDITIONAL_CALL)
// 00602452: ADD ESP,0x4
// 00602455: LEA EAX,[EAX]
