// Name: crt_unknown.c_FUN_0060d1a8
// Address: 0060d1a8
// Address Range: [[0060d1a8, 0060d1eb]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_0060d1a8()
// Cross-references:
//   crt_unknown.c_staticInit_FUN_0060d214 (0060d214) at 0060d215 [DATA]
// Globals:
//   GET_TLS_FUNC* PTR_crt_thread.c_GetTLS_FUN_0060242c_00684ee4 = 0060242c
//   EXCEPTION_FILTER_FUNC* g_UserExceptionFilter = 00000000
//   EXCEPTION_CLEANUP_FUNC* g_ExceptionCleanup = 00000000
//   undefined4 g_GlobalSignalHandlers[2]
//   undefined4 g_GlobalSignalHandlers[4]
// Function calls:
//   crt_thread.c_GetTLS_FUN_0060242c

#include "nocturne.h"

undefined2 crt_unknown_c_FUN_0060d1a8(void)

{
  ThreadData *pTVar1;
  int iVar2;
  int iVar3;
  undefined2 in_DS;
  byte bVar4;
  
  bVar4 = 0;
  iVar2 = 8;
  do {
    pTVar1 = (*PTR_crt_thread_c_GetTLS_FUN_0060242c_00684ee4)();
    iVar3 = iVar2 + 8;
    *(undefined4 *)((int)pTVar1->signal_handlers + iVar2 + -4) =
         *(undefined4 *)((int)g_GlobalSignalHandlers + iVar2);
    *(undefined4 *)((int)pTVar1 + (uint)bVar4 * -8 + iVar2 + 0x5c) =
         *(undefined4 *)(iVar2 + 0x685508 + (uint)bVar4 * -8);
    iVar2 = iVar3;
  } while (iVar3 != 0x68);
  g_UserExceptionFilter = (EXCEPTION_FILTER_FUNC *)&LAB_0060cefc;
  g_ExceptionCleanup = crt_signal_c_processSignal_FUN_0060d128;
  return in_DS;
}


// Assembly code:
// 0060d1a8: PUSH EBX
//   Label: crt_unknown.c_FUN_0060d1a8
// 0060d1a9: PUSH ESI
// 0060d1aa: PUSH EDI
// 0060d1ab: PUSH ES
// 0060d1ac: MOV EBX,0x8
// 0060d1b1: CALL dword ptr [PTR_crt_thread.c_GetTLS_FUN_0060242c_00684ee4]
//   Label: LAB_0060d1b1
//   XREF to: 0060242c (COMPUTED_CALL)
//   XREF to: 00684ee4 (READ)
// 0060d1b7: LEA ESI,[EAX + EBX*0x1]
// 0060d1ba: MOV AX,DS
// 0060d1bc: MOV ES,AX
// 0060d1be: LEA EDI,[ESI + 0x58]
// 0060d1c1: LEA ESI,[EBX + 0x685504]
//   XREF to: 0068550c (DATA)
// 0060d1c7: ADD EBX,0x8
// 0060d1ca: MOVSD ES:EDI,ESI
//   XREF to: 0068550c (READ)
//   XREF to: 00685514 (READ)
// 0060d1cb: MOVSD ES:EDI,ESI
//   XREF to: 00685510 (READ)
//   XREF to: 00685518 (READ)
// 0060d1cc: CMP EBX,0x68
// 0060d1cf: JNZ 0x0060d1b1
//   XREF to: 0060d1b1 (CONDITIONAL_JUMP)
// 0060d1d1: MOV EDX,0x60cefc
//   XREF to: 0060cefc (DATA)
// 0060d1d6: MOV EBX,0x60d128
//   XREF to: 0060d128 (DATA)
// 0060d1db: MOV dword ptr [0x006853f0],EDX
//   XREF to: 006853f0 (WRITE)
// 0060d1e1: MOV dword ptr [0x006853f4],EBX
//   XREF to: 006853f4 (WRITE)
// 0060d1e7: POP ES
// 0060d1e8: POP EDI
// 0060d1e9: POP ESI
// 0060d1ea: POP EBX
// 0060d1eb: RET
