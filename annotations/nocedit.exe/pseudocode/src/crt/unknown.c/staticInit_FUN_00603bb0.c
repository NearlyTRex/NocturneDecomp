// Name: crt_unknown.c_staticInit_FUN_00603bb0
// Address: 00603bb0
// Address Range: [[00603bb0, 00603bc8]]
// Convention: unknown
// Signature: undefined crt_unknown.c_staticInit_FUN_00603bb0()
// Globals:
//   STRTOD_FUNC* PTR_crt_stdio.c_ReportFloatingPointNotLoaded_FUN_0060ad30_0068540c = 0060ad30
//   STRTOD_FUNC* PTR_crt_stdio.c_ReportFloatingPointNotLoaded_FUN_0060ad30_00685410 = 0060ad30

#include "nocturne.h"

void crt_unknown_c_staticInit_FUN_00603bb0(void)

{
  PTR_crt_stdio_c_ReportFloatingPointNotLoaded_FUN_0060ad30_0068540c = (STRTOD_FUNC *)&LAB_0060af5d;
  PTR_crt_stdio_c_ReportFloatingPointNotLoaded_FUN_0060ad30_00685410 = crt_unknown_c_FUN_00603bc9;
  return;
}


// Assembly code:
// 00603bb0: PUSH EBX
//   Label: crt_unknown.c_staticInit_FUN_00603bb0
// 00603bb1: MOV EDX,0x60af5d
//   XREF to: 0060af5d (DATA)
// 00603bb6: MOV EBX,0x603bc9
//   XREF to: 00603bc9 (DATA)
// 00603bbb: MOV dword ptr [0x0068540c],EDX
//   XREF to: 0068540c (WRITE)
// 00603bc1: MOV dword ptr [0x00685410],EBX
//   XREF to: 00685410 (WRITE)
// 00603bc7: POP EBX
// 00603bc8: RET
