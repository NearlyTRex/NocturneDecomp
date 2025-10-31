// Name: crt_unknown.c_SetStdHandleToSomething_FUN_00608a1c
// Address: 00608a1c
// Address Range: [[00608a1c, 00608af0]]
// Convention: unknown
// Signature: undefined crt_unknown.c_SetStdHandleToSomething_FUN_00608a1c()
// Cross-references:
//   crt_io.c_parseFileInfo_FUN_0060e3b0 (0060e3b0) at 0060e4bd [UNCONDITIONAL_CALL]
// Globals:
//   SetStdHandle* PTR_SetStdHandle_00611638 = 002121e6
//   ENTER_THREAD_CRITICAL_SECTION_FUNC* PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684f18 = 00602434
//   EXIT_THREAD_CRITICAL_SECTION_FUNC* PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684f1c = 00602434
//   SIOControlBlock* g_IOControlBlock = 00000000
//   undefined4 g_CurrentHandleCount
// Function calls:
//   crt_memory.c_realloc_FUN_00601df0
//   crt_sync.c_CriticalSectionStub_FUN_00602434

#include "nocturne.h"

/* Signature: undefined1 unk_SetStdHandleToSomething(undefined1 param_1, undefined4 param_2) */

void crt_unknown_c_SetStdHandleToSomething_FUN_00608a1c(void)

{
  int iVar1;
  HANDLE in_stack_00000004;
  uint in_stack_00000008;
  DWORD nStdHandle;
  
  if ((int)in_stack_00000008 < 0) {
    return;
  }
  (*PTR_crt_sync_c_EnterCriticalSection_FUN_00602434_00684f18)();
  if (in_stack_00000008 == 0) {
    nStdHandle = 0xfffffff6;
  }
  else if (in_stack_00000008 < 2) {
    nStdHandle = 0xfffffff5;
  }
  else {
    if (in_stack_00000008 != 2) goto LAB_00608a6a;
    nStdHandle = 0xfffffff4;
  }
  (*PTR_SetStdHandle_00611638)(nStdHandle,in_stack_00000004);
LAB_00608a6a:
  if ((int)in_stack_00000008 < g_CurrentHandleCount) {
    g_IOControlBlock->standard_handles[in_stack_00000008] = in_stack_00000004;
  }
  else {
    g_IOControlBlock =
         (SIOControlBlock *)
         crt_memory_c_realloc_FUN_00601df0(g_IOControlBlock,in_stack_00000008 * 4 + 4);
    if (g_CurrentHandleCount < (int)in_stack_00000008) {
      iVar1 = g_CurrentHandleCount * 4;
      do {
        *(undefined4 *)((int)g_IOControlBlock->standard_handles + iVar1) = 0;
        iVar1 = iVar1 + 4;
      } while (SBORROW4(iVar1,in_stack_00000008 * 4) != (int)(iVar1 + in_stack_00000008 * -4) < 0);
    }
    g_CurrentHandleCount = in_stack_00000008 + 1;
    g_IOControlBlock->standard_handles[in_stack_00000008] = in_stack_00000004;
  }
  (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684f1c)();
  return;
}


