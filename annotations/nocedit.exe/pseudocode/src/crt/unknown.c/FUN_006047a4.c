// Name: crt_unknown.c_FUN_006047a4
// Address: 006047a4
// Address Range: [[006047a4, 006047d2]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_006047a4()
// Cross-references:
//   crt_unknown.c_staticInit_FUN_006047e0 (006047e0) at 00604804 [UNCONDITIONAL_CALL]
// Globals:
//   undefined1 DAT_00684acd
//   ENTER_CRITICAL_SECTION_FUNC* PTR_crt_thread.c_EnterCriticalSection_FUN_0060b180_00685464 = 0060b180
//   EXIT_CRITICAL_SECTION_FUNC* PTR_crt_thread.c_ExitCriticalSection_FUN_0060b180_00685468 = 0060b180
//   undefined2 DAT_0068546c
// Function calls:
//   crt_unknown.c_FUN_0060b190

#include "nocturne.h"

void crt_unknown_c_FUN_006047a4(void)

{
  if (DAT_00684acd != '\0') {
    PTR_crt_thread_c_EnterCriticalSection_FUN_0060b180_00685464 =
         (ENTER_CRITICAL_SECTION_FUNC *)&LAB_00604790;
    PTR_crt_thread_c_ExitCriticalSection_FUN_0060b180_00685468 =
         (EXIT_CRITICAL_SECTION_FUNC *)&LAB_0060479c;
  }
  crt_unknown_c_FUN_0060b190(DAT_0068546c);
  return;
}


// Assembly code:
// 006047a4: PUSH EBX
//   Label: crt_unknown.c_FUN_006047a4
// 006047a5: CMP byte ptr [0x00684acd],0x0
//   XREF to: 00684acd (READ)
// 006047ac: JZ 0x006047c4
//   XREF to: 006047c4 (CONDITIONAL_JUMP)
// 006047ae: MOV EDX,0x604790
//   XREF to: 00604790 (PARAM)
// 006047b3: MOV EBX,0x60479c
//   XREF to: 0060479c (PARAM)
// 006047b8: MOV dword ptr [0x00685464],EDX
//   XREF to: 00685464 (WRITE)
// 006047be: MOV dword ptr [0x00685468],EBX
//   XREF to: 00685468 (WRITE)
// 006047c4: XOR EAX,EAX
//   Label: LAB_006047c4
// 006047c6: MOV AX,[0x0068546c]
//   XREF to: 0068546c (READ)
// 006047cc: CALL crt_unknown.c_FUN_0060b190
//   XREF to: 0060b190 (UNCONDITIONAL_CALL)
// 006047d1: POP EBX
// 006047d2: RET
