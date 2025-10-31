// Name: crt_stdio.c_FlushFilesByMask_FUN_0060595c
// Address: 0060595c
// Address Range: [[0060595c, 006059a0]]
// Convention: __watcallStack
// Signature: int crt_stdio.c_FlushFilesByMask_FUN_0060595c(uint file_mode_mask)
// Cross-references:
//   crt_stdio.c_FillInputBuffer_FUN_005fe940 (005fe940) at 005fe96c [UNCONDITIONAL_CALL]
//   crt_unknown.c_FUN_00605950 (00605950) at 00605952 [UNCONDITIONAL_CALL]
// Globals:
//   ENTER_THREAD_CRITICAL_SECTION_FUNC* PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ef8 = 00602434
//   EXIT_THREAD_CRITICAL_SECTION_FUNC* PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684efc = 00602434
//   FileListNode* g_AllocatedListHead
// Function calls:
//   crt_stdio.c_fflushInternal_FUN_006039d0
//   crt_sync.c_CriticalSectionStub_FUN_00602434

#include "nocturne.h"

int __watcallStack crt_stdio_c_FlushFilesByMask_FUN_0060595c(uint file_mode_mask)

{
  FILE *file_handle;
  FileListNode *pFVar1;
  int iVar2;
  
  (*PTR_crt_sync_c_EnterCriticalSection_FUN_00602434_00684ef8)();
  iVar2 = 0;
  for (pFVar1 = g_AllocatedListHead; pFVar1 != (FileListNode *)0x0; pFVar1 = pFVar1->next) {
    file_handle = pFVar1->file_struct;
    if (((file_handle->_flag & file_mode_mask) != 0) &&
       (iVar2 = iVar2 + 1, (file_handle->_flag & 0x1000) != 0)) {
      crt_stdio_c_fflushInternal_FUN_006039d0(file_handle);
    }
  }
  (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684efc)();
  return iVar2;
}


// Assembly code:
// 0060595c: PUSH EBX
//   Label: crt_stdio.c_FlushFilesByMask_FUN_0060595c
// 0060595d: PUSH ESI
// 0060595e: PUSH EDI
// 0060595f: MOV EDI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00605963: CALL dword ptr [PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ef8]
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684ef8 (READ)
// 00605969: MOV EBX,dword ptr [0x03f9b200]
//   XREF to: 03f9b200 (READ)
// 0060596f: XOR ESI,ESI
// 00605971: TEST EBX,EBX
// 00605973: JZ 0x00605995
//   XREF to: 00605995 (CONDITIONAL_JUMP)
// 00605975: MOV EAX,dword ptr [EBX + 0x4]
//   Label: LAB_00605975
// 00605978: TEST dword ptr [EAX + 0xc],EDI
// 0060597b: JZ 0x0060598f
//   XREF to: 0060598f (CONDITIONAL_JUMP)
// 0060597d: MOV DL,byte ptr [EAX + 0xd]
// 00605980: INC ESI
// 00605981: TEST DL,0x10
// 00605984: JZ 0x0060598f
//   XREF to: 0060598f (CONDITIONAL_JUMP)
// 00605986: PUSH EAX
// 00605987: CALL crt_stdio.c_fflushInternal_FUN_006039d0
//   XREF to: 006039d0 (UNCONDITIONAL_CALL)
// 0060598c: ADD ESP,0x4
// 0060598f: MOV EBX,dword ptr [EBX]
//   Label: LAB_0060598f
// 00605991: TEST EBX,EBX
// 00605993: JNZ 0x00605975
//   XREF to: 00605975 (CONDITIONAL_JUMP)
// 00605995: CALL dword ptr [PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684efc]
//   Label: LAB_00605995
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684efc (READ)
// 0060599b: MOV EAX,ESI
// 0060599d: POP EDI
// 0060599e: POP ESI
// 0060599f: POP EBX
// 006059a0: RET
