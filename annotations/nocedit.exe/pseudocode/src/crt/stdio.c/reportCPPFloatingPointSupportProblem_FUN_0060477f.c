// Name: crt_stdio.c_reportCPPFloatingPointSupportProblem_FUN_0060477f
// Address: 0060477f
// Address Range: [[0060477f, 0060478e]]
// Convention: unknown
// Signature: void crt_stdio_c_reportCPPFloatingPointSupportProblem_FUN_0060477f(void)

#include "nocturne.h"

void reportCPPFloatingPointSupportProblem(void)

{
  HandleRuntimeError("C++ floating-point support not loaded\r\n",1);
  return;
}
