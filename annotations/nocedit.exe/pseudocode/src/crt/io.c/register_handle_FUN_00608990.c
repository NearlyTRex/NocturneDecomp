// Name: crt_io.c_register_handle_FUN_00608990
// Address: 00608990
// Address Range: [[00608990, 00608a1a]]
// Convention: __cdecl
// Signature: int crt_io.c_register_handle_FUN_00608990(HANDLE handle)
// Cross-references:
//   crt_io.c_InitializeStandardHandles_FUN_00608b20 (00608b20) at 00608b3a [UNCONDITIONAL_CALL]
//   crt_io.c_register_handle_wrapper_FUN_0060a144 (0060a144) at 0060a149 [UNCONDITIONAL_CALL]
//   crt_io.c_register_handler_wrapper_FUN_00602438 (00602438) at 0060243d [UNCONDITIONAL_CALL]
// Globals:
//   ENTER_THREAD_CRITICAL_SECTION_FUNC* PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684f18 = 00602434
//   EXIT_THREAD_CRITICAL_SECTION_FUNC* PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684f1c = 00602434
//   SIOControlBlock* g_IOControlBlock = 00000000
//   undefined4 g_CurrentHandleCount
// Function calls:
//   crt_memory.c_realloc_FUN_00601df0
//   crt_sync.c_CriticalSectionStub_FUN_00602434

#include "nocturne.h"

int __cdecl crt_io_c_register_handle_FUN_00608990(HANDLE handle)

{
  int iVar1;
  HANDLE *ppvVar2;
  int *piVar3;
  int iVar4;
  
  (*PTR_crt_sync_c_EnterCriticalSection_FUN_00602434_00684f18)();
  iVar4 = 0;
  if (0 < g_CurrentHandleCount) {
    iVar1 = 0;
    do {
      piVar3 = (int *)((int)g_IOControlBlock->standard_handles + iVar1);
      if (*piVar3 == 0) {
        *piVar3 = (int)handle;
        (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684f1c)();
        return iVar4;
      }
      iVar1 = iVar1 + 4;
      iVar4 = iVar4 + 1;
    } while (SBORROW4(iVar1,g_CurrentHandleCount * 4) != iVar1 + g_CurrentHandleCount * -4 < 0);
  }
  g_IOControlBlock =
       (SIOControlBlock *)
       crt_memory_c_realloc_FUN_00601df0(g_IOControlBlock,(g_CurrentHandleCount + 1) * 4);
  ppvVar2 = g_IOControlBlock->standard_handles + g_CurrentHandleCount;
  g_CurrentHandleCount = g_CurrentHandleCount + 1;
  *ppvVar2 = handle;
  (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684f1c)();
  return g_CurrentHandleCount + -1;
}


// Assembly code:
// 00608990: PUSH EBX
//   Label: crt_io.c_register_handle_FUN_00608990
// 00608991: CALL dword ptr [PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684f18]
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684f18 (READ)
// 00608997: MOV EDX,dword ptr [0x00685270]
//   XREF to: 00685270 (READ)
// 0060899d: XOR EBX,EBX
// 0060899f: TEST EDX,EDX
// 006089a1: JLE 0x006089d1
//   XREF to: 006089d1 (CONDITIONAL_JUMP)
// 006089a3: LEA ECX,[EDX*0x4 + 0x0]
// 006089aa: XOR EAX,EAX
// 006089ac: MOV EDX,dword ptr [0x0068526c]
//   Label: LAB_006089ac
//   XREF to: 0068526c (READ)
// 006089b2: ADD EDX,EAX
// 006089b4: CMP dword ptr [EDX],0x0
// 006089b7: JNZ 0x006089c9
//   XREF to: 006089c9 (CONDITIONAL_JUMP)
// 006089b9: MOV EAX,dword ptr [ESP + 0x8]
// 006089bd: MOV dword ptr [EDX],EAX
// 006089bf: CALL dword ptr [PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684f1c]
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684f1c (READ)
// 006089c5: MOV EAX,EBX
// 006089c7: POP EBX
// 006089c8: RET
// 006089c9: ADD EAX,0x4
//   Label: LAB_006089c9
// 006089cc: INC EBX
// 006089cd: CMP EAX,ECX
// 006089cf: JL 0x006089ac
//   XREF to: 006089ac (CONDITIONAL_JUMP)
// 006089d1: MOV EAX,[0x00685270]
//   Label: LAB_006089d1
//   XREF to: 00685270 (READ)
// 006089d6: INC EAX
// 006089d7: SHL EAX,0x2
// 006089da: PUSH EAX
// 006089db: MOV EBX,dword ptr [0x0068526c]
//   XREF to: 0068526c (READ)
// 006089e1: PUSH EBX
// 006089e2: CALL crt_memory.c_realloc_FUN_00601df0
//   XREF to: 00601df0 (UNCONDITIONAL_CALL)
// 006089e7: MOV EDX,dword ptr [0x00685270]
//   XREF to: 00685270 (READ)
// 006089ed: MOV ECX,dword ptr [0x00685270]
//   XREF to: 00685270 (READ)
// 006089f3: ADD ESP,0x8
// 006089f6: MOV [0x0068526c],EAX
//   XREF to: 0068526c (WRITE)
// 006089fb: SHL EDX,0x2
// 006089fe: INC ECX
// 006089ff: ADD EAX,EDX
// 00608a01: MOV EDX,dword ptr [ESP + 0x8]
// 00608a05: MOV dword ptr [0x00685270],ECX
//   XREF to: 00685270 (WRITE)
// 00608a0b: MOV dword ptr [EAX],EDX
// 00608a0d: CALL dword ptr [PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684f1c]
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684f1c (READ)
// 00608a13: MOV EAX,[0x00685270]
//   XREF to: 00685270 (READ)
// 00608a18: DEC EAX
// 00608a19: POP EBX
// 00608a1a: RET
