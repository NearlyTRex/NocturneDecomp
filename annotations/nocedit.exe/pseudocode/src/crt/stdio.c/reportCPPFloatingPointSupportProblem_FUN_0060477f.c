// Name: crt_stdio.c_reportCPPFloatingPointSupportProblem_FUN_0060477f
// Address: 0060477f
// Address Range: [[0060477f, 0060478e]]
// Convention: unknown
// Signature: undefined crt_stdio.c_reportCPPFloatingPointSupportProblem_FUN_0060477f()
// Globals:
//   TerminatedCString s_C_floating_point_support_00658ffc
// Function calls:
//   crt_startup.c_HandleRuntimeError_FUN_00606660

#include "nocturne.h"

void crt_stdio_c_reportCPPFloatingPointSupportProblem_FUN_0060477f(void)

{
  crt_startup_c_HandleRuntimeError_FUN_00606660("C++ floating-point support not loaded\r\n",1);
  return;
}


// Assembly code:
// 0060477f: PUSH 0x1
//   Label: crt_stdio.c_reportCPPFloatingPointSupportProblem_FUN_0060477f
// 00604781: PUSH 0x658ffc
//   XREF to: 00658ffc (DATA)
// 00604786: CALL crt_startup.c_HandleRuntimeError_FUN_00606660
//   XREF to: 00606660 (UNCONDITIONAL_CALL)
// 0060478b: ADD ESP,0x8
// 0060478e: RET
