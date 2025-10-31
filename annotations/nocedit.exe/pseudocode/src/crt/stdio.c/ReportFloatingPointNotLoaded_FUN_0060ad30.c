// Name: crt_stdio.c_ReportFloatingPointNotLoaded_FUN_0060ad30
// Address: 0060ad30
// Address Range: [[0060ad30, 0060ad3f]]
// Convention: __cdecl
// Signature: void crt_stdio.c_ReportFloatingPointNotLoaded_FUN_0060ad30(void)
// Cross-references:
//   crt_stdio.c_FloatingPointStub_FUN_00603160 (00603160) at 00603170 [COMPUTED_CALL]
//   crt_stdio.c_scanf_float_FUN_00605178 (00605178) at 006053e2 [COMPUTED_CALL]
// Globals:
//   TerminatedCString s_Floating_point_support_n_00659590
// Function calls:
//   crt_startup.c_HandleRuntimeError_FUN_00606660

#include "nocturne.h"

void __cdecl crt_stdio_c_ReportFloatingPointNotLoaded_FUN_0060ad30(void)

{
  crt_startup_c_HandleRuntimeError_FUN_00606660("Floating-point support not loaded\r\n",1);
  return;
}


// Assembly code:
// 0060ad30: PUSH 0x1
//   Label: crt_stdio.c_ReportFloatingPointNotLoaded_FUN_0060ad30
// 0060ad32: PUSH 0x659590
//   XREF to: 00659590 (DATA)
// 0060ad37: CALL crt_startup.c_HandleRuntimeError_FUN_00606660
//   XREF to: 00606660 (UNCONDITIONAL_CALL)
// 0060ad3c: ADD ESP,0x8
// 0060ad3f: RET
