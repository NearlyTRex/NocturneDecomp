// Name: crt_string.c_strerror_FUN_00601470
// Address: 00601470
// Address Range: [[00601470, 0060148d]]
// Convention: __watcallStack
// Signature: char * crt_string.c_strerror_FUN_00601470(int errnum)
// Cross-references:
//   core_main.c_displayErrorAndQuit_FUN_00506f10 (00506f10) at 005070b3 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_copyFileWithProgress_FUN_004b2030 (004b2030) at 004b20b4 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_formatSystemError_FUN_004b1fe0 (004b1fe0) at 004b1fed [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_unknown_error_00658f68
//   int g_MaxErrnoValue = 0x28
//   char*[41] g_ErrorMessageTable

#include "nocturne.h"

char * __watcallStack crt_string_c_strerror_FUN_00601470(int errnum)

{
  if ((-1 < errnum) && (errnum <= g_MaxErrnoValue)) {
    return g_ErrorMessageTable[errnum];
  }
  return "unknown error";
}


// Assembly code:
// 00601470: MOV EAX,dword ptr [ESP + 0x4]
//   Label: crt_string.c_strerror_FUN_00601470
//   XREF to: Stack[0x4] (READ)
// 00601474: TEST EAX,EAX
// 00601476: JL 0x00601480
//   XREF to: 00601480 (CONDITIONAL_JUMP)
// 00601478: CMP EAX,dword ptr [0x00684bdc]
//   XREF to: 00684bdc (READ)
// 0060147e: JLE 0x00601486
//   XREF to: 00601486 (CONDITIONAL_JUMP)
// 00601480: MOV EAX,0x658f68
//   Label: LAB_00601480
//   XREF to: 00658f68 (DATA)
// 00601485: RET
// 00601486: MOV EAX,dword ptr [EAX*0x4 + 0x684be0]
//   Label: LAB_00601486
//   XREF to: 00684be0 (DATA)
// 0060148d: RET
