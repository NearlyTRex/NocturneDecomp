// Name: crt_unknown.c_staticInit_FUN_005fde60
// Address: 005fde60
// Address Range: [[005fde60, 005fde90]]
// Convention: unknown
// Signature: undefined crt_unknown.c_staticInit_FUN_005fde60()
// Globals:
//   void* PTR_crt_stdio.c_reportCPPFloatingPointSupportProblem_FUN_0060477f_00684fbc = 0060477f
//   void* PTR_crt_stdio.c_reportCPPFloatingPointSupportProblem_FUN_0060477f_00684fc0 = 0060477f
//   void* PTR_crt_stdio.c_reportCPPFloatingPointSupportProblem_FUN_0060477f_00684fc4 = 0060477f
//   void* PTR_crt_stdio.c_reportCPPFloatingPointSupportProblem_FUN_0060477f_00684fc8 = 0060477f

#include "nocturne.h"

void crt_unknown_c_staticInit_FUN_005fde60(void)

{
  PTR_crt_stdio_c_reportCPPFloatingPointSupportProblem_FUN_0060477f_00684fbc =
       crt_unknown_c_FUN_00603bc9;
  PTR_crt_stdio_c_reportCPPFloatingPointSupportProblem_FUN_0060477f_00684fc0 =
       crt_unknown_c_FUN_00603bf5;
  PTR_crt_stdio_c_reportCPPFloatingPointSupportProblem_FUN_0060477f_00684fc4 =
       crt_unknown_c_FUN_00603dc8;
  PTR_crt_stdio_c_reportCPPFloatingPointSupportProblem_FUN_0060477f_00684fc8 =
       crt_unknown_c_thunk_FUN_0060b142;
  return;
}


// Assembly code:
// 005fde60: PUSH EBX
//   Label: crt_unknown.c_staticInit_FUN_005fde60
// 005fde61: PUSH ESI
// 005fde62: MOV EDX,0x603bc9
//   XREF to: 00603bc9 (DATA)
// 005fde67: MOV ECX,0x603bf5
//   XREF to: 00603bf5 (DATA)
// 005fde6c: MOV EBX,0x603dc8
//   XREF to: 00603dc8 (DATA)
// 005fde71: MOV ESI,0x60477a
//   XREF to: 0060477a (DATA)
// 005fde76: MOV dword ptr [0x00684fbc],EDX
//   XREF to: 00684fbc (WRITE)
// 005fde7c: MOV dword ptr [0x00684fc0],ECX
//   XREF to: 00684fc0 (WRITE)
// 005fde82: MOV dword ptr [0x00684fc4],EBX
//   XREF to: 00684fc4 (WRITE)
// 005fde88: MOV dword ptr [0x00684fc8],ESI
//   XREF to: 00684fc8 (WRITE)
// 005fde8e: POP ESI
// 005fde8f: POP EBX
// 005fde90: RET
