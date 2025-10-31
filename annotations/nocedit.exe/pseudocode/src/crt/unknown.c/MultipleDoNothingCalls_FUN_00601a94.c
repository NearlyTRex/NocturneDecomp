// Name: crt_unknown.c_MultipleDoNothingCalls_FUN_00601a94
// Address: 00601a94
// Address Range: [[00601a94, 00601b12]]
// Convention: unknown
// Signature: undefined crt_unknown.c_MultipleDoNothingCalls_FUN_00601a94()
// Cross-references:
//   crt_stdio.c_fopenThreadSafe_FUN_00601b14 (00601b14) at 00601b57 [UNCONDITIONAL_CALL]
// Globals:
//   ENTER_THREAD_CRITICAL_SECTION_FUNC* PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ef8 = 00602434
//   EXIT_THREAD_CRITICAL_SECTION_FUNC* PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684efc = 00602434
//   FileListNode* g_AllocatedListHead
//   undefined4 g_FreeListHeadPointer
// Function calls:
//   crt_errno.c_setErrno_FUN_00602790
//   crt_stdio.c_fclose_FUN_00601fd0
//   crt_sync.c_CriticalSectionStub_FUN_00602434

#include "nocturne.h"

/* Signature: undefined1 unk_MultipleDoNothing14Calls(undefined4 param_1) */

FILE * crt_unknown_c_MultipleDoNothingCalls_FUN_00601a94
                 (undefined4 param_1,undefined4 param_2,undefined4 unaff_EBX,undefined4 param_4,
                 FILE *param_5)

{
  FILE *file_handle;
  FileListNode *pFVar1;
  FileListNode *pFVar2;
  
  (*PTR_crt_sync_c_EnterCriticalSection_FUN_00602434_00684ef8)(unaff_EBX);
  for (pFVar1 = g_AllocatedListHead; pFVar1 != (FileListNode *)0x0; pFVar1 = pFVar1->next) {
    file_handle = pFVar1->file_struct;
    if (param_5 == file_handle) {
      if ((file_handle->_flag & 3) != 0) {
        crt_stdio_c_fclose_FUN_00601fd0(file_handle,1);
      }
      (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684efc)();
      return param_5;
    }
  }
  pFVar1 = (FileListNode *)&g_FreeListHeadPointer;
  do {
    pFVar2 = pFVar1;
    pFVar1 = pFVar2->next;
    if (pFVar1 == (FileListNode *)0x0) {
      crt_errno_c_setErrno_FUN_00602790(4);
      (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684efc)();
      return (FILE *)0x0;
    }
  } while (param_5 != pFVar1->file_struct);
  pFVar2->next = pFVar1->next;
  pFVar1->next = g_AllocatedListHead;
  g_AllocatedListHead = pFVar1;
  (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684efc)();
  return param_5;
}


// Assembly code:
// 00601a94: PUSH EBX
//   Label: crt_unknown.c_MultipleDoNothingCalls_FUN_00601a94
// 00601a95: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00601a99: CALL dword ptr [PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ef8]
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684ef8 (READ)
// 00601a9f: MOV EAX,[0x03f9b200]
//   XREF to: 03f9b200 (READ)
// 00601aa4: TEST EAX,EAX
// 00601aa6: JZ 0x00601ad0
//   XREF to: 00601ad0 (CONDITIONAL_JUMP)
// 00601aa8: MOV EDX,dword ptr [EAX + 0x4]
//   Label: LAB_00601aa8
// 00601aab: CMP EBX,EDX
// 00601aad: JNZ 0x00601aca
//   XREF to: 00601aca (CONDITIONAL_JUMP)
// 00601aaf: TEST byte ptr [EDX + 0xc],0x3
// 00601ab3: JZ 0x00601ac0
//   XREF to: 00601ac0 (CONDITIONAL_JUMP)
// 00601ab5: PUSH 0x1
// 00601ab7: PUSH EDX
// 00601ab8: CALL crt_stdio.c_fclose_FUN_00601fd0
//   XREF to: 00601fd0 (UNCONDITIONAL_CALL)
// 00601abd: ADD ESP,0x8
// 00601ac0: CALL dword ptr [PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684efc]
//   Label: LAB_00601ac0
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684efc (READ)
// 00601ac6: MOV EAX,EBX
// 00601ac8: POP EBX
// 00601ac9: RET
// 00601aca: MOV EAX,dword ptr [EAX]
//   Label: LAB_00601aca
// 00601acc: TEST EAX,EAX
// 00601ace: JNZ 0x00601aa8
//   XREF to: 00601aa8 (CONDITIONAL_JUMP)
// 00601ad0: MOV EDX,0x3f9b204
//   Label: LAB_00601ad0
//   XREF to: 03f9b204 (PARAM)
// 00601ad5: MOV EAX,dword ptr [EDX]
//   Label: LAB_00601ad5
//   XREF to: 03f9b204 (READ)
// 00601ad7: TEST EAX,EAX
// 00601ad9: JZ 0x00601aff
//   XREF to: 00601aff (CONDITIONAL_JUMP)
// 00601adb: CMP EBX,dword ptr [EAX + 0x4]
// 00601ade: JNZ 0x00601afb
//   XREF to: 00601afb (CONDITIONAL_JUMP)
// 00601ae0: MOV ECX,dword ptr [EAX]
// 00601ae2: MOV dword ptr [EDX],ECX
//   XREF to: 03f9b204 (WRITE)
// 00601ae4: MOV EDX,dword ptr [0x03f9b200]
//   XREF to: 03f9b200 (READ)
// 00601aea: MOV [0x03f9b200],EAX
//   XREF to: 03f9b200 (WRITE)
// 00601aef: MOV dword ptr [EAX],EDX
// 00601af1: CALL dword ptr [PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684efc]
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684efc (READ)
// 00601af7: MOV EAX,EBX
// 00601af9: POP EBX
// 00601afa: RET
// 00601afb: MOV EDX,EAX
//   Label: LAB_00601afb
// 00601afd: JMP 0x00601ad5
//   XREF to: 00601ad5 (UNCONDITIONAL_JUMP)
// 00601aff: PUSH 0x4
//   Label: LAB_00601aff
// 00601b01: CALL crt_errno.c_setErrno_FUN_00602790
//   XREF to: 00602790 (UNCONDITIONAL_CALL)
// 00601b06: ADD ESP,0x4
// 00601b09: CALL dword ptr [PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684efc]
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684efc (READ)
// 00601b0f: XOR EAX,EAX
// 00601b11: POP EBX
// 00601b12: RET
