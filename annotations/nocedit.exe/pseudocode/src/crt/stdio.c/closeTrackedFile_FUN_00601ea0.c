// Name: crt_stdio.c_closeTrackedFile_FUN_00601ea0
// Address: 00601ea0
// Address Range: [[00601ea0, 00601ee0]]
// Convention: __watcallStack
// Signature: int crt_stdio.c_closeTrackedFile_FUN_00601ea0(FILE * file_handle)
// Cross-references:
//   shape_memdbg.cpp_CLeakChecker_dtor_FUN_0050fbc0 (0050fbc0) at 0050fc81 [UNCONDITIONAL_CALL]
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0 (0050f9b0) at 0050fa88 [UNCONDITIONAL_CALL]
// Globals:
//   ENTER_THREAD_CRITICAL_SECTION_FUNC* PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ef8 = 00602434
//   EXIT_THREAD_CRITICAL_SECTION_FUNC* PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684efc = 00602434
//   FileListNode* g_AllocatedListHead
// Function calls:
//   crt_stdio.c_closeAndDeallocateFile_FUN_00601ee4
//   crt_sync.c_CriticalSectionStub_FUN_00602434

#include "nocturne.h"

int __watcallStack crt_stdio_c_closeTrackedFile_FUN_00601ea0(FILE *file_handle)

{
  FileListNode *pFVar1;
  int iVar2;
  
  (*PTR_crt_sync_c_EnterCriticalSection_FUN_00602434_00684ef8)();
  pFVar1 = g_AllocatedListHead;
  while( true ) {
    if (pFVar1 == (FileListNode *)0x0) {
      (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684efc)();
      return -1;
    }
    if (file_handle == pFVar1->file_struct) break;
    pFVar1 = pFVar1->next;
  }
  (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684efc)();
  iVar2 = crt_stdio_c_closeAndDeallocateFile_FUN_00601ee4(file_handle,1);
  return iVar2;
}


// Assembly code:
// 00601ea0: PUSH EBX
//   Label: crt_stdio.c_closeTrackedFile_FUN_00601ea0
// 00601ea1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00601ea5: CALL dword ptr [PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ef8]
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684ef8 (READ)
// 00601eab: MOV EAX,[0x03f9b200]
//   XREF to: 03f9b200 (READ)
// 00601eb0: TEST EAX,EAX
// 00601eb2: JNZ 0x00601ec1
//   XREF to: 00601ec1 (CONDITIONAL_JUMP)
// 00601eb4: CALL dword ptr [PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684efc]
//   Label: LAB_00601eb4
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684efc (READ)
// 00601eba: MOV EAX,0xffffffff
// 00601ebf: POP EBX
// 00601ec0: RET
// 00601ec1: CMP EBX,dword ptr [EAX + 0x4]
//   Label: LAB_00601ec1
// 00601ec4: JZ 0x00601ece
//   XREF to: 00601ece (CONDITIONAL_JUMP)
// 00601ec6: MOV EAX,dword ptr [EAX]
// 00601ec8: TEST EAX,EAX
// 00601eca: JZ 0x00601eb4
//   XREF to: 00601eb4 (CONDITIONAL_JUMP)
// 00601ecc: JMP 0x00601ec1
//   XREF to: 00601ec1 (UNCONDITIONAL_JUMP)
// 00601ece: CALL dword ptr [PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684efc]
//   Label: LAB_00601ece
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684efc (READ)
// 00601ed4: PUSH 0x1
// 00601ed6: PUSH EBX
// 00601ed7: CALL crt_stdio.c_closeAndDeallocateFile_FUN_00601ee4
//   XREF to: 00601ee4 (UNCONDITIONAL_CALL)
// 00601edc: ADD ESP,0x8
// 00601edf: POP EBX
// 00601ee0: RET