// Assembly code:
// 00608a1c: PUSH EBX
//   Label: crt_unknown.c_SetStdHandleToSomething_FUN_00608a1c
// 00608a1d: PUSH ESI
// 00608a1e: PUSH EDI
// 00608a1f: PUSH EBP
// 00608a20: MOV ESI,dword ptr [0x0068526c]
//   XREF to: 0068526c (READ)
// 00608a26: MOV EDI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00608a2a: TEST EDI,EDI
// 00608a2c: JL 0x00608ae6
//   XREF to: 00608ae6 (CONDITIONAL_JUMP)
// 00608a32: CALL dword ptr [PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684f18]
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684f18 (READ)
// 00608a38: CMP EDI,0x1
// 00608a3b: JC 0x00608a46
//   XREF to: 00608a46 (CONDITIONAL_JUMP)
// 00608a3d: JBE 0x00608a53
//   XREF to: 00608a53 (CONDITIONAL_JUMP)
// 00608a3f: CMP EDI,0x2
// 00608a42: JZ 0x00608a5c
//   XREF to: 00608a5c (CONDITIONAL_JUMP)
// 00608a44: JMP 0x00608a6a
//   XREF to: 00608a6a (UNCONDITIONAL_JUMP)
// 00608a46: TEST EDI,EDI
//   Label: LAB_00608a46
// 00608a48: JNZ 0x00608a6a
//   XREF to: 00608a6a (CONDITIONAL_JUMP)
// 00608a4a: MOV ECX,dword ptr [ESP + 0x14]
// 00608a4e: PUSH ECX
// 00608a4f: PUSH -0xa
// 00608a51: JMP 0x00608a63
//   XREF to: 00608a63 (UNCONDITIONAL_JUMP)
// 00608a53: MOV EBX,dword ptr [ESP + 0x14]
//   Label: LAB_00608a53
// 00608a57: PUSH EBX
// 00608a58: PUSH -0xb
// 00608a5a: JMP 0x00608a63
//   XREF to: 00608a63 (UNCONDITIONAL_JUMP)
// 00608a5c: MOV EDX,dword ptr [ESP + 0x14]
//   Label: LAB_00608a5c
// 00608a60: PUSH EDX
// 00608a61: PUSH -0xc
// 00608a63: CALL dword ptr CS:[0x611638]
//   Label: LAB_00608a63
//   XREF to: 00611638 (READ)
// 00608a6a: MOV EBP,dword ptr [0x00685270]
//   Label: LAB_00608a6a
//   XREF to: 00685270 (READ)
// 00608a70: LEA EBX,[EDI*0x4 + 0x0]
// 00608a77: MOV ESI,dword ptr [0x0068526c]
//   XREF to: 0068526c (READ)
// 00608a7d: CMP EDI,EBP
// 00608a7f: JGE 0x00608a8b
//   XREF to: 00608a8b (CONDITIONAL_JUMP)
// 00608a81: ADD EBX,ESI
// 00608a83: MOV EAX,dword ptr [ESP + 0x14]
// 00608a87: MOV dword ptr [EBX],EAX
// 00608a89: JMP 0x00608ada
//   XREF to: 00608ada (UNCONDITIONAL_JUMP)
// 00608a8b: LEA EAX,[EBX + 0x4]
//   Label: LAB_00608a8b
// 00608a8e: PUSH EAX
// 00608a8f: PUSH ESI
// 00608a90: CALL crt_memory.c_realloc_FUN_00601df0
//   XREF to: 00601df0 (UNCONDITIONAL_CALL)
// 00608a95: MOV EDX,dword ptr [0x00685270]
//   XREF to: 00685270 (READ)
// 00608a9b: ADD ESP,0x8
// 00608a9e: MOV ESI,EAX
// 00608aa0: CMP EDX,EDI
// 00608aa2: JGE 0x00608abe
//   XREF to: 00608abe (CONDITIONAL_JUMP)
// 00608aa4: LEA EAX,[EDX*0x4 + 0x0]
// 00608aab: MOV ECX,EBX
// 00608aad: MOV EBX,ESI
// 00608aaf: MOV dword ptr [EBX + EAX*0x1],0x0
//   Label: LAB_00608aaf
// 00608ab6: ADD EAX,0x4
// 00608ab9: INC EDX
// 00608aba: CMP EAX,ECX
// 00608abc: JL 0x00608aaf
//   XREF to: 00608aaf (CONDITIONAL_JUMP)
// 00608abe: LEA EAX,[EDI*0x4 + 0x0]
//   Label: LAB_00608abe
// 00608ac5: MOV EDX,dword ptr [ESP + 0x14]
// 00608ac9: INC EDI
// 00608aca: ADD EAX,ESI
// 00608acc: MOV dword ptr [0x0068526c],ESI
//   XREF to: 0068526c (WRITE)
// 00608ad2: MOV dword ptr [0x00685270],EDI
//   XREF to: 00685270 (WRITE)
// 00608ad8: MOV dword ptr [EAX],EDX
// 00608ada: CALL dword ptr [PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684f1c]
//   Label: LAB_00608ada
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684f1c (READ)
// 00608ae0: MOV ESI,dword ptr [0x0068526c]
//   XREF to: 0068526c (READ)
// 00608ae6: MOV ESI,dword ptr [0x0068526c]
//   Label: LAB_00608ae6
//   XREF to: 0068526c (READ)
// 00608aec: POP EBP
// 00608aed: POP EDI
// 00608aee: POP ESI
// 00608aef: POP EBX
// 00608af0: RET
