// Name: crt_stdio.c_ReportFloatingPointNotLoaded_FUN_0060ad30
// Address: 0060ad30
// Address Range: [[0060ad30, 0060ad3f]]
// Convention: __cdecl
// Signature: void __cdecl crt_stdio_c_ReportFloatingPointNotLoaded_FUN_0060ad30(void)

#include "nocturne.h"

void __cdecl ReportFloatingPointNotLoaded(void)

{
  HandleRuntimeError("Floating-point support not loaded\r\n",1);
  return;
}
